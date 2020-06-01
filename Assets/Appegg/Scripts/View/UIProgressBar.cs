using UnityEngine;
using UnityEngine.UI;

public class UIProgressBar : MonoBehaviour {
    
    [SerializeField] private Text _progressText;
    [SerializeField] private Image _progressBar;

    public float Speed = 2f;
    private float _target=0f;

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
	    _progressBar.fillAmount = Mathf.Lerp(_progressBar.fillAmount,_target,Time.deltaTime*Speed);
	    _progressText.text = Mathf.RoundToInt(  _progressBar.fillAmount * 100) + "%";
    }
}
