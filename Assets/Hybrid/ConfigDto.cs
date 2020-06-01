  using System.Collections.Generic;

  [System.Serializable]         
    public class ConfigDto
    {
        public string linkaddr;
        public string @namespace;
        public string platform;
        public bool isreview;
        public string maintenance_s;
        public string maintenance_e;
        public string maintenance_info;
        public string gamename;
        public string agent_feedback;
        public string agent_notice;
        public string versiontxt;
        public bool https;
        public bool useacc;
        public bool phonelogin;
        public bool dypay;
        public IList<string> apilist;
        public string talkingdataid;
        public IList<object> channelreview;
        public string invite_code_url;
        public string invite_url;
        public IList<string> customerlist;
        public IList<string> wechatpublist;
        public string vouchers2name;
        public string gameUrl;
        public string wxAppId;
        public string loginType;
        public string payType;
        public string talkingDataId;
        public string resUrl;
        public bool local;
        public bool dynamic;
        public bool updateRes;
        public string buglyAndroidId;
        public string buglyiOSId;
        public string gameName;
        public string resType;
        public SzActivityTime szActivityTime;
        public string verfileVer;
        public bool update;
        public bool downloadApp;
        public string buglyId;
    }
    
  [System.Serializable]
  public class SzActivityTime
  {
	  public IList<string> shop      ;
	  public IList<string> invite    ;
	  public IList<string> giftcharge;
	  public IList<string> wingold   ;
  }