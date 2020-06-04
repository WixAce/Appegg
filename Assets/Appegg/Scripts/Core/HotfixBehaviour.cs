using System.Collections;
using System.IO;
using ILRuntime.Runtime.Enviorment;
using UnityEngine;

public class HotfixBehaviour : MonoBehaviour {

	private AppDomain _appdomain;

	private MemoryStream _fs;
	private MemoryStream _p;

	[SerializeField] private string _type = "Hotfix.Game";
	[SerializeField] private string _method = "Initialize";
	[SerializeField] private string _instance = null;

	void Start() {
		StartCoroutine(LoadHotFixAssembly());
	}

	IEnumerator LoadHotFixAssembly() {
		_appdomain = new AppDomain();
		Debug.Log(AppeggConfig.DllUrl);
		WWW www = new WWW(AppeggConfig.DllUrl);
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
	
}