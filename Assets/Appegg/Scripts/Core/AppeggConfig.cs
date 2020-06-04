public static class AppeggConfig {
	
	/// <summary>
	/// 资源地址(包含buildTarget)
	/// </summary>
	public static string AddressableUrl { get; set; }
	
	/// <summary>
	/// 资源表
	/// </summary>
	public static string CatalogUrl      { get; set; }
	
	/// <summary>
	/// 游戏资源目录
	/// </summary>
	public static string HotfixUrl { get; set; }

	public static string LocalHybridPath { get; set; }
	public static string HybridFileName { get; set; }
	public static string HybridIndex { get; set; }
	public static bool IsDataCollected { get; set; }
	
}