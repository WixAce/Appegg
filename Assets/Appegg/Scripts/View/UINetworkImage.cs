using System;
using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class UINetworkImage : MonoBehaviour {
	public static string Url { get; set; }

	[SerializeField] private bool   _saveCacheImage=true;
	
	[SerializeField] private int _width=1920,_height=1080;

	private string _cachePath;

	private Image _image;

	void Awake() {
		_image = GetComponent<Image>();
		_cachePath = Path.Combine(Application.persistentDataPath, "loading.png");
	}

	void OnEnable() {
		if (_saveCacheImage && File.Exists(_cachePath)) {
			Texture2D tex = new Texture2D(_width, _height);
			tex.LoadImage(File.ReadAllBytes(_cachePath));
			Sprite sprite = Sprite.Create(tex, new Rect(0, 0, tex.width,tex.height), new Vector2(0.5f, 0.5f));
			_image.sprite = sprite;
		}
	}

	// Use this for initialization
	void Start() {
		StartCoroutine(DownSprite());
	}

	IEnumerator DownSprite() {
		UnityWebRequest        wr    = new UnityWebRequest(Url);
		DownloadHandlerTexture texD1 = new DownloadHandlerTexture(true);
		wr.downloadHandler = texD1;
		yield return wr.SendWebRequest();
		if (!wr.isNetworkError) {
			Texture2D tex = new Texture2D(_width, _height);
			tex = texD1.texture;
			if (_saveCacheImage) {
				Byte[] bytes = tex.EncodeToPNG();
				File.WriteAllBytes(_cachePath, bytes);
			}
			Sprite sprite = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), new Vector2(0.5f, 0.5f));
			_image.sprite = sprite;
			/*Byte[] bytes=tex.EncodeToPNG();
			File.WriteAllBytes(Application.dataPath + "/test.png", bytes);
			_image.texture = texD1.texture;
			_image.SetNativeSize();
			_image.rectTransform.anchoredPosition= _image.rectTransform.anchorMax= _image.rectTransform.anchorMin = Vector2.zero;
			_image.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, 1);
			_image.rectTransform.offsetMin = new Vector2(0, 0);
			_image.rectTransform.offsetMax = new Vector2(0, 0);
			*/
		}
	}

	private void OnApplicationQuit() {
		StopAllCoroutines();
	}
	
}