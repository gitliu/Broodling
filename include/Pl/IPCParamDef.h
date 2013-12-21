#ifndef _ZYX_PARAM_H
#define _ZYX_PARAM_H
#include "IPCHeaderDef.h"
////////////////////////////    底层参数    ///////////////////////////////
#define HTTP_MAXOVERTIME					1000	//HTTP超时时间

////////////////////////////  NET命令部分  /////////////////////////////////
#define NET_IPCAM_RESTART					100		//IPNC重启命令
#define NET_IPCAM_SET_UNMOUNTSD				102		//卸载SD卡
#define NET_IPCAM_SET_TUNEDEFAULTCFG		103		//还原图像TUNE的默认值
#define NET_IPCAM_SET_MOUNTSD               104     //安装SD卡
#define NET_IPCAM_SET_MULTICAST              105    // 设置组播方式

#define NET_IPCAM_GET_TYPE              200		//获取摄像头类型
#define NET_IPCAM_GET_AUDIOCFG			201		//获取声音设置
#define NET_IPCAM_GET_IMAGECFG			202		//获取视频流设置
#define NET_IPCAM_GET_IOCFG				203		//获取IO设置
#define NET_IPCAM_GET_MOTIONCFG2			204		//获取移动侦测设置 v2.6
#define NET_IPCAM_GET_NETWORKCFG		205		//获取网络设置
#define NET_IPCAM_GET_TUNECFG			206		//获取图像细节设置
#define NET_IPCAM_GET_DATETIMECFG		207		//获取时间日期设置
#define NET_IPCAM_GET_USERCFG			208		//获取用户列表设置
#define NET_IPCAM_GET_RECSCHEDULECFG	209		//获取调度设置
#define	NET_IPCAM_GET_RECDETAIL			210		//获取录像详细设置
#define NET_IPCAM_GET_CHANNEL_COUNT     211     //获取通道数
#define NET_IPCAM_GET_MAC               212     //获取设备的MAC地址
#define NET_IPCAM_GET_SOFTWAREVERSION   213     //获取设备的软件版本
#define NET_IPCAM_GET_BAUDRATE          214     //获取云台波特率
#define NET_IPCAM_GET_PTZPROTOCOLNAME   215     //获取云台协议名
#define NET_IPCAM_GET_OSDTEXTINFO       216     //获取OSD标题
#define NET_IPCAM_GET_ALARM             217     //获取报警信息
#define NET_IPCAM_GET_WIFICFG			218     //获取WIFI信息
#define NET_IPCAM_GET_3GCFG				219     //获取3G信息
#define NET_IPCAM_GET_SDUSED			220     //获取SDCard的存储使用
#define NET_IPCAM_GET_ID						221    //获取ID 64位整型
#define  NET_IPCAM_GET_DEFAULTUSBDEVICE 222   //获取默认的USB设备
#define  NET_IPCAM_SEARCHWIFI          223     //搜索wifi
#define NET_IPCAM_GET_OSD                224     //获取OSD
#define  NET_IPCAM_GET_DEVELOPVERSION   225  //获取开发版本
#define  NET_IPCAM_GET_HSPLATFORM     226  // 获取华赛平台参数
#define  NET_IPCAM_GET_TITLEINFO          227   //获取Tile参数
#define  NET_IPCAM_QUERY_PAN_POSITION   228  // 获取云台水平位置
#define  NET_IPCAM_QUERY_TILT_POSITION   229   // 获取云台倾斜位置
#define  NET_IPCAM_QUERY_ZOOM_POSITION  230  //获取云台变倍位置
#define NET_IPCAM_GET_MOTIONCFG1			231		//获取移动侦测设置 v1.0
#define  NET_IPCAM_GET_EXTENDIMAGE       232      //获取2A图像参数
#define  NET_IPCAM_GET_CAMERALENS       233      //获取摄像机镜头参数
#define  NET_IPCAM_GET_RS485CGIENABLE  234    //获取是否支持双向RS485


#define NET_IPCAM_SET_AUDIOCFG			301		//设置声音设置
#define NET_IPCAM_SET_IMAGECFG			302		//设置视频流设置
#define NET_IPCAM_SET_IOCFG				303		//设置IO设置
#define NET_IPCAM_SET_MOTIONCFG2			304		//设置移动侦测设置 v2.6
#define NET_IPCAM_SET_NETWORKCFG		305		//设置网络设置
#define NET_IPCAM_SET_TUNECFG			306		//设置图像细节设置
#define NET_IPCAM_SET_DATETIMECFG		307		//设置时间日期设置
#define NET_IPCAM_SET_USERCFG			308		//设置用户列表设置
#define NET_IPCAM_SET_RECSCHEDULEITEM	309		//设置调度设置
#define	NET_IPCAM_SET_RECDETAIL			310		//设置录像详细设置
#define NET_IPCAM_SET_DELSCHEDULEITEM   311     //删除调度设置
#define NET_IPCAM_SET_OUTPUT				312     //设置输出

#define	NET_IPCAM_SET_ADDUSERCFG		350		//添加用户
#define	NET_IPCAM_SET_DELUSERCFG		351		//删除用户
#define	NET_IPCAM_SET_EDITUSERCFG		352		//修改用户
#define	NET_IPCAM_SET_FORMATSD			353		//格式化SD卡

#define NET_IPCAM_SET_LEFT              400     //云台往左
#define NET_IPCAM_SET_RIGHT             401     //云台往右
#define NET_IPCAM_SET_UP                402     //云台往上
#define NET_IPCAM_SET_DOWN              403     //云台往下
#define NET_IPCAM_SET_STOP              404     //云台往停止
#define NET_IPCAM_SET_ROUND             405     //云台轮询

#define NET_IPCAM_SET_PRESET            408     //SET云台预置位
#define NET_IPCAM_GO_PRESET             409     //GOTO云台预置位
#define NET_IPCAM_CL_PRESET             410     //CLEAR云台预置位

#define NET_IPCAM_SET_FOCUS_NEAR        411     //云台变焦近
#define NET_IPCAM_SET_FOCUS_FAR         412     //云台变焦远
#define NET_IPCAM_SET_ZOOM_WIDE         413      //云台变倍远离物体
#define NET_IPCAM_SET_ZOOM_ELE          414     //云台变倍接近物体
#define NET_IPCAM_SET_IRIS_OPEN         415     //云台光圈缩小
#define NET_IPCAM_SET_IRIS_CLOSE        416     //云台变焦
#define NET_IPCAM_SET_PTZPROTOCOLNAME   417     //设置云台协议名
#define NET_IPCAM_SET_OSDTEXTINFO       418     //设置OSD标题
#define NET_IPCAM_SET_BAUDRATE          419     //云台波特率
#define NET_IPCAM_SET_AlARM             420     //设置报警信息
#define NET_IPCAM_SET_WIFICFG			421     //设置WIFI信息
#define NET_IPCAM_SET_3GCFG				422    //设置3G信息
#define NET_IPCAM_SET_RS485CFG			423     //设置RS485信息
#define NET_IPCAM_SET_UPGRADEDEVICE		424     //设备软件升级
#define NET_IPCAM_SET_RS485WRITE		425     //测试向RS485写数据
#define NET_IPCAM_SET_BACKLIGHT		426     //设置一体机背光补偿
#define NET_IPCAM_SET_WITHEBALANCE		427     //设置一体机白平衡
#define NET_IPCAM_SET_IRMODE	428     //设置一体机IR Mode
#define NET_IPCAM_SET_WDRMODE 	429     //设置一体机Wdr Mode
#define NET_IPCAM_START_RECORDPATTERN   430  //开始录制花样巡航
#define NET_IPCAM_STOP_RECORDPATTERN    431  //停止录制花样巡航
#define NET_IPCAM_RUN_PATTERN     432               // 运行花样巡航
#define NET_IPCAM_SET_OSD              433               //设置OSD
#define  NET_IPCAM_SET_AEMODE      434               //设置一体机AE Mode
#define  NET_IPCAM_AUTOIRIS            435               //设置一体机自动光圈
#define  NET_IPCAM_AUTOFOCUS       436               //设置一体机自动聚焦
#define NET_IPCAM_SET_SHUTTERSPEED  437          //设置一体机快门速度
#define  NET_IPCAM_SET_AGC               438             //设置一体机AGC
#define  NET_IPCAM_SET_ZOOMSPEED    439         //设置一体机的聚焦速度
#define  NET_IPCAM_SET_SENSUP            440         //电子慢快门
#define  NET_IPCAM_SET_HSPLATFORM    441        //设置华赛平台参数
#define  NET_IPCAM_SET_TITLEINFO          442       //设置Tile参数
#define  NET_IPCAM_SET_ZERO_POSITION   443    //设置云台零位置
#define  NET_IPCAM_SET_PAN_POSITION    444   //设置云台水平位置
#define  NET_IPCAM_SET_TILT_POSITION    445   //设置云台倾斜位置
#define  NET_IPCAM_SET_ZOOM_POSITION  446  // 设置云台变倍位置
#define NET_IPCAM_SET_MOTIONCFG1			447		//设置移动侦测设置 v1.0
#define  NET_IPCAM_SET_EXTENDIMAGE       448      //设置2A图像参数
#define NET_IPCAM_SET_SCREEN_MOVE  449  // 设置云台屏幕框选移动
#define  NET_IPCAM_SET_CAMERALENS      450     //设置摄像机镜头参数


/////////////////////////////	命令传输类定义	///////////////////////////

enum  emDisplayMode
{
	DISPLAY_OP_SRCCOPY = 0,
	DISPLAY_OP_TRANSPARENCE = 1,
	DISPLAY_OP_SRCINVERT = 2,
};

enum emDisplayPosition
{
	POSITION_LEFT_TOP = 0x00,
	POSITION_RIGHT_TOP = 0x10,
	POSITION_LEFT_BOTTOM = 0x20,
	POSITION_RIGHT_BOTTOM = 0x30,
};

enum emShutrSpedMod
{
	eShutrSpMoAuto = 0,
	eShutrSpMo1_50000,		// 1/50000s
	eShutrSpMo1_20000,		// 1/20000s
	eShutrSpMo1_10000,		// 1/10000s
	eShutrSpMo1_5000,		// 1/5000s
	eShutrSpMo1_2000,		// 1/2000s
	eShutrSpMo1_1000,		// 1/1000s
	eShutrSpMo1_500,		// 1/500s
	eShutrSpMo1_250,		// 1/250s
	eShutrSpMo1_200,		// 1/200s
	eShutrSpMo1_125,		// 1/125s
	eShutrSpMo1_120,		// 1/120s
	eShutrSpMo1_100,		// 1/100s
	eShutrSpMo1_60,		// 1/60s
	eShutrSpMo1_50,		// 1/50s
	eShutrSpMo1_40,		// 1/40s
	eShutrSpMo1_33,		// 1/33s
	eShutrSpMo1_30,		// 1/30s
	eShutrSpMo1_25,		// 1/25s
	eShutrSpMo1_20,		// 1/20s
	eShutrSpMo1_15,		// 1/15s
	eShutrSpMo1_13,		// 13s
	eShutrSpMo1_10,		// 1/10s
	eShutrSpMo1_5,			// 1/5s
	eShutrSpMoMax
};

enum emWBMode
{
	eWBModeAWB = 0,
	eWBModeSunny,
	eWBModeShadow,
	eWBModeIndoor,
	eWBModeLamp,
	eWBModeMax
};

enum emDeviceType
{
	emDeviceType_None = -1,
	emDeviceType_355IPC = 0,
	emDeviceType_355DVS,
	emDeviceType_365IPC = 5,
	emDeviceType_365DVS,
	emDeviceType_368IPC = 10,
	emDeviceType_368DVS
};


enum emSersorType
{
	emSensorType_None = -1,
	emSensorType_S1,
	emSensorType_S2,
	emSensorType_S3,
	emSensorType_S4,
	emSensorType_S5,
	emSensorType_S6,
	emSensorType_S7
};

enum emCustomerType
{
	emCustomerType_None = -1,
	emCustomerType_OEM,
	emCustomerType_WS,
	emCustomerType_DWO,
	emCustomerType_HS,
	emCustomerType_HXHT,
	emCustomerType_ONVIF
};

typedef struct tagIO_INFO
{
	UINT uInput1OnOff;
	UINT uInput1ActiveType;
	UINT uInput2OnOff;
	UINT uInput2ActiveType;
	UINT uOutputOnOff;
	UINT uExtalarm;
	UINT uAlarmduration;
	tagIO_INFO()
	{
		ZeroMemory(this, sizeof(tagIO_INFO));
	}
}IO_INFO,*LPIO_INFO;

typedef struct tagTUNEPARA
{
	UINT uWhiteBalance;
	UINT uDayandNight;
	UINT uTVCable;
	UINT uBinningMode;
	UINT uBLC;
	UINT uBacklight;
	UINT uBrightness;
	UINT uContrast;
	UINT uSaturation;
	UINT uSharpness;
	tagTUNEPARA()
	{
		ZeroMemory(this,sizeof(tagTUNEPARA));
	}
}TUNEPARA,*LPTUNEPARA;

typedef struct tagIPNC_TIME
{
	UINT uYear;		//年
	UINT uMonth;		//月
	UINT uDay;		//日
	UINT uHour;		//时
	UINT uMinute;		//分
	UINT uSecond;		//秒
	UINT uTimeFormat;  //时间格式
	tagIPNC_TIME()
	{
		ZeroMemory(this,sizeof(tagIPNC_TIME));
	}
}IPNC_TIME,*LPIPNC_TIME;

typedef struct tagTIMEPARA
{
	IPNC_TIME datetime;			//time date
	UINT uEnableTimeStamp;	//timeStamp enable
	UINT uTimeStampFormat;	//format
	BOOL bSetDateTime;
	BOOL bSetTimeStamp;
	BOOL bSetStampFormat;
	tagTIMEPARA()
	{
		ZeroMemory(this,sizeof(tagTIMEPARA));
	}
}TIMEPARA,*LPTIMEPARA;

typedef struct tagIPNC_SCHEDTIME
{
	UINT uIndex;	//顺序
	UINT uEnable;	//1:启用，0：禁用
	UINT uDay;	//生效日，1~7：星期一~星期天，8：每天	
	//开始时间
	UINT uStartHour;
	UINT uStartMin;
	//结束时间
	UINT uStopHour;
	UINT uStopMin;	
	UINT uRecordToSD;	//是否记录到SD卡
	tagIPNC_SCHEDTIME()
	{
		ZeroMemory(this,sizeof(tagIPNC_SCHEDTIME));
	}
}IPNC_SCHEDTIME,*LIPNC_SCHEDTIME;

typedef struct tagSCHEDTIMELIST
{
	UINT uRecordToFTP;	//是否记录到FTP
	UINT uRecordToSD;	//是否记录到SD卡
	UINT uRecordToSMTP;	//是否发送邮件
	IPNC_SCHEDTIME pRSItem[8];
	tagSCHEDTIMELIST()
	{
		ZeroMemory(this,sizeof(tagSCHEDTIMELIST));
	}
}SCHEDTIMELIST,*LPSCHEDTIMELIST;

typedef struct tagMOTIONPARA
{
	DWORD dwFtpAlarm;			//报警是否启动FTP录像
//	DWORD dwsmtpAlarm;		//报警是否启动SMTP录像
	DWORD dwSDAlarm;			//报警是否启动SD卡录像

	UINT uEnableMotion;	//0->不进行移动侦测；1->进行移动侦测
	UINT uSensitivityType;	//0->使用标准灵敏度；1->用户自定义灵敏度。
	UINT uSensitivityLevel;	//0->Lowest；1->Low；2->Medium；3->High；4->Highest
	UINT uSensitivityValue;	//0~99
	char chMotionBlock[4];	//用3位十六进制数表示选取的正方形区域
	RECT rcMotion[3];
	tagMOTIONPARA()
	{
		ZeroMemory(this,sizeof(tagMOTIONPARA));
	}
}MOTIONPARA,*LPMOTIONPARA;

typedef struct tagAUDIOPARA
{
	UINT uEnableAudio;	//Audio on?
	UINT uVolume;			//volume
	tagAUDIOPARA()
	{
		ZeroMemory(this,sizeof(tagAUDIOPARA));
	};
}AUDIOPARA,*LPAUDIOPARA;

typedef struct tagRECDETAILPARA
{
	UINT uSDFileFormat;			//记录到SD卡的文件格式
	UINT uSDInsert;				//是否存在SD卡?
	UINT uRecordToFTP;			//是否记录到FTP
	UINT uRecordToSD;			//是否记录到SD卡
	UINT uFTPFormat;			//记录到FTP的文件格式
	UINT uAviDuration;			//AVI录像文件打包时长
	UINT uAviFormat;				//AVI录像选择：0：720p,		1:CIP

	char chFTPSERVER[256];	//FTP server IP
	UINT uPort;				//FTP server Port
	char chUser[emLen_Name];	//FTP Username
	char chPassword[emLen_Password];		//FTP passwd
	char chUploadPath[256];	//FTP UPloadPath

	tagRECDETAILPARA()
	{
		ZeroMemory(this,sizeof(tagRECDETAILPARA));
	}
}RECDETAILPARA,*LPRECDETAILPARA;


typedef struct tagNETWORKPARA				//net work para
{
	UINT uDhcp;
	char chIP[emLen_IP];
	char chNetmask[emLen_IP];
	char chDefaultGetway[emLen_IP];
	char chPrimaryNameserver[emLen_IP];
	UINT uPort;	
	tagNETWORKPARA()
	{
		ZeroMemory(this,sizeof(tagNETWORKPARA));
	}
}NETWORKPARA,*LPNETEWORKPARA;

typedef struct tagPTZPARA
{
	UINT uValue;
	UINT uAddrCode;			//地址码
	UINT uBackLight;         // 背光补偿 0 : OFF  1 : ON
	UINT uWhiteBalance;    //自动白平衡  0：Auto 1: OFF
	UINT uIRMode;             //IR Mode 0：Day  1：Night 2 : Auto
	UINT uWdrMode;        //Wdr Mode 0：OFF   1：Auto
	UINT uAEMode;          //AE Mode  0:Auto 1:Iris 2:shutter 3:agc 4: Manual
	UINT uAutoFocus;      //Auto Focus 0:On 1: Off
	UINT uZoomSpeed;   // Focus Speed 0: Slowest 2:Medium 3: Hightest
	UINT uSensUp;         //SensUp 0: OFF 1: 1/30 2: 1/15 3: 1/8 4: 1/4
	tagPTZPARA()
	{
		ZeroMemory(this,sizeof(tagPTZPARA));
	}
}PTZPARA, *LPPTZPARA;

//////////////////////////////////////////////////////////////////////////



typedef struct tagUSER_INFO	//单个用户信息
{
	int nUserNO;
	char chUser[emLen_Name];
	char chPassword[emLen_Password];
	UINT uAuthority;	
	tagUSER_INFO()
	{
		ZeroMemory(this,sizeof(tagUSER_INFO));
	}
}USER_INFO,*LPUSER_INFO;

typedef struct tagUSERLIST_INFO	//用户列表（针对一个摄像头）
{
	UINT uUserCount;
	USER_INFO UserInfo[256];
	tagUSERLIST_INFO()
	{
		ZeroMemory(this, sizeof(tagUSERLIST_INFO));
	}
}USERLIST_INFO,*LPUSERLIST_INFO;

typedef struct tagIMAGEPARA
{
	char chTitle[emLen_Name];
	UINT uVideoCodec;
	UINT uResolution;
	UINT u2AEngine;
	UINT uColorSystem;
	BYTE bMirrorCtrl;
	UINT uRateControl;
	UINT uJPEGQuality;
	UINT uJPEGFrameRate;
	LONG lMPEG4_1_BitRate;		//64~8000
	UINT uMPEG4_1_FrameRate;
	LONG lMPEG4_2_BitRate;		//64~8000
	UINT uMPEG4_2_FrameRate;
	BYTE bDetect;					// 365特有的选项(I/O)	
	BYTE bCodecNumber;			// 365特有的选项(I)
	BYTE bCodecMenu;				// 365特有的选项(I)
	BYTE bResMenu;				// 365特有的选项(I)
	UINT uWdr;
	tagIMAGEPARA()
	{
		ZeroMemory(this,sizeof(tagIMAGEPARA));
	}
}IMAGEPARA,*LPIMAGEPARA;

typedef struct tagOSDPARA 
{
	UINT uEnableTimeStamp;	//timeStamp enable
	UINT uTimeStampFormat;	//format
	UINT uenableOSD;
	char chOsdTextInfo[emLen_Name];
	UINT uTextandLogo;  //1:logo 2: Text
	tagOSDPARA()
	{
		ZeroMemory(this,sizeof(tagOSDPARA));
	}
}OSDPARA,*LPOSDPARA;

typedef struct tagALARMPARA 
{
	UINT uLostAlarm;
	UINT uLastTime;
	tagALARMPARA()
	{
		ZeroMemory(this,sizeof(tagALARMPARA));
	}
}ALARMPARA,*LPALARMPARA;

typedef struct tagWIFIPARA
{
	UINT uWifienable;
	UINT uWlapmode;
	char chWlssid[emLen_Name];
	UINT uWlencryption;
	UINT uWlwepwhich;
	char chWlwepkey1[emLen_Name];
	char chWlwpakey[emLen_Name];
	char chWlip[emLen_IP];
	tagWIFIPARA()
	{
		ZeroMemory(this, sizeof(tagWIFIPARA));
	}
}WIFIPARA,*LPWIFIPARA;

typedef struct tagSEARCHWIFI
{
	UINT uCount;
	char chWlssid[emLen_Name];
	UINT uSignalStrength;
	UINT uEncryptype;
	UINT uAuthmode;
	tagSEARCHWIFI()
	{
		ZeroMemory(this, sizeof(tagSEARCHWIFI));
	}
}SEARCHWIFI, *LPSEARCHWIFI;

typedef struct tagTHIRD_G_PARA
{
	UINT u3Genable;
	char ch3gip[emLen_IP];
	char chG3phnoe[64];    
	tagTHIRD_G_PARA()
	{
		ZeroMemory(this, sizeof(tagTHIRD_G_PARA));
	}
}THIRD_G_PARA,*LPTHIRD_G_PARA;

typedef struct tagRS485INFO
{
	int uValue1;
	int uValue2;
	UINT uAddrCode;	
	UINT nBaudRate;
	UINT nTimeOut;
	int nLen;
	int uCommand1;
	tagRS485INFO()
	{
		ZeroMemory(this, sizeof(tagRS485INFO));
	}
}RS485INFO,*LPRS485INFO;

typedef struct tagSDCARDINFO
{
	LONGLONG nSdUsed;
	LONGLONG nSdFree;
	tagSDCARDINFO()
	{
		ZeroMemory(this, sizeof(tagSDCARDINFO));
	}
}SDCARDINFO, *LPSDCARDINFO;

typedef struct tagCURRENTVERSION
{
	char szKernelVersion[MAX_PATH];
	char szBiosVersion[MAX_PATH];
	char szSoftwareVersion[MAX_PATH];
	char szActiveXVersion[MAX_PATH];
	tagCURRENTVERSION()
	{
		ZeroMemory(this, sizeof(tagCURRENTVERSION));
	}
}CURRENTVERSION, *LPCURRENTVERSION;

typedef struct tagOSDLOG
{
	int nX;
	int nY;
	int nWidth;
	int nHeight;
	char *pTitle;
	int nSize;
}OSDLOGO, *LPOSDLOGO;

typedef struct tagHSPLATFORMINFO
{
	char szServerIP[emLen_IP];
	UINT nServerPort;
	char szMainDeviceID[32];
	char szLensSubID[32];
	tagHSPLATFORMINFO()
	{
		ZeroMemory(this, sizeof(tagHSPLATFORMINFO));
	}
}HSPLATFORMINFO, LPHSPLATFORMINFO;

typedef struct tagTITLEPARAM
{
	char szTitle[33];
	emDisplayMode DisplayMode;  
	emDisplayPosition Position;
	COLORREF clrForeColor;
	COLORREF clrBackColor;
	tagTITLEPARAM()
	{
		ZeroMemory(this, sizeof(tagTITLEPARAM));
	}
}TITLEPARAM, *LPTITILEPARAM;

typedef struct tagVERSIONINFO
{
	UINT uMajorVersion;
	UINT uMinorVersion;
	UINT uBuildVersion;
	tagVERSIONINFO()
	{
		ZeroMemory(this, sizeof(tagVERSIONINFO));
	}
}VERSIONINFO, *LPVERSIONINFO;

typedef struct tagDEVICETYPE
{
	VERSIONINFO VersionInfo;
	emSersorType SensorType;
	emCustomerType CustomerType;
	emDeviceType DeviceType;
	tagDEVICETYPE()
	{
		ZeroMemory(this, sizeof(tagDEVICETYPE));
		DeviceType = emDeviceType_None;
	}
}DEVICETYPE, *LPDEVICETYPE;

typedef struct tagEXTENDIMAGEPARA 
{
	DWORD dwAvoidflicker;
	DWORD dwMaxgain;
	DWORD dwSetexpmod;
	emShutrSpedMod Maxexposuretime;
	DWORD dwFixediso;
	emShutrSpedMod Fixedexptime;
	DWORD dwSetimagesource;
	DWORD dwTargetlum;
	emWBMode awb;
	DWORD dwWdrEnable;
	tagEXTENDIMAGEPARA()
	{
		ZeroMemory(this, sizeof(tagEXTENDIMAGEPARA));
	}
}EXTENDIMAGE, *LPEXTENDIMAGE;

typedef struct tagCAMERALENSPARA 
{
	DWORD dwSupportIris;
	DWORD dwIrisEnable;
	DWORD dwIrisIncval;
	DWORD dwIrisDecval;
	DWORD dwIrisIncholdval;
	DWORD dwIrisDecholdval;
	DWORD dwSupportIrcut;
	DWORD dwIrcutEnable;
	DWORD dwIrdaynignt;
	DWORD dwIrnigntday;
	tagCAMERALENSPARA()
	{
		ZeroMemory(this, sizeof(tagCAMERALENSPARA));
	}
}CAMERALENS, *LPCAMERALENS;
#endif
