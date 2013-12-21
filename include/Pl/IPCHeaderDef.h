#ifndef _IPC_HEADER_
#define  _IPC_HEADER_
#include <time.h>
#include <STRING.H>
enum emLen
{
	emLen_ID = 40,
	emLen_IP = 32,
	emLen_Name = 32,
	emLen_Password = 32,
	emLen_Title = 32,
};

enum emMsgNotifyType
{
	emMsgNotifyType_CallBack,
	emMsgNotifyType_MSG
};

enum emCBMsgType
{
	emCBMsgType_Offline,
	emCBMsgType_Alarm,
	emCBMsgType_AVData,
	emCBMsgType_Device,
	emCBMsgType_GDI,
	emCBMsgType_DecodeData,
	emCBMsgType_Refresh,
	emCBMsgType_ImageRequestError,
	emCBMsgType_PageCount,
	emCBMsgType_FileName,
	emCBMsgType_DownloadComplete,
	emCBMsgType_QueryFileComplete,
	emCBMsgType_Wifi,
	emCBMsgType_ExtraData
};

enum emImageSize
{
	emImageSize_CIF,
	emImageSize_VGA,
	emImageSize_D1,
	emImageSize_720P,
	emImageSize_1080P
};

enum emCodecType
{
	emCodecType_H264,
	emCodecType_Mpeg4,
	emCodecType_Mjpeg
};

enum emFrameType
{
	emFrameType_IFrame,
	emFrameType_PFrame,
	emFrameType_BFrame,
	emFrameType_AFrame,
	emFrameType_SFrame,
	emFrameType_EFrame,
	emFrameType_TFrame,
	emFrameType_ExtraFrame
};

enum emAlarmType
{ 
	emAlarmType_None = -1,
	emAlarmType_Offline = 0x01,
	emAlarmType_VideoDetect = 0x02,
	emAlarmType_VideoLost = 0x04,
	emAlarmType_Input = 0x08,
	emAlarmType_FaceDetect =  0x10,
	emAlarmType_ImageRequestError = 0x20
};

enum emReturnType
{
	emReturnType_OK,
	emReturnType_Error = -1,
	emReturnType_ConnectFailed = -2,
	emReturnType_PasswordInvalid = -3,
	emReturnType_SendRequestFailed = -4,
	emReturnType_SendANNPFailed = -5,
	emReturnType_RecvHttpHeadFailed =-6,
	emReturnType_NotLogon = -7,
	emReturnType_PointerInvalid = -8,
	emReturnType_HandleInvalid = -9,
	emReturnType_CreateThreadFailed = -10,
	emReturnType_CreateDirectoryFailed = -11,
	emReturnType_CreateFileFailed = -12,
	emReturnType_CreateCMDFailed = -13,
	emReturnType_CommandInvalid = -14,
	emReturnType_OSDInvalid = -15,
	emReturnType_InitSocketFailed = -16,
	emReturnType_ImageRequestError = -17,
	emReturnType_NotTalking = -18
};

enum emPTZProtocol
{
	emPTZProtocol_Pelco_D,
	emPTZProtocol_Pelco_P
};

enum emTransProtocol
{
	emTransProtocol_HTTP,
	emTransProtocol_RTSP
};

typedef struct tagLOGON_INFO 
{
	char szDeviceIP[emLen_IP];
	char szDeviceName[emLen_Name];
	int	nDevicePort;	
	char szUserName[emLen_Name];
	char szPassword[emLen_Password];
	void *pContext;
	BOOL bRegHeartbeat;//如果是公网的设备，不要心跳，默认为TRUE
	DWORD dwTimeout;//超时时间，毫秒
	tagLOGON_INFO()
	{
		ZeroMemory(this, sizeof(tagLOGON_INFO));
	}
}LOGON_INFO, *LPLOGON_INFO;

struct IMsgCallback
{
	virtual int MsgNotify(WPARAM wParam, LPARAM lParam) = 0;//wParam:emCBMsgType     lParam:CB_DATA
};

typedef struct tagCB_INFO 
{
	emMsgNotifyType MsgNotifyType;//emCallBack:use pMsgCallback,  emMSG:use nMsgID and hMsgWnd;
	IMsgCallback *pMsgCallback;
	UINT  nMsgID;
	HWND hMsgWnd;
	tagCB_INFO()
	{
		ZeroMemory(this, sizeof(tagCB_INFO));
	}
}CB_INFO, *LPCB_INFO;

typedef struct tagCB_DATA
{
	void *pContext;
	void *pData;//emCBMsgType_Linecut:pContext, 	emCBMsgType_Alarm:ALARM_INFO, 	emCBMsgType_AVData:PACKET_DATA,  emCBMsgType_Device:DEVICE_INFO, emCBMsgType_GDI: hDC
	tagCB_DATA()
	{
		ZeroMemory(this, sizeof(tagCB_DATA));
	}
}CB_DATA, *LPCB_DATA;

typedef struct tagOPEN_INFO 
{
	int  nDeviceChannel;
	HWND hPlayWnd;
	RECT *pRect;
	emImageSize ImageSize;
	emCodecType CodecType;
	BOOL bNotRecvAVData;
	BOOL bWait;
	emTransProtocol TransProtocol;
	tagOPEN_INFO()
	{
		ZeroMemory(this, sizeof(tagOPEN_INFO));
	}
}OPEN_INFO, *LPOPEN_INFO;

typedef struct tagOPENFILE_INFO 
{
	HWND hPlayWnd;
	char szFileName[MAX_PATH];
	BOOL bNotRecvAVData;
	tagOPENFILE_INFO()
	{
		ZeroMemory(this, sizeof(tagOPENFILE_INFO));
	}
}OPENFILE_INFO, *LPOPENFILE_INFOO;

typedef struct tagDEVICE_INFO 
{
	char  szName[emLen_Name];
	char  szIP[emLen_IP];
	char  szModel[emLen_Name];//型号
	char  szMask[emLen_IP];//掩码
	char  szGateway[emLen_IP];//网关
	char  szMac[emLen_IP];
	long  nID;
	long  nHttpPort; 
	tagDEVICE_INFO()
	{
		ZeroMemory(this, sizeof(tagDEVICE_INFO));
	}
}DEVICE_INFO, *LPDEVICE_INFO;

typedef struct tagALARM_INFO			
{
	emAlarmType AlarmType;	//报警类型,	
	char   szDeviceIP[emLen_IP];//报警设备IP
	short  nChannel;//产生报警的通道   若AlarmType为emAlarm_VideoDetect, emAlarmType_VideoLost和emAlarmType_FaceDetect
	short  nInput;//输入号  若AlarmType为emAlarm_Input
	SYSTEMTIME		tmAlarm;		//产生报警的时间
	tagALARM_INFO()
	{
		ZeroMemory(this, sizeof(tagALARM_INFO));
	}
	BOOL operator == (const tagALARM_INFO& AlarmInfo)
	{
		return AlarmType == AlarmInfo.AlarmType && strcmp(szDeviceIP, AlarmInfo.szDeviceIP) == 0 && nChannel == AlarmInfo.nChannel && nInput == AlarmInfo.nInput;
	}
}ALARM_INFO, *LPALARM_INFO;

typedef struct tagPACKET_DATA
{
	char szFlag[8];
	DWORD dwVersion;
	emFrameType FrameType;
	emCodecType CodecType;
	int nRate;//emFrameType_Video: FrameRate,     emFrameType_Audio: BitRate
	int nWidth;
	int nHeight;
	int nPacketSize;//Total size
	int  nFrameLen;//pData's length
	DWORD dwTimeStamp;
	DWORD dwFrameNO;
	char szTime[32];
	DWORD dwReserved1;
	DWORD dwReserved2;
	char pData[];
	tagPACKET_DATA()
	{
		Init();
	}
	void Init()
	{
		ZeroMemory(this, sizeof(tagPACKET_DATA));
		//modify time:2012-10-17
		//modify author：weicaishi
		strcpy(szFlag, "ZYXData");
		//strcpy_s(szFlag, sizeof(szFlag), "ZYXData");
		dwVersion = MAKELPARAM(1, 1);
	}
}PACKET_DATA,*LPPACKET_DATA;

typedef struct tagOSDINFO
{
	unsigned short nMagicNumber;
 	BOOL bReverseColor;
	char szOSD[33];
	BOOL bOSDShow;
	COLORREF clrOSD;
	COLORREF clrOSDBK;
	BOOL bOSDBKTransparent;
	int nOSDPos;
	BOOL bTimeShow;
	COLORREF clrTime;
	COLORREF clrTimeBK;
	BOOL bTimeBKTransparent;
	int nTimePos;
	RECT rcMask[5];
	COLORREF clrMask;
	BOOL bMask;
	tagOSDINFO()
	{
		ZeroMemory(this, sizeof(tagOSDINFO));
	}
}OSDINFO, *LPOSDINFO;

typedef struct tagFILE_INFO
{ 
	char szFileName[MAX_PATH];
	time_t tBegin;
	time_t tEnd;
	DWORD dwTotalFrame;
	DWORD dwSize;
	tagFILE_INFO()
	{
		ZeroMemory(this, sizeof(tagFILE_INFO));
	}
}FILE_INFO, *LPFILE_INFO;


typedef struct tagIPCDC
{
	HDC hDC;
	int nWidth;
	int nHeight;
	tagIPCDC()
	{
		ZeroMemory(this, sizeof(tagIPCDC));
	}
}IPCDC, *LPIPCDC;

#ifndef __DECODEDEF
#define __DECODEDEF
enum emDisplayType
{
	emDisplayMode_DDRAW,
	emDisplayMode_GDI
};

enum emDecodeDataType
{
	emDecodeDataType_None = 0,
	emDecodeDataType_YUV420,
	emDecodeDataType_RGB32
};

enum emDecodeAVType
{
	emDecodeAVType_Audio,
	emDecodeAVType_Video
};

typedef struct tagDECODE_DATA
{ 
	emDecodeAVType      DecodeAVType;
	emDecodeDataType    DecodeDataType;
	int  			nSize;
	int			nWidth;						// 画面宽，单位为像素，如果是音频数据则为0
	int			nHeight;					// 画面高，单位为像素，如果是音频数据则为0
	DWORD dwTimeStamp;
	int			nFrameRate;					// 编码时产生的图像帧率
	char			*pBuf;
	tagDECODE_DATA()
	{
		ZeroMemory(this, sizeof(tagDECODE_DATA));
	}
}DECODE_DATA, *LPDECODE_DATA;
#endif

#endif
