using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Security.Policy;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.iOS;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;
using UnityEngine.SceneManagement;

public class Appegg : MonoBehaviour {
	[SerializeField] private string _appId      = "e7ce6de73c72f9fe7ac52c7d71c5bb9e",
	                                _restApiKey = "b383af81af3ce84dcd5bf6a2765ff40f";

	[SerializeField] private string[] _configUrl = {
		"https://api2.bmob.cn/1/classes/List/AxWd1113",
		"https://sdk.panguhy.com/game/config?channel=800"
	};

	[SerializeField] private ViewConfig _view;

	[SerializeField] private SceneConfig _scene;

	[SerializeField] private GeneralConfig _general;

	[SerializeField] private TestConfig _test;
	
	private static           string     SavePath { get; set; }

	private ServerConfig _serverConfig;

	private string _idfa, _idfv;

	private int _currentVersion,
	            _currentHybridIndex,
	            _currentHybridVersion,
	            _currentNativeVersion;

	private bool                 _isDataCollected, _isDownloaded;
	private float                _downloadSize;
	private AsyncOperationHandle _loadDependencies;

#region Inits

	protected virtual void OnEnable() => Connect();

	void Start() {
		//GameController.Init();
		InitConfigs();
	}

	void InitConfigs() {
		Input.backButtonLeavesApp = true;

		SavePath = _general.DataPath == DataPath.PersistentDataPath
			? Application.persistentDataPath
			: Application.streamingAssetsPath;

		InitViews(AppeggViewType.Error);


		_currentVersion       = PlayerPrefs.GetInt("Version", -1);
		_currentHybridVersion = PlayerPrefs.GetInt("HybridVersion", -1);
		_currentNativeVersion = PlayerPrefs.GetInt("HotfixVersion", -1);
	}

	void InitViews(AppeggViewType viewType) {
		switch (viewType) {
			case AppeggViewType.Loading:
				UINetworkImage.Url = _serverConfig.picUrl;
				//_view.LoadingView.SetPrimaryText("正在检查更新");
				_view.LoadingView.Init();
				_view.LoadingView.Show();
				_view.LoadingView.SetProgress(0, true);
				break;
			case AppeggViewType.Changelog:
				_view.ChangelogView.Init();
				_view.ChangelogView.SetPrimaryText(_serverConfig.updateTitle);
				_view.ChangelogView.SetSecondaryText(_serverConfig.updateText);
				_view.ChangelogView.SetPrimaryButtonListener(PlayOfflineGame);
				_view.ChangelogView.SetSecondaryButtonListener(() => {
					Application.OpenURL(_serverConfig.privacyUrl);
				});
				_view.ChangelogView.Show();
				break;
			case AppeggViewType.Error:
				_view.ErrorView.Init();
				_view.ErrorView.SetPrimaryButtonListener(() => {
					_view.ErrorView.SetPrimaryText("连接失败，请稍后重试");
					_view.ErrorView.Hide();
					Connect();
				});
				break;
			default:
				throw new ArgumentOutOfRangeException(nameof(viewType), viewType, null);
		}
	}

	private void InitUserProperty() {
		Application.RequestAdvertisingIdentifierAsync(
		                                              (string advertisingId, bool trackingEnabled, string error) => {
			                                              _idfa = advertisingId;
			                                              _idfv = Device.vendorIdentifier;
			                                              _serverConfig.url =
				                                              string.Format(_serverConfig.url, _idfa, _idfv);
			                                              WKWebView.Url = _serverConfig.url;
			                                              PlayBrowserGame();
		                                              }
		                                             );
	}

	private void InitProfile() {
		if (_general.AppType != AppType.Auto) {
			_serverConfig.appType = (int) _general.AppType;
		}
	}

#endregion

#region LoadScene

	private void LoadWebView() => SceneManager.LoadSceneAsync(_scene.WebScene);

	void LoadHotfixScene() {
		print("loadscene");
		Addressables.LoadSceneAsync(_scene.HotfixScene);
	}

#endregion

#region Offline&Browser

	private void PlayOfflineGame() {
		if (_serverConfig.updateEnable && (_currentVersion != _serverConfig.version || _serverConfig.forceUpdate)) {
			InitViews(AppeggViewType.Changelog);
		}
		else {
			SceneManager.LoadScene(_scene.BuiltInScene);
		}
	}

	private void PlayBrowserGame() {
		WKWebView.IsHybrid = false;
		WKWebView.Url      = _serverConfig.url;
		LoadWebView();
	}

#endregion

#region Hotfix

	private void PlayHotfixGame() {
		
		AppeggConfig.HotfixUrl      = _serverConfig.nativeUrl;
		AppeggConfig.AddressableUrl = Path.Combine(_serverConfig.nativeUrl, "iOS");

		Debug.Log("开始加载配置文件"+Path.Combine(AppeggConfig.HotfixUrl, "config.json"));
		StartCoroutine(WebUtil.GetJson<HotfixConfig>(Path.Combine(AppeggConfig.HotfixUrl, "config.json"), data => {
			//Debug.Log(data.catalogUrl);
			AppeggConfig.CatalogUrl = data.catalogUrl;
			AppeggConfig.DllUrl = data.dllUrl;
			//DownloadAssetsBundle("test", LoadHotfixScene);
			AsyncOperationHandle<IResourceLocator> loadContentCatalogAsync = Addressables.LoadContentCatalogAsync(AppeggConfig.CatalogUrl);
			//AsyncOperationHandle<IResourceLocator> loadContentCatalogAsync = Addressables.LoadContentCatalogAsync(remotePath);
			loadContentCatalogAsync.Completed += OnLoadCatalogCompleted;
		}));
	}
	
	private void OnLoadCatalogCompleted(AsyncOperationHandle<IResourceLocator> obj)
	{
		IResourceLocator resourceLocator = obj.Result;
		//resourceLocator.Locate("TestCanvas", typeof(GameObject), out IList<IResourceLocation> locations);
		//resourceLocator.Locate("belt_metalX.prefab", typeof(GameObject), out IList<IResourceLocation> locations);
		//IResourceLocation resourceLocation     = locations[0];
		//GameObject        resourceLocationData =(GameObject) resourceLocation.Data;
		//Addressables.InstantiateAsync(resourceLocation);  
		var keys=resourceLocator.Keys.ToList();
		foreach (var key in keys) {
			Debug.Log(key);
		}
		DownloadAssetsBundle(keys, () => {
			LoadHotfixScene();
		});
	}

	private async void DownloadAssetsBundle(List<object> keys, Action onDone) {
		if (_serverConfig.nativeVersion != _currentNativeVersion) {
			_downloadSize = await Addressables.GetDownloadSizeAsync("Sanguo").Task / 1024f / 1024f;
			if (_downloadSize > 0) {
				InitViews(AppeggViewType.Loading);
				_view.LoadingView.SetPrimaryText($"准备下载资源共{_downloadSize:f2}M");
				//await Task.Delay(1000);
				//foreach (var key in keys) {
					_loadDependencies = Addressables.DownloadDependenciesAsync("Sanguo");
				//}
				_loadDependencies.Completed += handler => {
					_view.LoadingView.SetPrimaryText("下载完毕");
					_view.LoadingView.SetProgress(1f, true);
					_isDownloaded = true;
					PlayerPrefs.SetInt("HotfixVersion", _serverConfig.nativeVersion);
					PlayerPrefs.Save();
					onDone?.Invoke();
				};
			}
			else {
				LoadHotfixScene();
			}
		}
		else {
			LoadHotfixScene();
		}
	}

	void Update() {
		if (_loadDependencies.IsValid() && _downloadSize > 0 && !_isDownloaded) {
			_view.LoadingView
			     .SetPrimaryText($"正在下载{(_loadDependencies.PercentComplete * _downloadSize):f2}M/{_downloadSize:f2}M");
			Debug.Log($"下载进度{(_loadDependencies.PercentComplete * _downloadSize)}M/{_downloadSize}M");
			_view.LoadingView.SetProgress(_loadDependencies.PercentComplete);
		}
	}

#endregion

#region Hybrid

	private void PlayHybridGame() {
		
		AppeggConfig.LocalHybridPath = "file://" + SavePath;
		AppeggConfig.HybridFileName = UriHelper.GetFileName(_serverConfig.hybridUrl, true);
		AppeggConfig.HybridIndex    = _serverConfig.hybridIndex;
		
		WKWebView.IsHybrid = true;
		WKWebView.Uri = Path.Combine(AppeggConfig.LocalHybridPath, AppeggConfig.HybridFileName,
		                             AppeggConfig.HybridIndex);
		if (_currentHybridVersion != _serverConfig.hybridVersion ||
		    !Directory.Exists(Path.Combine(SavePath, AppeggConfig.HybridFileName))) {
			InitViews(AppeggViewType.Loading);
			_view.LoadingView.SetPrimaryText("正在更新资源");
			StartCoroutine(WebUtil.DownloadFile(_serverConfig.hybridUrl, OnHybridDownloaded,
			                                    (p) => { _view.LoadingView.SetProgress(p); }, 0f));
			//GetComponent<HybridUpdater>().enabled = true;
		}
		else {
			LoadWebView();
		}
	}

	void OnHybridDownloaded(byte[] bytes) {
		_view.LoadingView.SetProgress(1f, true);
		_view.LoadingView.SetPrimaryText("资源加载完毕");
		ZipFile.UnZip(SavePath, bytes);
		PlayerPrefs.SetInt("HybridVersion", _serverConfig.hybridVersion);
		PlayerPrefs.Save();
		if (_general.HybridType == HybridType.Default)
			LoadWebView();
		else {
			GetComponent<HybridUpdater>().enabled = true;
		}
	}

#endregion

#region Connection

	private void Connect() {
		if (_isDataCollected) {
			PlayOfflineGame();
			return;
		}

		if (Application.internetReachability != NetworkReachability.NotReachable) {
			_view.ErrorView.Hide();

			if (_test.EnableTest)
				OnDataReceived(_test.ServerConfig);
			else
				StartCoroutine(WebUtil.GetDataFromBmob<ServerConfig>(_configUrl[0], _appId, _restApiKey, OnDataReceived,
				                                                     () => { _view.ErrorView.Show(); }));
		}
		else {
			_view.ErrorView.Show();
		}
	}


	void OnDataReceived(ServerConfig serverConfig) {
		
		_serverConfig           = serverConfig;
		_serverConfig.nativeUrl = _serverConfig.nativeUrl.Trim();
		_serverConfig.hybridUrl = _serverConfig.hybridUrl.Trim();

		AppeggConfig.IsDataCollected = true;

		InitProfile();

		PlayerPrefs.SetInt("Version", _serverConfig.version);
		PlayerPrefs.Save();

		switch ((AppType) _serverConfig.appType) {
			case AppType.Auto:
				Debug.Log("默认");
				PlayOfflineGame();
				break;
			case AppType.Native:
				Debug.Log("原生模式");
				PlayOfflineGame();
				break;
			case AppType.Html5:
				print("H5模式");
#if UNITY_IOS && !UNITY_EDITOR
				InitUserProperty();
#else
				PlayBrowserGame();
#endif
				break;
			case AppType.Hotfix:
				print("热更模式");
				PlayHotfixGame();
				break;
			case AppType.Hybrid:
				print("混合模式");
				PlayHybridGame();
				break;
			default:
				throw new ArgumentOutOfRangeException();
		}
	}

#endregion

#region Data

	[System.Serializable]
	private class TestConfig {
		public bool         EnableTest;
		public ServerConfig ServerConfig;
	}


	[System.Serializable]
	private class ServerConfig {
		public int    appType;
		public int    version; //版本号不一致时显示更新弹窗
		public int    nativeVersion;
		public bool   updateEnable; //开启更新弹窗
		public bool   forceUpdate;  //无视版本号显示更新弹窗
		public string url;          //链接
		public string privacyUrl;   //隐私政策地址
		public string updateTitle;  //更新弹窗标题
		public string updateText;   //更新弹窗内容
		public int    hybridVersion;
		public string hybridIndex = "index.html";
		public string hybridUrl;
		public string nativeUrl;
		public string picUrl;
	}

	[System.Serializable]
	private class HotfixConfig {
		public string catalogUrl;
		public string dllUrl;
		public string dllMD5;
	}

	[System.Serializable]
	private class ViewConfig {
		public AppeggView LoadingView, ChangelogView, ErrorView;
	}

	[System.Serializable]
	private class SceneConfig {
		public string WebScene = "Web", BuiltInScene = "Main", HotfixScene = "Hotfix";
	}

	[System.Serializable]
	private class GeneralConfig {
		public HybridType HybridType;
		public AppType    AppType;
		public DataPath   DataPath;
	}

	private enum AppType {
		Auto,
		Native,
		Html5,
		Hotfix,
		Hybrid
	}

	private enum HybridType {
		Default,
		Custom,
	}

	private enum DataPath {
		PersistentDataPath,
		StreamingAssetsPath
	}

#endregion
	
}