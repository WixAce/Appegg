using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class UINetworkImage : MonoBehaviour {
    
  public static string Url { get; set; }
    // Use this for initialization
    void Start () {
        StartCoroutine(DownSprite());

	}
   
    IEnumerator DownSprite()
    {
        UnityWebRequest wr = new UnityWebRequest(Url);
        DownloadHandlerTexture texD1 = new DownloadHandlerTexture(true);
        wr.downloadHandler = texD1;
        yield return wr.SendWebRequest();
        int width = 1920;
        int high = 1080;
        if(!wr.isNetworkError)
        {
            Texture2D tex = new Texture2D(width, high);
            tex = texD1.texture;
                     
            /*Byte[] bytes=tex.EncodeToPNG();
            File.WriteAllBytes(Application.dataPath + "/test.png", bytes);*/
            
            Sprite sprite = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), new Vector2(0.5f, 0.5f));
            transform.GetComponent<Image>().sprite = sprite;
        }
    }
   
    private void OnApplicationQuit()
    {
        StopAllCoroutines();
    }
}
