using System.Collections;
using System.Collections.Generic;
using System.IO;
using ILRuntime.Runtime.Enviorment;
using UnityEngine;

public class GameBehaviour : MonoBehaviour {

	AppDomain appdomain;

	System.IO.MemoryStream fs;
	System.IO.MemoryStream p;

	void Start() {
		StartCoroutine(LoadHotFixAssembly());
	}

	IEnumerator LoadHotFixAssembly() {
		appdomain = new AppDomain();
		print(AppBehaviour.NativePath + AppBehaviour.HotfixFileName);
		WWW www = new WWW(AppBehaviour.NativePath + AppBehaviour.HotfixFileName);
		while (!www.isDone)
			yield return null;
		if (!string.IsNullOrEmpty(www.error))
			UnityEngine.Debug.LogError(www.error);
		byte[] dll = www.bytes;
		www.Dispose();

		fs = new MemoryStream(dll);
		appdomain.LoadAssembly(fs, null, null);

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
	}

	private void OnDestroy() {
		if (fs != null)
			fs.Close();
		if (p != null)
			p.Close();
		fs = null;
		p  = null;
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