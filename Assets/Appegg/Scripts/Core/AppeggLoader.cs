using UnityEngine;
using UnityEngine.AddressableAssets;

public class AppeggLoader : MonoBehaviour {

	[SerializeField] private string[] prefabs;

	void Start()=> Load();

	void Load() {
		foreach (var p in prefabs) {
			Addressables.InstantiateAsync(p);
		}
	}

}