#ifndef HIE_CLIENT_COMMON_H

//////////////////////////////////////////////////////////////////////////
//�궨��
//////////////////////////////////////////////////////////////////////////
//HieClientͨ����Ϣ�����ļ�
#define HIE_CLIENT_COMMON_H

/*!
* @file
*  HieClient_Common.h
* \brief
*  �ͻ���SDK�ӿڽṹ�����Ͷ���
* @author
*  ����
* @date
*  2009��3��13��
* @version
*  1.0.0
*/

//��������
/** \brief ���																						*/
#define IN

/** \brief ����																						*/
#define OUT

/** \brief �����																					*/
#define IN_OUT

/** \brief �û����,ͨ����¼������ȡ																*/
#define HUSER						HANDLE

/** \brief ��ý����,ͨ����ý�����Ӳ�����ȡ														*/
#define HSTREAM						HANDLE

/** \brief ��ʷͨ�����,ͨ����ʷͨ��������ȡ														*/
#define HHISTORY					HANDLE

/** \brief ��ʷ����ѯ���,ͨ����ʷ����ѯ������ȡ													*/
#define HSTREAM_QUERY				HANDLE

/** \brief �ļ���ѯ���,ͨ���ļ���ѯ������ȡ														*/
#define HFILE_QUERY					HANDLE

/** \brief ��ʷ��־��ѯ���,ͨ����ʷ��־��ѯ������ȡ												*/
#define HLOG_QUERY					HANDLE

/** \brief ͸��ͨ�����,ͨ��͸��ͨ��������ȡ														*/
#define HTRANSPARENT				HANDLE

/** \brief �ļ�������,ͨ���ļ����䴴����ȡ														*/
#define HFILE_TRANSFER				HANDLE

/** \brief ���ھ��,������ʾ����ͼ��																*/
#define HWINDOW						HWND

/** \brief ʵʱ�����ͻ���																			*/
#define REAL_STREAM_LIMIT			(8)

/** \brief ���������ͻ���																			*/
#define VOICE_STREAM_LIMIT			(REAL_STREAM_LIMIT)

/** \brief �û�������																				*/
#define USERNAME_LEN				(32)

/** \brief �û����볤��																				*/
#define USERPASS_LEN				(32)

/** \brief IP��ַ����(��������)	xxx.xxx.xxx.xxx														*/
#define IP_ADDRESS_LEN				(16)

/** \brief MAC��ַ����(��������)																	*/
#define MAC_ADDRESS_LEN				(18)

/** \brief MAC��ַ�����Ƴ���																		*/
#define MAC_BINARY_ADDRESS_LEN		(6)

/** \brief �汾��Ϣ����(��������)																	*/
#define VERSION_INFO_LEN			(20)

/** \brief ����ļ�������																			*/
#define MAX_FILENAME				(256)

/** \brief ��������(��������)																		*/
#define DOMAIN_ADDRESS_LEN			(256)

/** \brief ��ַ����(��������)																		*/
#define MAX_ADDRESS_LEN				(DOMAIN_ADDRESS_LEN)

/** \brief Ĭ�ϱ����ֶθ���																			*/
#define DEF_RESERVE_NUM				(3)

/** \brief Ĭ��HTTP���ñ����ֶθ���																	*/
#define DEF_HTTP_CFG_RESERVE_NUM	(16)

/** \brief ������Ϣ��󳤶�											                    			*/
#define MAX_CFG_LEN					(128 * 1024)

/** \brief ������Ϣ��󳤶ȣ�V2�汾��								                    			*/
#define MAX_CFG_LEN_V2				(128 * 1024 * 2)

/** \brief ����¼�֪ͨ������																		*/
#define	MAX_EVENT_NUM				(32)

/** \brief URL�ַ�����																				*/
#define MAX_URL_LEN					(256)

/** \brief ����ʱ�䴮����																			*/
#define DATE_TIME_LEN				(15)

/** \brief MAC��ַ�ַ�����, xx:xx:xx:xx:xx:xx														*/
#define MAC_ADDRESS_LEN				(18)

/** \brief �����������ͨ����																		*/
#define MAX_CHANNEL_NUM				(16)

/** \brief ��������������ͨ����																	*/
#define MAX_DEC_CHANNEL_NUMBER		(64)

/** \brief ����������������																		*/
#define MAX_DISPLAY_SCREEN_NUMBER	(64)

/** \brief �û�����󳤶�																			*/
#define MAX_USER_NAME_LEN			(32)

/** \brief �û�������󳤶�																			*/
#define MAX_USER_PASS_LEN			(32)

/** \brief ��������󳤶�																			*/
#define MAX_FONT_NAME_LEN			(32)

/** \brief �ļ�·����󳤶�																			*/
#define MAX_FILE_PATH_LEN			(256)

/** \brief ����ѯ����ID����																		*/
#define MAX_LINK_ID_QUERY_NUM		(256)

/** \brief ���ſ��Ʋ�������																			*/
#define MAX_PLAY_CONTROL_PARAMETER	(5)

/** \brief ������ͨ����ת��ƵԴ����																			*/
#define MAX_DECODER_CHANNEL_SOURCE	(16)

/** \brief ��Ļ���Ʋ�������																			*/
#define MAX_SCREEN_CONTROL_PARAMETER	(5)

/** \brief LOGOͼƬ��������																			*/
#define MAX_LOGO_PICTURE_PARAMETER	(5)

/** \brief OSD�ı��ַ���																			*/
#define MAX_OSD_TEXT_STRING_LENGTH	(64)

/** \brief RTSPԴ�ַ���																				*/
#define MAX_RTSP_SOURCE_STRING_LENGTH	(128)

//////////////////////////////////////////////////////////////////////////
//��ʷ��֡�궨��
//////////////////////////////////////////////////////////////////////////
/** \brief ��ʷ���쳣����																			*/
#define HISTORY_STREAM_EXCEPTION	(0x01000000)

/** \brief ��ʷ���л�֡�궨��																		*/
#define	HISTORY_STREAM_SWITCH_FRAME	(0x02000000)

/** \brief ��ʷ�������µ�ʱ��Ƭ																		*/
#define HISTORY_STREAM_TIME_JUMP	(0x03000000)

/** \brief ��ʷ������֡�궨��																		*/
#define	HISTORY_STREAM_TIME_END		(0x04000000)

/** \brief ��ʷ�����ݲ�ѯ���																		*/
#define HISTORY_STREAM_TIME_CURR	(0x05000000)


//////////////////////////////////////////////////////////////////////////
//Զ���¼�����
//////////////////////////////////////////////////////////////////////////
/** \brief �����¼�																					*/
#define USEREVENT_ALARM_NOTICE			(0x00000001)

/** \brief ������ʧ,����Ͽ�																		*/
#define USEREVENT_HEARTBEAT_LOST		(0x00000002)

/** \brief ���������ɹ�																				*/
#define USEREVENT_NET_RECOVER			(0x00000004)

/** \brief Զ���û��Ͽ�																				*/
#define USEREVENT_USER_DISCONNECT		(0x00000008)

/** \brief Զ����ý��Ͽ�																			*/
#define USEREVENT_STREAM_DISCONNECT		(0x00000010)

/** \brief Ӳ��������¼�																			*/
#define USEREVENT_DISKGROUP_MANAGE		(0x00000020)

/** \brief ��ʷ���¼�֪ͨ																			*/
#define USEREVENT_HISTORYSTREAM_NOTICE	(0x00000040)

/** \brief ʵʱ����������ID֪ͨ																		*/
#define USEREVENT_REALSTREAM_STARTLINK	(0x00000080)

/** \brief ʵʱ��ֹͣ����ID֪ͨ																		*/
#define USEREVENT_REALSTREAM_STOPLINK	(0x00000100)

/** \brief ��������������ID֪ͨ																		*/
#define USEREVENT_VOICESTREAM_STARTLINK	(0x00000200)

/** \brief ������ֹͣ����ID֪ͨ																		*/
#define USEREVENT_VOICESTREAM_STOPLINK	(0x00000400)

/** \brief ��ʷ�������¼�֪ͨ																		*/
#define USEREVENT_HISTORYSTREAM_DESTROYLINK		(0X00000800)

/** \brief ��ʷ�������¼�֪ͨ																		*/
#define USEREVENT_HISTORYSTREAM_STARTLINK		(0X00001000)

/** \brief ��ʷ��ֹͣ�¼�֪ͨ																		*/
#define USEREVENT_HISTORYSTREAM_STOPLINK		(0X00002000)

/** \brief ��ʷ�������¼�֪ͨ																		*/
#define USEREVENT_HISTORYSTREAM_CREATELINK		(0X00004000)


//////////////////////////////////////////////////////////////////////////
//��ʷ��¼�����ͺ궨��
//////////////////////////////////////////////////////////////////////////

/** \brief ��ͨ¼������																				*/
#define GENERAL_RECORD				(0X00000001)

/** \brief �ֶ�¼������																				*/
#define MANUAL_RECORD				(0X00000002)

/** \brief ����¼������																				*/
#define ALARM_RECORD				(0X00000004)

/** \brief �ƶ�¼������																				*/
#define MOTION_RECORD				(0X00000008)

/** \brief ����¼������																				*/
#define ALL_STREAM_MEDIA			(GENERAL_RECORD | MANUAL_RECORD | MOTION_RECORD | ALARM_RECORD)


//////////////////////////////////////////////////////////////////////////
//ö��
//////////////////////////////////////////////////////////////////////////

/*!
*  \enum	eSerialType
*  \brief	��������
*/
typedef enum eSerialType
{
	eTTY232 = 0,										/*!< RS232����                               */
	eTTY485,											/*!< RS485����                               */
	eTTY422,											/*!< RS422����                               */
}eSerialType;

/*!
*  \enum	eAlertType
*  \brief	�������쳣��������
*/
typedef enum eAlertType
{
	ALERT_ALARMIN,										/*!< ��������								*/
	ALERT_MOTION,										/*!< �ƶ����								*/
	ALERT_ENCODEERROR,									/*!< �����쳣								*/
	ALERT_DISKERROR,									/*!< Ӳ�̴���								*/
	ALERT_DISKFULL,										/*!< Ӳ����									*/
	ALERT_IPCONFLICT,									/*!< IP��ͻ									*/
	ALERT_ILLEGEACCESS,									/*!< �Ƿ�����								*/
	ALERT_RETICLEDISCONNECT,							/*!< ���߶�									*/
	ALERT_VIDEOLOST,									/*!< ��Ƶ��ʧ								*/
	ALERT_VIDEOEXCEPTION,								/*!< ��Ƶ�쳣								*/
	ALERT_DISKGROUP_ERROR,								/*!< �����쳣								*/
}eAlertType;

/*!
*  \enum	eHieClientError
*  \brief	������
*/
typedef enum eHieClientError
{
	eErrorNone						= 0,				/*!< �޴���									*/
	eErrorFailed,										/*!< ʧ��									*/
	eErrorNoInitializeSDK,								/*!< δ��ʼ��SDK							*/
	eErrorHandle,										/*!< �������								*/
	eErrorParameter,									/*!< ��������								*/
	eErrorBufferNoEnough,								/*!< ������̫С								*/
	eErrorMemory,										/*!< �ڴ����								*/
	eErrorSystemFailed,									/*!< ����ϵͳ���ش���						*/
	eErrorNoIdleResource,								/*!< �޿�����Դ								*/
	eErrorTimeOut,										/*!< ��ʱ����								*/
	eErrorFunctionVersionLow,							/*!< ���ܰ汾���ڷ�����						*/
	eErrorFunctionVersionHigh,							/*!< ���ܰ汾���ڷ�����						*/
	eErrorTaskNoRun,									/*!< ����δ����								*/
	eErrorAlreadyRun,									/*!< �ظ�����								*/
	eErrorConnectFailed,								/*!< ����ʧ��								*/
	eErrorSessionDisconnect,							/*!< ���ӶϿ�								*/
	eErrorCommandSendFailed,							/*!< �����ʧ��							*/
	eErrorServerReject,									/*!< �������ܾ�								*/
	eErrorInvalidUser,									/*!< �û�����Ƿ�							*/
	eErrorCallFail,										/*!< Զ�̵���ʧ��							*/
	eErrorCallReplyError,								/*!< Զ�̵���Ӧ�����						*/
	
	eErrorUserName,										/*!< �û�������								*/
	eErrorUserPass,										/*!< �û��������							*/
	eErrorIPLimited,									/*!< �û�IP����								*/
	eErrorMACLimited,									/*!< ��MAC����								*/
	eErrorUserNumOverflow,								/*!< ��½�û�����							*/
	eErrorUserHeartBeat,								/*!< �û���������ʧ��						*/
	eErrorGetConfigurationPort,							/*!< ��½ʱ��ȡ�˿�������Ϣʧ��				*/
	eErrorServiceReseting,								/*!< �������������							*/
	eErrorInvalidURL,									/*!< ��Ч��URL��ַ							*/

	eErrorNoSupportCommand,								/*!< ��֧�ֵ�����	                        */
	eErrorNotImplement,									/*!< δʵ��									*/
	eErrorUnserialize,									/*!< �����л�ʧ��							*/

	//Ϊ�����豸��������Ϣ����������ƥ�䣬������Ϣ�����붨�����£�(�����Ĵ������������涨��)
	eErrorMODULE_ID = 16000,
	eErrorUNSUPPORTED_MAJORTYPE,						/*!< ��֧�ֵ���������						*/
	eErrorUNSUPPORTED_MINORTYPE,						/*!< ��֧�ֵĴ�������						*/
	eErrorSTRUCT_UNVALID,								/*!< �ṹ����Ч								*/
	eErrorSTRUCT_READONLY,								/*!< �ṹ����ֻ����							*/
	eErrorBUF_SMALL,									/*!< ������̫С								*/
	eErrorSTRUCT_UNSUPPORTED,							/*!< ϵͳ��֧�ָýṹ������û��ȡ			*/
	eErrorNO_RIGHT,										/*!< û��Ȩ��								*/
	eErrorPARAM_OVERFLOW,								/*!< �������								*/
	eErrorCALLSDK_FAIL,									/*!< ����SDKʧ��							*/

}eHieClientError;

/*!
*  \enum	eClientSDKAttributeType
*  \brief	�ͻ���SDK��������
*/
typedef enum eClientSDKAttributeType
{
	eClientSDKAttributeTypeBegin			=	0,		/*!< ��ʼֵ									*/
	eAttributeConnectTimeOut,							/*!< ���ӳ�ʱʱ��							*/
	eAttributeCommandTimeOut,							/*!< ������Ƴ�ʱʱ��						*/
	eAttributeMediaTimeOut,								/*!< ý����Ƴ�ʱʱ��						*/
	eClientSDKAttributeTypeEnd,							/*!< ����ֵ									*/
}eClientSDKAttributeType;

/*!
*  \enum	eMediaFunctionType
*  \brief	ý�幦������
*/
typedef enum eMediaFunctionType
{
	eMediaFunctionTypeBegin			=	0,				/*!< ��ʼֵ									*/
	eMediaFunctionRealStream,							/*!< ʵʱ��									*/
	eMediaFunctionVoiceStream,							/*!< ������									*/
	eMediaFunctionHistoryStream,						/*!< ��ʷ��									*/
	eMediaFunctionTransparent,							/*!< ͸��ͨ��								*/
	eMediaFunctionFileUpload,							/*!< �ļ��ϴ�								*/
	eMediaFunctionFileDownload,							/*!< �ļ�����								*/
	eMediaFunctionTypeEnd,								/*!< ����ֵ									*/
}eMediaFunctionType;

/*!
*  \enum	eStreamTransferMode
*  \ingroup DS_StreamTransferMode
*  \brief	�����䷽ʽ
*/
typedef enum eStreamTransferMode
{
	eStreamTransferModeBegin		=	0,				/*!< ��ʼֵ									*/
	eGeneralTCP,										/*!< ��ͨ��TCP								*/
	eGeneralRTP,										/*!< ��ͨ��RTP								*/
	eStreamTransferModeEnd,								/*!< ����ֵ									*/
}eStreamTransferMode;

/*!
*  \enum	eRTPStreamTransferMode
*  \ingroup DS_RTPStreamTransferMode
*  \brief	RTP�����䷽ʽ
*/
typedef enum eRTPStreamTransferMode
{
	eRTPStreamTransferModeBegin		=	0,				/*!< ��ʼֵ									*/
	eRTPGeneralTCP,										/*!< ��ͨ��TCP								*/
	eRTPGeneralUDP,										/*!< ��ͨ��UDP								*/
	eRTPStreamTransferModeEnd,								/*!< ����ֵ									*/
}eRTPStreamTransferMode;

/*!
*  \enum	eStreamMediaType
*  \ingroup DS_StreamMediaType
*  \brief	��ý������
*/
typedef enum eStreamMediaType
{
	eStreamMediaTypeBegin			=	0,				/*!< ��ʼֵ									*/
	eMainVideoAndSound,									/*!< ����������Ƶ							*/
	eMainVideo,											/*!< ��������Ƶ								*/
	eMainSound,											/*!< ��������Ƶ								*/
	eAssistVideo,										/*!< ��������Ƶ								*/
	eAssistHDVideo,										/*!< ������������Ƶ							*/
	eStreamMediaTypeEnd,								/*!< ����ֵ									*/
}eStreamMediaType;

/*!
*  \enum	eHistoryStreamType
*  \ingroup DS_HistoryStreamType
*  \brief	��ʷ������
*/
typedef enum eHistoryStreamType
{
	eHistoryStreamTypeBegin = 0,						/*!< ��ʼֵ                                 */
	eAllStreamMedia,									/*!< ������ý��                             */
	eGeneralRecord,										/*!< ��ͨ¼��                               */
	eManualRecord,										/*!< �ֶ�¼��                               */
	eMotionRecord,										/*!< �ƶ�¼��                               */
	eAlarmRecord,										/*!< ����¼��                               */
	eHistoryStreamTypeEnd,								/*!< ����ֵ                                 */
}eHistoryStreamType;

/*!
*  \enum	eFileType
*  \brief	�ļ�����
*/
typedef enum eFileQueryType
{
	eFileTypeBegin			=	0,						/*!< ��ʼֵ									*/
	eUpgrade,											/*!< ������									*/
	eImage,												/*!< ͼƬ�ļ�								*/
	ePtzProtocolFile,									/*!< ��̨Э��								*/
	eFileTypeEnd,										/*!< ����ֵ									*/
}eFileQueryType;

/*!
*  \enum	eHistoryStreamOperation
*  \brief	��ʷ������,��ʷ��֧�ֶ�ͨ��ͬʱ���ͬʱ����
*/
typedef enum eHistoryStreamOperation
{
	eHistoryStreamOperationBegin	=	0,				/*!< ��ʼֵ									*/
	eHistoryStreamAddChannel,							/*!< �����ʷͨ��							*/
	eHistoryStreamDelChannel,							/*!< ɾ����ʷͨ��							*/
	eHistoryStreamOperationEnd,							/*!< ����ֵ									*/
}eHistoryStreamOperation;

/*!
*  \enum	eHistoryStreamControl
*  \brief	��ʷ������
*/
typedef enum eHistoryStreamControl
{
	eHistoryStreamControlBegin		=	0,				/*!< ��ʼֵ									*/
	eHistoryPlay,										/*!< ����									*/
	eHistoryStop,										/*!< ֹͣ									*/
	eHistoryStreamControlEnd,							/*!< ����ֵ									*/
}eHistoryStreamControl;

/*!
*  \enum	eDecodeMode
*  \brief	���뷽ʽ
*/
typedef enum eDecodeMode
{
	eDecodeModeBegin				=	0,				/*!< ��ʼֵ									*/
	eSoftDecode,										/*!< �������								*/
	eHardDecode,										/*!< Ӳ���뿨����							*/
	eMatrixDecode,										/*!< ������뿨����							*/
	eDecodeModeEnd,										/*!< ����ֵ									*/
}eDecodeMode;

/*!
*  \enum	eDecodeShowMode
*  \brief	���뷽ʽ
*/
typedef enum eDecodeShowMode
{
	eDecodeShowModeBegin			=	0,				/*!< ��ʼֵ									*/
	eNormalMode,										/*!< ��ͨģʽ								*/
	eOverlayMode,										/*!< ����ģʽ,һ̨�ͻ���ͬһʱ��ֻ������һ��*/
	eDecodeShowModeEnd,									/*!< ����ֵ									*/
}eDecodeShowMode;

/*!
*  \enum	eDecodeEffectType
*  \brief	����Ч������
*/
typedef enum eDecodeEffectType
{
	eDecodeEffectTypeBegin			=	0,				/*!< ��ʼֵ									*/
	eBrightValue,										/*!< ����									*/
	eContrastValue,										/*!< �Աȶ�									*/
	eSaturationValue,									/*!< ���Ͷ�									*/
	eHueValue,											/*!< ɫ��									*/
	eQualityValue,										/*!< ����									*/
	eDecodeEffectTypeEnd,								/*!< ����ֵ									*/
}eDecodeEffectType;

/*!
*  \enum	eSoftDecodeEffectValue
*  \brief	�����Ч��ֵ
*/
typedef enum eSoftDecodeEffectValue
{
	eSoftDecodeEffectValueBegin		=	0,				/*!< ��ʼֵ									*/
	eSoftDecodeMinEffectValue		=	1,				/*!< ��СЧ��ֵ								*/
	eSoftDecodeNormalEffectValue	=	8,				/*!< ����Ч��ֵ								*/
	eSoftDecodeMaxEffectValue		=	17,				/*!< ���Ч��ֵ								*/
	eSoftDecodeLowQualityValue,							/*!< ������									*/
	eSoftDecodeHighQualityValue,						/*!< ������									*/
	eSoftDecodeEffectValueEnd,							/*!< ����ֵ									*/
}eSoftDecodeEffectValue;

/*!
*  \enum	eMatrixDecodeEffectValue
*  \brief	�������Ч��ֵ
*/
typedef enum eMatrixDecodeEffectValue
{
	eMatrixDecodeEffectValueBegin	=	0,				/*!< ��ʼֵ									*/
	eMatrixDecodeMinEffectValue		=	1,				/*!< ��СЧ��ֵ								*/
	eMatrixDecodeNormalEffectValue	=	8,				/*!< ����Ч��ֵ								*/
	eMatrixDecodeMaxEffectValue		=	15,				/*!< ���Ч��ֵ								*/
	eMatrixDecodeLowQualityValue,						/*!< ������									*/
	eMatrixDecodeHighQualityValue,						/*!< ������									*/
	eMatrixDecodeEffectValueEnd,						/*!< ����ֵ									*/
}eMatrixDecodeEffectValue;



/*!
*  \enum	eTaskControl
*  \brief	�������
*/
typedef enum eTaskControl
{
	eTaskControlBegin				=	0,				/*!< ��ʼֵ									*/
	eTaskStart,											/*!< ��������								*/
	eTaskStop,											/*!< ����ֹͣ								*/
	eTaskSetSpeed,										/*!< ��ʷ�����ʱ�����ÿ���ٶ�				*/
	eTaskControlEnd,									/*!< ����ֵ									*/
}eTaskControl;

/*!
*  \enum	eOperationType
*  \brief	��������
*/
typedef enum eOperationType
{
	eOperationTypeBegin			=	0,					/*!< ��ʼֵ									*/
	eOperationGet,										/*!< ��ȡ����								*/
	eOperationSet,										/*!< ���ò���								*/
	eOperationTypeEnd,									/*!< ����ֵ									*/
}eOperationType;

/*!
*  \enum	eVoiceStreamDisposeMode
*  \brief	����������ʽ
*/
typedef enum eVoiceStreamDisposeMode
{
	eVoiceStreamDisposeModeBegin=	0,					/*!< ��ʼֵ									*/
	eVoiceStreamDecodePlay,								/*!< ���벥��								*/
	eVoiceStreamTransport,								/*!< ����									*/
	eVoiceStreamDisposeModeEnd,							/*!< ����ֵ									*/
}eVoiceStreamDisposeMode;

/*!
*  \enum	eVoiceStreamSource
*  \brief	��������Դ
*/
typedef enum eVoiceStreamSource
{
	eVoiceStreamSourceBegin		=	0,					/*!< ��ʼֵ									*/
	eVoiceStreamCapture,								/*!< ����									*/
	eVoiceStreamReceive,								/*!< ����									*/
	eVoiceStreamSourceEnd,								/*!< ����ֵ									*/
}eVoiceStreamSource;

/*!
*  \enum	eStreamImageFormat
*  \brief	��ý��ͼƬ��ʽ
*/
typedef enum eStreamImageFormat
{
	eStreamImageFormatBegin		=	0,					/*!< ��ʼֵ									*/
	eStreamImageBitmap,									/*!< λͼ									*/
	eStreamImageFormatEnd,								/*!< ����ֵ									*/
}eStreamImageFormat;


/*!-
*  \enum	eFileLockOperationCode
*  \brief	�ļ�������
*/
typedef enum eFileLockOperationCode
{
	eUnlockFile	=	0,									/*!< ����									*/
	eLockFile,											/*!< ����									*/
}eFileLockOperationCode;


/*!
*  \enum	eImageFormat
*  \brief	ץͼ�ļ���ʽ
*/
typedef enum eImageFormat
{
	eImageFormatBegin = 0,								/*!< ��ʼֵ									*/
	eBmpFormat,											/*!< λͼ��ʽ								*/
	eJpgFormat,											/*!< jpg��ʽ								*/
	eImageFormatEnd,									/*!< ����ֵ									*/
}eImageFormat;

/*!
*  \enum	eQueryStatus
*  \brief	��ѯ״̬
*/
typedef enum eQueryStatus
{
	eQueryOK = 0,										/*!< ��ѯ�ɹ�								*/
	eQueryFailed,										/*!< ��ѯʧ��								*/
	eQueryBusy,											/*!< ��ѯæ									*/
	eQueryFinished,										/*!< ��ѯ����								*/
}eQueryStatus;

/*!
*  \enum	eRemoteDeviceControl
*  \brief	Զ���豸����
*/
typedef enum eRemoteDeviceControl
{
	eRemoteDeviceControlBegin = 0,						/*!< ��ʼֵ									*/
	eDeviceReboot,										/*!< ������									*/
	eDeviceHalt,										/*!< �ػ�									*/
	eDeviceStandby,										/*!< ����									*/
	eDeviceSetDefault,									/*!< �ָ�ϵͳĬ��							*/
	eDeviceSendTestEmail,								/*!< ���Ͳ����ʼ�							*/
    eDeviceSetDefense,                                  /*!< ����                                   */
    eDeviceUnsetDefense,                                /*!< ����                                   */
	eRemoteDeviceControlEnd,							/*!< ����ֵ									*/
}eRemoteDeviceControl;

/*!
*  \enum	eDiskGroupType
*  \brief	 ��������
*/
typedef enum eDiskGroupType
{
	eDiskGroupTypeBegin			= 0,					/*!< ��ʼֵ									*/
	eDiskGroupNormal,									/*!< ��ͨ����								*/
	eDiskGroupAlarm,									/*!< ��������								*/
	eDiskGroupRedundance,				    			/*!< ��������								*/
	eDiskGroupBackup,			       	    			/*!< ��������								*/
	eDiskGroupTypeEnd,									/*!< ����ֵ									*/
}eDiskGroupType;

/*!
*  \enum	eDiskGroupOperation
*  \brief	Ӳ���������
*/
typedef enum eDiskGroupOperation
{
	eDiskGroupOperationBegin = 0,						/*!< ��ʼֵ									*/
	eUnMountDisk,										/*!< ж��Ӳ��								*/
	eCreateNewPartition,								/*!< �����·���								*/
	eDeletePartition,									/*!< ɾ������								*/
	eFormatPartition,									/*!< ��ʽ������								*/
	eDiskGroupKeepTime,									/*!< ���鱣������ʱ��						*/
	eDiskGroupBindChannel,								/*!< �����ͨ��							*/
	eDiskGroupAddPartition,								/*!< ��ӷ���������							*/
	eDiskGroupDelPartition,								/*!< �ӷ���ɾ������							*/
	eInitializeDisk,									/*!< ��ʼ��Ӳ��								*/
	eDiskGroupOperationEnd,								/*!< ����ֵ									*/
}eDiskGroupOperation;

/*!
*  \enum	eTransferFileType
*  \brief	�����ļ�����
*/
typedef enum eTransferFileType
{
	eTransferFileTypeBegin		=	0,					/*!< ��ʼֵ									*/
	eFileSystemUpdate,									/*!< �������ļ�								*/
	ePtzProtocol,										/*!< ��̨Э���ļ�							*/
	eDeviceConfig,										/*!< �豸�����ļ�							*/
	ePicture,											/*!< ͼƬ�ļ�								*/
	eTransferFileTypeEnd,								/*!< ����ֵ									*/
}eTransferFileType;

typedef enum eDataPacketType
{
	eDataTypeBegin = 0,
	eDataRequest,
	eDataPacket,
	eDataReply,
	eDataFinished,
	eDataCanceled,
	eDataError,
	eWriteError,
	eFlashFull,
	eFileCheckError,
	eFileAliveKeep,
	eDataTypeEnd,
}eDataPacketType;

/*!
*  \enum	eTaskStatus
*  \brief	����״̬
*/
typedef enum eTaskStatus
{
	eTaskStatusBegin				=	0,				/*!< ��ʼֵ									*/
	eTaskStatusNone,									/*!< ������״̬								*/
	eTaskStatusInitialize,								/*!< �����ʼ��								*/
	eTaskStatusDestroy,									/*!< ��������								*/
	eTaskStatusStart,									/*!< ��������								*/
	eTaskStatusStop,									/*!< ����ֹͣ								*/
	eTaskStatusRun,										/*!< ����������								*/
	eTaskStatusRecover,									/*!< ����ָ�								*/
	eTaskStatusEnd,										/*!< ����ֵ									*/
}eTaskStatus;

/*!
*  \enum	eVoiceMode
*  \ingroup DS_VoiceMode
*  \brief	���������ģʽ
*/
typedef enum eVoiceMode
{
	eVoiceModeBegin			=	0,				/*!< ��ʼֵ									*/
	eVoiceG726,									/*!< G726�����ģʽ							*/
	eVoiceG711U,									/*!< G711U�����ģʽ                        */
	eVoiceMPEG4AAC,								/*!< MPEG4 AAC�����ģʽ                    */
	eVoiceAutoDiscern,									/*!< �Զ�ʶ������ģʽ						*/
	eVoiceModeEnd,									/*!< ����ֵ									*/
}eVoiceMode;

/*!
*  \enum	eVideoCodecMode
*  \ingroup DS_VideoCodecMode
*  \brief	��Ƶ�����ģʽ
*/
typedef enum eVideoCodecMode
{
	eVideoCodecModeBegin			=	0,				/*!< ��ʼֵ									*/
	eVideoCodecH264,									/*!< ��׼H264�����ģʽ						*/
	eVideoCodecHYMpeg4,									/*!< HYMpeg4�����ģʽ                      */
	eVideoCodecHYH264,									/*!< HYH264�����ģʽ						*/
	eVideoCodecAutoDiscern,								/*!< �Զ�ʶ������ģʽ						*/
	eVideoCodecModeEnd,									/*!< ����ֵ									*/
}eVideoCodecMode;

/*!
*  \enum	eFileTransferControl
*  \brief	�ļ��������
*/
typedef enum eFileTransferControl
{
	eFileTransferControlBegin		=	0,				/*!< ��ʼֵ									*/
	eFileTransferStart,									/*!< �����ļ�ת��							*/
	eFileTransferStop,									/*!< ֹͣ�ļ�����							*/
	eFileTransferControlend,							/*!< ��ʼֵ									*/
}eFileTransferControl;

/*!
*  \enum	ePTZControlCodeType
*  \brief	PTZ��̨����������
*/
typedef enum ePTZControlCmdCode
{
    ePTZControlCodeAllOff               = 0	,			//��	�ر�(��Ͽ�)���п���	(Param1: ��Ч, Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)		
    ePTZControlCodeCameraPower          = 1	,			//��	��ͨ�������Դ		(Param1: 1-��ʼ/0-ֹͣ, Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeLightPower           = 2	,			//��	��ͨ�ƹ��Դ			(Param1: 1-��ʼ/0-ֹͣ, Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeWiper                = 3	,			//��	��ͨ��ˢ����			(Param1: 1-��ʼ/0-ֹͣ, Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeFans                 = 4	,			//��	��ͨ���ȿ���			(Param1: 1-��ʼ/0-ֹͣ, Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeHeater               = 5	,			//��	��ͨ����������		(Param1: 1-��ʼ/0-ֹͣ, Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeAuxEquiment          = 6	,			//��	��ͨ�����豸����		(Param1: 1-��ʼ/0-ֹͣ, Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)

    ePTZControlCodeStopContinue         = 10,			//��	ֹͣ����������(��ͷ,��̨)����	(Param1: ��Ч, Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeZoomIn               = 11,			//��	������(���ʱ��)		(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeZoomOut              = 12,			//��	�����С(���ʱ�С)		(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeFocusNear            = 13,			//��	����ǰ��				(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeFocusFar             = 14,			//��	������				(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeApertureUp           = 15,			//��	��Ȧ����				(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeApertureDown         = 16,			//��	��Ȧ��С				(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeAutoZoom             = 17,			//��	���Զ�����(�Զ�����)	(Param1: 1-��ʼ/0-ֹͣ, Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeAutoFocus            = 18,			//��	���Զ�����			(Param1: 1-��ʼ/0-ֹͣ, Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeAutoAperture         = 19,			//��	���Զ���Ȧ			(Param1: 1-��ʼ/0-ֹͣ, Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeUp                   = 21,			//��	��̨����				(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeDown                 = 22,			//��	��̨�¸�				(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeLeft                 = 23,			//��	��̨��ת				(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeRight                = 24,			//��	��̨��ת				(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeUpLeft               = 25,			//��	��̨��������ת		(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeUpRight              = 26,			//��	��̨��������ת		(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeDownLeft             = 27,			//��	��̨�¸�����ת		(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeDownRight            = 28,			//��	��̨�¸�����ת		(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeAutoLeftRight        = 29,			//��	��̨�����Զ�ɨ��		(Param1: 1-��ʼ/0-ֹͣ, Param2: �ٶ� [0-10,0��ʾĬ���ٶ�,1-10��ʾ�ٶȼ���], Param3: ��Ч, Param4: ��Ч)

	ePTZControlCodePresetSet            = 40,			//��	����Ԥ�õ�			(Param1: Ԥ�õ����[>=0], Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodePresetClear          = 41,			//��	���Ԥ�õ�			(Param1: Ԥ�õ����[>=0], Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodePresetCall           = 42,			//��	ת��Ԥ�õ�			(Param1: Ԥ�õ����[>=0], Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)

    ePTZControlCodeCuriserSetStart      = 51,			//��	����Ѳ������			(Param1: Ѳ��·�ߺ�[>=0], Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeCuriserSetStop       = 52,			//��	�ر�Ѳ������			(Param1: Ѳ��·�ߺ�[>=0], Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeCuriserAddPreset     = 53,			//��	��Ԥ�õ����Ѳ������	(Param1: Ѳ��·�ߺ�[>=0], Param2: Ԥ�õ����[>=0], Param3: ͣ��ʱ��[��,>=0], Param4: Ѳ���ٶ�[1-10])
    ePTZControlCodeCuriserRunStart      = 54,			//��	��ʼѲ��				(Param1: Ѳ��·�ߺ�[>=0], Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeCuriserRunStop       = 55,			//��	ֹͣѲ��				(Param1: Ѳ��·�ߺ�[>=0], Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)

    ePTZControlCodeTraceSetStart        = 61,			//��	�����켣����			(Param1: �켣��[>=0], Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeTraceSetStop         = 62,			//��	�رչ켣����			(Param1: �켣��[>=0], Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeTraceRunStart        = 63,			//��	��ʼ�켣				(Param1: �켣��[>=0], Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeTraceRunStop         = 64,			//��	ֹͣ�켣				(Param1: �켣��[>=0], Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)
    ePTZControlCodeSystemReset          = 99,			//��	ϵͳ��λ				(Param1: ��Ч, Param2: ��Ч, Param3: ��Ч, Param4: ��Ч)

}ePTZControlCmdCode;

/*!
*  \enum	eHistoryLogMajorType
*  \brief	��־��ѯ������
*/
typedef enum eHistoryLogMajorType
{
	eHistoryLogMajorTypeBegin	=	0,					/*!< ��ʼֵ									*/
	eHistoryLogSysOperation,							/*!< ϵͳ������־							*/
	eHistoryLogSysSetting,								/*!< ϵͳ������־							*/
	eHistoryLogRecord,									/*!< ¼����־								*/
	eHistoryLogUserManage,								/*!< �û�������־							*/
	eHistoryLogAlarm,									/*!< �豸������־							*/
	eHistoryLogException,								/*!< �豸�쳣��־							*/
	eHistoryLogStorage,									/*!< �洢������־							*/
	eHistoryLogMajorAll,								/*!< ����������								*/
	eHistoryLogMajorTypeEnd,							/*!< ����ֵ									*/
}eHistoryLogMajorType;

/*!
*  \enum	eHistoryLogMinorType
*  \brief	��־��ѯ������
*/
typedef enum eHistoryLogMinorType
{
	eHistoryLogSysOpAll				= 0,				/*!< ϵͳ������������						*/
	eHistoryLogSysOpUpdate,								/*!< ϵͳ����								*/
	eHistoryLogSysOpPTZControl,							/*!< ��̨����								*/
	eHistoryLogSysOpIllShutdown,						/*!< �Ƿ��ػ�								*/
	eHistoryLogSysOpPowerOff,							/*!< �����ػ�								*/
	eHistoryLogSysOpPowerOn,							/*!< ����									*/
	eHistoryLogSysOpRemoteReset,						/*!< Զ������								*/
	eHistoryLogSysOpClearAlarm,							/*!< ����									*/

	eHistoryLogSysSetAll			= 100,				/*!< ϵͳ������������						*/
	eHistoryLogSysSetTimeSetting,						/*!< ¼��ʱ�������							*/
	eHistoryLogSysSetCommonSetting,						/*!< ��ͨ����								*/
	eHistoryLogSysSetCodecSetting,						/*!< ��������								*/
	eHistoryLogSysSetNetSetting,						/*!< ��������								*/
	eHistoryLogSysSetServerSetting,						/*!< ����������								*/
	eHistoryLogSysSetMotionSetting,						/*!< �ƶ��������							*/
	eHistoryLogSysSetPTZSetting,						/*!< ��̨����������							*/
	eHistoryLogSysSetDefaultSetting,					/*!< �ָ�Ĭ������							*/
	eHistoryLogSysSetDisplayDeviceSetting,				/*!< ������ʾ�豸����						*/
	eHistoryLogSysSetDisplayModeSetting,				/*!< ��ʾģʽ����							*/
	eHistoryLogSysSetPictureSetting,					/*!< ͼ����ɫ����							*/
	eHistoryLogSysSetMaintainSetting,					/*!< �Զ�ά������							*/
	eHistoryLogSysSetAlarmOutSetting,					/*!< �����������							*/
	eHistoryLogSysSetAlarmInSetting,					/*!< ������������							*/
	eHistoryLogSysSetCustomizeFunction,					/*!< ���ܶ�������							*/
	eHistoryLogSysSetImportPTZProtocol,					/*!< ������̨Э��							*/
	eHistoryLogSysSetExportPTZProtocol,					/*!< ������̨Э��							*/
	eHistoryLogSysSetImportSettings,					/*!< �����������							*/
	eHistoryLogSysSetExportSettings,					/*!< �����������							*/
	eHistoryLogSysSetExceptionSetting,					/*!< �쳣��������							*/

	eHistoryLogRecordAll			= 200,				/*!< ¼�������������						*/
	eHistoryLogRecordStartManual,						/*!< �����ֶ�¼��							*/
	eHistoryLogRecordStartAuto,							/*!< �����Զ�¼��							*/
	eHistoryLogRecordStop,								/*!< ֹͣ����								*/

	eHistoryLogUserAll				= 300,				/*!< �û�������������						*/
	eHistoryLogUserAdd,									/*!< ����û�								*/
	eHistoryLogUserDelete,								/*!< ɾ���û�								*/
	eHistoryLogUserEdit,								/*!< �޸��û�����							*/
	eHistoryLogUserLogin,								/*!< �û���¼								*/
	eHistoryLogUserLogout,								/*!< �û��ǳ�								*/

	eHistoryLogAlarmAll				= 400,				/*< ������������							*/
	eHistoryLogAlarmMotionStart,						/*!< �ƶ���⿪ʼ							*/
	eHistoryLogAlarmMotionStop,							/*!< �ƶ�������							*/
	eHistoryLogAlarmInputAlarm,							/*!< ���뱨����ʼ							*/

	eHistoryLogExceptionAll			= 500,				/*!< �쳣��������							*/
	eHistoryLogExceptionIpConflict,						/*!< IP��ͻ									*/
	eHistoryLogExceptionHardDiskFull,					/*!< Ӳ����									*/
	eHistoryLogExceptionHardDiskError,					/*!< Ӳ�̳���								*/
	eHistoryLogExceptionIllegalAccess,					/*!< �Ƿ�����								*/
	eHistoryLogExceptionSignalLost,						/*!< �źŶ�ʧ								*/
	eHistoryLogExceptionSignalRecover,					/*!< �źŻָ�								*/
	eHistoryLogExceptionNetDisconnect,					/*!< ���߶�									*/

	eHistoryLogStorageAll			= 600,				/*!< �洢������������						*/
	eHistoryLogStorageFormatPartition,					/*!< ������ʽ��								*/
	eHistoryLogStorageAddPartition,						/*!< ��ӷ���								*/
	eHistoryLogStorageRemovePartition,					/*!< ɾ��������								*/
	eHistoryLogStorageUnmountDisk,						/*!< ж��Ӳ��								*/
	eHistoryLogStorageDiskGroupOperation,				/*!< ���̷������							*/
}eHistoryLogMinorType;

/*!
*  \enum	eFrameType
*  \ingroup DS_FrameType
*  \brief	֡����
*/
typedef enum eFrameType
{
	eFrameError								= 0x0000,
	eFrameIFrames							= 0x0001,	//��������I֡
	eFramePFrames							= 0x0002,
	eFrameBPFrames 							= 0x0020,
	eFrameBBPFrames 						= 0x0004,
	eFrameAudioFrames 						= 0x0008,
	eFrameQCIFIFrames						= 0x0010,	//QCIF��I֡
	eFramePktSQCIFIFrames 					= 0x0011,	//����������I֡
	eFrameQCIFPFrames 						= 0x0040,
	eFramePktSQCIFPFrames 					= 0x0041,	//����������P֡
	eFrameBIFrames							= 0x0090,
	eFrameBBIFrames							= 0x00C0,
	eFrameSysHeader							= 0x0080,	//������ϵͳͷ
	eFramePktSysHeaderAux					= 0x0081,	//������ϵͳͷ
	eFramePktSysHeaderHDAux					= 0x0082,	//����������ϵͳͷ
	eFrameSFrames 							= 0x0200,
	eFrameDspStatus 						= 0x0100,
	eFrameAimDetection						= 0x0400,
	eFrameOrigImage							= 0x0800,
	eFrameMotionDetection 					= 0x1000,
}eFrameType;

/*!
*  \enum	ePanelKeyBoardCodeType
*  \brief	������ֵ����
*/
typedef enum ePanelKeyBoardCodeType
{
	ePanelKeyBoardTypeBegin						= 0x0,		/*!< ��ʼֵ									*/
	ePanelKeyBoardCode_0						= 0x1,		/*!< ��Ӧ��:0								*/
	ePanelKeyBoardCode_1						= 0x2,		/*!< ��Ӧ��:1								*/
	ePanelKeyBoardCode_2 						= 0x3,		/*!< ��Ӧ��:2								*/
	ePanelKeyBoardCode_3 						= 0x4,		/*!< ��Ӧ��:3								*/
	ePanelKeyBoardCode_4 						= 0x5,		/*!< ��Ӧ��:4								*/
	ePanelKeyBoardCode_5 						= 0x6,		/*!< ��Ӧ��:5								*/
	ePanelKeyBoardCode_6 						= 0x7,		/*!< ��Ӧ��:6								*/
	ePanelKeyBoardCode_7 						= 0x8,		/*!< ��Ӧ��:7								*/
	ePanelKeyBoardCode_8 						= 0x9,		/*!< ��Ӧ��:8								*/
	ePanelKeyBoardCode_9 						= 0xA,		/*!< ��Ӧ��:9								*/
	ePanelKeyBoardCode_10 						= 0xB,		/*!< ��Ӧ��:10								*/
	ePanelKeyBoardCode_11 						= 0xC,		/*!< ��Ӧ��:11								*/
	ePanelKeyBoardCode_12 						= 0xD,		/*!< ��Ӧ��:12								*/
	ePanelKeyBoardCode_13 						= 0xE,		/*!< ��Ӧ��:13								*/
	ePanelKeyBoardCode_14 						= 0xF,		/*!< ��Ӧ��:14								*/
	ePanelKeyBoardCode_15 						= 0x10,		/*!< ��Ӧ��:15								*/
	ePanelKeyBoardCode_16 						= 0x11,		/*!< ��Ӧ��:16								*/
	ePanelKeyBoardCode_PTZ						= 0x40,		/*!< ��Ӧ��:��̨							*/
	ePanelKeyBoardCode_Copy						= 0x41,		/*!< ��Ӧ��:����							*/
	ePanelKeyBoardCode_Multi					= 0x42,		/*!< ��Ӧ��:�໭��							*/
	ePanelKeyBoardCode_Switch					= 0x43,		/*!< ��Ӧ��:�л�							*/
	ePanelKeyBoardCode_Function					= 0x44,		/*!< ��Ӧ��:����							*/
	ePanelKeyBoardCode_Play						= 0x45,		/*!< ��Ӧ��:����							*/
	ePanelKeyBoardCode_Backward 				= 0x46,		/*!< ��Ӧ��:����							*/
	ePanelKeyBoardCode_Record					= 0x47,		/*!< ��Ӧ��:¼��							*/
	ePanelKeyBoardCode_ESC						= 0x48,		/*!< ��Ӧ��:�˳�							*/
	ePanelKeyBoardCode_Left						= 0x49,		/*!< ��Ӧ��:��								*/
	ePanelKeyBoardCode_Right					= 0x4A,		/*!< ��Ӧ��:��								*/
	ePanelKeyBoardCode_Up						= 0x4B,		/*!< ��Ӧ��:��								*/
	ePanelKeyBoardCode_Down						= 0x4C,		/*!< ��Ӧ��:��								*/
	ePanelKeyBoardCode_Enter					= 0x4D,		/*!< ��Ӧ��:ȷ��							*/
	ePanelKeyBoardCode_Shutdown 				= 0x4E,		/*!< ��Ӧ��:�ػ�							*/
	ePanelKeyBoardCode_TV_VGA					= 0x4F,		/*!< ��Ӧ��:TV/VGA							*/
	ePanelKeyBoardCode_Edit						= 0x50,		/*!< ��Ӧ��:�༭							*/
	ePanelKeyBoardCode_Language					= 0x51,		/*!< ��Ӧ��:����							*/
	ePanelKeyBoardCode_Mute						= 0x52,		/*!< ��Ӧ��:����							*/
	ePanelKeyBoardCode_Pause					= 0x53,		/*!< ��Ӧ��:��ͣ							*/
	ePanelKeyBoardCode_Stop						= 0x54,		/*!< ��Ӧ��:ֹͣ							*/
	ePanelKeyBoardCode_AlarmClear				= 0x55,		/*!< ��Ӧ��:����							*/
	ePanelKeyBoardCode_Defence					= 0x56,		/*!< ��Ӧ��:��������						*/
	ePanelKeyBoardCode_Capture					= 0x57,		/*!< ��Ӧ��:ץͼ							*/
	ePanelKeyBoardCode_LightAdd					= 0x58,		/*!< ��Ӧ��:��������						*/
	ePanelKeyBoardCode_LightSub					= 0x59,		/*!< ��Ӧ��:���ȼ���						*/
	ePanelKeyBoardCode_ContrastAdd				= 0x5A,		/*!< ��Ӧ��:�Աȶ�����						*/
	ePanelKeyBoardCode_ContrastSub				= 0x5B,		/*!< ��Ӧ��:�Աȶȼ���						*/
	ePanelKeyBoardCode_SpeedAdd					= 0x5C,		/*!< ��Ӧ��:�ٶ�����						*/
	ePanelKeyBoardCode_SpeedSub					= 0x5D,		/*!< ��Ӧ��:�ٶȼ���						*/
	ePanelKeyBoardCode_Set						= 0x5E,		/*!< ��Ӧ��:����							*/
	ePanelKeyBoardCode_F1						= 0x5F,		/*!< ��Ӧ��:F1								*/
	ePanelKeyBoardTypeEnd,									/*!< ����ֵ									*/
}ePanelKeyBoardCodeType;

/*!
*  \enum	ePanelControlType
*  \brief	����������
*/
typedef enum ePanelControlType
{
	ePanelControlBegin							= 0,		/*!< ��ʼֵ									*/
	ePanelControlKeyDown,									/*!< ����									*/
	ePanelControlKeyUp,										/*!< ����									*/
	ePanelControlClick,										/*!< ���(���²�����)						*/
	ePanelControlEnd,										/*!< ����ֵ									*/
}ePanelControlType;

/*!
*  \enum	eDecoderChannelStatus
*  \ingroup DS_DecoderChannelStatus
*  \brief	����ͨ��״̬
*/
typedef enum eDecoderChannelStatus
{
	eDecoderChannelStatusBegin					= 0,		/*!< ��ʼֵ									*/
	eDecoderChannelStatusOpen,								/*!< ��									*/
	eDecoderChannelStatusClose,								/*!< �ر�									*/
	eDecoderChannelStatusContinue,							/*!< ����									*/
	eDecoderChannelStatusEnd,								/*!< ����ֵ									*/
}eDecoderChannelStatus;

/*!
*  \enum	eStreamSourceType
*  \ingroup DS_StreamSourceType
*  \brief	��ý��Դ����
*/
typedef enum eStreamSourceType
{
	eStreamSourceTypeBegin						= 0,		/*!< ��ʼֵ									*/
	eStreamSourceTypeReal,									/*!< ʵʱ��									*/
	eStreamSourceTypeHistory,								/*!< ��ʷ��									*/
	eStreamSourceTypeEnd,									/*!< ����ֵ									*/
}eStreamSourceType;

/*!
*  \enum	eStreamPlayControlStatus
*  \ingroup DS_StreamPlayControlStatus
*  \brief	��ý�岥�ſ���״̬
*/
typedef enum eStreamPlayControlStatus
{
	eStreamPlayControlBegin						= 0,		/*!< ��ʼֵ									*/
	eStreamPlayControlPlay,									/*!< ����									*/
	eStreamPlayControlSuspend,								/*!< ��ͣ									*/
	eStreamPlayControlResume,								/*!< �ָ�									*/
	eStreamPlayControlStop,									/*!< ֹͣ									*/
	eStreamPlayControlFast,									/*!< ���ٲ���								*/
	eStreamPlayControlSlow,									/*!< ���ٲ���								*/
	eStreamPlayControlNormal,								/*!< �����ٶ�								*/
	eStreamPlayControlOneByOne,								/*!< ��֡����								*/
	eStreamPlayControlOpenAudio,							/*!< ������								*/
	eStreamPlayControlCloseAudio,							/*!< �ر�����								*/
	eStreamPlayControlSetPos,								/*!< ����λ��								*/
	eStreamPlayControlClearBuffer,							/*!< ��ջ�����								*/
	eStreamPlayControlEnd,									/*!< ����ֵ									*/
}eStreamPlayControlStatus;

/*!
*  \enum	eDisplayControlStatus
*  \ingroup DS_DisplayControlStatus
*  \brief	��ʾ����״̬
*/
typedef enum eDisplayControlStatus
{
	eDisplayControlStatusBegin					= 0,		/*!< ��ʼֵ									*/
	eDisplayControlStatusEnlarge,							/*!< �Ŵ���ʾ								*/
	eDisplayControlStatusRenew,								/*!< ��ԭ									*/
	eDisplayControlStatusEnd,								/*!< ����ֵ									*/
}eDisplayControlStatus;

/*!
*  \enum	eScreenControlStatus
*  \ingroup DS_ScreenControlStatus
*  \brief	��Ļ����״̬
*/
typedef enum eScreenControlStatus
{
	eScreenControlStatusBegin					= 0,			/*!< ��ʼֵ									*/
	eScreenControlStatusLoopStart,							/*!< ��ʼ��ת									*/
	eScreenControlStatusLoopStop,							/*!< ֹͣ��ת									*/
	eScreenControlStatusSplitSingle,						/*!< ������									*/
	eScreenControlStatusSplitThree,						/*!< ������									*/
	eScreenControlStatusSplitFour,							/*!< �Ļ���									*/
	eScreenControlStatusSplitSix,							/*!< ������									*/
	eScreenControlStatusSplitNine,							/*!< �Ż���									*/
	eScreenControlStatusSplitTen,							/*!< ʮ����									*/
	eScreenControlStatusSplitTwelve,						/*!< ʮ������									*/
	eScreenControlStatusSplitThirteen,						/*!< ʮ������									*/
	eScreenControlStatusSplitFifteen,						/*!< ʮ�廭��									*/
	eScreenControlStatusSplitSixteen,						/*!< ʮ������									*/
	eScreenControlStatusEnd,								/*!< ����ֵ									*/
}eScreenControlStatus;

/*!
*  \enum	eResolutionMode
*  \ingroup DS_ResolutionMode
*  \brief	�ֱ���ģʽ
*/
typedef enum eResolutionMode
{
	eResolutionModeBegin					=	0,			/*!< ��ʼֵ									*/
	eResolutionModeAutoDiscern,							/*!< �Զ�ʶ��ֱ���								*/
	eResolutionModeQCIF,									/*!< QCIF (176*144)							*/
	eResolutionModeCIF,										/*!< CIF (352*288 / 320*240 / 352*240)			*/
	eResolutionModeHalfD1,									/*!< HalfD1 (704*288 / 640*240 / 704*240)		*/
	eResolutionModeD1,										/*!< D1	(704*576 / 640*480 / 704*480)			*/
	eResolutionModeDCIF,									/*!< DCIF (528*384 / 480*240)					*/
	eResolutionModeMD,										/*!< MD	(512*288 / 416*240)					*/
	eResolutionModeVGA,										/*!< VGA (640*480)							*/
	eResolutionModeHD720,									/*!< HD720 (1280*720)						*/
	eResolutionModeQuadVGA,									/*!< QuadVGA (1280*960)						*/
	eResolutionModeUXGA,									/*!< UXGA (1600*1200)						*/
	eResolutionModeHD1080,									/*!< HD1080 (1920*1080)						*/
	eResolutionModeEnd,										/*!< ����ֵ									*/
}eResolutionMode;

/*!
*  \enum	eVGAResolutionMode
*  \ingroup DS_VGAResolutionMode
*  \brief	VGA�ֱ���
*/
typedef enum eVGAResolutionMode
{
	VGA_SVGA_800x600_60HZ 					= 0,
	VGA_SVGA_800x600_75HZ,
	VGA_XGA_1024x768_60HZ,
	VGA_XGA_1024x768_70HZ,
	VGA_SXGA_1280x1024_60HZ,
	VGA_1280x720P_60HZ,
	VGA_1920x1080i_60HZ,
	VGA_1920x1080p_60HZ
}eVGAResolutionMode;

/*!
*  \enum	eLogoPictureType
*  \ingroup DS_LogoPictureType
*  \brief	LogoͼƬ����
*/
typedef enum eLogoPictureType
{
	eLogoPictureTypeBegin					= 0,		/*!< ��ʼֵ									*/
	eLogoPictureTypeDecoderChannel,						/*!< ����ͨ��LOGO							*/
	eLogoPictureTypeEnd,								/*!< ����ֵ									*/
}eLogoPictureType;

/*!
*  \enum	eDeviceChannelControl
*  \ingroup DS_DeviceChannelControl
*  \brief	�豸ͨ������
*/
typedef enum eDeviceChannelControl
{
	eDeviceChannelControlBegin		 = 0,				/*!< ��ʼֵ									*/
	eDeviceChannelControlShowLogo,						/*!< ��ʾLOGO								*/
	eDeviceChannelControlHideLogo,						/*!< ����LOGO								*/
	eDeviceChannelControlEnd,							/*!< ����ֵ									*/
}eDeviceChannelControl;

/*!
*  \enum	eDeviceProtocolType
*  \ingroup DS_DeviceProtocolType
*  \brief	�豸Э������
*/
typedef enum eDeviceProtocolType
{
	eDeviceProtocolTypeBegin		 = 0,				/*!< ��ʼֵ									*/
	eDeviceProtocolTypeAdapter,							/*!< ����Ӧ�汾								*/
	eDeviceProtocolTypeClassics,						/*!< ����汾								*/
	eDeviceProtocolTypeNewborn,							/*!< �°汾									*/
	eDeviceProtocolTypeEnd,								/*!< ����ֵ									*/
}eDeviceProtocolType;

/*!
*  \enum	eNetworkSDKVersion
*  \ingroup DS_NetworkSDKVersion
*  \brief	���������
*/
typedef enum eNetworkSDKVersion
{
	eNetworkSDKVersionUnkown		 = 0,					/*!< δ֪�汾								*/
	eNetworkSDKVersion1,								/*!< ��Ӧhieclient.dll						*/
	eNetworkSDKVersion2,								/*!< ��ӦHieClientUnit.dll					*/
}eNetworkSDKVersion;
//////////////////////////////////////////////////////////////////////////
//�ṹ
//////////////////////////////////////////////////////////////////////////

/*!
*  \struct	tagTimeInfo
*  \ingroup DS_TimeInfo
*  \brief	ʱ����Ϣ
*/
typedef struct tagTimeInfo
{
	WORD	wYear;										/*!< ��										*/
	WORD	wMonth;										/*!< ��										*/
	WORD	wDay;										/*!< ��										*/
	WORD	wHour;										/*!< ʱ										*/
	WORD	wMinute;									/*!< ��										*/
	WORD	wSecond;									/*!< ��										*/
}TimeInfo, *LPTimeInfo;

/*!
*  \struct	tagAbsoluteTime
*  \ingroup DS_AbsoluteTime
*  \brief	����ʱ����Ϣ
*/
typedef struct tagAbsoluteTime
{
	WORD	wYear;										/*!< ��										*/
	WORD	wMonth;										/*!< ��										*/
	WORD	wWeek;										/*!< ��										*/
	WORD	wDay;										/*!< ��										*/
	WORD	wHour;										/*!< ʱ										*/
	WORD	wMinute;									/*!< ��										*/
	WORD	wSecond;									/*!< ��										*/
	WORD	wMillisecond;								/*!< ����									*/
}AbsoluteTime, *LPAbsoluteTime;

/*!
*  \struct	tagBuffer
*  \ingroup DS_Buffer
*  \brief	��������Ϣ
*/
typedef struct tagBuffer
{
	BYTE	*pBuffer;									/*!< ý�����ݻ�����							*/
	DWORD	dwBufLen;									/*!< ý�����ݳ���							*/
}Buffer, *LPBuffer;

/*!
*  \struct	tagUserLoginPara
*  \ingroup DS_UserLoginPara
*  \brief	�û���¼����
*/
typedef struct tagUserLoginPara
{
	char	sServerIP[MAX_ADDRESS_LEN];					/*!< ��������IP��ַ							*/
	DWORD	dwCommandPort;								/*!< ��¼���ӵ�����˿�						*/
	char	sUName[USERNAME_LEN];						/*!< ��¼�û����û�����						*/
	char	sUPass[USERPASS_LEN];						/*!< ��¼�û����û�����						*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}UserLoginPara, *LPUserLoginPara;

/*!
*  \struct	tagConfigInformation
*  \brief	Զ��������Ϣ
*/
typedef struct tagConfigInformation
{
	DWORD	dwMainCommand;								/*!< ������Ϣ��������						*/
	DWORD	dwAssistCommand;							/*!< ������Ϣ����������						*/
	char	sConfig[MAX_CFG_LEN];						/*!< ������Ϣ������							*/
	DWORD	dwConfigLen;								/*!< ������Ϣ����							*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}ConfigInformation, *LPConfigInformation;

/*!
*  \struct	tagConfigInformationV2
*  \brief	Զ��������Ϣ(V2)
*/
typedef struct tagConfigInformationV2
{
	DWORD	dwMainCommand;								/*!< ������Ϣ��������						*/
	DWORD	dwAssistCommand;							/*!< ������Ϣ����������						*/
	DWORD	dwConfigLen;								/*!< ������Ϣ����							*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
	char	sConfig[MAX_CFG_LEN_V2];					/*!< ������Ϣ������							*/
}ConfigInformationV2, *LPConfigInformationV2;

/*!
*  \struct	tagStreamMediaFrame
*  \brief	��ý��֡��Ϣ
*/
typedef struct tagStreamMediaFrame
{
	DWORD	dwChannel;									/*!< ͨ����									*/
	Buffer	cFrameBuffer;								/*!< ֡������								*/
	AbsoluteTime	cFrameTime;							/*!< ֡ʱ��									*/
	DWORD	dwFrameType;								/*!< ֡����(�������eFrameType)				*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}StreamMediaFrame, *LPStreamMediaFrame;

/*!
*  \struct	tagStreamVoiceFrame
*  \brief	������֡��Ϣ
*/
typedef struct tagStreamVoiceFrame
{
	Buffer	cFrameBuffer;								/*!< ֡������								*/
	eVoiceStreamSource	eVoiceSource;					/*!< ֡��Դ									*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}StreamVoiceFrame, *LPStreamVoiceFrame;

/*!
*  \struct	tagRealStreamPara
*  \ingroup DS_RealStreamPara
*  \brief	ʵʱ�����Ӳ���
*/
typedef struct tagRealStreamPara
{
	DWORD	dwChannel;									/*!< ������ͨ����							*/
	eStreamTransferMode	eTransferMode;					/*!< ����ģʽ								*/
	eStreamMediaType	eMediaType;						/*!< ��ý������								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}RealStreamPara, *LPRealStreamPara;

/*!
*  \struct	tagChannelOSDInformation
*  \ingroup DS_ChannelOSDInformation
*  \brief	ͨ��OSD��Ϣ
*/
typedef struct tagChannelOSDInformation
{
	DWORD	dwEnable;									/*!< ����: 0Ϊ������, 1Ϊ����				*/
	char	cOSDText[MAX_OSD_TEXT_STRING_LENGTH];		/*!< OSD��Ϣ								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}ChannelOSDInformation, *LPChannelOSDInformation;

/*!
*  \struct	tagStreamTransferPara
*  \ingroup DS_VoiceInteract_CodecPara
*  \brief	��ת�����Ӳ���
*/
typedef struct tagStreamTransferPara
{
	eStreamTransferMode	eTransferMode;					/*!< ����ģʽ								*/
	eStreamSourceType eStreamSourceValue;				/*!< ��ý��Դ����							*/
	eVideoCodecMode	eVideoCodecValue;					/*!< ��Ƶ�����ģʽ							*/
	eVoiceMode	eVoiceCodecValue;						/*!< ��Ƶ�����ģʽ							*/
	eResolutionMode	eResolutionValue;					/*!< ͼ��ֱ���ģʽ							*/
	ChannelOSDInformation	cOSDInfo;					/*!< OSD��Ϣ�ṹ							*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}StreamTransferPara, *LPStreamTransferPara;

/*!
*  \struct	tagMediaServerInformation
*  \ingroup DS_MediaServerInformation
*  \brief	��ý���������Ϣ
*/
typedef struct tagMediaServerInformation
{
	DWORD	dwEnable;									/*!< ����: 0Ϊ������, 1Ϊ����				*/
	char	sServerIP[MAX_ADDRESS_LEN];					/*!< ��������IP��ַ							*/
	DWORD	dwServerPort;								/*!< ��¼���ӵķ������˿�					*/
	char	sUName[USERNAME_LEN];						/*!< ��¼�û����û�����						*/
	char	sUPass[USERPASS_LEN];						/*!< ��¼�û����û�����						*/
	eRTPStreamTransferMode	eRTPStreamTransferValue;	/*!< RTP������ģʽ							*/
	char	sChannel[MAX_RTSP_SOURCE_STRING_LENGTH];	/*!< ��Ƶͨ��								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}MediaServerInformation, *LPMediaServerInformation;

/*!
*  \struct	tagHistoryStreamPara
*  \ingroup DS_HistoryStreamPara
*  \brief	��ʷ�����Ӳ���
*/
typedef struct tagHistoryStreamPara
{
	DWORD	dwDiskGroup;								/*!< ����									*/
	DWORD	dwChannel;									/*!< ��ý��ͨ����							*/
	DWORD		dwEnableEndTime;						/*!< ����ʱ���Ƿ���Ч						*/
	TimeInfo	cBeginTime;								/*!< ��ʷ����ʼʱ��							*/
	TimeInfo	cEndTime;								/*!< ��ʷ������ʱ��							*/
	eHistoryStreamType	eStreamType;					/*!< ��ʷ������								*/
	eStreamTransferMode	eTransferMode;					/*!< ����ģʽ								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}HistoryStreamPara, *LPHistoryStreamPara;

/*!
*  \struct	tagHYPrivateServerInformation
*  \ingroup DS_HYPrivateServerInformation
*  \brief	HY˽��Э���������Ϣ
*/
typedef struct tagHYPrivateServerInformation
{
	DWORD	dwEnable;									/*!< ����: 0Ϊ������, 1Ϊ����				*/
	eDeviceProtocolType	eDeviceProtocolValue;			/*!< �豸Э��汾����						*/
	eStreamSourceType	eStreamSourceValue;				/*!< ��ý��Դ����							*/
	UserLoginPara	cUserLoginPara;						/*!< ��¼������Ϣ							*/
	RealStreamPara	cRealStreamPara;					/*!< ʵʱ��������Ϣ							*/
	HistoryStreamPara cHistoryStreamPara;				/*!< ��ʷ��������Ϣ							*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}HYPrivateServerInformation, *LPHYPrivateServerInformation;

/*!
*  \struct	tagLocalHistoryInformation
*  \ingroup DS_LocalHistoryInformation
*  \brief	������ʷ����Ϣ
*/
typedef struct tagLocalHistoryInformation
{
	DWORD		dwEnable;								/*!< ����: 0Ϊ������, 1Ϊ����				*/
	DWORD		dwEnableEndTime;						/*!< ����ʱ���Ƿ���Ч						*/
	TimeInfo	cBeginTime;								/*!< ��ʷ����ʼʱ��							*/
	TimeInfo	cEndTime;								/*!< ��ʷ������ʱ��							*/
	eHistoryStreamType	eStreamType;					/*!< ��ʷ������								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}LocalHistoryInformation, *LPLocalHistoryInformation;

/*!
*  \struct	tagDecoderDynamicInformation
*  \brief	��̬�����������Ϣ
*/
typedef struct tagDecoderDynamicInformation
{
	MediaServerInformation	cMediaServerInfo;			/*!< ��ý���������Ϣ						*/
	HYPrivateServerInformation	cHYPrivateServerInfo;	/*!< HY˽��Э���������Ϣ					*/
	LocalHistoryInformation	cLocalHistoryInformation;	/*!< ������ʷ����Ϣ							*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}DecoderDynamicInformation, *LPDecoderDynamicInformation;

/*!
*  \struct	tagStreamTransferFrame
*  \ingroup DS_StreamTransferFrame
*  \brief	��ת��֡����
*/
typedef struct tagStreamTransferFrame
{
	eFrameType	eFrameTypeInfo;							/*!< ֡������Ϣ								*/
	DWORD	dwTimeStamp;								/*!< ֡ʱ���								*/
	AbsoluteTime cAbsoluteTime;							/*!< ֡����ʱ���							*/
	DWORD	dwFrameNumber;								/*!< ֡���									*/
	Buffer	cFrameBuffer;								/*!< ֡������								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}StreamTransferFrame, *LPStreamTransferFrame;

/*!
*  \struct	tagFontPara
*  \brief	������Ϣ����,���������������ϵͳ�����������
*/
typedef struct tagFontPara
{
	LONG lfHeight;										/*!< �߼���λ���ַ��߶�						*/
	LONG lfWidth; 										/*!< �߼���λ���ַ����						*/
	LONG lfEscapement; 									/*!< ÿ���ı����ʱ�����ҳ��׶˵ĽǶ�		*/
	LONG lfOrientation; 								/*!< �ַ����������ҳ��׶˵ĽǶ�			*/
	LONG lfWeight; 										/*!< ��������,ָ������Ĵ�ϸ�̶�			*/
	BYTE lfItalic; 										/*!< �Ƿ�ʹ��б��							*/
	BYTE lfUnderline; 									/*!< �Ƿ�ʹ���»���							*/
	BYTE lfStrikeOut; 									/*!< �Ƿ�ʹ��ɾ����							*/
	BYTE lfCharSet; 									/*!< �ַ���									*/
	BYTE lfOutPrecision; 								/*!< �������								*/
	BYTE lfClipPrecision; 								/*!< ��������								*/
	BYTE lfQuality; 									/*!< �������								*/
	BYTE lfPitchAndFamily; 								/*!< ������ַ�������						*/
	char lfFaceName[MAX_FONT_NAME_LEN];					/*!< ��������								*/
}FontPara, *LPFontPara; 

typedef struct tagFileTransferDataPacket
{
	eDataPacketType m_dwPacketType;						/*!< 0:�����������ݴ��俪ʼ�� 1:���ݰ� 2:��Ӧ�� 3:������	*/
	DWORD m_dwPacketSequence;
	DWORD m_dwPacketLen;
}FileTransferDataPacket, *LPFileTransferDataPacket;

/*!
*  \struct	tagHistoryStreamParaEx
*  \brief	��ʷ�����Ӳ�������չ��
*/
typedef struct tagHistoryStreamMultiTypePara
{
	DWORD	dwDiskGroup;								/*!< ����									*/
	DWORD	dwChannel;									/*!< ��ý��ͨ����							*/
	DWORD		dwEnableEndTime;						/*!< ����ʱ���Ƿ���Ч						*/
	TimeInfo	cBeginTime;								/*!< ��ʷ����ʼʱ��							*/
	TimeInfo	cEndTime;								/*!< ��ʷ������ʱ��							*/
	DWORD		dwStreamType;							/*!< ��ʷ������(֧�ֶ������͵����)			*/
	eStreamTransferMode	eTransferMode;					/*!< ����ģʽ								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}HistoryStreamMultiTypePara, *LPHistoryStreamMultiTypePara;

/*!
*  \struct	tagVoiceStreamPara
*  \brief	���������Ӳ���
*/
typedef struct tagVoiceStreamPara
{
	DWORD	dwChannel;									/*!< ��ý��ͨ����							*/
	eVoiceMode eMode;									/*!< ���������ģʽ							*/
	eStreamTransferMode	eTransferMode;					/*!< ����ģʽ								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}VoiceStreamPara, *LPVoiceStreamPara;

/*!
*  \struct	tagStreamDecodePara
*  \brief	��ý�����ģʽ����
*/
typedef struct tagStreamDecodePara
{
	eDecodeMode	eDecMode;								/*!< ����ģʽ								*/
	eDecodeShowMode	eDecShowMode;						/*!< ������ʾģʽ							*/
	DWORD	dwDecChannel;								/*!< ����ͨ����,��Ϊ�����ɲ���д			*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}StreamDecodePara, *LPStreamDecodePara;

/*!
*  \struct	tagStreamCaptureImagePara
*  \brief	��ý�岶��ͼƬ����
*/
typedef struct tagStreamCaptureImagePara
{
	char	sImageFile[MAX_FILENAME];					/*!< ͼƬ·��								*/
	DWORD	dwTimeWait;									/*!< ����ͼƬ��ʱʱ��,0xFFFFFFFFΪ���õȴ�	*/
	eStreamImageFormat	eImageFormat;					/*!< ����ͼƬ�����ʽ						*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}StreamCaptureImagePara, *LPStreamCaptureImagePara;

/*!
*  \struct	tagHistoryStreamQueryFactor
*  \brief	��ʷ����ѯ����
*/
typedef struct tagHistoryStreamQueryFactor
{
	DWORD				dwChannel;						/*!< ͨ����									*/
	DWORD				dwDiskGroup;					/*!< ����									*/
	eHistoryStreamType	eStreamType;					/*!< ��ʷ������								*/
	char				cBeginTime[15];					/*!< ��ʼʱ��								*/
	char				cEndTime[15];					/*!< ����ʱ��								*/
}HistoryStreamQueryFactor, *LPHistoryStreamQueryFactor;

/*!
*  \struct	tagHistoryStreamMultiTypeQueryFactor
*  \ingroup DS_HistoryStreamMultiTypeQueryFactor
*  \brief	��ʷ����ѯ����
*/
typedef struct tagHistoryStreamMultiTypeQueryFactor
{
	DWORD				dwChannel;						/*!< ͨ����									*/
	DWORD				dwDiskGroup;					/*!< ����									*/
	DWORD				dwStreamType;					/*!< ��ʷ������								*/
	char				cBeginTime[15];					/*!< ��ʼʱ��								*/
	char				cEndTime[15];					/*!< ����ʱ��								*/
}HistoryStreamMultiTypeQueryFactor, *LPHistoryStreamMultiTypeQueryFactor;

/*!
*  \struct	tagFileQueryFactor
*  \brief	�ļ���ѯ����
*/
typedef struct tagFileQueryFactor
{
	DWORD				dwChannel;						/*!< ͨ����									*/
	DWORD				dwFileType;						/*!< �ļ�����								*/
	char				cBeginTime[DATE_TIME_LEN];		/*!< ��ʼʱ��								*/
	char				cEndTime[DATE_TIME_LEN];		/*!< ����ʱ��								*/
}FileQueryFactor, *LPFileQueryFactor;

/*!
*  \struct	tagHistoryStreamQueryResult
*  \brief	��ʷ����ѯ���
*/
typedef struct tagHistoryStreamQueryResult
{
	DWORD				dwChannel;						/*!< ͨ����									*/
	eHistoryStreamType	eStreamType;					/*!< ��ʷ������								*/
	char				cBeginTime[DATE_TIME_LEN];		/*!< ��ʼʱ��								*/
	char				cEndTime[DATE_TIME_LEN];		/*!< ����ʱ��								*/
	DWORD				dwStreamSize;					/*!< �����ݳ���								*/
}HistoryStreamQueryResult, *LPHistoryStreamQueryResult;

/*!
*  \struct	tagHistoryStreamMultiTypeQueryResult
*  \ingroup DS_HistoryStreamMultiTypeQueryResult
*  \brief	��ʷ����ѯ���
*/
typedef struct tagHistoryStreamMultiTypeQueryResult
{
	DWORD				dwChannel;						/*!< ͨ����									*/
	DWORD				dwStreamType;					/*!< ��ʷ������								*/
	char				cBeginTime[DATE_TIME_LEN];		/*!< ��ʼʱ��								*/
	char				cEndTime[DATE_TIME_LEN];		/*!< ����ʱ��								*/
	DWORD				dwStreamSize;					/*!< �����ݳ���								*/
}HistoryStreamMultiTypeQueryResult, *LPHistoryStreamMultiTypeQueryResult;

/*!
*  \struct	tagHistoryStreamQueryResult
*  \brief	��ʷ����ѯ���
*/
typedef struct tagFileQueryResult
{
    DWORD				dwChannel;						/*!< ͨ����									*/
    DWORD				dwLock;							/*!< �Ƿ�����								*/
    DWORD				dwDataSize;						/*!< ���ݴ�С								*/
    DWORD				dwFileType;						/*!< ͼƬ����								*/
    char				cCreateTime[DATE_TIME_LEN];		/*!< ͼƬʱ��								*/
    char				cFileName[MAX_FILENAME];		/*!< ͼƬ�豸��·��                         */
}FileQueryResult, *LPFileQueryResult;

/*!
*  \struct	tagMediaLinkIDQueryResult
*  \brief	��ѯ��ý������ID���
*/
typedef struct tagMediaLinkIDQueryResult
{
	DWORD	dwNumber;									/*!< ��Ч����								*/
	DWORD	dwLinkID[MAX_LINK_ID_QUERY_NUM];			/*!< ����ID									*/
}MediaLinkIDQueryResult, *LPMediaLinkIDQueryResult;

/*!
*  \struct	tagLogQueryFactor
*  \brief	��־��ѯ����
*/
typedef struct tagLogQueryFactor
{
	DWORD					m_dwQueryMode;				/*!< ��ѯ��ʽ								*/
	eHistoryLogMajorType	m_eMajorType;				/*!< ������									*/
	eHistoryLogMinorType	m_eMinorType;				/*!< ������									*/
	DWORD					m_dwChannel;				/*!< ͨ����									*/
	char					m_sStartTime[DATE_TIME_LEN];/*!< ��ʼʱ��								*/
	char					m_sStopTime[DATE_TIME_LEN];	/*!< ����ʱ��								*/
}LogQueryFactor, *LPLogQueryFactor;

/*!
*  \struct	tagLogQueryResult
*  \brief	��ʷ��־ѯ���
*/
typedef struct tagLogQueryResult
{
	eHistoryLogMajorType	m_eMajorType;				/*!< ������									*/
	eHistoryLogMinorType	m_eMinorType;				/*!< ������									*/
	DWORD					m_dwDetailInfo;				/*!< ��ϸ��Ϣ								*/
	char					m_sUserName[USERNAME_LEN];	/*!< �����û�								*/
	char					m_sUserIP[IP_ADDRESS_LEN];	/*!< �û�IP��ַ								*/
	char					m_sLogTime[DATE_TIME_LEN];	/*!< ����ʱ��								*/
}LogQueryResult, *LPLogQueryResult;

/*!
*  \struct	tagTransparentChannelPara
*  \brief	͸��ͨ������
*/
typedef struct tagTransparentChannelPara
{
	DWORD	dwMajorType;								/*!< ��������Ϣ								*/
	DWORD	dwMinorType;								/*!< ��������Ϣ								*/
}TransparentChannelPara, *LPTransparentChannelPara;

/*!
*  \struct	tagFileUploadPara
*  \brief	�ļ��ϴ�����
*/
typedef struct tagFileUploadPara
{
	eTransferFileType	eFileType;						/*!< �ϴ��ļ�����							*/
	char	strRemoteFilePath[MAX_FILE_PATH_LEN];		/*!< �ϴ��ļ�·��							*/
	char	strLocalFilePath[MAX_FILE_PATH_LEN];		/*!< �ϴ��ļ�·��							*/
}FileUploadPara, *LPFileUploadPara;

/*!
*  \struct	tagFileUploadState
*  \brief	�ļ��ϴ�״̬
*/
typedef struct tagFileUploadState
{
	DWORD	dwUploadSize;								/*!< �ϴ����ݳ���							*/
	DWORD	dwStatus;									/*!< �ϴ�״̬��0Ϊ���ڴ��ͣ�1Ϊȡ����		*/
														/*!<����2ΪFlash���� 3Ϊ�汾���Ի��ļ�����4��ʾдʧ�ܣ�5��ʾ�ɹ���ɣ�6��ʾ����ʧ�ܣ�7��ʾ��ȡ�ļ�����	*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}FileUploadState, *LPFileUploadState;

/*!
*  \struct	tagFileDownloadPara
*  \brief	�ļ����ز���
*/
typedef struct tagFileDownloadPara
{
	eTransferFileType	eFileType;						/*!< �����ļ�����							*/
	char	strRemoteFilePath[MAX_FILE_PATH_LEN];		/*!< Դ�ļ����·��							*/
	char	strLocalFilePath[MAX_FILE_PATH_LEN];		/*!< Ŀ���ļ����·��						*/
}FileDownloadPara, *LPFileDownloadPara;


/*!
*  \struct	tagImageFileInfo
*  \brief	 ץͼ�ļ���Ϣ
*/
typedef struct tagImageFileInfo
{
	DWORD				m_dwFileSize;					/*!< �ļ���С								*/
	char				m_sFileName[MAX_FILENAME];		/*!< �ļ���									*/
	char				m_sCreateTime[DATE_TIME_LEN];	/*!< �ļ�����ʱ��							*/
}ImageFileInfo, *LPImageFileInfo;

/*!
*  \struct	tagServerInformation
*  \brief	��������Ϣ
*/
typedef struct tagServerInformation
{
	char	cAddress[MAX_ADDRESS_LEN];					/*!< ��ַ									*/
	DWORD	dwCommandPort;								/*!< ����˿�								*/
	DWORD	dwTCPPort;									/*!< TCP�˿�								*/
	DWORD	dwRTPPort;									/*!< RTP�˿�								*/
}ServerInformation, *LPServerInformation;

/*!
*  \struct	tagDeviceRegisterInfo
*  \brief	�豸ע����Ϣ
*/
typedef struct tagDeviceRegisterInfo
{
	DWORD		dwDeviceID;								/*!< ��Ʒ���к�								*/
	char		cDeviceIP[IP_ADDRESS_LEN];				/*!< �豸IP��ַ								*/
	char		cDeviceMAC[MAC_ADDRESS_LEN];			/*!< �豸MAC��ַ							*/
	DWORD		dwDeviceCmdPort;						/*!< �豸����˿�							*/
	DWORD		dwHTTPPort;								/*!< HTTP�˿�								*/
	DWORD		dwDeviceType;							/*!< �豸����								*/
	char		cDeviceVersion[VERSION_INFO_LEN];		/*!< �豸����汾��							*/
	DWORD		dwDeviceMaxConnect;						/*!< ��Ƶ�����������						*/
}DeviceRegisterInfo, *LPDeviceRegisterInfo;

/*!
*  \struct	tagDeviceConfigFromHttp
*  \brief	����HTTP���豸����
*/
typedef struct tagDeviceConfigFromHttp
{
	WORD	wLocalCmdPort;								/*!< ��������˿�							*/
	WORD	wLocalMediaPort;							/*!< ����ý��˿�							*/
	int		iReserve[DEF_HTTP_CFG_RESERVE_NUM];			/*!< ����									*/
}DeviceConfigFromHttp, *LPDeviceConfigFromHttp;

/*!
*  \struct	tagDeviceProbeParameter
*  \brief	̽�����ò���
*/
typedef struct tagDeviceProbeParameter
{
	WORD	m_wBeginPort;								/*!< ̽����ʼ�˿�							*/
	WORD	m_wEndPort;									/*!< ̽������˿�							*/
	DWORD	m_dwReserve[DEF_RESERVE_NUM];				/*!< ����									*/
}DeviceProbeParameter, *LPDeviceProbeParameter;

/*!
*  \struct	tagDeviceProbeConfig
*  \brief	̽�����ò���
*/
typedef struct tagDeviceProbeConfig
{ 
	BYTE	m_bytDevType;								/*!< ����������(Read)						*/
	BYTE	m_bytDevChan;								/*!< �豸ͨ������(Read)						*/
	BYTE	m_bytDevAutoReg;							/*!< �Ƿ������Զ�ע��						*/
	BYTE	m_bytDevRegInterval;						/*!< �豸ע����ʱ��						*/
	BYTE	m_bytDevMac[MAC_BINARY_ADDRESS_LEN];		/*!< �豸MAC��ַ(Read)						*/
	BYTE	m_bytDevIP[IP_ADDRESS_LEN];					/*!< �豸��ǰIP��ַ							*/
	BYTE	m_bytDevMask[IP_ADDRESS_LEN];				/*!< �豸IP��ַ����							*/
	BYTE	m_bytDevGateway[IP_ADDRESS_LEN];			/*!< �豸���ص�ַ							*/
	BYTE	m_bytDevManHost[IP_ADDRESS_LEN];			/*!< �豸����������ַ						*/
	WORD	m_bytDevDetectPort;							/*!< �豸�Զ����ּ����˿�					*/
	WORD	m_wManHostPort;								/*!< �豸���������˿�						*/
	WORD	m_wCmdPort;									/*!< �豸����˿�							*/
	WORD	m_wMediaPort;								/*!< �豸ý��˿�							*/
	DWORD	m_dwReserveFirst;							/*!< ��������								*/
	DWORD	m_dwReserveSecond;							/*!< ��������								*/
	DWORD	m_dwValidMask;								/*!< ��Ч����(λ����0��Ч��1��Ч)			*/
}DeviceProbeConfig, *LPDeviceProbeConfig;
/*!
*  \struct	tagFunctionInfo
*  \brief	������Ϣ
*/
typedef struct tagFunctionInfo
{
	DWORD dwMajor;										/*!< ���汾��								*/
	DWORD dwMinor;										/*!< �ΰ汾��								*/
	DWORD dwRevision;									/*!< �޶��汾��								*/
	DWORD dwSVN;										/*!< SVN��									*/
}FunctionInfo, *LPFunctionInfo;

/*!
*  \struct	tagPanelStatusInfo
*  \brief	���״̬��Ϣ
*/
typedef struct tagPanelStatusInfo
{
	DWORD dwStatus;										/*!< ���״̬,0Ϊδ����,1Ϊ������			*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}PanelStatusInfo, *LPPanelStatusInfo;

/*!
*  \struct	tagPanelControlParameter
*  \brief	�����Ʋ���
*/
typedef struct tagPanelControlParameter
{
	DWORD dwControl;									/*!< ������,�μ�ePanelControlTypeֵ		*/
	DWORD dwKeyBoardCode;								/*!< ����ֵ,�μ�ePanelKeyBoardCodeTypeֵ	*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}PanelControlParameter, *LPPanelControlParameter;

/*!
*  \struct	tagDecoderLoopStatus
*  \ingroup DS_DecoderLoopStatus
*  \brief	������ͨ����ѯ״̬
*/
typedef struct tagDecoderLoopStatus
{
	DWORD	dwChannelNumber;							/*!< ͨ����									*/
	eDecoderChannelStatus	eDecChStatus[MAX_DEC_CHANNEL_NUMBER];/*!< ͨ��״̬						*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}DecoderLoopStatus, *LPDecoderLoopStatus;

/*!
*  \struct	tagDecoderDeviceConfig
*  \ingroup DS_DecoderDeviceConfig
*  \brief	�������豸����
*/
typedef struct tagDecoderDeviceConfig
{
	DWORD	dwDecoderChannelNumber;					/*!< ����ͨ������,���ݽ���ģʽ��������,ֻ��������	*/
	eResolutionMode	eDecodeMode;						/*!< ����ģʽ								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];				/*!< ����									*/
}DecoderDeviceConfig, *LPDecoderDeviceConfig;

/*!
*  \struct	tagChannelChromaConfig
*  \ingroup DS_ChannelChromaConfig
*  \brief	����ͨ����ѧ����
*/
typedef struct tagChannelChromaConfig
{
	DWORD dwBrightness;								/*!< ����,0-255 							*/
	DWORD dwContrast;								/*!< �Աȶ�,0-255							*/
	DWORD dwSaturation;								/*!< ���Ͷ�,0-255 							*/
	DWORD dwHue;									/*!< ɫ��,0-255 							*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}ChannelChromaConfig, *LPChannelChromaConfig;

/*!
*  \struct	tagDecoderChannelConfig
*  \ingroup DS_DecoderChannelConfig
*  \brief	������ͨ������
*/
typedef struct tagDecoderChannelConfig
{
	DWORD	dwDecChanScaleStatus;					/*!< ����ͨ����ʾ���ſ��ƣ�1-������ʾ��0-��ʵ��ʾ 	*/
	ChannelChromaConfig	cChannelChromaConfig;			/*!< ��ѧ����								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];				/*!< ����									*/
}DecoderChannelConfig, *LPDecoderChannelConfig;

/*!
*  \struct	tagDecoderVideoStandardConfig
*  \ingroup DS_DecoderVideoStandardConfig
*  \brief	������ͨ����Ƶ��ʽ
*/
typedef struct tagDecoderVideoStandardConfig
{
	DWORD	dwVideoStandard;						/*!< ��������Ƶ��ʽ: 0-PAL��1-NTSC  				*/
	DWORD	dwReserve[DEF_RESERVE_NUM];				/*!< ����									*/
}DecoderVideoStandardConfig, *LPDecoderVideoStandardConfig;

/*!
*  \struct	tagDecoderChannelSourceConfig
*  \ingroup DS_DecoderChannelSourceConfig
*  \brief	������ͨ����ƵԴ����
*/
typedef struct tagDecoderChannelSourceConfig
{
	MediaServerInformation	cMediaServerInfo;			/*!< ��ý���������Ϣ							*/
	HYPrivateServerInformation	cHYPrivateServerInfo;	/*!< HY˽��Э���������Ϣ						*/
	DWORD	dwReserve[DEF_RESERVE_NUM];				/*!< ����									*/
}DecoderChannelSourceConfig, *LPDecoderChannelSourceConfig;

/*!
*  \struct	tagDecoderChannelLoopConfig
*  \ingroup DS_DecoderChannelLoopConfig
*  \brief	������ͨ����ת����
*/
typedef struct tagDecoderChannelLoopConfig
{
	DWORD	dwEnable;								/*!< �Ƿ�����  								*/
	DWORD	dwPoolTime;							/*!< ��Ѳʱ��  								*/
	DecoderChannelSourceConfig cSource[MAX_DECODER_CHANNEL_SOURCE];/*!< ͨ����ƵԴ����						*/
	DWORD	dwReserve[DEF_RESERVE_NUM];				/*!< ����									*/
}DecoderChannelLoopConfig, *LPDecoderChannelLoopConfig;

/*!
*  \struct	tagDecoderChannelInformation
*  \ingroup DS_DecoderChannelInformation
*  \brief	������ͨ����Ϣ
*/
typedef struct tagDecoderChannelInformation
{
	DWORD	dwDecoderState;						/*!< ����ͨ��״̬��0-��̬���� 1��ѭ������			*/
	DWORD	dwGetStreamMode;						/*!< ȡ��ģʽ��0-δ���룬1-������2-����			*/
	MediaServerInformation	cMediaServerInfo;			/*!< ��ý���������Ϣ							*/
	HYPrivateServerInformation	cHYPrivateServerInfo;	/*!< HY˽��Э���������Ϣ						*/
	LocalHistoryInformation	cLocalHistoryInformation;		/*!< ������ʷ����Ϣ							*/
	StreamTransferPara 	cStreamTransferPara;				/*!< ����������ת����Ϣ						*/
	DWORD	dwReserve[DEF_RESERVE_NUM];				/*!< ����									*/
}DecoderChannelInformation, *LPDecoderChannelInformation;

/*!
*  \struct	tagDecoderChannelStatusInfo
*  \ingroup DS_DecoderChannelStatusInfo
*  \brief	������ͨ��״̬��Ϣ
*/
typedef struct tagDecoderChannelStatusInfo
{
	eDecoderChannelStatus	eDecChStatus;				/*!< ͨ��״̬								*/
	eStreamSourceType	eStreamSourceTypeValue;			/*!< ��ý��Դ����							*/
	DWORD	dwStreamBitrate;							/*!< ��ý������(kbps)						*/
	DWORD	dwVideoWidth;								/*!< ��Ƶͼ����							*/
	DWORD	dwVideoHeight;								/*!< ��Ƶͼ��߶�							*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}DecoderChannelStatusInfo, *LPDecoderChannelStatusInfo;

/*!
*  \struct	tagDecoderChannelStatus
*  \ingroup DS_DecoderChannelStatus
*  \brief	������ͨ��״̬
*/
typedef struct tagDecoderChannelStatus
{
	DWORD	dwChannelNumber;							/*!< ͨ����									*/
	DecoderChannelStatusInfo	cDecChStatus[MAX_DEC_CHANNEL_NUMBER];/*!< ������ͨ��״̬��Ϣ		*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}DecoderChannelStatus, *LPDecoderChannelStatus;

/*!
*  \struct	tagDecoderChannelStatusControl
*  \brief	������ͨ������
*/
typedef struct tagDecoderChannelControl
{
	eDecoderChannelStatus	eDecChStatus[MAX_DEC_CHANNEL_NUMBER];/*!< ������ͨ��״̬				*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}DecoderChannelStatusControl, *LPDecoderChannelStatusControl;

/*!
*  \struct	tagDecoderSetPlayStatusParameter
*  \ingroup DS_DecoderSetPlayStatusParameter
*  \brief	���ý�����ͨ������״̬����
*/
typedef struct tagDecoderSetPlayStatusParameter
{
	eStreamPlayControlStatus	ePlayControlStatus;		/*!< ������״̬����							*/
	/*	
	ePlayControlStatus Ϊ�ٶȵ���ʱ: eStreamPlayControlFast, eStreamPlayControlSlow.
	Ԫ��0��ʾ�ٶ�, 2��ʾ 2����, 4��ʾ 4����, 8��ʾ 8����, 16��ʾ 16����
	*/
	DWORD dwParameter[MAX_PLAY_CONTROL_PARAMETER];		/*!< ������״̬���Ʋ���						*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}DecoderSetPlayStatusParameter, *LPDecoderSetPlayStatusParameter;

/*!
*  \struct	tagDecoderPlayStatusParameter
*  \ingroup DS_DecoderPlayStatusParameter
*  \brief	������ͨ������״̬����
*/
typedef struct tagDecoderPlayStatusParameter
{
	eStreamSourceType	eStreamSourceTypeValue;			/*!< ��ý��Դ����							*/
	DWORD		dwEnableEndTime;						/*!< ����ʱ���Ƿ���Ч						*/
	TimeInfo	cBeginTime;								/*!< ��ʷ����ʼʱ��							*/
	TimeInfo	cEndTime;								/*!< ��ʷ������ʱ��							*/
	TimeInfo	cCurrentTime;							/*!< ��ǰ���ŵ���ʷ��ʱ��					*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}DecoderPlayStatusParameter, *LPDecoderPlayStatusParameter;

/*!
*  \struct	tagDecoderGetPlayStatusParameter
*  \ingroup DS_DecoderGetPlayStatusParameter
*  \brief	��ȡ������ͨ������״̬����
*/
typedef struct tagDecoderGetPlayStatusParameter
{
	DWORD	dwChannelNumber;							/*!< ͨ����									*/
	DecoderPlayStatusParameter	cDecChPlayStatus[MAX_DEC_CHANNEL_NUMBER];/*!< ������ͨ������״̬��Ϣ*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}DecoderGetPlayStatusParameter, *LPDecoderGetPlayStatusParameter;

/*!
*  \struct	tagDecoderDisplayStatus
*  \ingroup DS_DecoderDisplayStatus
*  \brief	���ý���ͨ����ʾ״̬
*/
typedef struct tagDecoderDisplayStatus
{
	DWORD	dwWindow;								/*!< ���ڱ��								*/
	eDisplayControlStatus	eDisplayControlStatusValue;	/*!< ��ʾ����״̬��Ϣ							*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}DecoderDisplayStatus, *LPDecoderDisplayStatus;

/*!
*  \struct	tagUploadLogoParameter
*  \ingroup DS_UploadLogoParameter
*  \brief	�ϴ�Logo����
*/
typedef struct tagUploadLogoParameter
{
	eLogoPictureType	eLogoPictureValue;				/*!< LogoͼƬ����							*/
	DWORD dwParameter[MAX_LOGO_PICTURE_PARAMETER];		/*!< LogoͼƬ����							*/
	Buffer				cBuffer;						/*!< LogoͼƬ������							*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}UploadLogoParameter, *LPUploadLogoParameter;

/*!
*  \struct	tagDecoderDisplayConfig
*  \ingroup DS_DecoderDisplayConfig
*  \brief	������ʾ����
*/
typedef struct tagDecoderDisplayConfig
{
	eVGAResolutionMode	eVGAResolution;				/*!<	�ֱ���								*/
	eScreenControlStatus	eScreenControlStatusValue;		/*!< ��ʾ����״̬��Ϣ							*/
	DWORD	dwDecoderChannel[MAX_DISPLAY_SCREEN_NUMBER];	/*!< �󶨵Ľ���ͨ����							*/
	DWORD	dwEnlargeWindow;						/*!< ���ڷŴ�, 0xFFFFFFFF��ʾ���Ŵ�,������ʾ���ڱ��	*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}DecoderDisplayConfig, *LPDecoderDisplayConfig;

/*!
*  \struct	tagTransmitHistoryStreamQueryFactor
*  \ingroup DS_TransmitHistoryStreamQueryFactor
*  \brief	ת����ʷ����ѯ����
*/
typedef struct tagTransmitHistoryStreamQueryFactor
{
	UserLoginPara	cUserLoginPara;					/*!< ��¼������Ϣ							*/
	eDeviceProtocolType	eDeviceProtocolValue;			/*!< �豸Э��汾����							*/
	HistoryStreamMultiTypeQueryFactor cFactor;			/*!< ��ʷ��ѯ����							*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< ����									*/
}TransmitHistoryStreamQueryFactor, *LPTransmitHistoryStreamQueryFactor;
//////////////////////////////////////////////////////////////////////////
//�ص�����
//////////////////////////////////////////////////////////////////////////

/*!
*  \brief
*	�û��¼��ص�
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param eEvent
*	�¼�����
* @param dwParam1 -- dwParam3
*	�����б�
			USEREVENT_REALSTREAM_STARTLINK
			USEREVENT_REALSTREAM_STOPLINK
			����1������ID..����Ϊ0
			AlarmEvent���ͣ�
			����1  �������ͣ���
				2  ����ͨ��
				3  ����״̬(��Ƶ��ʧʱ,0��ʾ���ź�,1��ʾ���ź�)
			    


			USEREVENT_DISKGROUP_MANAGE:
			wp1 = eDiskGroupOperation
			wp2 = �������(0-�ɹ�������ʧ��)
			wp3 = Ӳ�̲���ʱʹ�õ���֤�룬�ɿͻ���Ӳ�̹�������õ�


			USEREVENT_HISTORYSTREAM_NOTICE:
			wp1 = 1��//��ʾ�������ͣ�1-Ϊ��ȡ��ʷ���������ݴ�С��
			wp2 = �������(0-�ɹ�������ʧ��)
			wp3 = datasize//�������ݴ�С ��KB��    


			USEREVENT_HEARTBEAT_LOST
			δ��⵽����������Ͽ�
			������Ϊ0
			USEREVENT_NET_RECOVER
			���������ɹ�
			������Ϊ0


			eHeartBeatEvent
			��δ�õ��������õ�

			USEREVENT_USER_DISCONNECT
			��δ�õ��������õ�

* @param dwUserData
*	�û�����,�����¼�ʱ������û�����
* @return
*	����0
* @note
*	���ڴ˻ص��������¼������̵߳���,
*	Ϊ�˱�֤��ȷ��,�뾡���ܼ����ڻص��е�����ʽ����,�Ա�����ֹ�������.
* @note
*	�ӿ�����: ����ʽ
*/
typedef int(CALLBACK *CB_UserEvent)(IN HUSER hUser, IN DWORD dwEventType, DWORD dwParam1, DWORD dwParam2, DWORD dwParam3, IN DWORD dwUserData);


/*!
*  \brief
*	��ý�����ݻص�
* @param hStream
*	��ý����,ͨ����������ȡ,��ʾ��ý�����ݵ���Դ
* @param cFrame
*	��ý������,����֡������,֡ʱ��,֡������Ϣ
*	���������ļ�ʱ���յ�����ΪeFrameSysHeaderʱ����Ҫ����֡��֮���֡д�����ļ�
*	�뾡����֤eFrameSysHeader���͵�֡���ļ�ͷ��,�Ա㲥��������
* @param dwUserData
*	�û�����,������ý�����ݻص�ʱ������û�����
* @return
*	����0
* @note
*	���ڴ˻ص���������ý�����ݽ����̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����,�Ա�����ֶ�֡.
* @note
*	�ӿ�����: ����ʽ
*/
typedef int(CALLBACK *CB_StreamMedia)(IN HSTREAM hStream, IN const StreamMediaFrame *cFrame, IN DWORD dwUserData);

/*!
*  \brief
*	ԭʼ��ý�����ݻص�
* @param hStream
*	��ý����,ͨ����������ȡ,��ʾ��ý�����ݵ���Դ
* @param cFrame
*	ԭʼ��ý������,����֡������,֡ʱ��,֡������Ϣ
* @param dwUserData
*	�û�����,������ý�����ݻص�ʱ������û�����
* @return
*	����0
* @note
*	���ڴ˻ص���������ý�����ݽ����̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����,�Ա�����ֶ�֡.
* @note
*	�ӿ�����: ����ʽ
*/
typedef int(CALLBACK *CB_StreamMediaRaw)(IN HSTREAM hStream, IN const StreamMediaFrame *cFrame, IN DWORD dwUserData);

/*!
*  \brief
*	���������ݻص�
* @param hStream
*	���������,ͨ����������ȡ,��ʾ��ý�����ݵ���Դ
* @param eSource
*	����������Դ,����������߽��յ�����
* @param cFrame
*	����������,����������,֡��Դ��Ϣ
* @param dwUserData
*	�û�����,�������������ݻص�ʱ������û�����
* @return
*	����0
* @note
*	���ڴ˻ص����������������ݽ����벶���̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����,�Ա�����ֶ�֡.
* @note
*	�ӿ�����: ����ʽ
*/
typedef int(CALLBACK *CB_StreamVoice)(IN HSTREAM hStream, IN eVoiceStreamSource eSource, IN const StreamVoiceFrame *cFrame, IN DWORD dwUserData);

/*!
*  \brief
*	͸��ͨ�����ݻص�
* @param hTransparent
*	͸��ͨ�����,ͨ������͸��ͨ����ȡ,��ʾ���ݵ���Դ
* @param cBuffer
*	͸��ͨ������,�������ݻ������볤��
* @param dwUserData
*	�û�����,����͸��ͨ�����ݻص�ʱ������û�����
* @return
*	����0
* @note
*	���ڴ˻ص�������͸��ͨ�����ݽ����̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����.
* @note
*	�ӿ�����: ����ʽ
*/
typedef int(CALLBACK *CB_TransparentChannel)(IN HTRANSPARENT hTransparent, IN const LPBuffer pBuffer, IN DWORD dwUserData);

/*!
*  \brief
*	�ļ��ϴ����ݻص�
* @param hFileTransfer
*	�ļ��ϴ����,ͨ�������ļ��ϴ���ȡ
* @param cState
*	�ļ��ϴ�״̬,�����Ѵ������ݳ���
* @param dwUserData
*	�û�����,�������ݻص�ʱ������û�����
* @return
*	����0
* @note
*	���ڴ˻ص��������ļ��ϴ����ݷ����̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����.
* @note
*	�ӿ�����: ����ʽ
*/
typedef int(CALLBACK *CB_FileUpload)(IN HFILE_TRANSFER hFileTransfer, IN const FileUploadState cState, IN DWORD dwUserData);

/*!
*  \brief
*	�ļ��������ݻص�
* @param hFileTransfer
*	�ļ����ؾ��,ͨ�������ļ����ػ�ȡ
* @param cBuffer
*	�����ļ�����,�������ݻ������볤��
* @param dwUserData
*	�û�����,�������ݻص�ʱ������û�����
* @return
*	����0
* @note
*	���ڴ˻ص��������ļ��������ݽ����̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����.
* @note
*	�ӿ�����: ����ʽ
*   cBuffer����Ϊ0xFFFFFFFF,������ָ��ΪNULLʱ����ʾ���س���Ӧ���Ͽ�����
*/
typedef int(CALLBACK *CB_FileDownload)(IN HFILE_TRANSFER hFileTransfer, IN const Buffer cBuffer, IN DWORD dwUserData);


/*!
*  \brief
*	�豸ע��ص�
* @param pDeviceRegister
*	�豸ע����Ϣ
* @note
*	�ӿ�����: ����ʽ
*/
typedef int(CALLBACK *CB_DeviceRegister)(IN LPDeviceRegisterInfo pDeviceRegister);

/*!
*  \brief
*	ǿ��ɾ���ѵ�¼�û��ص�
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwUserData
*	�û�����
* @note
*	�ӿ�����: ����ʽ
*/
typedef int(CALLBACK *CB_DeleteUserForce)(IN HUSER hUser, IN DWORD dwUserData);

/*!
*  \brief
*	�豸̽��ص�
* @param cConfig
*	�豸������Ϣ
* @note
*	�ӿ�����: ����ʽ
*/
typedef void (CALLBACK *CB_DeviceProbe)(IN LPDeviceProbeConfig cConfig);

#endif
