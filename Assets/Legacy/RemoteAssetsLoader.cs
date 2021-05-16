using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;

public class RemoteAssetsLoader : MonoBehaviour {
	

	[SerializeField] private string remotePath = "http://localhost:8000/Appegg/iOS/";
	
	[SerializeField] private string catalog = "config.json";
	
	[SerializeField] private string key = "TestCanvas";

	void Start() {
		var path = Path.Combine(remotePath, catalog);
		Debug.Log(path);
		AsyncOperationHandle<IResourceLocator> loadContentCatalogAsync = Addressables.LoadContentCatalogAsync(remotePath);
		loadContentCatalogAsync.Completed += OnCompleted;    
	}
 
	private void OnCompleted(AsyncOperationHandle<IResourceLocator> obj)
	{
		IResourceLocator resourceLocator = obj.Result;
		resourceLocator.Locate(key, typeof(GameObject), out IList<IResourceLocation> locations);
		IResourceLocation resourceLocation     = locations[0];
		GameObject        resourceLocationData =(GameObject) resourceLocation.Data;
		Addressables.InstantiateAsync(resourceLocation);  
	}

}