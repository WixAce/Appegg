using System.Collections;
using System.IO;
using ILRuntime.Runtime.Enviorment;
using UnityEngine;

public class HotfixBehaviour : MonoBehaviour {

	private AppDomain _appdomain;

	private MemoryStream _fs;
	private MemoryStream _p;

	[SerializeField] private readonly string _type = "Hotfix.Game";
	[SerializeField] private readonly string _method = "Initialize";
	[SerializeField] private readonly string _instance = null;

	void Start() {
		StartCoroutine(LoadHotFixAssembly());
	}

	IEnumerator LoadHotFixAssembly() {
		_appdomain = new AppDomain();
		Debug.Log(AppBehaviour.NativePath + AppBehaviour.HotfixFileName);
		WWW www = new WWW(AppBehaviour.NativePath + AppBehaviour.HotfixFileName);
		while (!www.isDone)
			yield return null;
		if (!string.IsNullOrEmpty(www.error))
			Debug.LogError(www.error);
		byte[] dll = www.bytes;
		www.Dispose();

		_fs = new MemoryStream(dll);
		_appdomain.LoadAssembly(_fs, null, null);

		InitializeILRuntime();
		OnHotFixLoaded();
	}

	void InitializeILRuntime() {
#if DEBUG && (UNITY_EDITOR || UNITY_ANDROID || UNITY_IPHONE)
		_appdomain.UnityMainThreadID = System.Threading.Thread.CurrentThread.ManagedThreadId;
#endif
	}

	void OnHotFixLoaded() {
		_appdomain.Invoke(_type, _method, _instance, null);
	}

	private void OnDestroy() {
		_fs?.Close();
		_p?.Close();
		_fs = null;
		_p  = null;
	}

	/*private AppDomain appdomain;

	void Start() {
		LoadHotFixAssembly();
	}

	void LoadHotFixAssembly() {
		appdomain = new AppDomain();
		print(AppBehaviour.SavePath + "/" + AppBehaviour.HotfixFileName);
		print("加载dll");
		//LoadAssemblyFile(AppBehaviour.SavePath + "/" + AppBehaviour.HotfixFileName);
		print("dll加载完毕");
		InitializeILRuntime();
		OnHotFixLoaded();
	}


	void InitializeILRuntime() {
#if DEBUG && (UNITY_EDITOR || UNITY_ANDROID || UNITY_IPHONE)
		appdomain.UnityMainThreadID = System.Threading.Thread.CurrentThread.ManagedThreadId;
#endif
	}

	void OnHotFixLoaded() {
		appdomain.Invoke("Hotfix.Game", "Initialize", null, null);
	}*/
}