using UnityEngine;
using UnityEngine.AddressableAssets;

public class AppeggLoader : MonoBehaviour {
	void Start() => Load();

	void Load() {
		Addressables.InstantiateAsync(AppeggConfig.AddressablePrefab);
	}
	
}