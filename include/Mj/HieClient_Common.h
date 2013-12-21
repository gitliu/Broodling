#ifndef HIE_CLIENT_COMMON_H

//////////////////////////////////////////////////////////////////////////
//宏定义
//////////////////////////////////////////////////////////////////////////
//HieClient通用信息定义文件
#define HIE_CLIENT_COMMON_H

/*!
* @file
*  HieClient_Common.h
* \brief
*  客户端SDK接口结构与类型定义
* @author
*  郝勇
* @date
*  2009年3月13日
* @version
*  1.0.0
*/

//参数属性
/** \brief 入参																						*/
#define IN

/** \brief 出参																						*/
#define OUT

/** \brief 入出参																					*/
#define IN_OUT

/** \brief 用户句柄,通过登录操作获取																*/
#define HUSER						HANDLE

/** \brief 流媒体句柄,通过流媒体连接操作获取														*/
#define HSTREAM						HANDLE

/** \brief 历史通道句柄,通过历史通道创建获取														*/
#define HHISTORY					HANDLE

/** \brief 历史流查询句柄,通过历史流查询创建获取													*/
#define HSTREAM_QUERY				HANDLE

/** \brief 文件查询句柄,通过文件查询创建获取														*/
#define HFILE_QUERY					HANDLE

/** \brief 历史日志查询句柄,通过历史日志查询创建获取												*/
#define HLOG_QUERY					HANDLE

/** \brief 透明通道句柄,通过透明通道创建获取														*/
#define HTRANSPARENT				HANDLE

/** \brief 文件传输句柄,通过文件传输创建获取														*/
#define HFILE_TRANSFER				HANDLE

/** \brief 窗口句柄,用于显示解码图像																*/
#define HWINDOW						HWND

/** \brief 实时流最大客户数																			*/
#define REAL_STREAM_LIMIT			(8)

/** \brief 语音流最大客户端																			*/
#define VOICE_STREAM_LIMIT			(REAL_STREAM_LIMIT)

/** \brief 用户名长度																				*/
#define USERNAME_LEN				(32)

/** \brief 用户密码长度																				*/
#define USERPASS_LEN				(32)

/** \brief IP地址长度(含结束符)	xxx.xxx.xxx.xxx														*/
#define IP_ADDRESS_LEN				(16)

/** \brief MAC地址长度(含结束符)																	*/
#define MAC_ADDRESS_LEN				(18)

/** \brief MAC地址二进制长度																		*/
#define MAC_BINARY_ADDRESS_LEN		(6)

/** \brief 版本信息长度(含结束符)																	*/
#define VERSION_INFO_LEN			(20)

/** \brief 最大文件名长度																			*/
#define MAX_FILENAME				(256)

/** \brief 域名长度(含结束符)																		*/
#define DOMAIN_ADDRESS_LEN			(256)

/** \brief 地址长度(含结束符)																		*/
#define MAX_ADDRESS_LEN				(DOMAIN_ADDRESS_LEN)

/** \brief 默认保留字段个数																			*/
#define DEF_RESERVE_NUM				(3)

/** \brief 默认HTTP配置保留字段个数																	*/
#define DEF_HTTP_CFG_RESERVE_NUM	(16)

/** \brief 配置信息最大长度											                    			*/
#define MAX_CFG_LEN					(128 * 1024)

/** \brief 配置信息最大长度（V2版本）								                    			*/
#define MAX_CFG_LEN_V2				(128 * 1024 * 2)

/** \brief 最大事件通知类型数																		*/
#define	MAX_EVENT_NUM				(32)

/** \brief URL字符长度																				*/
#define MAX_URL_LEN					(256)

/** \brief 日期时间串长度																			*/
#define DATE_TIME_LEN				(15)

/** \brief MAC地址字符长度, xx:xx:xx:xx:xx:xx														*/
#define MAC_ADDRESS_LEN				(18)

/** \brief 单服务器最大通道数																		*/
#define MAX_CHANNEL_NUM				(16)

/** \brief 单服务器最大解码通道数																	*/
#define MAX_DEC_CHANNEL_NUMBER		(64)

/** \brief 单服务器最大分屏数																		*/
#define MAX_DISPLAY_SCREEN_NUMBER	(64)

/** \brief 用户名最大长度																			*/
#define MAX_USER_NAME_LEN			(32)

/** \brief 用户密码最大长度																			*/
#define MAX_USER_PASS_LEN			(32)

/** \brief 字体名最大长度																			*/
#define MAX_FONT_NAME_LEN			(32)

/** \brief 文件路径最大长度																			*/
#define MAX_FILE_PATH_LEN			(256)

/** \brief 最大查询连接ID个数																		*/
#define MAX_LINK_ID_QUERY_NUM		(256)

/** \brief 播放控制参数个数																			*/
#define MAX_PLAY_CONTROL_PARAMETER	(5)

/** \brief 最大解码通道轮转视频源个数																			*/
#define MAX_DECODER_CHANNEL_SOURCE	(16)

/** \brief 屏幕控制参数个数																			*/
#define MAX_SCREEN_CONTROL_PARAMETER	(5)

/** \brief LOGO图片参数个数																			*/
#define MAX_LOGO_PICTURE_PARAMETER	(5)

/** \brief OSD文本字符串																			*/
#define MAX_OSD_TEXT_STRING_LENGTH	(64)

/** \brief RTSP源字符串																				*/
#define MAX_RTSP_SOURCE_STRING_LENGTH	(128)

//////////////////////////////////////////////////////////////////////////
//历史流帧宏定义
//////////////////////////////////////////////////////////////////////////
/** \brief 历史流异常结束																			*/
#define HISTORY_STREAM_EXCEPTION	(0x01000000)

/** \brief 历史流切换帧宏定义																		*/
#define	HISTORY_STREAM_SWITCH_FRAME	(0x02000000)

/** \brief 历史流跳到新的时间片																		*/
#define HISTORY_STREAM_TIME_JUMP	(0x03000000)

/** \brief 历史流结束帧宏定义																		*/
#define	HISTORY_STREAM_TIME_END		(0x04000000)

/** \brief 历史流数据查询完毕																		*/
#define HISTORY_STREAM_TIME_CURR	(0x05000000)


//////////////////////////////////////////////////////////////////////////
//远程事件类型
//////////////////////////////////////////////////////////////////////////
/** \brief 报警事件																					*/
#define USEREVENT_ALARM_NOTICE			(0x00000001)

/** \brief 心跳丢失,网络断开																		*/
#define USEREVENT_HEARTBEAT_LOST		(0x00000002)

/** \brief 网络重连成功																				*/
#define USEREVENT_NET_RECOVER			(0x00000004)

/** \brief 远程用户断开																				*/
#define USEREVENT_USER_DISCONNECT		(0x00000008)

/** \brief 远程流媒体断开																			*/
#define USEREVENT_STREAM_DISCONNECT		(0x00000010)

/** \brief 硬盘组管理事件																			*/
#define USEREVENT_DISKGROUP_MANAGE		(0x00000020)

/** \brief 历史流事件通知																			*/
#define USEREVENT_HISTORYSTREAM_NOTICE	(0x00000040)

/** \brief 实时流启动连接ID通知																		*/
#define USEREVENT_REALSTREAM_STARTLINK	(0x00000080)

/** \brief 实时流停止连接ID通知																		*/
#define USEREVENT_REALSTREAM_STOPLINK	(0x00000100)

/** \brief 语音流启动连接ID通知																		*/
#define USEREVENT_VOICESTREAM_STARTLINK	(0x00000200)

/** \brief 语音流停止连接ID通知																		*/
#define USEREVENT_VOICESTREAM_STOPLINK	(0x00000400)

/** \brief 历史流销毁事件通知																		*/
#define USEREVENT_HISTORYSTREAM_DESTROYLINK		(0X00000800)

/** \brief 历史流启动事件通知																		*/
#define USEREVENT_HISTORYSTREAM_STARTLINK		(0X00001000)

/** \brief 历史流停止事件通知																		*/
#define USEREVENT_HISTORYSTREAM_STOPLINK		(0X00002000)

/** \brief 历史流创建事件通知																		*/
#define USEREVENT_HISTORYSTREAM_CREATELINK		(0X00004000)


//////////////////////////////////////////////////////////////////////////
//历史流录像类型宏定义
//////////////////////////////////////////////////////////////////////////

/** \brief 普通录像类型																				*/
#define GENERAL_RECORD				(0X00000001)

/** \brief 手动录像类型																				*/
#define MANUAL_RECORD				(0X00000002)

/** \brief 报警录像类型																				*/
#define ALARM_RECORD				(0X00000004)

/** \brief 移动录像类型																				*/
#define MOTION_RECORD				(0X00000008)

/** \brief 所有录像类型																				*/
#define ALL_STREAM_MEDIA			(GENERAL_RECORD | MANUAL_RECORD | MOTION_RECORD | ALARM_RECORD)


//////////////////////////////////////////////////////////////////////////
//枚举
//////////////////////////////////////////////////////////////////////////

/*!
*  \enum	eSerialType
*  \brief	串口类型
*/
typedef enum eSerialType
{
	eTTY232 = 0,										/*!< RS232串口                               */
	eTTY485,											/*!< RS485串口                               */
	eTTY422,											/*!< RS422串口                               */
}eSerialType;

/*!
*  \enum	eAlertType
*  \brief	报警和异常警告类型
*/
typedef enum eAlertType
{
	ALERT_ALARMIN,										/*!< 报警输入								*/
	ALERT_MOTION,										/*!< 移动侦测								*/
	ALERT_ENCODEERROR,									/*!< 编码异常								*/
	ALERT_DISKERROR,									/*!< 硬盘错误								*/
	ALERT_DISKFULL,										/*!< 硬盘满									*/
	ALERT_IPCONFLICT,									/*!< IP冲突									*/
	ALERT_ILLEGEACCESS,									/*!< 非法访问								*/
	ALERT_RETICLEDISCONNECT,							/*!< 网线断									*/
	ALERT_VIDEOLOST,									/*!< 视频丢失								*/
	ALERT_VIDEOEXCEPTION,								/*!< 视频异常								*/
	ALERT_DISKGROUP_ERROR,								/*!< 盘组异常								*/
}eAlertType;

/*!
*  \enum	eHieClientError
*  \brief	错误码
*/
typedef enum eHieClientError
{
	eErrorNone						= 0,				/*!< 无错误									*/
	eErrorFailed,										/*!< 失败									*/
	eErrorNoInitializeSDK,								/*!< 未初始化SDK							*/
	eErrorHandle,										/*!< 句柄错误								*/
	eErrorParameter,									/*!< 参数错误								*/
	eErrorBufferNoEnough,								/*!< 缓冲区太小								*/
	eErrorMemory,										/*!< 内存错误								*/
	eErrorSystemFailed,									/*!< 操作系统返回错误						*/
	eErrorNoIdleResource,								/*!< 无可用资源								*/
	eErrorTimeOut,										/*!< 超时错误								*/
	eErrorFunctionVersionLow,							/*!< 功能版本低于服务器						*/
	eErrorFunctionVersionHigh,							/*!< 功能版本高于服务器						*/
	eErrorTaskNoRun,									/*!< 任务未启动								*/
	eErrorAlreadyRun,									/*!< 重复启动								*/
	eErrorConnectFailed,								/*!< 连接失败								*/
	eErrorSessionDisconnect,							/*!< 连接断开								*/
	eErrorCommandSendFailed,							/*!< 命令发送失败							*/
	eErrorServerReject,									/*!< 服务器拒绝								*/
	eErrorInvalidUser,									/*!< 用户句柄非法							*/
	eErrorCallFail,										/*!< 远程调用失败							*/
	eErrorCallReplyError,								/*!< 远程调用应答出错						*/
	
	eErrorUserName,										/*!< 用户名错误								*/
	eErrorUserPass,										/*!< 用户密码错误							*/
	eErrorIPLimited,									/*!< 用户IP限制								*/
	eErrorMACLimited,									/*!< 用MAC限制								*/
	eErrorUserNumOverflow,								/*!< 登陆用户过多							*/
	eErrorUserHeartBeat,								/*!< 用户心跳订阅失败						*/
	eErrorGetConfigurationPort,							/*!< 登陆时获取端口配置信息失败				*/
	eErrorServiceReseting,								/*!< 网络服务重启中							*/
	eErrorInvalidURL,									/*!< 无效的URL地址							*/

	eErrorNoSupportCommand,								/*!< 不支持的命令	                        */
	eErrorNotImplement,									/*!< 未实现									*/
	eErrorUnserialize,									/*!< 反序列化失败							*/

	//为了与设备上配置信息操作错误码匹配，配置信息错误码定义如下：(其他的错误码请在上面定义)
	eErrorMODULE_ID = 16000,
	eErrorUNSUPPORTED_MAJORTYPE,						/*!< 不支持的主命令字						*/
	eErrorUNSUPPORTED_MINORTYPE,						/*!< 不支持的次命令字						*/
	eErrorSTRUCT_UNVALID,								/*!< 结构体无效								*/
	eErrorSTRUCT_READONLY,								/*!< 结构体是只读的							*/
	eErrorBUF_SMALL,									/*!< 缓冲区太小								*/
	eErrorSTRUCT_UNSUPPORTED,							/*!< 系统不支持该结构体的设置或读取			*/
	eErrorNO_RIGHT,										/*!< 没有权限								*/
	eErrorPARAM_OVERFLOW,								/*!< 参数溢出								*/
	eErrorCALLSDK_FAIL,									/*!< 调用SDK失败							*/

}eHieClientError;

/*!
*  \enum	eClientSDKAttributeType
*  \brief	客户端SDK属性类型
*/
typedef enum eClientSDKAttributeType
{
	eClientSDKAttributeTypeBegin			=	0,		/*!< 起始值									*/
	eAttributeConnectTimeOut,							/*!< 连接超时时间							*/
	eAttributeCommandTimeOut,							/*!< 命令控制超时时间						*/
	eAttributeMediaTimeOut,								/*!< 媒体控制超时时间						*/
	eClientSDKAttributeTypeEnd,							/*!< 结束值									*/
}eClientSDKAttributeType;

/*!
*  \enum	eMediaFunctionType
*  \brief	媒体功能类型
*/
typedef enum eMediaFunctionType
{
	eMediaFunctionTypeBegin			=	0,				/*!< 起始值									*/
	eMediaFunctionRealStream,							/*!< 实时流									*/
	eMediaFunctionVoiceStream,							/*!< 语音流									*/
	eMediaFunctionHistoryStream,						/*!< 历史流									*/
	eMediaFunctionTransparent,							/*!< 透明通道								*/
	eMediaFunctionFileUpload,							/*!< 文件上传								*/
	eMediaFunctionFileDownload,							/*!< 文件下载								*/
	eMediaFunctionTypeEnd,								/*!< 结束值									*/
}eMediaFunctionType;

/*!
*  \enum	eStreamTransferMode
*  \ingroup DS_StreamTransferMode
*  \brief	流传输方式
*/
typedef enum eStreamTransferMode
{
	eStreamTransferModeBegin		=	0,				/*!< 起始值									*/
	eGeneralTCP,										/*!< 普通的TCP								*/
	eGeneralRTP,										/*!< 普通的RTP								*/
	eStreamTransferModeEnd,								/*!< 结束值									*/
}eStreamTransferMode;

/*!
*  \enum	eRTPStreamTransferMode
*  \ingroup DS_RTPStreamTransferMode
*  \brief	RTP流传输方式
*/
typedef enum eRTPStreamTransferMode
{
	eRTPStreamTransferModeBegin		=	0,				/*!< 起始值									*/
	eRTPGeneralTCP,										/*!< 普通的TCP								*/
	eRTPGeneralUDP,										/*!< 普通的UDP								*/
	eRTPStreamTransferModeEnd,								/*!< 结束值									*/
}eRTPStreamTransferMode;

/*!
*  \enum	eStreamMediaType
*  \ingroup DS_StreamMediaType
*  \brief	流媒体类型
*/
typedef enum eStreamMediaType
{
	eStreamMediaTypeBegin			=	0,				/*!< 起始值									*/
	eMainVideoAndSound,									/*!< 主码流音视频							*/
	eMainVideo,											/*!< 主码流视频								*/
	eMainSound,											/*!< 主码流音频								*/
	eAssistVideo,										/*!< 子码流视频								*/
	eAssistHDVideo,										/*!< 高清子码流视频							*/
	eStreamMediaTypeEnd,								/*!< 结束值									*/
}eStreamMediaType;

/*!
*  \enum	eHistoryStreamType
*  \ingroup DS_HistoryStreamType
*  \brief	历史流类型
*/
typedef enum eHistoryStreamType
{
	eHistoryStreamTypeBegin = 0,						/*!< 起始值                                 */
	eAllStreamMedia,									/*!< 所有流媒体                             */
	eGeneralRecord,										/*!< 普通录像                               */
	eManualRecord,										/*!< 手动录像                               */
	eMotionRecord,										/*!< 移动录像                               */
	eAlarmRecord,										/*!< 报警录像                               */
	eHistoryStreamTypeEnd,								/*!< 结束值                                 */
}eHistoryStreamType;

/*!
*  \enum	eFileType
*  \brief	文件类型
*/
typedef enum eFileQueryType
{
	eFileTypeBegin			=	0,						/*!< 起始值									*/
	eUpgrade,											/*!< 升级包									*/
	eImage,												/*!< 图片文件								*/
	ePtzProtocolFile,									/*!< 云台协议								*/
	eFileTypeEnd,										/*!< 结束值									*/
}eFileQueryType;

/*!
*  \enum	eHistoryStreamOperation
*  \brief	历史流操作,历史流支持多通道同时间点同时操作
*/
typedef enum eHistoryStreamOperation
{
	eHistoryStreamOperationBegin	=	0,				/*!< 起始值									*/
	eHistoryStreamAddChannel,							/*!< 添加历史通道							*/
	eHistoryStreamDelChannel,							/*!< 删除历史通道							*/
	eHistoryStreamOperationEnd,							/*!< 结束值									*/
}eHistoryStreamOperation;

/*!
*  \enum	eHistoryStreamControl
*  \brief	历史流控制
*/
typedef enum eHistoryStreamControl
{
	eHistoryStreamControlBegin		=	0,				/*!< 起始值									*/
	eHistoryPlay,										/*!< 播放									*/
	eHistoryStop,										/*!< 停止									*/
	eHistoryStreamControlEnd,							/*!< 结束值									*/
}eHistoryStreamControl;

/*!
*  \enum	eDecodeMode
*  \brief	解码方式
*/
typedef enum eDecodeMode
{
	eDecodeModeBegin				=	0,				/*!< 起始值									*/
	eSoftDecode,										/*!< 软件解码								*/
	eHardDecode,										/*!< 硬解码卡解码							*/
	eMatrixDecode,										/*!< 矩阵解码卡解码							*/
	eDecodeModeEnd,										/*!< 结束值									*/
}eDecodeMode;

/*!
*  \enum	eDecodeShowMode
*  \brief	解码方式
*/
typedef enum eDecodeShowMode
{
	eDecodeShowModeBegin			=	0,				/*!< 起始值									*/
	eNormalMode,										/*!< 普通模式								*/
	eOverlayMode,										/*!< 覆盖模式,一台客户端同一时间只能启动一个*/
	eDecodeShowModeEnd,									/*!< 结束值									*/
}eDecodeShowMode;

/*!
*  \enum	eDecodeEffectType
*  \brief	解码效果类型
*/
typedef enum eDecodeEffectType
{
	eDecodeEffectTypeBegin			=	0,				/*!< 起始值									*/
	eBrightValue,										/*!< 亮度									*/
	eContrastValue,										/*!< 对比度									*/
	eSaturationValue,									/*!< 饱和度									*/
	eHueValue,											/*!< 色调									*/
	eQualityValue,										/*!< 质量									*/
	eDecodeEffectTypeEnd,								/*!< 结束值									*/
}eDecodeEffectType;

/*!
*  \enum	eSoftDecodeEffectValue
*  \brief	软解码效果值
*/
typedef enum eSoftDecodeEffectValue
{
	eSoftDecodeEffectValueBegin		=	0,				/*!< 起始值									*/
	eSoftDecodeMinEffectValue		=	1,				/*!< 最小效果值								*/
	eSoftDecodeNormalEffectValue	=	8,				/*!< 正常效果值								*/
	eSoftDecodeMaxEffectValue		=	17,				/*!< 最大效果值								*/
	eSoftDecodeLowQualityValue,							/*!< 低质量									*/
	eSoftDecodeHighQualityValue,						/*!< 高质量									*/
	eSoftDecodeEffectValueEnd,							/*!< 结束值									*/
}eSoftDecodeEffectValue;

/*!
*  \enum	eMatrixDecodeEffectValue
*  \brief	矩阵解码效果值
*/
typedef enum eMatrixDecodeEffectValue
{
	eMatrixDecodeEffectValueBegin	=	0,				/*!< 起始值									*/
	eMatrixDecodeMinEffectValue		=	1,				/*!< 最小效果值								*/
	eMatrixDecodeNormalEffectValue	=	8,				/*!< 正常效果值								*/
	eMatrixDecodeMaxEffectValue		=	15,				/*!< 最大效果值								*/
	eMatrixDecodeLowQualityValue,						/*!< 低质量									*/
	eMatrixDecodeHighQualityValue,						/*!< 高质量									*/
	eMatrixDecodeEffectValueEnd,						/*!< 结束值									*/
}eMatrixDecodeEffectValue;



/*!
*  \enum	eTaskControl
*  \brief	任务控制
*/
typedef enum eTaskControl
{
	eTaskControlBegin				=	0,				/*!< 起始值									*/
	eTaskStart,											/*!< 任务启动								*/
	eTaskStop,											/*!< 任务停止								*/
	eTaskSetSpeed,										/*!< 历史流快放时，设置快放速度				*/
	eTaskControlEnd,									/*!< 结束值									*/
}eTaskControl;

/*!
*  \enum	eOperationType
*  \brief	操作类型
*/
typedef enum eOperationType
{
	eOperationTypeBegin			=	0,					/*!< 起始值									*/
	eOperationGet,										/*!< 获取操作								*/
	eOperationSet,										/*!< 设置操作								*/
	eOperationTypeEnd,									/*!< 结束值									*/
}eOperationType;

/*!
*  \enum	eVoiceStreamDisposeMode
*  \brief	语音流处理方式
*/
typedef enum eVoiceStreamDisposeMode
{
	eVoiceStreamDisposeModeBegin=	0,					/*!< 起始值									*/
	eVoiceStreamDecodePlay,								/*!< 解码播放								*/
	eVoiceStreamTransport,								/*!< 传输									*/
	eVoiceStreamDisposeModeEnd,							/*!< 结束值									*/
}eVoiceStreamDisposeMode;

/*!
*  \enum	eVoiceStreamSource
*  \brief	语音流来源
*/
typedef enum eVoiceStreamSource
{
	eVoiceStreamSourceBegin		=	0,					/*!< 起始值									*/
	eVoiceStreamCapture,								/*!< 捕获									*/
	eVoiceStreamReceive,								/*!< 接收									*/
	eVoiceStreamSourceEnd,								/*!< 结束值									*/
}eVoiceStreamSource;

/*!
*  \enum	eStreamImageFormat
*  \brief	流媒体图片格式
*/
typedef enum eStreamImageFormat
{
	eStreamImageFormatBegin		=	0,					/*!< 起始值									*/
	eStreamImageBitmap,									/*!< 位图									*/
	eStreamImageFormatEnd,								/*!< 结束值									*/
}eStreamImageFormat;


/*!-
*  \enum	eFileLockOperationCode
*  \brief	文件锁操作
*/
typedef enum eFileLockOperationCode
{
	eUnlockFile	=	0,									/*!< 解锁									*/
	eLockFile,											/*!< 开锁									*/
}eFileLockOperationCode;


/*!
*  \enum	eImageFormat
*  \brief	抓图文件格式
*/
typedef enum eImageFormat
{
	eImageFormatBegin = 0,								/*!< 起始值									*/
	eBmpFormat,											/*!< 位图格式								*/
	eJpgFormat,											/*!< jpg格式								*/
	eImageFormatEnd,									/*!< 结束值									*/
}eImageFormat;

/*!
*  \enum	eQueryStatus
*  \brief	查询状态
*/
typedef enum eQueryStatus
{
	eQueryOK = 0,										/*!< 查询成功								*/
	eQueryFailed,										/*!< 查询失败								*/
	eQueryBusy,											/*!< 查询忙									*/
	eQueryFinished,										/*!< 查询结束								*/
}eQueryStatus;

/*!
*  \enum	eRemoteDeviceControl
*  \brief	远程设备控制
*/
typedef enum eRemoteDeviceControl
{
	eRemoteDeviceControlBegin = 0,						/*!< 起始值									*/
	eDeviceReboot,										/*!< 重启动									*/
	eDeviceHalt,										/*!< 关机									*/
	eDeviceStandby,										/*!< 待机									*/
	eDeviceSetDefault,									/*!< 恢复系统默认							*/
	eDeviceSendTestEmail,								/*!< 发送测试邮件							*/
    eDeviceSetDefense,                                  /*!< 布防                                   */
    eDeviceUnsetDefense,                                /*!< 撤防                                   */
	eRemoteDeviceControlEnd,							/*!< 结束值									*/
}eRemoteDeviceControl;

/*!
*  \enum	eDiskGroupType
*  \brief	 盘组类型
*/
typedef enum eDiskGroupType
{
	eDiskGroupTypeBegin			= 0,					/*!< 起始值									*/
	eDiskGroupNormal,									/*!< 普通盘组								*/
	eDiskGroupAlarm,									/*!< 报警盘组								*/
	eDiskGroupRedundance,				    			/*!< 冗余盘组								*/
	eDiskGroupBackup,			       	    			/*!< 备份盘组								*/
	eDiskGroupTypeEnd,									/*!< 结束值									*/
}eDiskGroupType;

/*!
*  \enum	eDiskGroupOperation
*  \brief	硬盘组操作　
*/
typedef enum eDiskGroupOperation
{
	eDiskGroupOperationBegin = 0,						/*!< 起始值									*/
	eUnMountDisk,										/*!< 卸载硬盘								*/
	eCreateNewPartition,								/*!< 建立新分区								*/
	eDeletePartition,									/*!< 删除分区								*/
	eFormatPartition,									/*!< 格式化分区								*/
	eDiskGroupKeepTime,									/*!< 分组保持数据时间						*/
	eDiskGroupBindChannel,								/*!< 分组绑定通道							*/
	eDiskGroupAddPartition,								/*!< 添加分区至分组							*/
	eDiskGroupDelPartition,								/*!< 从分组删除分区							*/
	eInitializeDisk,									/*!< 初始化硬盘								*/
	eDiskGroupOperationEnd,								/*!< 结束值									*/
}eDiskGroupOperation;

/*!
*  \enum	eTransferFileType
*  \brief	传输文件类型
*/
typedef enum eTransferFileType
{
	eTransferFileTypeBegin		=	0,					/*!< 起始值									*/
	eFileSystemUpdate,									/*!< 升级包文件								*/
	ePtzProtocol,										/*!< 云台协议文件							*/
	eDeviceConfig,										/*!< 设备配置文件							*/
	ePicture,											/*!< 图片文件								*/
	eTransferFileTypeEnd,								/*!< 结束值									*/
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
*  \brief	任务状态
*/
typedef enum eTaskStatus
{
	eTaskStatusBegin				=	0,				/*!< 起始值									*/
	eTaskStatusNone,									/*!< 任务无状态								*/
	eTaskStatusInitialize,								/*!< 任务初始化								*/
	eTaskStatusDestroy,									/*!< 任务销毁								*/
	eTaskStatusStart,									/*!< 任务启动								*/
	eTaskStatusStop,									/*!< 任务停止								*/
	eTaskStatusRun,										/*!< 任务运行中								*/
	eTaskStatusRecover,									/*!< 任务恢复								*/
	eTaskStatusEnd,										/*!< 结束值									*/
}eTaskStatus;

/*!
*  \enum	eVoiceMode
*  \ingroup DS_VoiceMode
*  \brief	语音编解码模式
*/
typedef enum eVoiceMode
{
	eVoiceModeBegin			=	0,				/*!< 起始值									*/
	eVoiceG726,									/*!< G726编解码模式							*/
	eVoiceG711U,									/*!< G711U编解码模式                        */
	eVoiceMPEG4AAC,								/*!< MPEG4 AAC编解码模式                    */
	eVoiceAutoDiscern,									/*!< 自动识别编解码模式						*/
	eVoiceModeEnd,									/*!< 结束值									*/
}eVoiceMode;

/*!
*  \enum	eVideoCodecMode
*  \ingroup DS_VideoCodecMode
*  \brief	视频编解码模式
*/
typedef enum eVideoCodecMode
{
	eVideoCodecModeBegin			=	0,				/*!< 起始值									*/
	eVideoCodecH264,									/*!< 标准H264编解码模式						*/
	eVideoCodecHYMpeg4,									/*!< HYMpeg4编解码模式                      */
	eVideoCodecHYH264,									/*!< HYH264编解码模式						*/
	eVideoCodecAutoDiscern,								/*!< 自动识别编解码模式						*/
	eVideoCodecModeEnd,									/*!< 结束值									*/
}eVideoCodecMode;

/*!
*  \enum	eFileTransferControl
*  \brief	文件传输控制
*/
typedef enum eFileTransferControl
{
	eFileTransferControlBegin		=	0,				/*!< 起始值									*/
	eFileTransferStart,									/*!< 启动文件转输							*/
	eFileTransferStop,									/*!< 停止文件传输							*/
	eFileTransferControlend,							/*!< 起始值									*/
}eFileTransferControl;

/*!
*  \enum	ePTZControlCodeType
*  \brief	PTZ云台控制码类型
*/
typedef enum ePTZControlCmdCode
{
    ePTZControlCodeAllOff               = 0	,			//－	关闭(或断开)所有开关	(Param1: 无效, Param2: 无效, Param3: 无效, Param4: 无效)		
    ePTZControlCodeCameraPower          = 1	,			//－	接通摄像机电源		(Param1: 1-开始/0-停止, Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeLightPower           = 2	,			//－	接通灯光电源			(Param1: 1-开始/0-停止, Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeWiper                = 3	,			//－	接通雨刷开关			(Param1: 1-开始/0-停止, Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeFans                 = 4	,			//－	接通风扇开关			(Param1: 1-开始/0-停止, Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeHeater               = 5	,			//－	接通加热器开关		(Param1: 1-开始/0-停止, Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeAuxEquiment          = 6	,			//－	接通辅助设备开关		(Param1: 1-开始/0-停止, Param2: 无效, Param3: 无效, Param4: 无效)

    ePTZControlCodeStopContinue         = 10,			//－	停止所有连续量(镜头,云台)动作	(Param1: 无效, Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeZoomIn               = 11,			//－	焦距变大(倍率变大)		(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)
    ePTZControlCodeZoomOut              = 12,			//－	焦距变小(倍率变小)		(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)
    ePTZControlCodeFocusNear            = 13,			//－	焦点前调				(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)
    ePTZControlCodeFocusFar             = 14,			//－	焦点后调				(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)
    ePTZControlCodeApertureUp           = 15,			//－	光圈扩大				(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)
    ePTZControlCodeApertureDown         = 16,			//－	光圈缩小				(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)
    ePTZControlCodeAutoZoom             = 17,			//－	开自动焦距(自动倍率)	(Param1: 1-开始/0-停止, Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeAutoFocus            = 18,			//－	开自动调焦			(Param1: 1-开始/0-停止, Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeAutoAperture         = 19,			//－	开自动光圈			(Param1: 1-开始/0-停止, Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeUp                   = 21,			//－	云台上仰				(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)
    ePTZControlCodeDown                 = 22,			//－	云台下俯				(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)
    ePTZControlCodeLeft                 = 23,			//－	云台左转				(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)
    ePTZControlCodeRight                = 24,			//－	云台右转				(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)
    ePTZControlCodeUpLeft               = 25,			//－	云台上仰和左转		(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)
    ePTZControlCodeUpRight              = 26,			//－	云台上仰和右转		(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)
    ePTZControlCodeDownLeft             = 27,			//－	云台下俯和左转		(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)
    ePTZControlCodeDownRight            = 28,			//－	云台下俯和右转		(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)
    ePTZControlCodeAutoLeftRight        = 29,			//－	云台左右自动扫描		(Param1: 1-开始/0-停止, Param2: 速度 [0-10,0表示默认速度,1-10表示速度级别], Param3: 无效, Param4: 无效)

	ePTZControlCodePresetSet            = 40,			//－	设置预置点			(Param1: 预置点序号[>=0], Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodePresetClear          = 41,			//－	清除预置点			(Param1: 预置点序号[>=0], Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodePresetCall           = 42,			//－	转到预置点			(Param1: 预置点序号[>=0], Param2: 无效, Param3: 无效, Param4: 无效)

    ePTZControlCodeCuriserSetStart      = 51,			//－	启动巡航记忆			(Param1: 巡航路线号[>=0], Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeCuriserSetStop       = 52,			//－	关闭巡航记忆			(Param1: 巡航路线号[>=0], Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeCuriserAddPreset     = 53,			//－	将预置点加入巡航序列	(Param1: 巡航路线号[>=0], Param2: 预置点序号[>=0], Param3: 停顿时间[秒,>=0], Param4: 巡航速度[1-10])
    ePTZControlCodeCuriserRunStart      = 54,			//－	开始巡航				(Param1: 巡航路线号[>=0], Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeCuriserRunStop       = 55,			//－	停止巡航				(Param1: 巡航路线号[>=0], Param2: 无效, Param3: 无效, Param4: 无效)

    ePTZControlCodeTraceSetStart        = 61,			//－	启动轨迹记忆			(Param1: 轨迹号[>=0], Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeTraceSetStop         = 62,			//－	关闭轨迹记忆			(Param1: 轨迹号[>=0], Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeTraceRunStart        = 63,			//－	开始轨迹				(Param1: 轨迹号[>=0], Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeTraceRunStop         = 64,			//－	停止轨迹				(Param1: 轨迹号[>=0], Param2: 无效, Param3: 无效, Param4: 无效)
    ePTZControlCodeSystemReset          = 99,			//－	系统复位				(Param1: 无效, Param2: 无效, Param3: 无效, Param4: 无效)

}ePTZControlCmdCode;

/*!
*  \enum	eHistoryLogMajorType
*  \brief	日志查询主类型
*/
typedef enum eHistoryLogMajorType
{
	eHistoryLogMajorTypeBegin	=	0,					/*!< 起始值									*/
	eHistoryLogSysOperation,							/*!< 系统管理日志							*/
	eHistoryLogSysSetting,								/*!< 系统配置日志							*/
	eHistoryLogRecord,									/*!< 录像日志								*/
	eHistoryLogUserManage,								/*!< 用户管理日志							*/
	eHistoryLogAlarm,									/*!< 设备报警日志							*/
	eHistoryLogException,								/*!< 设备异常日志							*/
	eHistoryLogStorage,									/*!< 存储管理日志							*/
	eHistoryLogMajorAll,								/*!< 忽略主类型								*/
	eHistoryLogMajorTypeEnd,							/*!< 结束值									*/
}eHistoryLogMajorType;

/*!
*  \enum	eHistoryLogMinorType
*  \brief	日志查询子类型
*/
typedef enum eHistoryLogMinorType
{
	eHistoryLogSysOpAll				= 0,				/*!< 系统操作所有子项						*/
	eHistoryLogSysOpUpdate,								/*!< 系统升级								*/
	eHistoryLogSysOpPTZControl,							/*!< 云台控制								*/
	eHistoryLogSysOpIllShutdown,						/*!< 非法关机								*/
	eHistoryLogSysOpPowerOff,							/*!< 正常关机								*/
	eHistoryLogSysOpPowerOn,							/*!< 开机									*/
	eHistoryLogSysOpRemoteReset,						/*!< 远程重启								*/
	eHistoryLogSysOpClearAlarm,							/*!< 消警									*/

	eHistoryLogSysSetAll			= 100,				/*!< 系统设置所有子项						*/
	eHistoryLogSysSetTimeSetting,						/*!< 录像时间表设置							*/
	eHistoryLogSysSetCommonSetting,						/*!< 普通设置								*/
	eHistoryLogSysSetCodecSetting,						/*!< 编码设置								*/
	eHistoryLogSysSetNetSetting,						/*!< 网络设置								*/
	eHistoryLogSysSetServerSetting,						/*!< 服务器设置								*/
	eHistoryLogSysSetMotionSetting,						/*!< 移动侦测设置							*/
	eHistoryLogSysSetPTZSetting,						/*!< 云台解码器设置							*/
	eHistoryLogSysSetDefaultSetting,					/*!< 恢复默认设置							*/
	eHistoryLogSysSetDisplayDeviceSetting,				/*!< 设置显示设备参数						*/
	eHistoryLogSysSetDisplayModeSetting,				/*!< 显示模式设置							*/
	eHistoryLogSysSetPictureSetting,					/*!< 图像颜色设置							*/
	eHistoryLogSysSetMaintainSetting,					/*!< 自动维护设置							*/
	eHistoryLogSysSetAlarmOutSetting,					/*!< 报警输出设置							*/
	eHistoryLogSysSetAlarmInSetting,					/*!< 报警输入设置							*/
	eHistoryLogSysSetCustomizeFunction,					/*!< 功能定制设置							*/
	eHistoryLogSysSetImportPTZProtocol,					/*!< 导入云台协议							*/
	eHistoryLogSysSetExportPTZProtocol,					/*!< 导出云台协议							*/
	eHistoryLogSysSetImportSettings,					/*!< 导入参数配置							*/
	eHistoryLogSysSetExportSettings,					/*!< 导入参数配置							*/
	eHistoryLogSysSetExceptionSetting,					/*!< 异常参数配置							*/

	eHistoryLogRecordAll			= 200,				/*!< 录像控制所有子项						*/
	eHistoryLogRecordStartManual,						/*!< 启动手动录像							*/
	eHistoryLogRecordStartAuto,							/*!< 启动自动录像							*/
	eHistoryLogRecordStop,								/*!< 停止结束								*/

	eHistoryLogUserAll				= 300,				/*!< 用户管理所有子项						*/
	eHistoryLogUserAdd,									/*!< 添加用户								*/
	eHistoryLogUserDelete,								/*!< 删除用户								*/
	eHistoryLogUserEdit,								/*!< 修改用户资料							*/
	eHistoryLogUserLogin,								/*!< 用户登录								*/
	eHistoryLogUserLogout,								/*!< 用户登出								*/

	eHistoryLogAlarmAll				= 400,				/*< 报警所有子项							*/
	eHistoryLogAlarmMotionStart,						/*!< 移动侦测开始							*/
	eHistoryLogAlarmMotionStop,							/*!< 移动侦测结束							*/
	eHistoryLogAlarmInputAlarm,							/*!< 输入报警开始							*/

	eHistoryLogExceptionAll			= 500,				/*!< 异常所有子项							*/
	eHistoryLogExceptionIpConflict,						/*!< IP冲突									*/
	eHistoryLogExceptionHardDiskFull,					/*!< 硬盘满									*/
	eHistoryLogExceptionHardDiskError,					/*!< 硬盘出错								*/
	eHistoryLogExceptionIllegalAccess,					/*!< 非法访问								*/
	eHistoryLogExceptionSignalLost,						/*!< 信号丢失								*/
	eHistoryLogExceptionSignalRecover,					/*!< 信号恢复								*/
	eHistoryLogExceptionNetDisconnect,					/*!< 网线断									*/

	eHistoryLogStorageAll			= 600,				/*!< 存储管理所有子项						*/
	eHistoryLogStorageFormatPartition,					/*!< 分区格式化								*/
	eHistoryLogStorageAddPartition,						/*!< 添加分区								*/
	eHistoryLogStorageRemovePartition,					/*!< 删除分区　								*/
	eHistoryLogStorageUnmountDisk,						/*!< 卸载硬盘								*/
	eHistoryLogStorageDiskGroupOperation,				/*!< 磁盘分组管理							*/
}eHistoryLogMinorType;

/*!
*  \enum	eFrameType
*  \ingroup DS_FrameType
*  \brief	帧类型
*/
typedef enum eFrameType
{
	eFrameError								= 0x0000,
	eFrameIFrames							= 0x0001,	//主码流的I帧
	eFramePFrames							= 0x0002,
	eFrameBPFrames 							= 0x0020,
	eFrameBBPFrames 						= 0x0004,
	eFrameAudioFrames 						= 0x0008,
	eFrameQCIFIFrames						= 0x0010,	//QCIF的I帧
	eFramePktSQCIFIFrames 					= 0x0011,	//高清子码流I帧
	eFrameQCIFPFrames 						= 0x0040,
	eFramePktSQCIFPFrames 					= 0x0041,	//高清子码流P帧
	eFrameBIFrames							= 0x0090,
	eFrameBBIFrames							= 0x00C0,
	eFrameSysHeader							= 0x0080,	//主码流系统头
	eFramePktSysHeaderAux					= 0x0081,	//子码流系统头
	eFramePktSysHeaderHDAux					= 0x0082,	//高清子码流系统头
	eFrameSFrames 							= 0x0200,
	eFrameDspStatus 						= 0x0100,
	eFrameAimDetection						= 0x0400,
	eFrameOrigImage							= 0x0800,
	eFrameMotionDetection 					= 0x1000,
}eFrameType;

/*!
*  \enum	ePanelKeyBoardCodeType
*  \brief	面板键盘值类型
*/
typedef enum ePanelKeyBoardCodeType
{
	ePanelKeyBoardTypeBegin						= 0x0,		/*!< 起始值									*/
	ePanelKeyBoardCode_0						= 0x1,		/*!< 对应键:0								*/
	ePanelKeyBoardCode_1						= 0x2,		/*!< 对应键:1								*/
	ePanelKeyBoardCode_2 						= 0x3,		/*!< 对应键:2								*/
	ePanelKeyBoardCode_3 						= 0x4,		/*!< 对应键:3								*/
	ePanelKeyBoardCode_4 						= 0x5,		/*!< 对应键:4								*/
	ePanelKeyBoardCode_5 						= 0x6,		/*!< 对应键:5								*/
	ePanelKeyBoardCode_6 						= 0x7,		/*!< 对应键:6								*/
	ePanelKeyBoardCode_7 						= 0x8,		/*!< 对应键:7								*/
	ePanelKeyBoardCode_8 						= 0x9,		/*!< 对应键:8								*/
	ePanelKeyBoardCode_9 						= 0xA,		/*!< 对应键:9								*/
	ePanelKeyBoardCode_10 						= 0xB,		/*!< 对应键:10								*/
	ePanelKeyBoardCode_11 						= 0xC,		/*!< 对应键:11								*/
	ePanelKeyBoardCode_12 						= 0xD,		/*!< 对应键:12								*/
	ePanelKeyBoardCode_13 						= 0xE,		/*!< 对应键:13								*/
	ePanelKeyBoardCode_14 						= 0xF,		/*!< 对应键:14								*/
	ePanelKeyBoardCode_15 						= 0x10,		/*!< 对应键:15								*/
	ePanelKeyBoardCode_16 						= 0x11,		/*!< 对应键:16								*/
	ePanelKeyBoardCode_PTZ						= 0x40,		/*!< 对应键:云台							*/
	ePanelKeyBoardCode_Copy						= 0x41,		/*!< 对应键:备份							*/
	ePanelKeyBoardCode_Multi					= 0x42,		/*!< 对应键:多画面							*/
	ePanelKeyBoardCode_Switch					= 0x43,		/*!< 对应键:切换							*/
	ePanelKeyBoardCode_Function					= 0x44,		/*!< 对应键:辅助							*/
	ePanelKeyBoardCode_Play						= 0x45,		/*!< 对应键:播放							*/
	ePanelKeyBoardCode_Backward 				= 0x46,		/*!< 对应键:倒放							*/
	ePanelKeyBoardCode_Record					= 0x47,		/*!< 对应键:录像							*/
	ePanelKeyBoardCode_ESC						= 0x48,		/*!< 对应键:退出							*/
	ePanelKeyBoardCode_Left						= 0x49,		/*!< 对应键:左								*/
	ePanelKeyBoardCode_Right					= 0x4A,		/*!< 对应键:右								*/
	ePanelKeyBoardCode_Up						= 0x4B,		/*!< 对应键:上								*/
	ePanelKeyBoardCode_Down						= 0x4C,		/*!< 对应键:下								*/
	ePanelKeyBoardCode_Enter					= 0x4D,		/*!< 对应键:确认							*/
	ePanelKeyBoardCode_Shutdown 				= 0x4E,		/*!< 对应键:关机							*/
	ePanelKeyBoardCode_TV_VGA					= 0x4F,		/*!< 对应键:TV/VGA							*/
	ePanelKeyBoardCode_Edit						= 0x50,		/*!< 对应键:编辑							*/
	ePanelKeyBoardCode_Language					= 0x51,		/*!< 对应键:语言							*/
	ePanelKeyBoardCode_Mute						= 0x52,		/*!< 对应键:静音							*/
	ePanelKeyBoardCode_Pause					= 0x53,		/*!< 对应键:暂停							*/
	ePanelKeyBoardCode_Stop						= 0x54,		/*!< 对应键:停止							*/
	ePanelKeyBoardCode_AlarmClear				= 0x55,		/*!< 对应键:消警							*/
	ePanelKeyBoardCode_Defence					= 0x56,		/*!< 对应键:布防撤防						*/
	ePanelKeyBoardCode_Capture					= 0x57,		/*!< 对应键:抓图							*/
	ePanelKeyBoardCode_LightAdd					= 0x58,		/*!< 对应键:亮度增加						*/
	ePanelKeyBoardCode_LightSub					= 0x59,		/*!< 对应键:亮度减少						*/
	ePanelKeyBoardCode_ContrastAdd				= 0x5A,		/*!< 对应键:对比度增加						*/
	ePanelKeyBoardCode_ContrastSub				= 0x5B,		/*!< 对应键:对比度减少						*/
	ePanelKeyBoardCode_SpeedAdd					= 0x5C,		/*!< 对应键:速度增加						*/
	ePanelKeyBoardCode_SpeedSub					= 0x5D,		/*!< 对应键:速度减少						*/
	ePanelKeyBoardCode_Set						= 0x5E,		/*!< 对应键:设置							*/
	ePanelKeyBoardCode_F1						= 0x5F,		/*!< 对应键:F1								*/
	ePanelKeyBoardTypeEnd,									/*!< 结束值									*/
}ePanelKeyBoardCodeType;

/*!
*  \enum	ePanelControlType
*  \brief	面板控制类型
*/
typedef enum ePanelControlType
{
	ePanelControlBegin							= 0,		/*!< 起始值									*/
	ePanelControlKeyDown,									/*!< 按下									*/
	ePanelControlKeyUp,										/*!< 弹起									*/
	ePanelControlClick,										/*!< 点击(按下并弹起)						*/
	ePanelControlEnd,										/*!< 结束值									*/
}ePanelControlType;

/*!
*  \enum	eDecoderChannelStatus
*  \ingroup DS_DecoderChannelStatus
*  \brief	解码通道状态
*/
typedef enum eDecoderChannelStatus
{
	eDecoderChannelStatusBegin					= 0,		/*!< 起始值									*/
	eDecoderChannelStatusOpen,								/*!< 打开									*/
	eDecoderChannelStatusClose,								/*!< 关闭									*/
	eDecoderChannelStatusContinue,							/*!< 保持									*/
	eDecoderChannelStatusEnd,								/*!< 结束值									*/
}eDecoderChannelStatus;

/*!
*  \enum	eStreamSourceType
*  \ingroup DS_StreamSourceType
*  \brief	流媒体源类型
*/
typedef enum eStreamSourceType
{
	eStreamSourceTypeBegin						= 0,		/*!< 起始值									*/
	eStreamSourceTypeReal,									/*!< 实时流									*/
	eStreamSourceTypeHistory,								/*!< 历史流									*/
	eStreamSourceTypeEnd,									/*!< 结束值									*/
}eStreamSourceType;

/*!
*  \enum	eStreamPlayControlStatus
*  \ingroup DS_StreamPlayControlStatus
*  \brief	流媒体播放控制状态
*/
typedef enum eStreamPlayControlStatus
{
	eStreamPlayControlBegin						= 0,		/*!< 起始值									*/
	eStreamPlayControlPlay,									/*!< 播放									*/
	eStreamPlayControlSuspend,								/*!< 暂停									*/
	eStreamPlayControlResume,								/*!< 恢复									*/
	eStreamPlayControlStop,									/*!< 停止									*/
	eStreamPlayControlFast,									/*!< 快速播放								*/
	eStreamPlayControlSlow,									/*!< 慢速播放								*/
	eStreamPlayControlNormal,								/*!< 正常速度								*/
	eStreamPlayControlOneByOne,								/*!< 单帧播放								*/
	eStreamPlayControlOpenAudio,							/*!< 打开声音								*/
	eStreamPlayControlCloseAudio,							/*!< 关闭声音								*/
	eStreamPlayControlSetPos,								/*!< 设置位置								*/
	eStreamPlayControlClearBuffer,							/*!< 清空缓冲区								*/
	eStreamPlayControlEnd,									/*!< 结束值									*/
}eStreamPlayControlStatus;

/*!
*  \enum	eDisplayControlStatus
*  \ingroup DS_DisplayControlStatus
*  \brief	显示控制状态
*/
typedef enum eDisplayControlStatus
{
	eDisplayControlStatusBegin					= 0,		/*!< 起始值									*/
	eDisplayControlStatusEnlarge,							/*!< 放大显示								*/
	eDisplayControlStatusRenew,								/*!< 还原									*/
	eDisplayControlStatusEnd,								/*!< 结束值									*/
}eDisplayControlStatus;

/*!
*  \enum	eScreenControlStatus
*  \ingroup DS_ScreenControlStatus
*  \brief	屏幕控制状态
*/
typedef enum eScreenControlStatus
{
	eScreenControlStatusBegin					= 0,			/*!< 起始值									*/
	eScreenControlStatusLoopStart,							/*!< 开始轮转									*/
	eScreenControlStatusLoopStop,							/*!< 停止轮转									*/
	eScreenControlStatusSplitSingle,						/*!< 单画面									*/
	eScreenControlStatusSplitThree,						/*!< 三画面									*/
	eScreenControlStatusSplitFour,							/*!< 四画面									*/
	eScreenControlStatusSplitSix,							/*!< 六画面									*/
	eScreenControlStatusSplitNine,							/*!< 九画面									*/
	eScreenControlStatusSplitTen,							/*!< 十画面									*/
	eScreenControlStatusSplitTwelve,						/*!< 十二画面									*/
	eScreenControlStatusSplitThirteen,						/*!< 十三画面									*/
	eScreenControlStatusSplitFifteen,						/*!< 十五画面									*/
	eScreenControlStatusSplitSixteen,						/*!< 十六画面									*/
	eScreenControlStatusEnd,								/*!< 结束值									*/
}eScreenControlStatus;

/*!
*  \enum	eResolutionMode
*  \ingroup DS_ResolutionMode
*  \brief	分辨率模式
*/
typedef enum eResolutionMode
{
	eResolutionModeBegin					=	0,			/*!< 起始值									*/
	eResolutionModeAutoDiscern,							/*!< 自动识别分辨率								*/
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
	eResolutionModeEnd,										/*!< 结束值									*/
}eResolutionMode;

/*!
*  \enum	eVGAResolutionMode
*  \ingroup DS_VGAResolutionMode
*  \brief	VGA分辨率
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
*  \brief	Logo图片类型
*/
typedef enum eLogoPictureType
{
	eLogoPictureTypeBegin					= 0,		/*!< 起始值									*/
	eLogoPictureTypeDecoderChannel,						/*!< 解码通道LOGO							*/
	eLogoPictureTypeEnd,								/*!< 结束值									*/
}eLogoPictureType;

/*!
*  \enum	eDeviceChannelControl
*  \ingroup DS_DeviceChannelControl
*  \brief	设备通道控制
*/
typedef enum eDeviceChannelControl
{
	eDeviceChannelControlBegin		 = 0,				/*!< 起始值									*/
	eDeviceChannelControlShowLogo,						/*!< 显示LOGO								*/
	eDeviceChannelControlHideLogo,						/*!< 隐藏LOGO								*/
	eDeviceChannelControlEnd,							/*!< 结束值									*/
}eDeviceChannelControl;

/*!
*  \enum	eDeviceProtocolType
*  \ingroup DS_DeviceProtocolType
*  \brief	设备协议类型
*/
typedef enum eDeviceProtocolType
{
	eDeviceProtocolTypeBegin		 = 0,				/*!< 起始值									*/
	eDeviceProtocolTypeAdapter,							/*!< 自适应版本								*/
	eDeviceProtocolTypeClassics,						/*!< 经典版本								*/
	eDeviceProtocolTypeNewborn,							/*!< 新版本									*/
	eDeviceProtocolTypeEnd,								/*!< 结束值									*/
}eDeviceProtocolType;

/*!
*  \enum	eNetworkSDKVersion
*  \ingroup DS_NetworkSDKVersion
*  \brief	网络库类型
*/
typedef enum eNetworkSDKVersion
{
	eNetworkSDKVersionUnkown		 = 0,					/*!< 未知版本								*/
	eNetworkSDKVersion1,								/*!< 对应hieclient.dll						*/
	eNetworkSDKVersion2,								/*!< 对应HieClientUnit.dll					*/
}eNetworkSDKVersion;
//////////////////////////////////////////////////////////////////////////
//结构
//////////////////////////////////////////////////////////////////////////

/*!
*  \struct	tagTimeInfo
*  \ingroup DS_TimeInfo
*  \brief	时间信息
*/
typedef struct tagTimeInfo
{
	WORD	wYear;										/*!< 年										*/
	WORD	wMonth;										/*!< 月										*/
	WORD	wDay;										/*!< 日										*/
	WORD	wHour;										/*!< 时										*/
	WORD	wMinute;									/*!< 分										*/
	WORD	wSecond;									/*!< 秒										*/
}TimeInfo, *LPTimeInfo;

/*!
*  \struct	tagAbsoluteTime
*  \ingroup DS_AbsoluteTime
*  \brief	绝对时间信息
*/
typedef struct tagAbsoluteTime
{
	WORD	wYear;										/*!< 年										*/
	WORD	wMonth;										/*!< 月										*/
	WORD	wWeek;										/*!< 周										*/
	WORD	wDay;										/*!< 日										*/
	WORD	wHour;										/*!< 时										*/
	WORD	wMinute;									/*!< 分										*/
	WORD	wSecond;									/*!< 秒										*/
	WORD	wMillisecond;								/*!< 毫秒									*/
}AbsoluteTime, *LPAbsoluteTime;

/*!
*  \struct	tagBuffer
*  \ingroup DS_Buffer
*  \brief	缓冲区信息
*/
typedef struct tagBuffer
{
	BYTE	*pBuffer;									/*!< 媒体数据缓冲区							*/
	DWORD	dwBufLen;									/*!< 媒体数据长度							*/
}Buffer, *LPBuffer;

/*!
*  \struct	tagUserLoginPara
*  \ingroup DS_UserLoginPara
*  \brief	用户登录参数
*/
typedef struct tagUserLoginPara
{
	char	sServerIP[MAX_ADDRESS_LEN];					/*!< 服务器端IP地址							*/
	DWORD	dwCommandPort;								/*!< 登录连接的信令端口						*/
	char	sUName[USERNAME_LEN];						/*!< 登录用户的用户名称						*/
	char	sUPass[USERPASS_LEN];						/*!< 登录用户的用户密码						*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}UserLoginPara, *LPUserLoginPara;

/*!
*  \struct	tagConfigInformation
*  \brief	远程配置信息
*/
typedef struct tagConfigInformation
{
	DWORD	dwMainCommand;								/*!< 配置信息主命令字						*/
	DWORD	dwAssistCommand;							/*!< 配置信息辅助命令字						*/
	char	sConfig[MAX_CFG_LEN];						/*!< 配置信息缓冲区							*/
	DWORD	dwConfigLen;								/*!< 配置信息长度							*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}ConfigInformation, *LPConfigInformation;

/*!
*  \struct	tagConfigInformationV2
*  \brief	远程配置信息(V2)
*/
typedef struct tagConfigInformationV2
{
	DWORD	dwMainCommand;								/*!< 配置信息主命令字						*/
	DWORD	dwAssistCommand;							/*!< 配置信息辅助命令字						*/
	DWORD	dwConfigLen;								/*!< 配置信息长度							*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
	char	sConfig[MAX_CFG_LEN_V2];					/*!< 配置信息缓冲区							*/
}ConfigInformationV2, *LPConfigInformationV2;

/*!
*  \struct	tagStreamMediaFrame
*  \brief	流媒体帧信息
*/
typedef struct tagStreamMediaFrame
{
	DWORD	dwChannel;									/*!< 通道号									*/
	Buffer	cFrameBuffer;								/*!< 帧缓冲区								*/
	AbsoluteTime	cFrameTime;							/*!< 帧时间									*/
	DWORD	dwFrameType;								/*!< 帧类型(详见类型eFrameType)				*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}StreamMediaFrame, *LPStreamMediaFrame;

/*!
*  \struct	tagStreamVoiceFrame
*  \brief	语音流帧信息
*/
typedef struct tagStreamVoiceFrame
{
	Buffer	cFrameBuffer;								/*!< 帧缓冲区								*/
	eVoiceStreamSource	eVoiceSource;					/*!< 帧来源									*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}StreamVoiceFrame, *LPStreamVoiceFrame;

/*!
*  \struct	tagRealStreamPara
*  \ingroup DS_RealStreamPara
*  \brief	实时流连接参数
*/
typedef struct tagRealStreamPara
{
	DWORD	dwChannel;									/*!< 解码器通道号							*/
	eStreamTransferMode	eTransferMode;					/*!< 传输模式								*/
	eStreamMediaType	eMediaType;						/*!< 流媒体类型								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}RealStreamPara, *LPRealStreamPara;

/*!
*  \struct	tagChannelOSDInformation
*  \ingroup DS_ChannelOSDInformation
*  \brief	通道OSD信息
*/
typedef struct tagChannelOSDInformation
{
	DWORD	dwEnable;									/*!< 启用: 0为不启用, 1为启用				*/
	char	cOSDText[MAX_OSD_TEXT_STRING_LENGTH];		/*!< OSD信息								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}ChannelOSDInformation, *LPChannelOSDInformation;

/*!
*  \struct	tagStreamTransferPara
*  \ingroup DS_VoiceInteract_CodecPara
*  \brief	流转发连接参数
*/
typedef struct tagStreamTransferPara
{
	eStreamTransferMode	eTransferMode;					/*!< 传输模式								*/
	eStreamSourceType eStreamSourceValue;				/*!< 流媒体源类型							*/
	eVideoCodecMode	eVideoCodecValue;					/*!< 视频编解码模式							*/
	eVoiceMode	eVoiceCodecValue;						/*!< 音频编解码模式							*/
	eResolutionMode	eResolutionValue;					/*!< 图像分辨率模式							*/
	ChannelOSDInformation	cOSDInfo;					/*!< OSD信息结构							*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}StreamTransferPara, *LPStreamTransferPara;

/*!
*  \struct	tagMediaServerInformation
*  \ingroup DS_MediaServerInformation
*  \brief	流媒体服务器信息
*/
typedef struct tagMediaServerInformation
{
	DWORD	dwEnable;									/*!< 启用: 0为不启用, 1为启用				*/
	char	sServerIP[MAX_ADDRESS_LEN];					/*!< 服务器端IP地址							*/
	DWORD	dwServerPort;								/*!< 登录连接的服务器端口					*/
	char	sUName[USERNAME_LEN];						/*!< 登录用户的用户名称						*/
	char	sUPass[USERPASS_LEN];						/*!< 登录用户的用户密码						*/
	eRTPStreamTransferMode	eRTPStreamTransferValue;	/*!< RTP流传输模式							*/
	char	sChannel[MAX_RTSP_SOURCE_STRING_LENGTH];	/*!< 视频通道								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}MediaServerInformation, *LPMediaServerInformation;

/*!
*  \struct	tagHistoryStreamPara
*  \ingroup DS_HistoryStreamPara
*  \brief	历史流连接参数
*/
typedef struct tagHistoryStreamPara
{
	DWORD	dwDiskGroup;								/*!< 盘组									*/
	DWORD	dwChannel;									/*!< 流媒体通道号							*/
	DWORD		dwEnableEndTime;						/*!< 结束时间是否有效						*/
	TimeInfo	cBeginTime;								/*!< 历史流起始时间							*/
	TimeInfo	cEndTime;								/*!< 历史流结束时间							*/
	eHistoryStreamType	eStreamType;					/*!< 历史流类型								*/
	eStreamTransferMode	eTransferMode;					/*!< 传输模式								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}HistoryStreamPara, *LPHistoryStreamPara;

/*!
*  \struct	tagHYPrivateServerInformation
*  \ingroup DS_HYPrivateServerInformation
*  \brief	HY私有协议服务器信息
*/
typedef struct tagHYPrivateServerInformation
{
	DWORD	dwEnable;									/*!< 启用: 0为不启用, 1为启用				*/
	eDeviceProtocolType	eDeviceProtocolValue;			/*!< 设备协议版本类型						*/
	eStreamSourceType	eStreamSourceValue;				/*!< 流媒体源类型							*/
	UserLoginPara	cUserLoginPara;						/*!< 登录参数信息							*/
	RealStreamPara	cRealStreamPara;					/*!< 实时流参数信息							*/
	HistoryStreamPara cHistoryStreamPara;				/*!< 历史流参数信息							*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}HYPrivateServerInformation, *LPHYPrivateServerInformation;

/*!
*  \struct	tagLocalHistoryInformation
*  \ingroup DS_LocalHistoryInformation
*  \brief	本地历史流信息
*/
typedef struct tagLocalHistoryInformation
{
	DWORD		dwEnable;								/*!< 启用: 0为不启用, 1为启用				*/
	DWORD		dwEnableEndTime;						/*!< 结束时间是否有效						*/
	TimeInfo	cBeginTime;								/*!< 历史流起始时间							*/
	TimeInfo	cEndTime;								/*!< 历史流结束时间							*/
	eHistoryStreamType	eStreamType;					/*!< 历史流类型								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}LocalHistoryInformation, *LPLocalHistoryInformation;

/*!
*  \struct	tagDecoderDynamicInformation
*  \brief	动态解码服务器信息
*/
typedef struct tagDecoderDynamicInformation
{
	MediaServerInformation	cMediaServerInfo;			/*!< 流媒体服务器信息						*/
	HYPrivateServerInformation	cHYPrivateServerInfo;	/*!< HY私有协议服务器信息					*/
	LocalHistoryInformation	cLocalHistoryInformation;	/*!< 本地历史流信息							*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}DecoderDynamicInformation, *LPDecoderDynamicInformation;

/*!
*  \struct	tagStreamTransferFrame
*  \ingroup DS_StreamTransferFrame
*  \brief	流转发帧参数
*/
typedef struct tagStreamTransferFrame
{
	eFrameType	eFrameTypeInfo;							/*!< 帧类型信息								*/
	DWORD	dwTimeStamp;								/*!< 帧时间戳								*/
	AbsoluteTime cAbsoluteTime;							/*!< 帧绝对时间戳							*/
	DWORD	dwFrameNumber;								/*!< 帧编号									*/
	Buffer	cFrameBuffer;								/*!< 帧缓冲区								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}StreamTransferFrame, *LPStreamTransferFrame;

/*!
*  \struct	tagFontPara
*  \brief	字体信息参数,本参数内容与操作系统字体参数相似
*/
typedef struct tagFontPara
{
	LONG lfHeight;										/*!< 逻辑单位的字符高度						*/
	LONG lfWidth; 										/*!< 逻辑单位的字符宽度						*/
	LONG lfEscapement; 									/*!< 每行文本输出时相对于页面底端的角度		*/
	LONG lfOrientation; 								/*!< 字符基线相对于页面底端的角度			*/
	LONG lfWeight; 										/*!< 字体重量,指代字体的粗细程度			*/
	BYTE lfItalic; 										/*!< 是否使用斜体							*/
	BYTE lfUnderline; 									/*!< 是否使用下划线							*/
	BYTE lfStrikeOut; 									/*!< 是否使用删除线							*/
	BYTE lfCharSet; 									/*!< 字符集									*/
	BYTE lfOutPrecision; 								/*!< 输出精度								*/
	BYTE lfClipPrecision; 								/*!< 剪辑精度								*/
	BYTE lfQuality; 									/*!< 输出质量								*/
	BYTE lfPitchAndFamily; 								/*!< 字体的字符间距和族						*/
	char lfFaceName[MAX_FONT_NAME_LEN];					/*!< 字体名称								*/
}FontPara, *LPFontPara; 

typedef struct tagFileTransferDataPacket
{
	eDataPacketType m_dwPacketType;						/*!< 0:数据请求（数据传输开始） 1:数据包 2:回应包 3:结束包	*/
	DWORD m_dwPacketSequence;
	DWORD m_dwPacketLen;
}FileTransferDataPacket, *LPFileTransferDataPacket;

/*!
*  \struct	tagHistoryStreamParaEx
*  \brief	历史流连接参数（扩展）
*/
typedef struct tagHistoryStreamMultiTypePara
{
	DWORD	dwDiskGroup;								/*!< 盘组									*/
	DWORD	dwChannel;									/*!< 流媒体通道号							*/
	DWORD		dwEnableEndTime;						/*!< 结束时间是否有效						*/
	TimeInfo	cBeginTime;								/*!< 历史流起始时间							*/
	TimeInfo	cEndTime;								/*!< 历史流结束时间							*/
	DWORD		dwStreamType;							/*!< 历史流类型(支持多种类型的组合)			*/
	eStreamTransferMode	eTransferMode;					/*!< 传输模式								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}HistoryStreamMultiTypePara, *LPHistoryStreamMultiTypePara;

/*!
*  \struct	tagVoiceStreamPara
*  \brief	语音流连接参数
*/
typedef struct tagVoiceStreamPara
{
	DWORD	dwChannel;									/*!< 流媒体通道号							*/
	eVoiceMode eMode;									/*!< 语音编解码模式							*/
	eStreamTransferMode	eTransferMode;					/*!< 传输模式								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}VoiceStreamPara, *LPVoiceStreamPara;

/*!
*  \struct	tagStreamDecodePara
*  \brief	流媒体解码模式参数
*/
typedef struct tagStreamDecodePara
{
	eDecodeMode	eDecMode;								/*!< 解码模式								*/
	eDecodeShowMode	eDecShowMode;						/*!< 解码显示模式							*/
	DWORD	dwDecChannel;								/*!< 解码通道号,若为软解码可不填写			*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}StreamDecodePara, *LPStreamDecodePara;

/*!
*  \struct	tagStreamCaptureImagePara
*  \brief	流媒体捕获图片参数
*/
typedef struct tagStreamCaptureImagePara
{
	char	sImageFile[MAX_FILENAME];					/*!< 图片路径								*/
	DWORD	dwTimeWait;									/*!< 捕获图片超时时间,0xFFFFFFFF为永久等待	*/
	eStreamImageFormat	eImageFormat;					/*!< 捕获图片编码格式						*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}StreamCaptureImagePara, *LPStreamCaptureImagePara;

/*!
*  \struct	tagHistoryStreamQueryFactor
*  \brief	历史流查询条件
*/
typedef struct tagHistoryStreamQueryFactor
{
	DWORD				dwChannel;						/*!< 通道号									*/
	DWORD				dwDiskGroup;					/*!< 盘组									*/
	eHistoryStreamType	eStreamType;					/*!< 历史流类型								*/
	char				cBeginTime[15];					/*!< 起始时间								*/
	char				cEndTime[15];					/*!< 结束时间								*/
}HistoryStreamQueryFactor, *LPHistoryStreamQueryFactor;

/*!
*  \struct	tagHistoryStreamMultiTypeQueryFactor
*  \ingroup DS_HistoryStreamMultiTypeQueryFactor
*  \brief	历史流查询条件
*/
typedef struct tagHistoryStreamMultiTypeQueryFactor
{
	DWORD				dwChannel;						/*!< 通道号									*/
	DWORD				dwDiskGroup;					/*!< 盘组									*/
	DWORD				dwStreamType;					/*!< 历史流类型								*/
	char				cBeginTime[15];					/*!< 起始时间								*/
	char				cEndTime[15];					/*!< 结束时间								*/
}HistoryStreamMultiTypeQueryFactor, *LPHistoryStreamMultiTypeQueryFactor;

/*!
*  \struct	tagFileQueryFactor
*  \brief	文件查询条件
*/
typedef struct tagFileQueryFactor
{
	DWORD				dwChannel;						/*!< 通道号									*/
	DWORD				dwFileType;						/*!< 文件类型								*/
	char				cBeginTime[DATE_TIME_LEN];		/*!< 起始时间								*/
	char				cEndTime[DATE_TIME_LEN];		/*!< 结束时间								*/
}FileQueryFactor, *LPFileQueryFactor;

/*!
*  \struct	tagHistoryStreamQueryResult
*  \brief	历史流查询结果
*/
typedef struct tagHistoryStreamQueryResult
{
	DWORD				dwChannel;						/*!< 通道号									*/
	eHistoryStreamType	eStreamType;					/*!< 历史流类型								*/
	char				cBeginTime[DATE_TIME_LEN];		/*!< 起始时间								*/
	char				cEndTime[DATE_TIME_LEN];		/*!< 结束时间								*/
	DWORD				dwStreamSize;					/*!< 流数据长度								*/
}HistoryStreamQueryResult, *LPHistoryStreamQueryResult;

/*!
*  \struct	tagHistoryStreamMultiTypeQueryResult
*  \ingroup DS_HistoryStreamMultiTypeQueryResult
*  \brief	历史流查询结果
*/
typedef struct tagHistoryStreamMultiTypeQueryResult
{
	DWORD				dwChannel;						/*!< 通道号									*/
	DWORD				dwStreamType;					/*!< 历史流类型								*/
	char				cBeginTime[DATE_TIME_LEN];		/*!< 起始时间								*/
	char				cEndTime[DATE_TIME_LEN];		/*!< 结束时间								*/
	DWORD				dwStreamSize;					/*!< 流数据长度								*/
}HistoryStreamMultiTypeQueryResult, *LPHistoryStreamMultiTypeQueryResult;

/*!
*  \struct	tagHistoryStreamQueryResult
*  \brief	历史流查询结果
*/
typedef struct tagFileQueryResult
{
    DWORD				dwChannel;						/*!< 通道号									*/
    DWORD				dwLock;							/*!< 是否锁定								*/
    DWORD				dwDataSize;						/*!< 数据大小								*/
    DWORD				dwFileType;						/*!< 图片类型								*/
    char				cCreateTime[DATE_TIME_LEN];		/*!< 图片时间								*/
    char				cFileName[MAX_FILENAME];		/*!< 图片设备端路径                         */
}FileQueryResult, *LPFileQueryResult;

/*!
*  \struct	tagMediaLinkIDQueryResult
*  \brief	查询流媒体连接ID结果
*/
typedef struct tagMediaLinkIDQueryResult
{
	DWORD	dwNumber;									/*!< 有效个数								*/
	DWORD	dwLinkID[MAX_LINK_ID_QUERY_NUM];			/*!< 连接ID									*/
}MediaLinkIDQueryResult, *LPMediaLinkIDQueryResult;

/*!
*  \struct	tagLogQueryFactor
*  \brief	日志查询条件
*/
typedef struct tagLogQueryFactor
{
	DWORD					m_dwQueryMode;				/*!< 查询方式								*/
	eHistoryLogMajorType	m_eMajorType;				/*!< 主类型									*/
	eHistoryLogMinorType	m_eMinorType;				/*!< 次类型									*/
	DWORD					m_dwChannel;				/*!< 通道号									*/
	char					m_sStartTime[DATE_TIME_LEN];/*!< 起始时间								*/
	char					m_sStopTime[DATE_TIME_LEN];	/*!< 结束时间								*/
}LogQueryFactor, *LPLogQueryFactor;

/*!
*  \struct	tagLogQueryResult
*  \brief	历史日志询结果
*/
typedef struct tagLogQueryResult
{
	eHistoryLogMajorType	m_eMajorType;				/*!< 主类型									*/
	eHistoryLogMinorType	m_eMinorType;				/*!< 次类型									*/
	DWORD					m_dwDetailInfo;				/*!< 详细信息								*/
	char					m_sUserName[USERNAME_LEN];	/*!< 操作用户								*/
	char					m_sUserIP[IP_ADDRESS_LEN];	/*!< 用户IP地址								*/
	char					m_sLogTime[DATE_TIME_LEN];	/*!< 操作时间								*/
}LogQueryResult, *LPLogQueryResult;

/*!
*  \struct	tagTransparentChannelPara
*  \brief	透明通道参数
*/
typedef struct tagTransparentChannelPara
{
	DWORD	dwMajorType;								/*!< 主类型信息								*/
	DWORD	dwMinorType;								/*!< 子类型信息								*/
}TransparentChannelPara, *LPTransparentChannelPara;

/*!
*  \struct	tagFileUploadPara
*  \brief	文件上传参数
*/
typedef struct tagFileUploadPara
{
	eTransferFileType	eFileType;						/*!< 上传文件类型							*/
	char	strRemoteFilePath[MAX_FILE_PATH_LEN];		/*!< 上传文件路径							*/
	char	strLocalFilePath[MAX_FILE_PATH_LEN];		/*!< 上传文件路径							*/
}FileUploadPara, *LPFileUploadPara;

/*!
*  \struct	tagFileUploadState
*  \brief	文件上传状态
*/
typedef struct tagFileUploadState
{
	DWORD	dwUploadSize;								/*!< 上传数据长度							*/
	DWORD	dwStatus;									/*!< 上传状态，0为正在传送，1为取消，		*/
														/*!<　　2为Flash满， 3为版本不对或文件错误，4表示写失败，5表示成功完成，6表示发送失败，7表示读取文件出错	*/
	DWORD	dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}FileUploadState, *LPFileUploadState;

/*!
*  \struct	tagFileDownloadPara
*  \brief	文件下载参数
*/
typedef struct tagFileDownloadPara
{
	eTransferFileType	eFileType;						/*!< 下载文件类型							*/
	char	strRemoteFilePath[MAX_FILE_PATH_LEN];		/*!< 源文件存放路径							*/
	char	strLocalFilePath[MAX_FILE_PATH_LEN];		/*!< 目标文件存放路径						*/
}FileDownloadPara, *LPFileDownloadPara;


/*!
*  \struct	tagImageFileInfo
*  \brief	 抓图文件信息
*/
typedef struct tagImageFileInfo
{
	DWORD				m_dwFileSize;					/*!< 文件大小								*/
	char				m_sFileName[MAX_FILENAME];		/*!< 文件名									*/
	char				m_sCreateTime[DATE_TIME_LEN];	/*!< 文件创建时间							*/
}ImageFileInfo, *LPImageFileInfo;

/*!
*  \struct	tagServerInformation
*  \brief	服务器信息
*/
typedef struct tagServerInformation
{
	char	cAddress[MAX_ADDRESS_LEN];					/*!< 地址									*/
	DWORD	dwCommandPort;								/*!< 信令端口								*/
	DWORD	dwTCPPort;									/*!< TCP端口								*/
	DWORD	dwRTPPort;									/*!< RTP端口								*/
}ServerInformation, *LPServerInformation;

/*!
*  \struct	tagDeviceRegisterInfo
*  \brief	设备注册信息
*/
typedef struct tagDeviceRegisterInfo
{
	DWORD		dwDeviceID;								/*!< 产品序列号								*/
	char		cDeviceIP[IP_ADDRESS_LEN];				/*!< 设备IP地址								*/
	char		cDeviceMAC[MAC_ADDRESS_LEN];			/*!< 设备MAC地址							*/
	DWORD		dwDeviceCmdPort;						/*!< 设备命令端口							*/
	DWORD		dwHTTPPort;								/*!< HTTP端口								*/
	DWORD		dwDeviceType;							/*!< 设备类型								*/
	char		cDeviceVersion[VERSION_INFO_LEN];		/*!< 设备软件版本号							*/
	DWORD		dwDeviceMaxConnect;						/*!< 视频的最大连接数						*/
}DeviceRegisterInfo, *LPDeviceRegisterInfo;

/*!
*  \struct	tagDeviceConfigFromHttp
*  \brief	来自HTTP的设备配置
*/
typedef struct tagDeviceConfigFromHttp
{
	WORD	wLocalCmdPort;								/*!< 本地命令端口							*/
	WORD	wLocalMediaPort;							/*!< 本地媒体端口							*/
	int		iReserve[DEF_HTTP_CFG_RESERVE_NUM];			/*!< 保留									*/
}DeviceConfigFromHttp, *LPDeviceConfigFromHttp;

/*!
*  \struct	tagDeviceProbeParameter
*  \brief	探测配置参数
*/
typedef struct tagDeviceProbeParameter
{
	WORD	m_wBeginPort;								/*!< 探测起始端口							*/
	WORD	m_wEndPort;									/*!< 探测结束端口							*/
	DWORD	m_dwReserve[DEF_RESERVE_NUM];				/*!< 保留									*/
}DeviceProbeParameter, *LPDeviceProbeParameter;

/*!
*  \struct	tagDeviceProbeConfig
*  \brief	探测配置参数
*/
typedef struct tagDeviceProbeConfig
{ 
	BYTE	m_bytDevType;								/*!< 服务器类型(Read)						*/
	BYTE	m_bytDevChan;								/*!< 设备通道个数(Read)						*/
	BYTE	m_bytDevAutoReg;							/*!< 是否启用自动注册						*/
	BYTE	m_bytDevRegInterval;						/*!< 设备注册间隔时间						*/
	BYTE	m_bytDevMac[MAC_BINARY_ADDRESS_LEN];		/*!< 设备MAC地址(Read)						*/
	BYTE	m_bytDevIP[IP_ADDRESS_LEN];					/*!< 设备当前IP地址							*/
	BYTE	m_bytDevMask[IP_ADDRESS_LEN];				/*!< 设备IP地址掩码							*/
	BYTE	m_bytDevGateway[IP_ADDRESS_LEN];			/*!< 设备网关地址							*/
	BYTE	m_bytDevManHost[IP_ADDRESS_LEN];			/*!< 设备管理主机地址						*/
	WORD	m_bytDevDetectPort;							/*!< 设备自动发现监听端口					*/
	WORD	m_wManHostPort;								/*!< 设备管理主机端口						*/
	WORD	m_wCmdPort;									/*!< 设备命令端口							*/
	WORD	m_wMediaPort;								/*!< 设备媒体端口							*/
	DWORD	m_dwReserveFirst;							/*!< 保留数据								*/
	DWORD	m_dwReserveSecond;							/*!< 保留数据								*/
	DWORD	m_dwValidMask;								/*!< 有效数据(位数据0无效，1有效)			*/
}DeviceProbeConfig, *LPDeviceProbeConfig;
/*!
*  \struct	tagFunctionInfo
*  \brief	能力信息
*/
typedef struct tagFunctionInfo
{
	DWORD dwMajor;										/*!< 主版本号								*/
	DWORD dwMinor;										/*!< 次版本号								*/
	DWORD dwRevision;									/*!< 修订版本号								*/
	DWORD dwSVN;										/*!< SVN号									*/
}FunctionInfo, *LPFunctionInfo;

/*!
*  \struct	tagPanelStatusInfo
*  \brief	面板状态信息
*/
typedef struct tagPanelStatusInfo
{
	DWORD dwStatus;										/*!< 面板状态,0为未锁定,1为已锁定			*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}PanelStatusInfo, *LPPanelStatusInfo;

/*!
*  \struct	tagPanelControlParameter
*  \brief	面板控制参数
*/
typedef struct tagPanelControlParameter
{
	DWORD dwControl;									/*!< 面板控制,参见ePanelControlType值		*/
	DWORD dwKeyBoardCode;								/*!< 面板键值,参见ePanelKeyBoardCodeType值	*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}PanelControlParameter, *LPPanelControlParameter;

/*!
*  \struct	tagDecoderLoopStatus
*  \ingroup DS_DecoderLoopStatus
*  \brief	解码器通道轮询状态
*/
typedef struct tagDecoderLoopStatus
{
	DWORD	dwChannelNumber;							/*!< 通道数									*/
	eDecoderChannelStatus	eDecChStatus[MAX_DEC_CHANNEL_NUMBER];/*!< 通道状态						*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}DecoderLoopStatus, *LPDecoderLoopStatus;

/*!
*  \struct	tagDecoderDeviceConfig
*  \ingroup DS_DecoderDeviceConfig
*  \brief	解码器设备配置
*/
typedef struct tagDecoderDeviceConfig
{
	DWORD	dwDecoderChannelNumber;					/*!< 解码通道个数,根据解码模式决定个数,只读配置项	*/
	eResolutionMode	eDecodeMode;						/*!< 解码模式								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];				/*!< 保留									*/
}DecoderDeviceConfig, *LPDecoderDeviceConfig;

/*!
*  \struct	tagChannelChromaConfig
*  \ingroup DS_ChannelChromaConfig
*  \brief	解码通道光学参数
*/
typedef struct tagChannelChromaConfig
{
	DWORD dwBrightness;								/*!< 亮度,0-255 							*/
	DWORD dwContrast;								/*!< 对比度,0-255							*/
	DWORD dwSaturation;								/*!< 饱和度,0-255 							*/
	DWORD dwHue;									/*!< 色调,0-255 							*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}ChannelChromaConfig, *LPChannelChromaConfig;

/*!
*  \struct	tagDecoderChannelConfig
*  \ingroup DS_DecoderChannelConfig
*  \brief	解码器通道配置
*/
typedef struct tagDecoderChannelConfig
{
	DWORD	dwDecChanScaleStatus;					/*!< 解码通道显示缩放控制，1-缩放显示，0-真实显示 	*/
	ChannelChromaConfig	cChannelChromaConfig;			/*!< 光学参数								*/
	DWORD	dwReserve[DEF_RESERVE_NUM];				/*!< 保留									*/
}DecoderChannelConfig, *LPDecoderChannelConfig;

/*!
*  \struct	tagDecoderVideoStandardConfig
*  \ingroup DS_DecoderVideoStandardConfig
*  \brief	解码器通道视频制式
*/
typedef struct tagDecoderVideoStandardConfig
{
	DWORD	dwVideoStandard;						/*!< 解码器视频制式: 0-PAL，1-NTSC  				*/
	DWORD	dwReserve[DEF_RESERVE_NUM];				/*!< 保留									*/
}DecoderVideoStandardConfig, *LPDecoderVideoStandardConfig;

/*!
*  \struct	tagDecoderChannelSourceConfig
*  \ingroup DS_DecoderChannelSourceConfig
*  \brief	解码器通道视频源配置
*/
typedef struct tagDecoderChannelSourceConfig
{
	MediaServerInformation	cMediaServerInfo;			/*!< 流媒体服务器信息							*/
	HYPrivateServerInformation	cHYPrivateServerInfo;	/*!< HY私有协议服务器信息						*/
	DWORD	dwReserve[DEF_RESERVE_NUM];				/*!< 保留									*/
}DecoderChannelSourceConfig, *LPDecoderChannelSourceConfig;

/*!
*  \struct	tagDecoderChannelLoopConfig
*  \ingroup DS_DecoderChannelLoopConfig
*  \brief	解码器通道轮转配置
*/
typedef struct tagDecoderChannelLoopConfig
{
	DWORD	dwEnable;								/*!< 是否启用  								*/
	DWORD	dwPoolTime;							/*!< 轮巡时间  								*/
	DecoderChannelSourceConfig cSource[MAX_DECODER_CHANNEL_SOURCE];/*!< 通道视频源配置						*/
	DWORD	dwReserve[DEF_RESERVE_NUM];				/*!< 保留									*/
}DecoderChannelLoopConfig, *LPDecoderChannelLoopConfig;

/*!
*  \struct	tagDecoderChannelInformation
*  \ingroup DS_DecoderChannelInformation
*  \brief	解码器通道信息
*/
typedef struct tagDecoderChannelInformation
{
	DWORD	dwDecoderState;						/*!< 解码通道状态：0-动态解码 1－循环解码			*/
	DWORD	dwGetStreamMode;						/*!< 取流模式：0-未解码，1-主动，2-被动			*/
	MediaServerInformation	cMediaServerInfo;			/*!< 流媒体服务器信息							*/
	HYPrivateServerInformation	cHYPrivateServerInfo;	/*!< HY私有协议服务器信息						*/
	LocalHistoryInformation	cLocalHistoryInformation;		/*!< 本地历史流信息							*/
	StreamTransferPara 	cStreamTransferPara;				/*!< 被动解码流转发信息						*/
	DWORD	dwReserve[DEF_RESERVE_NUM];				/*!< 保留									*/
}DecoderChannelInformation, *LPDecoderChannelInformation;

/*!
*  \struct	tagDecoderChannelStatusInfo
*  \ingroup DS_DecoderChannelStatusInfo
*  \brief	解码器通道状态信息
*/
typedef struct tagDecoderChannelStatusInfo
{
	eDecoderChannelStatus	eDecChStatus;				/*!< 通道状态								*/
	eStreamSourceType	eStreamSourceTypeValue;			/*!< 流媒体源类型							*/
	DWORD	dwStreamBitrate;							/*!< 流媒体码率(kbps)						*/
	DWORD	dwVideoWidth;								/*!< 视频图像宽度							*/
	DWORD	dwVideoHeight;								/*!< 视频图像高度							*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}DecoderChannelStatusInfo, *LPDecoderChannelStatusInfo;

/*!
*  \struct	tagDecoderChannelStatus
*  \ingroup DS_DecoderChannelStatus
*  \brief	解码器通道状态
*/
typedef struct tagDecoderChannelStatus
{
	DWORD	dwChannelNumber;							/*!< 通道数									*/
	DecoderChannelStatusInfo	cDecChStatus[MAX_DEC_CHANNEL_NUMBER];/*!< 解码器通道状态信息		*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}DecoderChannelStatus, *LPDecoderChannelStatus;

/*!
*  \struct	tagDecoderChannelStatusControl
*  \brief	解码器通道控制
*/
typedef struct tagDecoderChannelControl
{
	eDecoderChannelStatus	eDecChStatus[MAX_DEC_CHANNEL_NUMBER];/*!< 解码器通道状态				*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}DecoderChannelStatusControl, *LPDecoderChannelStatusControl;

/*!
*  \struct	tagDecoderSetPlayStatusParameter
*  \ingroup DS_DecoderSetPlayStatusParameter
*  \brief	设置解码器通道播放状态参数
*/
typedef struct tagDecoderSetPlayStatusParameter
{
	eStreamPlayControlStatus	ePlayControlStatus;		/*!< 流播放状态控制							*/
	/*	
	ePlayControlStatus 为速度调节时: eStreamPlayControlFast, eStreamPlayControlSlow.
	元素0表示速度, 2表示 2倍速, 4表示 4倍速, 8表示 8倍速, 16表示 16倍速
	*/
	DWORD dwParameter[MAX_PLAY_CONTROL_PARAMETER];		/*!< 流播放状态控制参数						*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}DecoderSetPlayStatusParameter, *LPDecoderSetPlayStatusParameter;

/*!
*  \struct	tagDecoderPlayStatusParameter
*  \ingroup DS_DecoderPlayStatusParameter
*  \brief	解码器通道播放状态参数
*/
typedef struct tagDecoderPlayStatusParameter
{
	eStreamSourceType	eStreamSourceTypeValue;			/*!< 流媒体源类型							*/
	DWORD		dwEnableEndTime;						/*!< 结束时间是否有效						*/
	TimeInfo	cBeginTime;								/*!< 历史流起始时间							*/
	TimeInfo	cEndTime;								/*!< 历史流结束时间							*/
	TimeInfo	cCurrentTime;							/*!< 当前播放的历史流时间					*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}DecoderPlayStatusParameter, *LPDecoderPlayStatusParameter;

/*!
*  \struct	tagDecoderGetPlayStatusParameter
*  \ingroup DS_DecoderGetPlayStatusParameter
*  \brief	获取解码器通道播放状态参数
*/
typedef struct tagDecoderGetPlayStatusParameter
{
	DWORD	dwChannelNumber;							/*!< 通道数									*/
	DecoderPlayStatusParameter	cDecChPlayStatus[MAX_DEC_CHANNEL_NUMBER];/*!< 解码器通道播放状态信息*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}DecoderGetPlayStatusParameter, *LPDecoderGetPlayStatusParameter;

/*!
*  \struct	tagDecoderDisplayStatus
*  \ingroup DS_DecoderDisplayStatus
*  \brief	设置解码通道显示状态
*/
typedef struct tagDecoderDisplayStatus
{
	DWORD	dwWindow;								/*!< 窗口编号								*/
	eDisplayControlStatus	eDisplayControlStatusValue;	/*!< 显示控制状态信息							*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}DecoderDisplayStatus, *LPDecoderDisplayStatus;

/*!
*  \struct	tagUploadLogoParameter
*  \ingroup DS_UploadLogoParameter
*  \brief	上传Logo参数
*/
typedef struct tagUploadLogoParameter
{
	eLogoPictureType	eLogoPictureValue;				/*!< Logo图片类型							*/
	DWORD dwParameter[MAX_LOGO_PICTURE_PARAMETER];		/*!< Logo图片参数							*/
	Buffer				cBuffer;						/*!< Logo图片缓冲区							*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}UploadLogoParameter, *LPUploadLogoParameter;

/*!
*  \struct	tagDecoderDisplayConfig
*  \ingroup DS_DecoderDisplayConfig
*  \brief	解码显示配置
*/
typedef struct tagDecoderDisplayConfig
{
	eVGAResolutionMode	eVGAResolution;				/*!<	分辨率								*/
	eScreenControlStatus	eScreenControlStatusValue;		/*!< 显示控制状态信息							*/
	DWORD	dwDecoderChannel[MAX_DISPLAY_SCREEN_NUMBER];	/*!< 绑定的解码通道号							*/
	DWORD	dwEnlargeWindow;						/*!< 窗口放大, 0xFFFFFFFF表示不放大,其它表示窗口编号	*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}DecoderDisplayConfig, *LPDecoderDisplayConfig;

/*!
*  \struct	tagTransmitHistoryStreamQueryFactor
*  \ingroup DS_TransmitHistoryStreamQueryFactor
*  \brief	转发历史流查询条件
*/
typedef struct tagTransmitHistoryStreamQueryFactor
{
	UserLoginPara	cUserLoginPara;					/*!< 登录参数信息							*/
	eDeviceProtocolType	eDeviceProtocolValue;			/*!< 设备协议版本类型							*/
	HistoryStreamMultiTypeQueryFactor cFactor;			/*!< 历史查询条件							*/
	DWORD dwReserve[DEF_RESERVE_NUM];					/*!< 保留									*/
}TransmitHistoryStreamQueryFactor, *LPTransmitHistoryStreamQueryFactor;
//////////////////////////////////////////////////////////////////////////
//回调函数
//////////////////////////////////////////////////////////////////////////

/*!
*  \brief
*	用户事件回调
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param eEvent
*	事件类型
* @param dwParam1 -- dwParam3
*	参数列表
			USEREVENT_REALSTREAM_STARTLINK
			USEREVENT_REALSTREAM_STOPLINK
			参数1是连接ID..其它为0
			AlarmEvent类型：
			参数1  报警类型（）
				2  报警通道
				3  报警状态(视频丢失时,0表示无信号,1表示有信号)
			    


			USEREVENT_DISKGROUP_MANAGE:
			wp1 = eDiskGroupOperation
			wp2 = 操作结果(0-成功，其他失败)
			wp3 = 硬盘操作时使用的验证码，由客户端硬盘管理命令得到


			USEREVENT_HISTORYSTREAM_NOTICE:
			wp1 = 1；//表示操作类型（1-为获取历史流备份数据大小）
			wp2 = 操作结果(0-成功，其他失败)
			wp3 = datasize//备份数据大小 （KB）    


			USEREVENT_HEARTBEAT_LOST
			未检测到心跳，网络断开
			参数均为0
			USEREVENT_NET_RECOVER
			网络重连成功
			参数均为0


			eHeartBeatEvent
			暂未用到，将被拿掉

			USEREVENT_USER_DISCONNECT
			暂未用到，将被拿掉

* @param dwUserData
*	用户数据,订阅事件时传入的用户数据
* @return
*	返回0
* @note
*	由于此回调函数在事件接收线程调用,
*	为了保证正确性,请尽可能减少在回调中的阻塞式工作,以避免出现挂起现象.
* @note
*	接口类型: 阻塞式
*/
typedef int(CALLBACK *CB_UserEvent)(IN HUSER hUser, IN DWORD dwEventType, DWORD dwParam1, DWORD dwParam2, DWORD dwParam3, IN DWORD dwUserData);


/*!
*  \brief
*	流媒体数据回调
* @param hStream
*	流媒体句柄,通过连接流获取,表示流媒体数据的来源
* @param cFrame
*	流媒体数据,包括帧缓冲区,帧时间,帧类型信息
*	在流保存文件时若收到类型为eFrameSysHeader时则需要将该帧与之后的帧写入新文件
*	请尽量保证eFrameSysHeader类型的帧在文件头部,以便播放器播放
* @param dwUserData
*	用户数据,设置流媒体数据回调时传入的用户数据
* @return
*	返回0
* @note
*	由于此回调函数在流媒体数据接收线程调用,
*	为了保证实时性,请尽可能减少在回调中的阻塞式工作,以避免出现丢帧.
* @note
*	接口类型: 阻塞式
*/
typedef int(CALLBACK *CB_StreamMedia)(IN HSTREAM hStream, IN const StreamMediaFrame *cFrame, IN DWORD dwUserData);

/*!
*  \brief
*	原始流媒体数据回调
* @param hStream
*	流媒体句柄,通过连接流获取,表示流媒体数据的来源
* @param cFrame
*	原始流媒体数据,包括帧缓冲区,帧时间,帧类型信息
* @param dwUserData
*	用户数据,设置流媒体数据回调时传入的用户数据
* @return
*	返回0
* @note
*	由于此回调函数在流媒体数据接收线程调用,
*	为了保证实时性,请尽可能减少在回调中的阻塞式工作,以避免出现丢帧.
* @note
*	接口类型: 阻塞式
*/
typedef int(CALLBACK *CB_StreamMediaRaw)(IN HSTREAM hStream, IN const StreamMediaFrame *cFrame, IN DWORD dwUserData);

/*!
*  \brief
*	语音流数据回调
* @param hStream
*	语音流句柄,通过连接流获取,表示流媒体数据的来源
* @param eSource
*	语音流数据源,包括捕获或者接收的数据
* @param cFrame
*	语音流数据,包括缓冲区,帧来源信息
* @param dwUserData
*	用户数据,设置语音流数据回调时传入的用户数据
* @return
*	返回0
* @note
*	由于此回调函数在语音流数据接收与捕获线程调用,
*	为了保证实时性,请尽可能减少在回调中的阻塞式工作,以避免出现丢帧.
* @note
*	接口类型: 阻塞式
*/
typedef int(CALLBACK *CB_StreamVoice)(IN HSTREAM hStream, IN eVoiceStreamSource eSource, IN const StreamVoiceFrame *cFrame, IN DWORD dwUserData);

/*!
*  \brief
*	透明通道数据回调
* @param hTransparent
*	透明通道句柄,通过连接透明通道获取,表示数据的来源
* @param cBuffer
*	透明通道数据,包括数据缓冲区与长度
* @param dwUserData
*	用户数据,设置透明通道数据回调时传入的用户数据
* @return
*	返回0
* @note
*	由于此回调函数在透明通道数据接收线程调用,
*	为了保证实时性,请尽可能减少在回调中的阻塞式工作.
* @note
*	接口类型: 阻塞式
*/
typedef int(CALLBACK *CB_TransparentChannel)(IN HTRANSPARENT hTransparent, IN const LPBuffer pBuffer, IN DWORD dwUserData);

/*!
*  \brief
*	文件上传数据回调
* @param hFileTransfer
*	文件上传句柄,通过连接文件上传获取
* @param cState
*	文件上传状态,包括已传输数据长度
* @param dwUserData
*	用户数据,设置数据回调时传入的用户数据
* @return
*	返回0
* @note
*	由于此回调函数在文件上传数据发送线程调用,
*	为了保证实时性,请尽可能减少在回调中的阻塞式工作.
* @note
*	接口类型: 阻塞式
*/
typedef int(CALLBACK *CB_FileUpload)(IN HFILE_TRANSFER hFileTransfer, IN const FileUploadState cState, IN DWORD dwUserData);

/*!
*  \brief
*	文件下载数据回调
* @param hFileTransfer
*	文件下载句柄,通过连接文件下载获取
* @param cBuffer
*	下载文件数据,包括数据缓冲区与长度
* @param dwUserData
*	用户数据,设置数据回调时传入的用户数据
* @return
*	返回0
* @note
*	由于此回调函数在文件下载数据接收线程调用,
*	为了保证实时性,请尽可能减少在回调中的阻塞式工作.
* @note
*	接口类型: 阻塞式
*   cBuffer长度为0xFFFFFFFF,缓冲区指针为NULL时，表示下载出错，应作断开处理
*/
typedef int(CALLBACK *CB_FileDownload)(IN HFILE_TRANSFER hFileTransfer, IN const Buffer cBuffer, IN DWORD dwUserData);


/*!
*  \brief
*	设备注册回调
* @param pDeviceRegister
*	设备注册信息
* @note
*	接口类型: 阻塞式
*/
typedef int(CALLBACK *CB_DeviceRegister)(IN LPDeviceRegisterInfo pDeviceRegister);

/*!
*  \brief
*	强制删除已登录用户回调
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwUserData
*	用户数据
* @note
*	接口类型: 阻塞式
*/
typedef int(CALLBACK *CB_DeleteUserForce)(IN HUSER hUser, IN DWORD dwUserData);

/*!
*  \brief
*	设备探测回调
* @param cConfig
*	设备配置信息
* @note
*	接口类型: 阻塞式
*/
typedef void (CALLBACK *CB_DeviceProbe)(IN LPDeviceProbeConfig cConfig);

#endif
