public static class AppeggConfig {

	/// <summary>
	/// 资源地址(不包含buildTarget)
	/// </summary>
	public static string AddressableUrl { get; set; }

	/// <summary>
	/// 资源表
	/// </summary>
	public static string CatalogUrl { get; set; }
	
	public static string DllUrl { get; set; }

	public static string LocalHybridPath { get; set; }
	public static string HybridFileName  { get; set; }
	public static string HybridIndex     { get; set; }
	public static bool   IsDataCollected { get; set; }

	public static string AddressableScene { get; set; }

	public static string AddressablePrefab { get; set; }
}