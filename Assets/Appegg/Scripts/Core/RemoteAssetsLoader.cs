using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;

public class RemoteAssetsLoader : MonoBehaviour {

	[SerializeField] private string[] prefabs;

	[SerializeField] private string remotePath = "http://localhost:8000/Appegg/iOS/config.json";

	public static string Url = "http://localhost:8000/Appegg/iOS/config.json";
	
	void Load() {
		foreach (var p in prefabs) {
			Addressables.InstantiateAsync(p);
		}
	}

	void Awake() {
		Url = "http://localhost:8000/Appegg/";
	}
	
	void Start() {
		print(Url);
		AsyncOperationHandle<IResourceLocator> loadContentCatalogAsync = Addressables.LoadContentCatalogAsync(Url);
		//AsyncOperationHandle<IResourceLocator> loadContentCatalogAsync = Addressables.LoadContentCatalogAsync(remotePath);
		loadContentCatalogAsync.Completed += OnCompleted;    
	}
 
	private void OnCompleted(AsyncOperationHandle<IResourceLocator> obj)
	{
		IResourceLocator resourceLocator = obj.Result;
		resourceLocator.Locate("TestCanvas", typeof(GameObject), out IList<IResourceLocation> locations);
		//resourceLocator.Locate("belt_metalX.prefab", typeof(GameObject), out IList<IResourceLocation> locations);
		IResourceLocation resourceLocation     = locations[0];
		GameObject        resourceLocationData =(GameObject) resourceLocation.Data;
		Addressables.InstantiateAsync(resourceLocation);  
	}

}