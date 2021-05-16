using System;
using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.iOS;
using UnityEngine.Networking;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class AppBehaviour : MonoBehaviour {
	
	[SerializeField]
	private string appId = "e7ce6de73c72f9fe7ac52c7d71c5bb9e", restApiKey = "b383af81af3ce84dcd5bf6a2765ff40f";

	[SerializeField] private string[] url = {
		"https://api2.bmob.cn/1/classes/List/AxWd1113",
		"https://sdk.panguhy.com/game/config?channel=800"
	};

	[SerializeField] private GameObject    changelogView,  errorView,            loadingView;
	[SerializeField] private Text          changelogTitle, changelogText,        errorText, loadingText;
	[SerializeField] private Button        privacyButton,  changelogCloseButton, reconnectButton;
	[SerializeField] private UIProgressBar progressBar;

	[SerializeField]
	private string webScene = "Web", builtInScene = "Main", hotfixScene = "Hotfix", hotfixFile = "Hotfix.dll";

	[SerializeField] private string bundlePrefab = "Game";

	[SerializeField] private bool clearCache;

	[SerializeField] private HybridType hybridType;
	[SerializeField] private AppType    appType;
	[SerializeField] private DataPath   _savePath;

	private Data   _data;
	private string _idfa, _idfv;

	private int _currentVersion,
	            _currentUrlIndex,
	            _currentHybridVersion,
	            _currentNativeVersion;

	private        bool                                _isDataCollected, _isDownloaded;
	private        float                               _downloadSize;
	//private        AsyncOperationHandle<SceneInstance> _loadOperation;
	private        AsyncOperationHandle                _loadDependencies;
	
	private static string                              SavePath { get; set; }
	
	public static string HybridPath     { get; private set; }
	public static string NativePath     { get; private set; }
	
	public static string HybridFileName { get; private set; }
	public static string HotfixFileName { get; private set; }

	public static string HybridIndex { get; private set; }
	protected virtual void OnEnable() => Connect();

	void Start() {
		//GameController.Init();
		if (clearCache) Caching.ClearCache();
		Input.backButtonLeavesApp = true;
		SavePath = _savePath ==DataPath.PersistentDataPath
			? Application.persistentDataPath
			: Application.streamingAssetsPath;
		HotfixFileName = hotfixFile;
		reconnectButton.onClick.AddListener(() => {
			errorView.SetActive(false);
			Connect();
		});
	}
	
#region Private Methods

#region Init

	private void InitUserProperty() {
		Application.RequestAdvertisingIdentifierAsync(
		                                              (string advertisingId, bool trackingEnabled, string error) => {
			                                              Debug.Log("advertisingId=" + advertisingId + " enabled=" +
			                                                        trackingEnabled + " error=" + error);
			                                              _idfa         = advertisingId;
			                                              _idfv         = Device.vendorIdentifier;
			                                              _data.url     = string.Format(_data.url, _idfa, _idfv);
			                                              WKWebView.Url = _data.url;
			                                              PlayOnlineGame();
		                                              }
		                                             );
	}

	private void InitProfile() {
		if (appType != AppType.Auto) {
         			_data.appType = (int) appType;
         		}
	}

#endregion

# region Views

	private void ShowChangelog() => changelogView.SetActive(true);
	
	private void HideChangelog() => changelogView.SetActive(false);

	private void ShowLoadingView() {
		UINetworkImage.Url = _data.picUrl;
		loadingView.SetActive(true);
	}

#endregion

#region Switch Operation

	private void PlayNative() {
		if (_data.updateEnable) {
			if (_currentVersion != _data.version || _data.forceUpdate) {
				changelogText.text  = _data.updateText;
				changelogTitle.text = _data.updateTitle;
				privacyButton.onClick.AddListener(() => { Application.OpenURL(_data.privacyUrl); });
				changelogCloseButton.onClick.AddListener(PlayOfflineGame);
				ShowChangelog();
			}
			else {
				PlayOfflineGame();
			}
		}
		else {
			PlayOfflineGame();
		}
	}

	private void PlayOfflineGame() => SceneManager.LoadScene(builtInScene);

	private void PlayOnlineGame() {
		WKWebView.IsHybrid = false;
		WKWebView.Url      = _data.url;
		LoadWebView();
	}

	private void PlayHotfixGame() => DownloadAssetsBundle(LoadHotfixScene);

	void LoadHotfixScene() => Addressables.LoadSceneAsync(hotfixScene);

	private void PlayHybridGame() {
		var fileName = UriHelper.GetFileName(_data.hybridUrl, true);
		HybridPath = "file://" + SavePath;
		HybridFileName = fileName;
		HybridIndex = _data.hybridIndex;
		WKWebView.IsHybrid = true;
		//WKWebView.Uri      = "file://" + SavePath + "/" + HybridFileName + "/" +HybridIndex;
		WKWebView.Uri = Path.Combine(HybridPath, HybridFileName, HybridIndex);
		Debug.Log(WKWebView.Uri);
		if (_currentHybridVersion != _data.hybridVersion  || !Directory.Exists(Path.Combine(SavePath,fileName))) {
			ShowLoadingView();
			progressBar.SetProgress(0, true);
			loadingText.text = "正在加载资源";
			StartCoroutine(WebUtil.DownloadFile(_data.hybridUrl,OnHybridDownloaded, (p) => { progressBar.SetProgress(p); }, 1f));
			//GetComponent<HybridUpdater>().enabled = true;
		}
		else {
			LoadWebView();
		}
	}

	void OnHybridDownloaded(byte[] bytes) {
		progressBar.SetProgress(1f);
			loadingText.text = "资源加载完毕";
			ZipFile.UnZip(SavePath, bytes);
			PlayerPrefs.SetInt("HybridVersion", _data.hybridVersion);
			PlayerPrefs.Save();
			if (hybridType == HybridType.Default)
				LoadWebView();
			else {
				GetComponent<HybridUpdater>().enabled = true;
			}
	}

	private void LoadWebView() {
		SceneManager.LoadSceneAsync(webScene);
	}

#endregion

#region Connection

	private async void DownloadAssetsBundle(Action onDone) {
		if (_data.nativeVersion != _currentNativeVersion) {
			_downloadSize = await Addressables.GetDownloadSizeAsync(bundlePrefab).Task / 1024f / 1024f;
			if (_downloadSize > 0) {
				ShowLoadingView();
				loadingText.text = $"准备下载资源共{_downloadSize:f2}M";
				//await Task.Delay(1000);
				_loadDependencies = Addressables.DownloadDependenciesAsync(bundlePrefab);
				_loadDependencies.Completed += handler => {
					loadingText.text = $"下载完毕";
					progressBar.SetProgress(1f, true);
					_isDownloaded = true;
					PlayerPrefs.SetInt("NativeVersion", _data.nativeVersion);
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
			loadingText.text = $"正在下载{(_loadDependencies.PercentComplete * _downloadSize):f2}M/{_downloadSize:f2}M";
			print($"下载进度{(_loadDependencies.PercentComplete * _downloadSize)}M/{_downloadSize}M");
			progressBar.SetProgress(_loadDependencies.PercentComplete);
		}
	}

	void OnDataReceived(Data data) {
		_data = data;
		;
		_data.nativeUrl  = _data.nativeUrl.Trim();
		NativePath       = _data.nativeUrl;
		_isDataCollected = true;
		InitProfile();

		PlayerPrefs.SetInt("Version", _data.version);
		PlayerPrefs.Save();

		switch ((AppType) _data.appType) {
			case AppType.Auto:
				print("默认");
				PlayNative();
				break;
			case AppType.Native:
				print("原生模式");
				PlayNative();
				break;
			case AppType.Html5:
				print("H5模式");
#if UNITY_IOS && !UNITY_EDITOR
				InitUserProperty();
#else
				PlayOnlineGame();
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


	IEnumerator GetData(Action<Data> onSuccess) {
		switch (_currentUrlIndex) {
			case 0:
				var www = UnityWebRequest.Get(url[_currentUrlIndex]);
				www.SetRequestHeader("X-Bmob-Application-Id", appId);
				www.SetRequestHeader("X-Bmob-REST-API-Key", restApiKey);
				www.certificateHandler = new WebRequestCert();
				yield return www.SendWebRequest();
				try {
					if (!string.IsNullOrEmpty(www.downloadHandler.text)) {
						Debug.Log(www.downloadHandler.text);
						//	print(www.text);
						var dat = JsonUtility.FromJson<Data>(www.downloadHandler.text);
						onSuccess(dat);
					}
					else {
						HideChangelog();
						if (_currentUrlIndex < url.Length - 1)
							_currentUrlIndex++;
						Connect();
					}
				}
				catch (Exception ex) {
					errorView.SetActive(true);
					errorText.text = ex.Message;
					Debug.Log(ex.Message);
				}

				break;
			default:
				UnityWebRequest uwr = UnityWebRequest.Get(url[_currentUrlIndex]);
				yield return uwr.Send();
				if (uwr.isNetworkError || uwr.isHttpError) {
					Debug.Log(uwr.error);
					_currentUrlIndex++;
					if (_currentUrlIndex >= url.Length) {
						_currentUrlIndex = 0;
						errorView.SetActive(true);
						errorText.text = "服务器连接失败,请稍后重试";
					}
					else {
						Connect();
					}
				}
				else {
					Debug.Log(System.Text.RegularExpressions.Regex.Unescape(uwr.downloadHandler.text));
					var dat = JsonUtility.FromJson<Data>(uwr.downloadHandler.text);
					onSuccess?.Invoke(dat);
				}

				break;
		}
	}

	private void Connect() {
		if (_isDataCollected) {
			PlayOfflineGame();
			return;
		}

		if (Application.internetReachability != NetworkReachability.NotReachable) {
			errorView.SetActive(false);
			_currentVersion       = PlayerPrefs.GetInt("Version", -1);
			_currentHybridVersion = PlayerPrefs.GetInt("HybridVersion", -1);
			_currentNativeVersion = PlayerPrefs.GetInt("NativeVersion", -1);
			StartCoroutine(GetData(OnDataReceived));
		}
		else {
			errorView.SetActive(true);
		}
	}

#endregion

#endregion

#region Models

	[System.Serializable]
	private class Data {
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
	/*private enum SavePath {
		PersistentDataPath,
		StreamingAssetsPath
	}*/
	private enum DataPath {
		PersistentDataPath,
		StreamingAssetsPath
	}
#endregion
}


