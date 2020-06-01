using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.iOS;
using UnityEngine.Networking;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class AppBehaviour :MonoBehaviour {
	
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

	[SerializeField] private string webScene = "Web", builtInScene = "Main", hotfixScene = "Hotfix", hotfixFile = "Hotfix.dll";
	
	[SerializeField] private string bundle ="Game";

	[SerializeField] private bool clearCache;

	[SerializeField] private HybridType hybridType;
	[SerializeField] private AppType  appType;
	[SerializeField] private SavePath savePath;

	private Data   _data;
	private string _idfa,           _idfv;
	private int    _currentVersion, _currentUrlIndex, _currentHybridVersion;
	private bool   _isDataCollected,_isDownloaded;
	private float _downloadSize;
	private AsyncOperationHandle<SceneInstance> _loadOperation;
	private AsyncOperationHandle                _loadDependencies;
	public static string SavePath { get; private set; }
	
	public static string NativePath { get; set; }
	public static string HotfixFileName { get; private set; }

	protected virtual void OnEnable() => Connect();

	void Start() {
		//GameController.Init();
		if (clearCache) Caching.ClearCache();
		Input.backButtonLeavesApp = true;
		SavePath = savePath == global::SavePath.PersistentDataPath
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
			                                              // WKWebView.Instance.Load(_data.url);
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

	private void PlayOfflineGame() {
		SceneManager.LoadScene(builtInScene);
	}

	private void PlayOnlineGame() {
		WKWebView.IsHybrid = false;
		WKWebView.Url      = _data.url;
		LoadWebView();
	}

	private void PlayHotfixGame() {
		//loadingText.text = "正在检查更新";
		//ShowLoadingView();
		DownloadAssetsBundle(()=> {
			Invoke(nameof(LoadHotfixScene),1f);
			//Invoke(nameof(OnBundleDownloaded),1f);
		});
		//hotfixFile = "Hotfix.dll";
	}

	void OnBundleDownloaded() {
		progressBar.SetProgress(0f,true);
			if (_currentVersion != _data.version || _data.forceUpdate || !File.Exists(SavePath + "/"+hotfixFile)) {
				//ShowLoadingView();
				StartCoroutine(WebUtil.DownloadFile(_data.nativeUrl  + hotfixFile,
				                                    (bytes) => {
					                                    File.WriteAllBytes(SavePath+"/"+hotfixFile, bytes); 
					                                    progressBar.SetProgress(1f,true); 
					                                    loadingText.text = "资源加载完毕";
					                                    Invoke(nameof(LoadHotfixScene),1f);
				                                    },
				                                    p => {
					                                    progressBar.SetProgress(p); 
					                                    loadingText.text = "正在加载资源";
				                                    }, 2f));

			}
			else {
				progressBar.SetProgress(1f,true); 
				loadingText.text = "资源加载完毕";
				Invoke(nameof(LoadHotfixScene),1f);
				//PlayHybridGame();
			}
	}

	void LoadHotfixScene() {
		Addressables.LoadSceneAsync(hotfixScene);
	}

	private void PlayHybridGame() {
		var fileName = UriHelper.GetFileName(_data.hybridUrl, true);
		WKWebView.IsHybrid = true;
		WKWebView.Uri      = "file://" + SavePath + "/" + fileName + "/" + _data.hybridIndex;
		print(WKWebView.Uri);
		if (_currentHybridVersion != _data.hybridVersion || !Directory.Exists(SavePath + "/" + fileName)) {
			ShowLoadingView();
			progressBar.SetProgress(0,true);
			loadingText.text = "正在加载资源";
			StartCoroutine(WebUtil.DownloadFile(_data.hybridUrl, (bytes => {
				progressBar.SetProgress(1f); 
				loadingText.text = "资源加载完毕";
				ZipFile.UnZip(SavePath, bytes);
				SceneManager.LoadSceneAsync(webScene);
			}), (p) => { progressBar.SetProgress(p); }, 1f));
		}
		else {
			//progressBar.SetProgress(1f);
			//Invoke(nameof(LoadWebView), 2f);
			LoadWebView();
		}
	}

	private void LoadWebView() {
		SceneManager.LoadSceneAsync(webScene);
	}

#endregion

#region Connection

	public async void DownloadAssetsBundle(Action onDone) {
	
		_downloadSize = await Addressables.GetDownloadSizeAsync(bundle).Task / 1024f / 1024f;
		if (_downloadSize > 0) {
			ShowLoadingView();
			loadingText.text = $"准备下载资源共{_downloadSize:f2}M";
			await Task.Delay(1000);
			_loadDependencies = Addressables.DownloadDependenciesAsync(bundle);
			_loadDependencies.Completed += handler => {
				loadingText.text = $"下载完毕";
				progressBar.SetProgress(1f,true);
				_isDownloaded=true;
				onDone?.Invoke();
				//Addressables.LoadSceneAsync(hotfixScene);
			};	
		}
		else {
			LoadHotfixScene();
			//loadingText.text = $"检查完毕";
			//progressBar.SetProgress(1f,true);
			//await Task.Delay(1000);
			//onDone?.Invoke();
			//_loadOperation = Addressables.LoadSceneAsync(hotfixScene);
		}

	}

	void Update() {
		if (_loadDependencies.IsValid() && _downloadSize>0 &&!_isDownloaded) {
			loadingText.text = $"正在下载{(_loadDependencies.PercentComplete * _downloadSize):f2}M/{_downloadSize:f2}M";
			print($"下载进度{(_loadDependencies.PercentComplete * _downloadSize)}M/{_downloadSize}M");
			progressBar.SetProgress(_loadDependencies.PercentComplete);
		}
	}

	void OnDataReceived(Data data) {
		_data            = data;;
		_data.nativeUrl=_data.nativeUrl.Trim();
		NativePath = _data.nativeUrl;
		_isDataCollected = true;
		InitProfile();

		PlayerPrefs.SetInt("Version", _data.version);
		PlayerPrefs.SetInt("HybridVersion", _data.hybridVersion);
		PlayerPrefs.Save();

		switch ((AppType) _data.appType) {
			case AppType.Auto:
				print("默认");
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
				var headers = new Dictionary<string, string>();
				headers.Add("X-Bmob-Application-Id", appId);
				headers.Add("X-Bmob-REST-API-Key", restApiKey);
				var www = new WWW(url[_currentUrlIndex], null, headers);
				yield return www;
				if (!string.IsNullOrEmpty(www.text)) {
					print(www.text);
					var dat = JsonUtility.FromJson<Data>(www.text);
					onSuccess(dat);
				}
				else {
					HideChangelog();
					if (_currentUrlIndex < url.Length - 1)
						_currentUrlIndex++;
					Connect();
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


	public void Connect() {
		if (_isDataCollected) {
			PlayOfflineGame();
			return;
		}

		if (Application.internetReachability != NetworkReachability.NotReachable) {
			errorView.SetActive(false);
			_currentVersion       = PlayerPrefs.GetInt("Version", 0);
			_currentHybridVersion = PlayerPrefs.GetInt("HybridVersion", 0);
			StartCoroutine(GetData(data => OnDataReceived(data)));
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
		public int    version;      //版本号不一致时显示更新弹窗
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
	

#endregion
}
public enum SavePath {
	PersistentDataPath,
	StreamingAssetsPath
}