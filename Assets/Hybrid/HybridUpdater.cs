﻿using System;
using System.Collections;
using System.IO;
using System.Text;
using Boo.Lang;
using CsvHelper;
using CsvHelper.Configuration;
using UnityEngine;

public class HybridUpdater : MonoBehaviour {
	private ConfigDto _configDto;

	private string _filesPath = Application.streamingAssetsPath + "/files.txt";

	private string _folderPath = Application.streamingAssetsPath + "/jpby_2d/";

	void Start() => GetConfig(CheckFiles);

	void CheckFiles() {
		if (File.Exists(_filesPath)) {
			var localFile = File.ReadAllText(_filesPath);
			var localFileMd5 = Md5Sum(localFile);
			Debug.Log("本地files文件md5:" + localFileMd5);
			Debug.Log("服务端files文件md5:" + _configDto.verfileVer);
			if (localFileMd5== _configDto.verfileVer) {
				Debug.Log($"本地与服务端files文件md5一致");
				StartCoroutine(UpdateFiles());
			}
			else {
				Debug.Log("本地与服务端files文件md5不一致");
				StartCoroutine(UpdateFiles());
			}
		}
		else {
			Debug.Log("本地不存在files文件,开始下载");
			DownloadFiles(CheckFiles);
		}
	}

	IEnumerator UpdateFiles() {
		Debug.Log($"开始对比文件MD5");
		var files = GetCsv();
		//DirectoryInfo directoryInfo = new DirectoryInfo(_folderPath);
		//FileInfo[] allFiles = directoryInfo.GetFiles("*.*");
		foreach (var f in files) {
			var localFilePath = _folderPath + "/" + f.path;
			var remoteFilePath = _configDto.resUrl + f.path;
			//var localData = File.ReadAllBytes(localFilePath);
			var localFileName = UriHelper.GetFileName(localFilePath);
			var localFileMd5 = GetMD5HashFromFile(localFilePath).ToUpper();
			if (localFileMd5== f.key) {
				Debug.Log($"本地文件{localFileName}与服务端md5一致:{localFileMd5}");
			}
			else {
				Debug.Log($"本地文件{localFileName}与服务端md5不一致:{localFileMd5}|{ f.key}");
				Debug.Log($"准备更新{remoteFilePath}");
				yield return StartCoroutine(WebUtil.DownloadFile(remoteFilePath, res => {
					Debug.Log($"文件{localFileName}更正完毕");
					File.WriteAllBytes(localFilePath,res);
				}));
			}
			yield return null;
			
		}
		Debug.Log($"检查更新完毕");
	}

	void DownloadFiles(Action onDone = null) {
		StartCoroutine(WebUtil.GetText("http://pgsdk.oss-cn-beijing.aliyuncs.com/cq/hybrid/files.txt", text => {
			File.WriteAllText(_filesPath, text);
			print("下载完毕,files文件md5为" + Md5Sum(text));
			onDone?.Invoke();
		}));
	}

	void GetConfig(Action onDone = null) {
		StartCoroutine(WebUtil.GetJson<ConfigDto>("https://game.suxinren.vip/h5update/chkconfig.php?appid=40001&platform=ios&appver=1.0.0",
		                                          data => {
			                                          _configDto            = data;
			                                          _configDto.verfileVer = _configDto.verfileVer.ToUpper();
			                                          onDone?.Invoke();
		                                          }));
	}

	private List<Files> GetCsv() {
		using (var reader = new StreamReader(_filesPath))
			using (var csv = new CsvReader(reader)) {
				csv.Configuration.IgnoreBlankLines = false;
				csv.Configuration.RegisterClassMap<FilesMap>();
				var filesRecords = new List<Files>();
				var isHeader     = true;
				while (csv.Read()) {
					if (isHeader) {
						csv.ReadHeader();
						isHeader = false;
						continue;
					}

					if (csv.GetField(0) == "s") {
						isHeader = true;
						continue;
					}
					switch (csv.Context.HeaderRecord[0]) {
						case "path":
							filesRecords.Add(csv.GetRecord<Files>());
							break;
						default:
							throw new InvalidOperationException("Unknown record type.");
					}
				}

				return filesRecords;
			}
	}

	private string Md5Sum(string strToEncrypt) {
		System.Text.UTF8Encoding ue    = new System.Text.UTF8Encoding();
		byte[]                   bytes = ue.GetBytes(strToEncrypt);
		System.Security.Cryptography.MD5CryptoServiceProvider md5 =
			new System.Security.Cryptography.MD5CryptoServiceProvider();
		byte[] hashBytes  = md5.ComputeHash(bytes);
		string hashString = "";
		for (int i = 0; i < hashBytes.Length; i++) {
			hashString += System.Convert.ToString(hashBytes[i], 16).PadLeft(2, '0');
		}

		return hashString.PadLeft(32, '0').ToUpper();
	}
	
	/// <summary>
	/// 获取文件MD5值
	/// </summary>
	/// <param name="fileName">文件绝对路径</param>
	/// <returns>MD5值</returns>
	public static string GetMD5HashFromFile(string fileName)
	{
		try
		{
			FileStream                       file   = new FileStream(fileName, FileMode.Open);
			System.Security.Cryptography.MD5 md5    = new System.Security.Cryptography.MD5CryptoServiceProvider();
			byte[]                           retVal = md5.ComputeHash(file);
			file.Close();

			StringBuilder sb = new StringBuilder();
			for (int i = 0; i < retVal.Length; i++)
			{
				sb.Append(retVal[i].ToString("x2"));
			}
			return sb.ToString();
		}
		catch (Exception ex)
		{
			throw new Exception("GetMD5HashFromFile() fail,error:" + ex.Message);
		}
	}


	public class Files {
		public string path { get; set; }
		public string size { get; set; }
		public string key  { get; set; }
	}

	public sealed class FilesMap : ClassMap<Files> {
		public FilesMap() {
			Map(m => m.path);
			Map(m => m.size);
			Map(m => m.key);
		}
	}
}