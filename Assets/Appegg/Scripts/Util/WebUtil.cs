using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

static class WebUtil {
	public static IEnumerator GetJson<T>(string url, Action<T> success, Action failure = null) {
		yield return GetText(url, data => { success?.Invoke(JsonUtility.FromJson<T>(data)); }, failure);
	}

	public static IEnumerator GetText(string url, Action<string> success, Action failure = null) {
		UnityWebRequest www = UnityWebRequest.Get(url);
		yield return www.Send();
		if (www.isNetworkError || www.isHttpError) {
			//Debug.Log(www.error);
			failure?.Invoke();
		}
		else {
			//Debug.Log(System.Text.RegularExpressions.Regex.Unescape(www.downloadHandler.text));
			success?.Invoke(www.downloadHandler.text);
		}
	}

	public static IEnumerator DownloadFile(string url, Action<byte[]> onDownloaded, Action<float> progress = null,
	                                       float  delay = 0) {
		Debug.Log("下载" + url);
		UnityWebRequest www       = UnityWebRequest.Get(url);
		var             operation = www.SendWebRequest();
		//www.timeout = 10;
		while (!operation.isDone) {
			//Debug.Log(www.downloadProgress * 100);
			progress?.Invoke(www.downloadProgress);
			yield return null;
		}

		yield return new WaitForSeconds(delay);
		//yield return www.SendWebRequest();
		if (www.isNetworkError || www.isHttpError) {
			//Debug.Log(www.error);
		}
		else {
			onDownloaded?.Invoke(www.downloadHandler.data);
			www.Dispose();
		}
	}
}