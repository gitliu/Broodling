/*!
* @file
*  HieClientUnit.h
* @brief
*  客户端SDK头文件, 定义SDK所有接口, 并附简要接口说明
*  客户端SDK是与服务器交互的最佳途径
* @author
*  郝勇
* @date
*  2009年3月13日
* @version
*  1.0.0
*/

#ifndef HIE_CLIENT_UNIT_H

#define HIE_CLIENT_UNIT_H

#ifdef HIECLIENT_EXPORTS

#define HIECLIENT_API extern "C"__declspec(dllexport)

#elif defined(__cplusplus)

#define HIECLIENT_API extern "C"__declspec(dllimport)

#else

#define HIECLIENT_API

#endif

//SDK常用信息头文件
#include "./HieClient_Configure.h"

//通用信息定义文件
#include "./HieClient_Common.h"

/*!
* @brief
*	启动服务
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	启动服务后,不再需要服务时请调用停止服务接口
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_Start();

/*!
* @brief
*	停止服务
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_Stop();

/*!
* @brief
*	用户登录,对设备的所有操作均需要先登录
*	阻塞操作
* @param hUser
*	用户句柄,登录后接口填充该句柄值
* @param cUserLoginPara
*	用户登录参数信息
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_UserLogin(OUT HUSER *hUser, IN const LPUserLoginPara cUserLoginPara);

/*!
* @brief
*	用户注销
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_UserLogout(IN HUSER hUser);

/*!
* @brief
*	订阅服务器事件
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwEventTypes
*	远程事件类型,通过或运算一次可以订阅多种事件，共用相同回调和用户数据
* @param cbEvent
*	回调函数
* @param dwUserData
*	事件回调时回传给应用层
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_SubscribeEvent(IN HUSER hUser, IN DWORD dwEventTypes, IN CB_UserEvent cbEvent, IN DWORD dwUserData);

/*!
* @brief
*	退订服务器事件
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwEventTypes
*	远程事件类型,通过或运算一次可以退订多种事件
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_UnSubscribeEvent(IN HUSER hUser, IN DWORD dwEventTypes);

/*!
* @brief
*	设置配置信息
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cConfig
*	配置信息
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_SetConfig(IN HUSER hUser, IN const LPConfigInformation cConfig);

/*!
* @brief
*	设置配置信息
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cConfig
*	配置信息
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_SetConfigV2(IN HUSER hUser, IN const LPConfigInformationV2 cConfig);

/*!
* @brief
*	获取配置信息
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cConfig
*	配置信息
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_GetConfig(IN HUSER hUser, IN LPConfigInformation cConfig);

/*!
* @brief
*	获取配置信息
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cConfig
*	配置信息
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_GetConfigV2(IN HUSER hUser, IN LPConfigInformationV2 cConfig);

/*!
* @brief
*	获取客户端SDK属性(用于控制客户端SDK接口行为)
* @param eType
*	客户端SDK属性类型
* @param dwAttribute
*	客户端SDK属性值
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_GetAttribute(IN eClientSDKAttributeType eType, OUT DWORD *dwAttribute);

/*!
* @brief
*	设置客户端SDK属性(用于控制客户端SDK接口行为)
* @param eType
*	客户端SDK属性类型
* @param dwAttribute
*	客户端SDK属性值
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_SetAttribute(IN eClientSDKAttributeType eType, IN DWORD dwAttribute);

/*!
* @brief
*	远程设备控制
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param eOperationCode
*	操作码　
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DeviceControl(IN HUSER hUser, IN eRemoteDeviceControl eOperationCode);

/*!
* @brief
*	远程设备强制I帧
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	通道号
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_ForceIFrame(IN HUSER hUser,IN DWORD dwChannel);

/*!
* @brief
*	远程清除报警
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	通道号
* @param dwAlarmType
*	报警类型
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_AlarmClear(IN HUSER hUser,IN DWORD dwChannel, IN DWORD dwAlarmType);

/*!
* @brief
*	远程抓图
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	通道号
* @param eFormat
*	图片格式
* @param pImageFileInfo
*	图片信息
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_ImageCapture(IN HUSER hUser, IN DWORD dwChannel, IN eImageFormat eFormat, OUT LPImageFileInfo pImageFileInfo);

/*!
* @brief
*	远程锁定文件
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param szFileName
*	文件名
* @param eOperationCode
*	操作码
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_FileLock(IN HUSER hUser, IN char *szFileName, IN eFileLockOperationCode eOperationCode);

/*!
* @brief
*	远程录像控制
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	通道号
* @param dwRecordType
*	录像类型
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_RecordControl(IN HUSER hUser, IN DWORD dwChannel, IN DWORD dwRecordType);

/*!
* @brief
*	远程报警输出控制
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	通道号
* @param dwSwitch
*	开关状态
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_AlarmoutControl(IN HUSER hUser, IN DWORD dwChannel, IN DWORD dwSwitch);

/*!
* @brief
*	获取远程报警输入状态
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChanNum
*	有效报警输入通道个数
* @param dwStateBits
*	位0-31分别表示0－31通道的报警输入状态
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_AlarminStateGet(IN HUSER hUser, OUT DWORD* dwChanNum, OUT DWORD* dwStateBits);

/*!
* @brief
*	获取远程报警输出状态
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChanNum
*	有效报警输出通道个数
* @param dwStateBits
*	位0-31分别表示0－31通道的报警输出状态
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_AlarmoutStateGet(IN HUSER hUser, OUT DWORD* dwChanNum, OUT DWORD* dwStateBits);

/*!
* @brief
*	连接实时流
* @param hStream
*	流媒体句柄,连接后接口填充该句柄值
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cStreamPara
*	实时流连接信息
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_RealStreamConnect(OUT HSTREAM *hStream, IN HUSER hUser, IN const LPRealStreamPara cStreamPara);

/*!
* @brief
*	断开实时流
* @param hStream
*	流媒体句柄,通过连接实时流获取
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_RealStreamDisconnect(IN HSTREAM hStream);

/*!
* @brief
*	创建历史通道（仅支持单一录像类型和所有录像类型）
* @param hHistory
*	历史通道句柄,创建后接口填充该句柄值
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cStreamPara
*	历史通道参数信息
* @param dwUserData
*	历史流用户数据，该数据会在历史流事件通知中传递给用户；
*	用户可以根据该用户数据判断是哪一个历史流及该历史流是用于下载或是回放的
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryStreamCreate(OUT HSTREAM *hHistory, IN HUSER hUser, IN const LPHistoryStreamPara cStreamPara, IN DWORD dwUserData);

/*!
* @brief
*	创建历史通道（支持多种录像类型的组合）
* @param hHistory
*	历史通道句柄,创建后接口填充该句柄值
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cStreamPara
*	历史通道参数信息
* @param dwUserData
*	历史流用户数据，该数据会在历史流事件通知中传递给用户；
*	用户可以根据该用户数据判断是哪一个历史流及该历史流是用于下载或是回放的
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryStreamMultiTypeCreate(OUT HSTREAM *hHistory, IN HUSER hUser, IN const LPHistoryStreamMultiTypePara cStreamPara, IN DWORD dwUserData);

/*!
* @brief
*	销毁历史通道
* @param hHistory
*	历史通道句柄,通过创建历史通道获取
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryStreamDestroy(IN HSTREAM hHistory);

/*!
* @brief
*	历史通道时间位置
* @param hHistory
*	历史通道句柄,通过创建历史通道获取
* @param eOperation
*	历史通道操作类型
* @param cTime
*	历史通道时间信息,获取时此参数为出参,设置时此参数为入参
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryStreamPosition(IN HSTREAM hHistory, IN eOperationType eOperation, IN_OUT TimeInfo *cTime);

/*!
* @brief
*	将目的历史通道与基准历史通道进行同步操作
* @param hHistory
*	基准历史通道句柄,连接的流将以该历史通道时间为基准
* @param hDestHistory
*	目的历史通道句柄，该历史通道将于基准历史通道同步
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	历史流支持多通道同时间点同时操作
* @note
*	接口类型: 阻塞式
* @note
*	两个历史流同步后，会以hHistory为基准再定位一次，定位的时间点是hHistory的起始时间
*/
HIECLIENT_API int HieClient_HistoryStreamSync(IN HSTREAM hHistory, IN HSTREAM hDestHistory);

/*!
* @brief
*	将目的历史通道从基准历史流中移除操作
* @param hHistory
*   基准历史通道句柄
* @param hDestHistory
*	目的历史流通道句柄
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryStreamUnSync(IN HSTREAM hHistory, IN HSTREAM hDestHistory);

/*!
* @brief
*	设置历史流快放速度
* @param hHistory
*   历史通道句柄
* @param dwSpeed
*	历史流快放速度（2x 4x 8x 16x）
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryStreamSetSpeed(IN HSTREAM hHistory, IN DWORD dwSpeed);

/*!
* @brief
*	设置历史流回调接口
* @param hStream
*	流媒体句柄,通过连接流获取
* @param cbStreamMedia
*	流媒体回调接口
* @param dwUserData
*	流媒体回调时回传给应用层
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	应用层可使用此接口设置流媒体数据回调,
*	由于此回调函数在流媒体数据接收线程调用,
*	为了保证实时性,请尽可能减少在回调中的阻塞式工作,以避免出现丢帧.
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryStreamCB(IN HSTREAM hStream, IN CB_StreamMedia cbStreamMedia, IN DWORD dwUserData);

/*!
* @brief
*	连接语音流
* @param hStream
*	语音流句柄,连接后接口填充该句柄值
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cStreamPara
*	语音流连接信息
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_VoiceStreamConnect(OUT HSTREAM *hStream, IN HUSER hUser, IN const LPVoiceStreamPara cStreamPara);

/*!
* @brief
*	断开语音流
* @param hStream
*	语音流句柄,通过连接语音流获取
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_VoiceStreamDisconnect(IN HSTREAM hStream);

/*!
* @brief
*	发送语音流数据接口
* @param hStream
*	语音流句柄,通过连接语音流获取
* @param cFrame
*	语音流帧数据,可从语音回调获取
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_VoiceStreamSend(IN HSTREAM hStream, IN const LPBuffer cFrame);

/*!
* @brief
*	设置语音流回调接口
* @param hStream
*	语音流句柄,通过连接语音流获取
* @param cbStreamVoice
*	语音流回调接口,若值为空(NULL),表示不再需要回调
* @param dwUserData
*	语音流回调时回传给应用层
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	由于此回调函数在语音流数据接收与捕获线程调用,
*	为了保证实时性,请尽可能减少在回调中的阻塞式工作,以避免出现丢帧.
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_VoiceStreamCB(IN HSTREAM hStream, IN CB_StreamVoice cbStreamVoice, IN DWORD dwUserData);

/*!
* @brief
*	设置流媒体回调接口
* @param hStream
*	流媒体句柄,通过连接流获取
* @param cbStreamMedia
*	流媒体回调接口,若值为空(NULL),表示不再需要回调
* @param dwUserData
*	流媒体回调时回传给应用层
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	应用层可使用此接口设置流媒体数据回调,
*	由于此回调函数在流媒体数据接收线程调用,
*	为了保证实时性,请尽可能减少在回调中的阻塞式工作,以避免出现丢帧.
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_StreamMediaCB(IN HSTREAM hStream, IN CB_StreamMedia cbStreamMedia, IN DWORD dwUserData);

/*!
* @brief
*	设置原始流媒体回调接口
* @param hStream
*	流媒体句柄,通过连接流获取
* @param cbStreamMedia
*	流媒体回调接口,若值为空(NULL),表示不再需要回调
* @param dwUserData
*	流媒体回调时回传给应用层
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	应用层可使用此接口设置流媒体数据回调,
*	由于此回调函数在流媒体数据接收线程调用,
*	为了保证实时性,请尽可能减少在回调中的阻塞式工作,以避免出现丢帧.
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_StreamMediaRawCB(IN HSTREAM hStream, IN CB_StreamMediaRaw cbStreamMedia, IN DWORD dwUserData);

/*!
* @brief
*	流媒体控制接口,控制流媒体的启动与停止
* @param hStream
*	流媒体句柄,通过连接流获取
* @param eMediaControl
*	流媒体控制命令
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_StreamMediaControl(IN HSTREAM hStream, IN eTaskControl eMediaControl);

/*!
* @brief
*	设置流媒体连接ID
* @param hStream
*	流媒体句柄,通过连接流获取
* @param dwLinkID
*	流媒体连接ID
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*	设置的媒体连接ID会保存到服务器上,在服务器重启之前一直存在,客户可以查询设备上的连接ID
*/
HIECLIENT_API int HieClient_SetStreamMediaLinkID(IN HSTREAM hStream, IN DWORD dwLinkID);

/*!
* @brief
*	查询流媒体连接ID
* @param hStream
*	流媒体句柄,通过连接流获取
* @param eType
*	流媒体类型
* @param cQueryResult
*	查询连接ID结果
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*	查询设置在服务器上的媒体连接ID
*/
HIECLIENT_API int HieClient_QueryStreamMediaLinkID(IN HUSER hUser, IN eMediaFunctionType eType, IN LPMediaLinkIDQueryResult cQueryResult);

/*!
* @brief
*	历史流查询连接操作（仅支持单一录像类型和所有录像类型）
* @param hStreamQuery
*	历史流查询句柄,连接后接口填充该句柄值
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cStreamQueryFactor
*	历史流查询条件
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryStreamQueryConnect(OUT HSTREAM_QUERY *hStreamQuery, IN HUSER hUser, IN LPHistoryStreamQueryFactor cStreamQueryFactor);

/*!
* @brief
*	历史流查询连接操作（支持多种录像类型的组合）
* @param hStreamQuery
*	历史流查询句柄,连接后接口填充该句柄值
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cStreamQueryFactor
*	历史流查询条件
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryStreamMultiTypeQueryConnect(OUT HSTREAM_QUERY *hStreamQuery, IN HUSER hUser, IN LPHistoryStreamMultiTypeQueryFactor cStreamQueryFactor);

/*!
* @brief
*	历史流查询断开操作
* @param hStreamQuery
*	历史流查询句柄,通过连接历史流查询获取
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryStreamQueryDisconnect(IN HSTREAM_QUERY hStreamQuery);

/*!
* @brief
*	历史流查询下一条（仅支持单一录像类型和所有录像类型）
* @param hStreamQuery
*	历史流查询句柄,通过连接历史流查询获取
* @param pStreamQueryResult
*	历史流查询的一条记录
* @return
*	返回0表示成功, 2为查询忙,3为查询已经完成,其它值为错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryStreamQueryNext(IN HSTREAM_QUERY hStreamQuery, OUT LPHistoryStreamQueryResult pStreamQueryResult);

/*!
* @brief
*	历史流查询下一条（支持多种录像类型的组合）
* @param hStreamQuery
*	历史流查询句柄,通过连接历史流查询获取
* @param pStreamQueryResult
*	历史流查询的一条记录
* @return
*	返回0表示成功, 2为查询忙,3为查询已经完成,其它值为错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryStreamMultiTypeQueryNext(IN HSTREAM_QUERY hStreamQuery, OUT LPHistoryStreamMultiTypeQueryResult pStreamQueryResult);

/*!
* @brief
*	文件查询连接操作
* @param hFileQuery
*	文件查询句柄,连接后接口填充该句柄值
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param pFileQueryFactor
*	文件查询条件
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_FileQueryConnect(OUT HFILE_QUERY *hFileQuery, IN HUSER hUser, IN LPFileQueryFactor pFileQueryFactor);

/*!
* @brief
*	文件查询断开操作
* @param hFileQuery
*	文件查询句柄,通过连接文件查询获取
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_FileQueryDisconnect(IN HFILE_QUERY hFileQuery);

/*!
* @brief
*	文件查询下一条
* @param hFileQuery
*	文件查询句柄 ,通过连接文件查询获取
* @param pFileQueryResult
*	文件查询的一条记录
* @return
*	返回0表示成功, 2为查询忙,3为查询已经完成,其它值为错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_FileQueryNext(IN HFILE_QUERY hFileQuery, OUT LPFileQueryResult pFileQueryResult);

/*!
* @brief
*	历史日志查询连接操作
* @param hLogQuery
*	历史日志查询句柄,连接后接口填充该句柄值
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cLogQueryFactor
*	历史日志查询条件
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryLogQueryConnect(OUT HLOG_QUERY *hLogQuery, IN HUSER hUser, IN LPLogQueryFactor pLogQueryFactor);

/*!
* @brief
*	历史日志查询断开操作
* @param hLogQuery
*	历史日志查询句柄,通过连接历史日志查询获取
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryLogQueryDisconnect(IN HLOG_QUERY hLogQuery);

/*!
* @brief
*	历史日志查询下一条
* @param hLogQuery
*	历史日志查询句柄,通过连接历史日志查询获取
* @param pLogQueryResult
*	历史日志查询的一条记录
* @return
*	返回0表示成功, 2为查询忙,3为查询已经完成,其它值为错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_HistoryLogQueryNext(IN HLOG_QUERY hLogQuery, OUT LPLogQueryResult pLogQueryResult);

/*!
* @brief
*	透明通道连接操作
* @param hTransparent
*	透明通道句柄,连接后接口填充该句柄值
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param pTransparentPara
*	透明通道连接参数
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_TransparentChannelConnect(OUT HTRANSPARENT *hTransparent, IN HUSER hUser, IN LPTransparentChannelPara pTransparentPara);

/*!
* @brief
*	透明通道断开操作
* @param hTransparent
*	透明通道句柄,通过连接透明通道获取
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_TransparentChannelDisconnect(IN HTRANSPARENT hTransparent);

/*!
* @brief
*	透明通道数据发送
* @param hTransparent
*	透明通道句柄,通过连接透明通道获取
* @param cBuffer
*	透明通道数据缓冲区
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_TransparentChannelWrite(IN HTRANSPARENT hTransparent, IN const LPBuffer pBuffer);

/*!
* @brief
*	设置透明通道数据回调接口
* @param hTransparent
*	透明通道句柄,通过连接透明通道获取
* @param cbTransparent
*	透明通道数据回调接口,若值为空(NULL),表示不再需要回调
* @param dwUserData
*	透明通道数据回调时回传给应用层
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	由于此回调函数在透明通道数据接收线程调用,
*	为了保证实时性,请尽可能减少在回调中的阻塞式工作,以避免出现丢帧.
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_TransparentChannelCB(IN HTRANSPARENT hTransparent, IN CB_TransparentChannel cbTransparent, IN DWORD dwUserData);

/*!
* @brief
*	文件上传连接操作
* @param hFileTransfer
*	文件上传句柄,连接后接口填充该句柄值
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param pFileUploadPara
*	文件上传参数
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_FileUploadConnect(OUT HFILE_TRANSFER *hFileTransfer, IN HUSER hUser, IN LPFileUploadPara pFileUploadPara);

/*!
* @brief
*	文件上传控制
* @param hFileTransfer
*	文件上传句柄,连接后接口填充该句柄值
* @param eControlCode
*	启动或停止文件传输
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_FileUploadControl(IN HFILE_TRANSFER hFileTransfer, IN eFileTransferControl eControlCode);

/*!
* @brief
*	文件上传断开操作
* @param hFileTransfer
*	文件上传句柄,通过连接文件上传获取
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_FileUploadDisconnect(IN HFILE_TRANSFER hFileTransfer);

/*!
* @brief
*	设置文件上传回调接口
* @param hFileTransfer
*	文件上传句柄,通过连接文件上传获取
* @param cbFileUpload
*	文件上传状态回调
* @param dwUserData
*	文件上传回调时回传给应用层
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_FileUploadCB(IN HFILE_TRANSFER hFileTransfer, IN CB_FileUpload cbFileUpload, IN DWORD dwUserData);

/*!
* @brief
*	文件下载连接操作
* @param hFileTransfer
*	文件下载句柄,连接后接口填充该句柄值
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param pFileDownloadPara
*	文件下载参数
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_FileDownloadConnect(OUT HFILE_TRANSFER *hFileTransfer, IN HUSER hUser, IN LPFileDownloadPara pFileDownloadPara);


/*!
* @brief
*	文件下载控制
* @param hFileTransfer
*	文件下载句柄,连接后接口填充该句柄值
* @param eControlCode
*	启动或停止文件传输
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_FileDownloadControl(IN HFILE_TRANSFER hFileTransfer, IN eFileTransferControl eControlCode);


/*!
* @brief
*	文件下载断开操作
* @param hFileTransfer
*	文件下载句柄,通过连接文件下载获取
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_FileDownloadDisconnect(IN HFILE_TRANSFER hFileTransfer);

/*!
* @brief
*	设置文件下载回调接口
* @param hFileTransfer
*	文件下载句柄,通过连接文件下载获取
* @param cbFileDownload
*	文件下载数据回调
* @param dwUserData
*	文件下载回调时回传给应用层
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_FileDownloadCB(IN HFILE_TRANSFER hFileTransfer, IN CB_FileDownload cbFileDownload, IN DWORD dwUserData);

/*!
 * \brief
 *	启动监听程序，监听设备的注册请求
 * \param sListenIP
 *  PC 机的IP 地址，如果为NULL，SDK 将自动获取PC 机的IP 地址，如果
 *   PC 机有多个IP 地址，可以指定一个IP 地址进行监听。
 * \param dwListenPort
 *   本地监听端口号，由用户设置;
 * \return
*	返回0表示成功, 否则表示错误码
 */
HIECLIENT_API int HieClient_DeviceRegisterListenStart(IN char *sListenIP, IN DWORD dwListenPort);

/*!
 * \brief
 *	停止监听程序
 * \return
 *   TRUE表示成功， FALSE表示失败
 */
HIECLIENT_API int HieClient_DeviceRegisterListenStop();

/*!
* \brief
*    设置设备注册回调函数
* \param cbDeviceRegister
*    回调函数指针
*/
HIECLIENT_API int HieClient_DeviceRegisterCB(IN CB_DeviceRegister cbDeviceRegister);

/*!
 * \brief
 *  远程控制PTZ
 * \param hUser
 *  用户登录句柄
 * \param dwChannel
 *   通道编号(从0开始)
 * \param eCommandCode
 *   PTZ命令字
 * \param dwParam1
 *   PTZ命令参数1
 * \param dwParam2
 *   PTZ命令参数2
 * \param dwParam3
 *   PTZ命令参数3
 * \param dwParam4
 *   PTZ命令参数4
 * \return
 *	返回0表示成功, 否则表示错误码
 */
HIECLIENT_API int HieClient_PTZControl(IN HUSER hUser, IN DWORD dwChannel, IN ePTZControlCmdCode eCommandCode, IN DWORD dwParam1, IN DWORD dwParam2, IN DWORD dwParam3, DWORD dwParam4);

/*!
 * \brief
 *  判断某天是否存在指定数据
 * \param hUser
 *  用户登录句柄
 * \param dwChannel
 *   通道编号(从0开始；当查询图片文件时，该参数表示通道号，当查询录像文件时，该参数表示盘组号)
 * \param dwMajorType
 *   主类型，　0-录像文件   1-图片文件
 * \param dwMinorType
 *   次类型（暂时没有使用）
 * \param szYearMonth
 *   年月时间串（例如：201001）
 * \return
 *	返回0表示成功, 否则表示错误码
 */
HIECLIENT_API int HieClient_DataExistCheck(IN HUSER hUser, IN DWORD dwChannel, IN DWORD dwMajorType, IN DWORD dwMinorType, IN char *szYearMonth, OUT DWORD *dwResult);

/*!
* @brief
*	远程盘组管理
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param eOperationCode
*	操作码
* @param dwParam1-3
*	参数列表
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DiskGroupManage(IN HUSER hUser, IN eDiskGroupOperation eOperationCode, IN DWORD dwParam1, IN DWORD dwParam2, IN DWORD dwParam3);

/*!
* @brief
*	获取数据大小（支持多种录像类型的组合）
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannelBits
*	0－31位分别表示0－31通道的选中状态，1表示选中
* @param eDskGroupType
*	磁盘分组类型
* @param eStreamType
*	录像类型
* @param szStartTime
*	开始时间
* @param szEndTime
*	结束时间
* @param dwDataSize
*	数据大小
* @param dwUserData
*	用户数据
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_GetMultiTypeDataSize(IN HUSER hUser, IN DWORD dwChannelBits,IN eDiskGroupType eDskGroupType, IN DWORD dwStreamType, IN const char *szStartTime, IN const char *szEndTime, IN DWORD dwUserData, OUT DWORD *dwDataSize);

/*!
* @brief
*	获取数据大小（仅支持单一录像类型和所有录像类型）
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannelBits
*	0－31位分别表示0－31通道的选中状态，1表示选中
* @param eDskGroupType
*	磁盘分组类型
* @param eStreamType
*	录像类型
* @param szStartTime
*	开始时间
* @param szEndTime
*	结束时间
* @param dwDataSize
*	数据大小
* @param dwUserData
*	用户数据
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_GetDataSize(IN HUSER hUser, IN DWORD dwChannelBits,IN eDiskGroupType eDskGroupType, IN eHistoryStreamType dwStreamType, IN const char *szStartTime, IN const char *szEndTime, IN DWORD dwUserData, OUT DWORD *dwDataSize);

/*!
* @brief
*	设置强制删除已登录用户回调接口
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cbStreamMedia
*	流媒体回调接口,若值为空(NULL),表示不再需要回调
* @param dwUserData
*	发送命令时回传给应用层
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	应用层可使用此接口设置强制删除已登录用户回调,
*	由此接口通知用户已被设备端强制删除,
*	由于此回调函数在需要回复设备,
*	为了保证实时性,请尽可能减少在回调中的阻塞式工作.
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DeleteUserForceCB(IN CB_DeleteUserForce cbDeleteUserForce, IN DWORD dwUserData);

/*!
* \brief
*	字符串转点阵
* \param pString
*	源字符串
* \param cFont
*   字体信息参数
* \param buffer
*   点阵数据缓冲区
* \param dwBuflen
*   点阵数据缓冲区长度,转换后将被填写为实际使用的长度
* \param dwWidth
*   实际点阵宽度
* \param dwHeight
*   实际点阵高度
* \return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_StringToLattice(IN const char *pString, IN const LPFontPara cFont, OUT void *buffer, IN_OUT DWORD *dwBuflen, OUT DWORD *dwWidth, OUT DWORD *dwHeight);


/*
* @brief
*	分屏模式控制接口
* @param dwScreenDev
*	0代表主显, 1、2、3、4分别代表spot1、spot2、spot3、spot4
* @param dwUserID
*	用户ID
* @param dwSplitNum
*	分屏数，支持1-16分屏
* @param pChanList
*	通道列表（pChanList表示一个DWORD的数组，包含16个DWORD成员。例如：dwSplitNum为4时，总共有4个分屏，
*	如果pChanList[0]为2，表示第一个分屏预览通道2的视频信号。）
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_SetScreenSplitMode(IN HUSER hUser, IN const DWORD dwScreenDev, IN const DWORD dwSplitNum, IN DWORD* pChanList);


/*!
* \brief
*	使用HTTP协议读取服务端的配置信息
* \param pURL
*	服务端URL路径,可用格式:
*	纯域名:			http://xxx.xxx.com
*	纯IP地址:		http://xxx.xxx.xxx.xxx
*	域名与端口:		http://xxx.xxx.com:port
*	IP地址与端口	http://xxx.xxx.xxx.xxx:port
* \param cConfig
*   来自HTTP的设备配置
* \return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_GetDeviceConfigFromHttp(IN const char *pURL, OUT LPDeviceConfigFromHttp cConfig);

/*!
* \brief
*	启动探测设备,在指定的探测信息范围内探测设备
* \param cParameter
*	探测配置参数
* \param cbDeviceProbe
*	探测回调接口
* \return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DeviceProbeStart(IN const LPDeviceProbeParameter cParameter, IN CB_DeviceProbe cbDeviceProbe);

/*!
* \brief
*	停止探测设备
* \return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DeviceProbeStop();

/*!
* \brief
*	通过探测方式设置设备配置
* \param pMac
*	设备MAC地址, 同DeviceProbeConfig结构中MAC地址信息, 长度为 MAC_BINARY_ADDRESS_LEN
* \param wProbePort
*	设备探测端口
* \param cConfig
*	设备配置信息
* \return
*	返回0表示成功, 否则表示错误码
*/
HIECLIENT_API int HieClient_DeviceProbeSetDeviceConfig(IN const BYTE *pMac, IN WORD wProbePort, IN const LPDeviceProbeConfig cConfig);

/*!
* \brief
*	通过探测方式设置指定探测端口范围内的所有设备配置
* \param cParameter
*	探测配置参数
* \param cConfig
*	设备配置信息
* \return
*	返回0表示成功, 否则表示错误码
*/
HIECLIENT_API int HieClient_DeviceProbeSetAllDeviceConfig(IN const LPDeviceProbeParameter cParameter, IN const LPDeviceProbeConfig cConfig);

/*
* @brief
*	获取面板状态
* @param dwUserID
*	用户ID
* @param cStatus
*	面板状态
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_PanelGetStatus(IN HUSER hUser, OUT LPPanelStatusInfo cStatus);

/*
* @brief
*	设置面板状态
* @param dwUserID
*	用户ID
* @param cStatus
*	面板状态
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_PanelSetStatus(IN HUSER hUser, IN LPPanelStatusInfo cStatus);

/*
* @brief
*	面板控制
* @param dwUserID
*	用户ID
* @param cControl
*	面板控制参数
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_PanelControl(IN HUSER hUser, IN LPPanelControlParameter cControl);

/*!
* @brief
*	远程设置恢复色度默认参数
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	通道号
* @param dwTimeSection
*	时间段标号（对于色度配置的高级模式，色度的设置分为4个时间段，1表示默认时间段(是指除了自定义时段以外的时间)，
*	2、4、8分别表示3个自定义时间段。
*	可以通过或操作对多个自定义时间段进行设置，例如(1|4)表示对默认时间段和第2个自定义时间段进行设置。）
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_SetChromaDefault(IN HUSER hUser,IN DWORD dwChannel, IN DWORD dwTimeSection);

/*
* @brief
*	默认文件头获取
* @param inStreamID
*	媒体流ID
* @param pBuffer
*	存放默认文件头的缓冲区
* @param pBufferLen
*	默认文件头长度
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_GetFileHeader(IN DWORD inStreamID,IN_OUT char* pBuffer,IN_OUT DWORD* pBufferLen);
#if 0
/*!
* @brief
*	流转发连接
* @param hStream
*	流媒体句柄,连接后接口填充该句柄值
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	解码通道号
* @param cStreamPara
*	连接参数信息
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*	用于将从视频源设备获取的流转发到其它解码或存储设备.
*/
HIECLIENT_API int HieClient_StreamTransferConnect(OUT HSTREAM *hStream, IN HUSER hUser, IN DWORD dwChannel, IN const LPStreamTransferPara cStreamPara);

/*!
* @brief
*	媒体流转发
* @param hStream
*	流媒体句柄,通过流转发连接获取
* @param cFrame
*	帧信息
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_StreamTransferSend(IN HSTREAM hStream, IN const LPStreamTransferFrame cFrame);

/*!
* @brief
*	流转发断开
* @param hStream
*	流媒体句柄,通过流转发连接获取
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_StreamTransferDisconnect(IN HSTREAM hStream);

/*!
* @brief
*	动态主动流媒体连接
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	解码通道号
* @param cStreamPara
*	连接参数信息
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*	动态的媒体连接不会保存,设备重启后该流媒体不会自动连接
*/
HIECLIENT_API int HieClient_DecoderDynamicConnect(IN HUSER hUser, IN DWORD dwChannel, IN const LPDecoderDynamicInformation cStreamPara);

/*!
* @brief
*	动态主动流媒体断开
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	解码通道号
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderDynamicDisconnect(IN HUSER hUser, IN DWORD dwChannel);

/*!
* @brief
*	设置解码配置信息
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cConfig
*	配置
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderSetConfig(IN HUSER hUser, IN const LPDecoderDeviceConfig cConfig);

/*!
* @brief
*	获取解码配置信息
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cConfig
*	配置
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderGetConfig(IN HUSER hUser, IN LPDecoderDeviceConfig cConfig);

/*!
* @brief
*	设置解码通道配置信息
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	解码通道号
* @param cConfig
*	配置
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderSetChannelConfig(IN HUSER hUser, IN DWORD dwChannel, IN const LPDecoderChannelConfig cConfig);

/*!
* @brief
*	获取解码通道配置信息
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	解码通道号
* @param cConfig
*	配置
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderGetChannelConfig(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderChannelConfig cConfig);

/*!
* @brief
*	设置解码通道视频制式
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	解码通道号
* @param cConfig
*	配置
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderSetVideoStandard(IN HUSER hUser, IN DWORD dwChannel, IN const LPDecoderVideoStandardConfig cConfig);

/*!
* @brief
*	获取解码通道视频制式
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	解码通道号
* @param cConfig
*	配置
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderGetVideoStandard(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderVideoStandardConfig cConfig);

/*!
* @brief
*	设置解码通道轮转配置
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	解码通道号
* @param cConfig
*	配置
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderSetChannelLoopConfig(IN HUSER hUser, IN DWORD dwChannel, IN const LPDecoderChannelLoopConfig cConfig);

/*!
* @brief
*	获取解码通道轮转配置
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	解码通道号
* @param cConfig
*	配置
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderGetChannelLoopConfig(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderChannelLoopConfig cConfig);

/*!
* @brief
*	设置解码通道轮询状态
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	解码通道号
* @param eStatus
*	状态
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderChannelSetLoopEnable(IN HUSER hUser, IN DWORD dwChannel, IN eDecoderChannelStatus eStatus);

/*!
* @brief
*	获取解码通道轮询状态
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	解码通道号
* @param eStatus
*	状态
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderChannelGetLoopEnable(IN HUSER hUser, IN DWORD dwChannel, IN eDecoderChannelStatus *eStatus);

/*!
* @brief
*	获取解码通道轮询状态
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cStatus
*	状态
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderGetLoopEnable(IN HUSER hUser, IN LPDecoderLoopStatus cStatus);

/*!
* @brief
*	获取解码通道信息
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	解码通道号
* @param cInformation
*	状态
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderGetChannelInformation(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderChannelInformation cInformation);

/*!
* @brief
*	获取解码器通道状态
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cStatus
*	状态
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderChannelGetStatus(IN HUSER hUser, IN LPDecoderChannelStatus cStatus);

/*!
* @brief
*	设置解码器通道播放状态
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	解码通道号
* @param cControl
*	控制参数
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderChannelSetPlayStatus(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderSetPlayStatusParameter cControl);

/*!
* @brief
*	获取解码器通道播放状态
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cControl
*	控制参数
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderChannelGetPlayStatus(IN HUSER hUser, IN LPDecoderGetPlayStatusParameter cControl);

/*!
* @brief
*	上传LOGO图片
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	通道号
* @param cParameter
*	LOGO图片参数
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_UploadLogo(IN HUSER hUser, IN DWORD dwChannel, IN LPUploadLogoParameter cParameter);

/*!
* @brief
*	切换解码通道LOGO图片
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwChannel
*	通道号
* @param eOperationCode
*	操作码　
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderChannelLogoSwitch(IN HUSER hUser, IN DWORD dwChannel, IN eDeviceChannelControl eOperationCode);

/*!
* @brief
*	控制显示通道显示状态
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwDisplay
*	显示通道号
* @param cStatus
*	状态
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderChannelDisplayControl(IN HUSER hUser, IN DWORD dwDisplay, IN LPDecoderDisplayStatus cStatus);

/*!
* @brief
*	设置显示配置
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwDisplay
*	显示设备号
* @param cConfig
*	参数
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderSetDisplayConfig(IN HUSER hUser, IN DWORD dwDisplay, IN const LPDecoderDisplayConfig cConfig);

/*!
* @brief
*	获取显示配置
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param dwDisplay
*	显示设备号
* @param cConfig
*	参数
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DecoderGetDisplayConfig(IN HUSER hUser, IN DWORD dwDisplay, IN LPDecoderDisplayConfig cConfig);

/*!
* @brief
*	转发历史流查询连接操作（支持多种录像类型的组合）
* @param hStreamQuery
*	历史流查询句柄,连接后接口填充该句柄值
* @param hUser
*	用户句柄,通过用户登录获取的句柄
* @param cStreamQueryFactor
*	历史流查询条件
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_TransmitHistoryStreamQueryConnect(OUT HSTREAM_QUERY *hStreamQuery, IN HUSER hUser, IN LPTransmitHistoryStreamQueryFactor cStreamQueryFactor);

/*!
* @brief
*	转发历史流查询断开操作
* @param hStreamQuery
*	历史流查询句柄,通过连接历史流查询获取
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_TransmitHistoryStreamQueryDisconnect(IN HSTREAM_QUERY hStreamQuery);

/*!
* @brief
*	转发历史流查询下一条（仅支持单一录像类型和所有录像类型）
* @param hStreamQuery
*	历史流查询句柄,通过连接历史流查询获取
* @param pStreamQueryResult
*	历史流查询的一条记录
* @return
*	返回0表示成功, 2为查询忙,3为查询已经完成,其它值为错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_TransmitHistoryStreamQueryNext(IN HSTREAM_QUERY hStreamQuery, OUT LPHistoryStreamMultiTypeQueryResult pStreamQueryResult);
#endif
/*!
* @brief
*	检测设备是否在线
* @param cAddress
*	设备地址
* @param dwCommandPort
*	设备信令端口
* @param dwTimeOut
*	检测超时时间(毫秒),若小于100则将使用默认时间
* @return
*	返回0表示成功(在线), 1表示失败(不在线)
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_DeviceIsOnline(IN const char *cAddress, IN DWORD dwCommandPort, IN DWORD dwTimeOut);

/*!
* @brief
*	识别指定的设备使用网络库的新旧版本
*	阻塞操作
* @param sServerIP
*	设备的IP地址
* @param dwCommandPort
*	端口号
* @param dwTimeOut
*	超时时间(毫秒),若为0则将使用默认时间10秒
* @param nType
*	网络库的版本类型
* @return
*	返回0表示成功, 否则表示错误码
* @note
*	接口类型: 阻塞式
*/
HIECLIENT_API int HieClient_GetSDKVersion(IN const char *sServerIP, IN DWORD dwCommandPort, IN DWORD dwTimeOut, OUT eNetworkSDKVersion *nType);

#endif
