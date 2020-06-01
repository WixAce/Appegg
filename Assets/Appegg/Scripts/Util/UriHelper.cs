using System;
using System.IO;

public class UriHelper {
    
    public static string GetFileName(string url, bool removeKind=false)
    {
        string file = string.Empty;
        Uri u = new Uri(url);
        file = Path.GetFileName(u.AbsolutePath);
        return removeKind?file.Split('.')[0]:file;
    }

}
