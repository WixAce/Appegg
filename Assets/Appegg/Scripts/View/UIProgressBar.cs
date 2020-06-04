using UnityEngine;
using UnityEngine.UI;

public class UIProgressBar : MonoBehaviour {
    
    private Text _progressText;
    private Image _progressBar;

    [SerializeField] private float speed = 2f;
    
    private float _target=0f;

    private void Awake() {
	    _progressText = GetComponentInChildren<Text>();
	    _progressBar = GetComponentsInChildren<Image>()[1];
    }

    private void OnEnable() {
	    _progressBar.fillAmount = 0f;
    }

    public void SetProgress(float v,bool instant=false) {
		    _target = v;
		    if (instant) {
			    _progressBar.fillAmount = v;
		    }
    }

    void Update() {
	    _progressBar.fillAmount = Mathf.Lerp(_progressBar.fillAmount,_target,Time.deltaTime*speed);
	    _progressText.text = Mathf.RoundToInt(  _progressBar.fillAmount * 100) + "%";
    }
}
