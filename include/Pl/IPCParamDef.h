#ifndef _ZYX_PARAM_H
#define _ZYX_PARAM_H
#include "IPCHeaderDef.h"
////////////////////////////    �ײ����    ///////////////////////////////
#define HTTP_MAXOVERTIME					1000	//HTTP��ʱʱ��

////////////////////////////  NET�����  /////////////////////////////////
#define NET_IPCAM_RESTART					100		//IPNC��������
#define NET_IPCAM_SET_UNMOUNTSD				102		//ж��SD��
#define NET_IPCAM_SET_TUNEDEFAULTCFG		103		//��ԭͼ��TUNE��Ĭ��ֵ
#define NET_IPCAM_SET_MOUNTSD               104     //��װSD��
#define NET_IPCAM_SET_MULTICAST              105    // �����鲥��ʽ

#define NET_IPCAM_GET_TYPE              200		//��ȡ����ͷ����
#define NET_IPCAM_GET_AUDIOCFG			201		//��ȡ��������
#define NET_IPCAM_GET_IMAGECFG			202		//��ȡ��Ƶ������
#define NET_IPCAM_GET_IOCFG				203		//��ȡIO����
#define NET_IPCAM_GET_MOTIONCFG2			204		//��ȡ�ƶ�������� v2.6
#define NET_IPCAM_GET_NETWORKCFG		205		//��ȡ��������
#define NET_IPCAM_GET_TUNECFG			206		//��ȡͼ��ϸ������
#define NET_IPCAM_GET_DATETIMECFG		207		//��ȡʱ����������
#define NET_IPCAM_GET_USERCFG			208		//��ȡ�û��б�����
#define NET_IPCAM_GET_RECSCHEDULECFG	209		//��ȡ��������
#define	NET_IPCAM_GET_RECDETAIL			210		//��ȡ¼����ϸ����
#define NET_IPCAM_GET_CHANNEL_COUNT     211     //��ȡͨ����
#define NET_IPCAM_GET_MAC               212     //��ȡ�豸��MAC��ַ
#define NET_IPCAM_GET_SOFTWAREVERSION   213     //��ȡ�豸������汾
#define NET_IPCAM_GET_BAUDRATE          214     //��ȡ��̨������
#define NET_IPCAM_GET_PTZPROTOCOLNAME   215     //��ȡ��̨Э����
#define NET_IPCAM_GET_OSDTEXTINFO       216     //��ȡOSD����
#define NET_IPCAM_GET_ALARM             217     //��ȡ������Ϣ
#define NET_IPCAM_GET_WIFICFG			218     //��ȡWIFI��Ϣ
#define NET_IPCAM_GET_3GCFG				219     //��ȡ3G��Ϣ
#define NET_IPCAM_GET_SDUSED			220     //��ȡSDCard�Ĵ洢ʹ��
#define NET_IPCAM_GET_ID						221    //��ȡID 64λ����
#define  NET_IPCAM_GET_DEFAULTUSBDEVICE 222   //��ȡĬ�ϵ�USB�豸
#define  NET_IPCAM_SEARCHWIFI          223     //����wifi
#define NET_IPCAM_GET_OSD                224     //��ȡOSD
#define  NET_IPCAM_GET_DEVELOPVERSION   225  //��ȡ�����汾
#define  NET_IPCAM_GET_HSPLATFORM     226  // ��ȡ����ƽ̨����
#define  NET_IPCAM_GET_TITLEINFO          227   //��ȡTile����
#define  NET_IPCAM_QUERY_PAN_POSITION   228  // ��ȡ��̨ˮƽλ��
#define  NET_IPCAM_QUERY_TILT_POSITION   229   // ��ȡ��̨��бλ��
#define  NET_IPCAM_QUERY_ZOOM_POSITION  230  //��ȡ��̨�䱶λ��
#define NET_IPCAM_GET_MOTIONCFG1			231		//��ȡ�ƶ�������� v1.0
#define  NET_IPCAM_GET_EXTENDIMAGE       232      //��ȡ2Aͼ�����
#define  NET_IPCAM_GET_CAMERALENS       233      //��ȡ�������ͷ����
#define  NET_IPCAM_GET_RS485CGIENABLE  234    //��ȡ�Ƿ�֧��˫��RS485


#define NET_IPCAM_SET_AUDIOCFG			301		//������������
#define NET_IPCAM_SET_IMAGECFG			302		//������Ƶ������
#define NET_IPCAM_SET_IOCFG				303		//����IO����
#define NET_IPCAM_SET_MOTIONCFG2			304		//�����ƶ�������� v2.6
#define NET_IPCAM_SET_NETWORKCFG		305		//������������
#define NET_IPCAM_SET_TUNECFG			306		//����ͼ��ϸ������
#define NET_IPCAM_SET_DATETIMECFG		307		//����ʱ����������
#define NET_IPCAM_SET_USERCFG			308		//�����û��б�����
#define NET_IPCAM_SET_RECSCHEDULEITEM	309		//���õ�������
#define	NET_IPCAM_SET_RECDETAIL			310		//����¼����ϸ����
#define NET_IPCAM_SET_DELSCHEDULEITEM   311     //ɾ����������
#define NET_IPCAM_SET_OUTPUT				312     //�������

#define	NET_IPCAM_SET_ADDUSERCFG		350		//����û�
#define	NET_IPCAM_SET_DELUSERCFG		351		//ɾ���û�
#define	NET_IPCAM_SET_EDITUSERCFG		352		//�޸��û�
#define	NET_IPCAM_SET_FORMATSD			353		//��ʽ��SD��

#define NET_IPCAM_SET_LEFT              400     //��̨����
#define NET_IPCAM_SET_RIGHT             401     //��̨����
#define NET_IPCAM_SET_UP                402     //��̨����
#define NET_IPCAM_SET_DOWN              403     //��̨����
#define NET_IPCAM_SET_STOP              404     //��̨��ֹͣ
#define NET_IPCAM_SET_ROUND             405     //��̨��ѯ

#define NET_IPCAM_SET_PRESET            408     //SET��̨Ԥ��λ
#define NET_IPCAM_GO_PRESET             409     //GOTO��̨Ԥ��λ
#define NET_IPCAM_CL_PRESET             410     //CLEAR��̨Ԥ��λ

#define NET_IPCAM_SET_FOCUS_NEAR        411     //��̨�佹��
#define NET_IPCAM_SET_FOCUS_FAR         412     //��̨�佹Զ
#define NET_IPCAM_SET_ZOOM_WIDE         413      //��̨�䱶Զ������
#define NET_IPCAM_SET_ZOOM_ELE          414     //��̨�䱶�ӽ�����
#define NET_IPCAM_SET_IRIS_OPEN         415     //��̨��Ȧ��С
#define NET_IPCAM_SET_IRIS_CLOSE        416     //��̨�佹
#define NET_IPCAM_SET_PTZPROTOCOLNAME   417     //������̨Э����
#define NET_IPCAM_SET_OSDTEXTINFO       418     //����OSD����
#define NET_IPCAM_SET_BAUDRATE          419     //��̨������
#define NET_IPCAM_SET_AlARM             420     //���ñ�����Ϣ
#define NET_IPCAM_SET_WIFICFG			421     //����WIFI��Ϣ
#define NET_IPCAM_SET_3GCFG				422    //����3G��Ϣ
#define NET_IPCAM_SET_RS485CFG			423     //����RS485��Ϣ
#define NET_IPCAM_SET_UPGRADEDEVICE		424     //�豸�������
#define NET_IPCAM_SET_RS485WRITE		425     //������RS485д����
#define NET_IPCAM_SET_BACKLIGHT		426     //����һ������ⲹ��
#define NET_IPCAM_SET_WITHEBALANCE		427     //����һ�����ƽ��
#define NET_IPCAM_SET_IRMODE	428     //����һ���IR Mode
#define NET_IPCAM_SET_WDRMODE 	429     //����һ���Wdr Mode
#define NET_IPCAM_START_RECORDPATTERN   430  //��ʼ¼�ƻ���Ѳ��
#define NET_IPCAM_STOP_RECORDPATTERN    431  //ֹͣ¼�ƻ���Ѳ��
#define NET_IPCAM_RUN_PATTERN     432               // ���л���Ѳ��
#define NET_IPCAM_SET_OSD              433               //����OSD
#define  NET_IPCAM_SET_AEMODE      434               //����һ���AE Mode
#define  NET_IPCAM_AUTOIRIS            435               //����һ����Զ���Ȧ
#define  NET_IPCAM_AUTOFOCUS       436               //����һ����Զ��۽�
#define NET_IPCAM_SET_SHUTTERSPEED  437          //����һ��������ٶ�
#define  NET_IPCAM_SET_AGC               438             //����һ���AGC
#define  NET_IPCAM_SET_ZOOMSPEED    439         //����һ����ľ۽��ٶ�
#define  NET_IPCAM_SET_SENSUP            440         //����������
#define  NET_IPCAM_SET_HSPLATFORM    441        //���û���ƽ̨����
#define  NET_IPCAM_SET_TITLEINFO          442       //����Tile����
#define  NET_IPCAM_SET_ZERO_POSITION   443    //������̨��λ��
#define  NET_IPCAM_SET_PAN_POSITION    444   //������̨ˮƽλ��
#define  NET_IPCAM_SET_TILT_POSITION    445   //������̨��бλ��
#define  NET_IPCAM_SET_ZOOM_POSITION  446  // ������̨�䱶λ��
#define NET_IPCAM_SET_MOTIONCFG1			447		//�����ƶ�������� v1.0
#define  NET_IPCAM_SET_EXTENDIMAGE       448      //����2Aͼ�����
#define NET_IPCAM_SET_SCREEN_MOVE  449  // ������̨��Ļ��ѡ�ƶ�
#define  NET_IPCAM_SET_CAMERALENS      450     //�����������ͷ����


/////////////////////////////	������ඨ��	///////////////////////////

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
	UINT uYear;		//��
	UINT uMonth;		//��
	UINT uDay;		//��
	UINT uHour;		//ʱ
	UINT uMinute;		//��
	UINT uSecond;		//��
	UINT uTimeFormat;  //ʱ���ʽ
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
	UINT uIndex;	//˳��
	UINT uEnable;	//1:���ã�0������
	UINT uDay;	//��Ч�գ�1~7������һ~�����죬8��ÿ��	
	//��ʼʱ��
	UINT uStartHour;
	UINT uStartMin;
	//����ʱ��
	UINT uStopHour;
	UINT uStopMin;	
	UINT uRecordToSD;	//�Ƿ��¼��SD��
	tagIPNC_SCHEDTIME()
	{
		ZeroMemory(this,sizeof(tagIPNC_SCHEDTIME));
	}
}IPNC_SCHEDTIME,*LIPNC_SCHEDTIME;

typedef struct tagSCHEDTIMELIST
{
	UINT uRecordToFTP;	//�Ƿ��¼��FTP
	UINT uRecordToSD;	//�Ƿ��¼��SD��
	UINT uRecordToSMTP;	//�Ƿ����ʼ�
	IPNC_SCHEDTIME pRSItem[8];
	tagSCHEDTIMELIST()
	{
		ZeroMemory(this,sizeof(tagSCHEDTIMELIST));
	}
}SCHEDTIMELIST,*LPSCHEDTIMELIST;

typedef struct tagMOTIONPARA
{
	DWORD dwFtpAlarm;			//�����Ƿ�����FTP¼��
//	DWORD dwsmtpAlarm;		//�����Ƿ�����SMTP¼��
	DWORD dwSDAlarm;			//�����Ƿ�����SD��¼��

	UINT uEnableMotion;	//0->�������ƶ���⣻1->�����ƶ����
	UINT uSensitivityType;	//0->ʹ�ñ�׼�����ȣ�1->�û��Զ��������ȡ�
	UINT uSensitivityLevel;	//0->Lowest��1->Low��2->Medium��3->High��4->Highest
	UINT uSensitivityValue;	//0~99
	char chMotionBlock[4];	//��3λʮ����������ʾѡȡ������������
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
	UINT uSDFileFormat;			//��¼��SD�����ļ���ʽ
	UINT uSDInsert;				//�Ƿ����SD��?
	UINT uRecordToFTP;			//�Ƿ��¼��FTP
	UINT uRecordToSD;			//�Ƿ��¼��SD��
	UINT uFTPFormat;			//��¼��FTP���ļ���ʽ
	UINT uAviDuration;			//AVI¼���ļ����ʱ��
	UINT uAviFormat;				//AVI¼��ѡ��0��720p,		1:CIP

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
	UINT uAddrCode;			//��ַ��
	UINT uBackLight;         // ���ⲹ�� 0 : OFF  1 : ON
	UINT uWhiteBalance;    //�Զ���ƽ��  0��Auto 1: OFF
	UINT uIRMode;             //IR Mode 0��Day  1��Night 2 : Auto
	UINT uWdrMode;        //Wdr Mode 0��OFF   1��Auto
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



typedef struct tagUSER_INFO	//�����û���Ϣ
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

typedef struct tagUSERLIST_INFO	//�û��б����һ������ͷ��
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
	BYTE bDetect;					// 365���е�ѡ��(I/O)	
	BYTE bCodecNumber;			// 365���е�ѡ��(I)
	BYTE bCodecMenu;				// 365���е�ѡ��(I)
	BYTE bResMenu;				// 365���е�ѡ��(I)
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
