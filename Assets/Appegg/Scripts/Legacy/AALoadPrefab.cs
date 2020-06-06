using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class AALoadPrefab : MonoBehaviour {
	public string address;

	void Start()=>Load();

	void Load() {
		Addressables.LoadAsset<GameObject>(address).Completed +=
			(op) => {
				if (op.Status == AsyncOperationStatus.Succeeded) {
					Debug.Log(op.Result as GameObject);
					var go = Instantiate(op.Result as GameObject, Vector3.zero, Quaternion.identity);
					go.transform.localPosition = Vector3.zero;
				}
			};
	}
}