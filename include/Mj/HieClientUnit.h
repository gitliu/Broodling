/*!
* @file
*  HieClientUnit.h
* @brief
*  �ͻ���SDKͷ�ļ�, ����SDK���нӿ�, ������Ҫ�ӿ�˵��
*  �ͻ���SDK������������������;��
* @author
*  ����
* @date
*  2009��3��13��
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

//SDK������Ϣͷ�ļ�
#include "./HieClient_Configure.h"

//ͨ����Ϣ�����ļ�
#include "./HieClient_Common.h"

/*!
* @brief
*	��������
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	���������,������Ҫ����ʱ�����ֹͣ����ӿ�
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_Start();

/*!
* @brief
*	ֹͣ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_Stop();

/*!
* @brief
*	�û���¼,���豸�����в�������Ҫ�ȵ�¼
*	��������
* @param hUser
*	�û����,��¼��ӿ����þ��ֵ
* @param cUserLoginPara
*	�û���¼������Ϣ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_UserLogin(OUT HUSER *hUser, IN const LPUserLoginPara cUserLoginPara);

/*!
* @brief
*	�û�ע��
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_UserLogout(IN HUSER hUser);

/*!
* @brief
*	���ķ������¼�
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwEventTypes
*	Զ���¼�����,ͨ��������һ�ο��Զ��Ķ����¼���������ͬ�ص����û�����
* @param cbEvent
*	�ص�����
* @param dwUserData
*	�¼��ص�ʱ�ش���Ӧ�ò�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_SubscribeEvent(IN HUSER hUser, IN DWORD dwEventTypes, IN CB_UserEvent cbEvent, IN DWORD dwUserData);

/*!
* @brief
*	�˶��������¼�
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwEventTypes
*	Զ���¼�����,ͨ��������һ�ο����˶������¼�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_UnSubscribeEvent(IN HUSER hUser, IN DWORD dwEventTypes);

/*!
* @brief
*	����������Ϣ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cConfig
*	������Ϣ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_SetConfig(IN HUSER hUser, IN const LPConfigInformation cConfig);

/*!
* @brief
*	����������Ϣ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cConfig
*	������Ϣ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_SetConfigV2(IN HUSER hUser, IN const LPConfigInformationV2 cConfig);

/*!
* @brief
*	��ȡ������Ϣ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cConfig
*	������Ϣ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_GetConfig(IN HUSER hUser, IN LPConfigInformation cConfig);

/*!
* @brief
*	��ȡ������Ϣ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cConfig
*	������Ϣ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_GetConfigV2(IN HUSER hUser, IN LPConfigInformationV2 cConfig);

/*!
* @brief
*	��ȡ�ͻ���SDK����(���ڿ��ƿͻ���SDK�ӿ���Ϊ)
* @param eType
*	�ͻ���SDK��������
* @param dwAttribute
*	�ͻ���SDK����ֵ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_GetAttribute(IN eClientSDKAttributeType eType, OUT DWORD *dwAttribute);

/*!
* @brief
*	���ÿͻ���SDK����(���ڿ��ƿͻ���SDK�ӿ���Ϊ)
* @param eType
*	�ͻ���SDK��������
* @param dwAttribute
*	�ͻ���SDK����ֵ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_SetAttribute(IN eClientSDKAttributeType eType, IN DWORD dwAttribute);

/*!
* @brief
*	Զ���豸����
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param eOperationCode
*	�����롡
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DeviceControl(IN HUSER hUser, IN eRemoteDeviceControl eOperationCode);

/*!
* @brief
*	Զ���豸ǿ��I֡
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	ͨ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_ForceIFrame(IN HUSER hUser,IN DWORD dwChannel);

/*!
* @brief
*	Զ���������
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	ͨ����
* @param dwAlarmType
*	��������
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_AlarmClear(IN HUSER hUser,IN DWORD dwChannel, IN DWORD dwAlarmType);

/*!
* @brief
*	Զ��ץͼ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	ͨ����
* @param eFormat
*	ͼƬ��ʽ
* @param pImageFileInfo
*	ͼƬ��Ϣ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_ImageCapture(IN HUSER hUser, IN DWORD dwChannel, IN eImageFormat eFormat, OUT LPImageFileInfo pImageFileInfo);

/*!
* @brief
*	Զ�������ļ�
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param szFileName
*	�ļ���
* @param eOperationCode
*	������
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_FileLock(IN HUSER hUser, IN char *szFileName, IN eFileLockOperationCode eOperationCode);

/*!
* @brief
*	Զ��¼�����
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	ͨ����
* @param dwRecordType
*	¼������
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_RecordControl(IN HUSER hUser, IN DWORD dwChannel, IN DWORD dwRecordType);

/*!
* @brief
*	Զ�̱����������
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	ͨ����
* @param dwSwitch
*	����״̬
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_AlarmoutControl(IN HUSER hUser, IN DWORD dwChannel, IN DWORD dwSwitch);

/*!
* @brief
*	��ȡԶ�̱�������״̬
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChanNum
*	��Ч��������ͨ������
* @param dwStateBits
*	λ0-31�ֱ��ʾ0��31ͨ���ı�������״̬
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_AlarminStateGet(IN HUSER hUser, OUT DWORD* dwChanNum, OUT DWORD* dwStateBits);

/*!
* @brief
*	��ȡԶ�̱������״̬
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChanNum
*	��Ч�������ͨ������
* @param dwStateBits
*	λ0-31�ֱ��ʾ0��31ͨ���ı������״̬
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_AlarmoutStateGet(IN HUSER hUser, OUT DWORD* dwChanNum, OUT DWORD* dwStateBits);

/*!
* @brief
*	����ʵʱ��
* @param hStream
*	��ý����,���Ӻ�ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStreamPara
*	ʵʱ��������Ϣ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_RealStreamConnect(OUT HSTREAM *hStream, IN HUSER hUser, IN const LPRealStreamPara cStreamPara);

/*!
* @brief
*	�Ͽ�ʵʱ��
* @param hStream
*	��ý����,ͨ������ʵʱ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_RealStreamDisconnect(IN HSTREAM hStream);

/*!
* @brief
*	������ʷͨ������֧�ֵ�һ¼�����ͺ�����¼�����ͣ�
* @param hHistory
*	��ʷͨ�����,������ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStreamPara
*	��ʷͨ��������Ϣ
* @param dwUserData
*	��ʷ���û����ݣ������ݻ�����ʷ���¼�֪ͨ�д��ݸ��û���
*	�û����Ը��ݸ��û������ж�����һ����ʷ��������ʷ�����������ػ��ǻطŵ�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryStreamCreate(OUT HSTREAM *hHistory, IN HUSER hUser, IN const LPHistoryStreamPara cStreamPara, IN DWORD dwUserData);

/*!
* @brief
*	������ʷͨ����֧�ֶ���¼�����͵���ϣ�
* @param hHistory
*	��ʷͨ�����,������ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStreamPara
*	��ʷͨ��������Ϣ
* @param dwUserData
*	��ʷ���û����ݣ������ݻ�����ʷ���¼�֪ͨ�д��ݸ��û���
*	�û����Ը��ݸ��û������ж�����һ����ʷ��������ʷ�����������ػ��ǻطŵ�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryStreamMultiTypeCreate(OUT HSTREAM *hHistory, IN HUSER hUser, IN const LPHistoryStreamMultiTypePara cStreamPara, IN DWORD dwUserData);

/*!
* @brief
*	������ʷͨ��
* @param hHistory
*	��ʷͨ�����,ͨ��������ʷͨ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryStreamDestroy(IN HSTREAM hHistory);

/*!
* @brief
*	��ʷͨ��ʱ��λ��
* @param hHistory
*	��ʷͨ�����,ͨ��������ʷͨ����ȡ
* @param eOperation
*	��ʷͨ����������
* @param cTime
*	��ʷͨ��ʱ����Ϣ,��ȡʱ�˲���Ϊ����,����ʱ�˲���Ϊ���
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryStreamPosition(IN HSTREAM hHistory, IN eOperationType eOperation, IN_OUT TimeInfo *cTime);

/*!
* @brief
*	��Ŀ����ʷͨ�����׼��ʷͨ������ͬ������
* @param hHistory
*	��׼��ʷͨ�����,���ӵ������Ը���ʷͨ��ʱ��Ϊ��׼
* @param hDestHistory
*	Ŀ����ʷͨ�����������ʷͨ�����ڻ�׼��ʷͨ��ͬ��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	��ʷ��֧�ֶ�ͨ��ͬʱ���ͬʱ����
* @note
*	�ӿ�����: ����ʽ
* @note
*	������ʷ��ͬ���󣬻���hHistoryΪ��׼�ٶ�λһ�Σ���λ��ʱ�����hHistory����ʼʱ��
*/
HIECLIENT_API int HieClient_HistoryStreamSync(IN HSTREAM hHistory, IN HSTREAM hDestHistory);

/*!
* @brief
*	��Ŀ����ʷͨ���ӻ�׼��ʷ�����Ƴ�����
* @param hHistory
*   ��׼��ʷͨ�����
* @param hDestHistory
*	Ŀ����ʷ��ͨ�����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryStreamUnSync(IN HSTREAM hHistory, IN HSTREAM hDestHistory);

/*!
* @brief
*	������ʷ������ٶ�
* @param hHistory
*   ��ʷͨ�����
* @param dwSpeed
*	��ʷ������ٶȣ�2x 4x 8x 16x��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryStreamSetSpeed(IN HSTREAM hHistory, IN DWORD dwSpeed);

/*!
* @brief
*	������ʷ���ص��ӿ�
* @param hStream
*	��ý����,ͨ����������ȡ
* @param cbStreamMedia
*	��ý��ص��ӿ�
* @param dwUserData
*	��ý��ص�ʱ�ش���Ӧ�ò�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	Ӧ�ò��ʹ�ô˽ӿ�������ý�����ݻص�,
*	���ڴ˻ص���������ý�����ݽ����̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����,�Ա�����ֶ�֡.
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryStreamCB(IN HSTREAM hStream, IN CB_StreamMedia cbStreamMedia, IN DWORD dwUserData);

/*!
* @brief
*	����������
* @param hStream
*	���������,���Ӻ�ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStreamPara
*	������������Ϣ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_VoiceStreamConnect(OUT HSTREAM *hStream, IN HUSER hUser, IN const LPVoiceStreamPara cStreamPara);

/*!
* @brief
*	�Ͽ�������
* @param hStream
*	���������,ͨ��������������ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_VoiceStreamDisconnect(IN HSTREAM hStream);

/*!
* @brief
*	�������������ݽӿ�
* @param hStream
*	���������,ͨ��������������ȡ
* @param cFrame
*	������֡����,�ɴ������ص���ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_VoiceStreamSend(IN HSTREAM hStream, IN const LPBuffer cFrame);

/*!
* @brief
*	�����������ص��ӿ�
* @param hStream
*	���������,ͨ��������������ȡ
* @param cbStreamVoice
*	�������ص��ӿ�,��ֵΪ��(NULL),��ʾ������Ҫ�ص�
* @param dwUserData
*	�������ص�ʱ�ش���Ӧ�ò�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	���ڴ˻ص����������������ݽ����벶���̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����,�Ա�����ֶ�֡.
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_VoiceStreamCB(IN HSTREAM hStream, IN CB_StreamVoice cbStreamVoice, IN DWORD dwUserData);

/*!
* @brief
*	������ý��ص��ӿ�
* @param hStream
*	��ý����,ͨ����������ȡ
* @param cbStreamMedia
*	��ý��ص��ӿ�,��ֵΪ��(NULL),��ʾ������Ҫ�ص�
* @param dwUserData
*	��ý��ص�ʱ�ش���Ӧ�ò�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	Ӧ�ò��ʹ�ô˽ӿ�������ý�����ݻص�,
*	���ڴ˻ص���������ý�����ݽ����̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����,�Ա�����ֶ�֡.
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_StreamMediaCB(IN HSTREAM hStream, IN CB_StreamMedia cbStreamMedia, IN DWORD dwUserData);

/*!
* @brief
*	����ԭʼ��ý��ص��ӿ�
* @param hStream
*	��ý����,ͨ����������ȡ
* @param cbStreamMedia
*	��ý��ص��ӿ�,��ֵΪ��(NULL),��ʾ������Ҫ�ص�
* @param dwUserData
*	��ý��ص�ʱ�ش���Ӧ�ò�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	Ӧ�ò��ʹ�ô˽ӿ�������ý�����ݻص�,
*	���ڴ˻ص���������ý�����ݽ����̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����,�Ա�����ֶ�֡.
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_StreamMediaRawCB(IN HSTREAM hStream, IN CB_StreamMediaRaw cbStreamMedia, IN DWORD dwUserData);

/*!
* @brief
*	��ý����ƽӿ�,������ý���������ֹͣ
* @param hStream
*	��ý����,ͨ����������ȡ
* @param eMediaControl
*	��ý���������
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_StreamMediaControl(IN HSTREAM hStream, IN eTaskControl eMediaControl);

/*!
* @brief
*	������ý������ID
* @param hStream
*	��ý����,ͨ����������ȡ
* @param dwLinkID
*	��ý������ID
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*	���õ�ý������ID�ᱣ�浽��������,�ڷ���������֮ǰһֱ����,�ͻ����Բ�ѯ�豸�ϵ�����ID
*/
HIECLIENT_API int HieClient_SetStreamMediaLinkID(IN HSTREAM hStream, IN DWORD dwLinkID);

/*!
* @brief
*	��ѯ��ý������ID
* @param hStream
*	��ý����,ͨ����������ȡ
* @param eType
*	��ý������
* @param cQueryResult
*	��ѯ����ID���
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*	��ѯ�����ڷ������ϵ�ý������ID
*/
HIECLIENT_API int HieClient_QueryStreamMediaLinkID(IN HUSER hUser, IN eMediaFunctionType eType, IN LPMediaLinkIDQueryResult cQueryResult);

/*!
* @brief
*	��ʷ����ѯ���Ӳ�������֧�ֵ�һ¼�����ͺ�����¼�����ͣ�
* @param hStreamQuery
*	��ʷ����ѯ���,���Ӻ�ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStreamQueryFactor
*	��ʷ����ѯ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryStreamQueryConnect(OUT HSTREAM_QUERY *hStreamQuery, IN HUSER hUser, IN LPHistoryStreamQueryFactor cStreamQueryFactor);

/*!
* @brief
*	��ʷ����ѯ���Ӳ�����֧�ֶ���¼�����͵���ϣ�
* @param hStreamQuery
*	��ʷ����ѯ���,���Ӻ�ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStreamQueryFactor
*	��ʷ����ѯ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryStreamMultiTypeQueryConnect(OUT HSTREAM_QUERY *hStreamQuery, IN HUSER hUser, IN LPHistoryStreamMultiTypeQueryFactor cStreamQueryFactor);

/*!
* @brief
*	��ʷ����ѯ�Ͽ�����
* @param hStreamQuery
*	��ʷ����ѯ���,ͨ��������ʷ����ѯ��ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryStreamQueryDisconnect(IN HSTREAM_QUERY hStreamQuery);

/*!
* @brief
*	��ʷ����ѯ��һ������֧�ֵ�һ¼�����ͺ�����¼�����ͣ�
* @param hStreamQuery
*	��ʷ����ѯ���,ͨ��������ʷ����ѯ��ȡ
* @param pStreamQueryResult
*	��ʷ����ѯ��һ����¼
* @return
*	����0��ʾ�ɹ�, 2Ϊ��ѯæ,3Ϊ��ѯ�Ѿ����,����ֵΪ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryStreamQueryNext(IN HSTREAM_QUERY hStreamQuery, OUT LPHistoryStreamQueryResult pStreamQueryResult);

/*!
* @brief
*	��ʷ����ѯ��һ����֧�ֶ���¼�����͵���ϣ�
* @param hStreamQuery
*	��ʷ����ѯ���,ͨ��������ʷ����ѯ��ȡ
* @param pStreamQueryResult
*	��ʷ����ѯ��һ����¼
* @return
*	����0��ʾ�ɹ�, 2Ϊ��ѯæ,3Ϊ��ѯ�Ѿ����,����ֵΪ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryStreamMultiTypeQueryNext(IN HSTREAM_QUERY hStreamQuery, OUT LPHistoryStreamMultiTypeQueryResult pStreamQueryResult);

/*!
* @brief
*	�ļ���ѯ���Ӳ���
* @param hFileQuery
*	�ļ���ѯ���,���Ӻ�ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param pFileQueryFactor
*	�ļ���ѯ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_FileQueryConnect(OUT HFILE_QUERY *hFileQuery, IN HUSER hUser, IN LPFileQueryFactor pFileQueryFactor);

/*!
* @brief
*	�ļ���ѯ�Ͽ�����
* @param hFileQuery
*	�ļ���ѯ���,ͨ�������ļ���ѯ��ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_FileQueryDisconnect(IN HFILE_QUERY hFileQuery);

/*!
* @brief
*	�ļ���ѯ��һ��
* @param hFileQuery
*	�ļ���ѯ��� ,ͨ�������ļ���ѯ��ȡ
* @param pFileQueryResult
*	�ļ���ѯ��һ����¼
* @return
*	����0��ʾ�ɹ�, 2Ϊ��ѯæ,3Ϊ��ѯ�Ѿ����,����ֵΪ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_FileQueryNext(IN HFILE_QUERY hFileQuery, OUT LPFileQueryResult pFileQueryResult);

/*!
* @brief
*	��ʷ��־��ѯ���Ӳ���
* @param hLogQuery
*	��ʷ��־��ѯ���,���Ӻ�ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cLogQueryFactor
*	��ʷ��־��ѯ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryLogQueryConnect(OUT HLOG_QUERY *hLogQuery, IN HUSER hUser, IN LPLogQueryFactor pLogQueryFactor);

/*!
* @brief
*	��ʷ��־��ѯ�Ͽ�����
* @param hLogQuery
*	��ʷ��־��ѯ���,ͨ��������ʷ��־��ѯ��ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryLogQueryDisconnect(IN HLOG_QUERY hLogQuery);

/*!
* @brief
*	��ʷ��־��ѯ��һ��
* @param hLogQuery
*	��ʷ��־��ѯ���,ͨ��������ʷ��־��ѯ��ȡ
* @param pLogQueryResult
*	��ʷ��־��ѯ��һ����¼
* @return
*	����0��ʾ�ɹ�, 2Ϊ��ѯæ,3Ϊ��ѯ�Ѿ����,����ֵΪ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_HistoryLogQueryNext(IN HLOG_QUERY hLogQuery, OUT LPLogQueryResult pLogQueryResult);

/*!
* @brief
*	͸��ͨ�����Ӳ���
* @param hTransparent
*	͸��ͨ�����,���Ӻ�ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param pTransparentPara
*	͸��ͨ�����Ӳ���
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_TransparentChannelConnect(OUT HTRANSPARENT *hTransparent, IN HUSER hUser, IN LPTransparentChannelPara pTransparentPara);

/*!
* @brief
*	͸��ͨ���Ͽ�����
* @param hTransparent
*	͸��ͨ�����,ͨ������͸��ͨ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_TransparentChannelDisconnect(IN HTRANSPARENT hTransparent);

/*!
* @brief
*	͸��ͨ�����ݷ���
* @param hTransparent
*	͸��ͨ�����,ͨ������͸��ͨ����ȡ
* @param cBuffer
*	͸��ͨ�����ݻ�����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_TransparentChannelWrite(IN HTRANSPARENT hTransparent, IN const LPBuffer pBuffer);

/*!
* @brief
*	����͸��ͨ�����ݻص��ӿ�
* @param hTransparent
*	͸��ͨ�����,ͨ������͸��ͨ����ȡ
* @param cbTransparent
*	͸��ͨ�����ݻص��ӿ�,��ֵΪ��(NULL),��ʾ������Ҫ�ص�
* @param dwUserData
*	͸��ͨ�����ݻص�ʱ�ش���Ӧ�ò�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	���ڴ˻ص�������͸��ͨ�����ݽ����̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����,�Ա�����ֶ�֡.
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_TransparentChannelCB(IN HTRANSPARENT hTransparent, IN CB_TransparentChannel cbTransparent, IN DWORD dwUserData);

/*!
* @brief
*	�ļ��ϴ����Ӳ���
* @param hFileTransfer
*	�ļ��ϴ����,���Ӻ�ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param pFileUploadPara
*	�ļ��ϴ�����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_FileUploadConnect(OUT HFILE_TRANSFER *hFileTransfer, IN HUSER hUser, IN LPFileUploadPara pFileUploadPara);

/*!
* @brief
*	�ļ��ϴ�����
* @param hFileTransfer
*	�ļ��ϴ����,���Ӻ�ӿ����þ��ֵ
* @param eControlCode
*	������ֹͣ�ļ�����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_FileUploadControl(IN HFILE_TRANSFER hFileTransfer, IN eFileTransferControl eControlCode);

/*!
* @brief
*	�ļ��ϴ��Ͽ�����
* @param hFileTransfer
*	�ļ��ϴ����,ͨ�������ļ��ϴ���ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_FileUploadDisconnect(IN HFILE_TRANSFER hFileTransfer);

/*!
* @brief
*	�����ļ��ϴ��ص��ӿ�
* @param hFileTransfer
*	�ļ��ϴ����,ͨ�������ļ��ϴ���ȡ
* @param cbFileUpload
*	�ļ��ϴ�״̬�ص�
* @param dwUserData
*	�ļ��ϴ��ص�ʱ�ش���Ӧ�ò�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_FileUploadCB(IN HFILE_TRANSFER hFileTransfer, IN CB_FileUpload cbFileUpload, IN DWORD dwUserData);

/*!
* @brief
*	�ļ��������Ӳ���
* @param hFileTransfer
*	�ļ����ؾ��,���Ӻ�ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param pFileDownloadPara
*	�ļ����ز���
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_FileDownloadConnect(OUT HFILE_TRANSFER *hFileTransfer, IN HUSER hUser, IN LPFileDownloadPara pFileDownloadPara);


/*!
* @brief
*	�ļ����ؿ���
* @param hFileTransfer
*	�ļ����ؾ��,���Ӻ�ӿ����þ��ֵ
* @param eControlCode
*	������ֹͣ�ļ�����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_FileDownloadControl(IN HFILE_TRANSFER hFileTransfer, IN eFileTransferControl eControlCode);


/*!
* @brief
*	�ļ����ضϿ�����
* @param hFileTransfer
*	�ļ����ؾ��,ͨ�������ļ����ػ�ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_FileDownloadDisconnect(IN HFILE_TRANSFER hFileTransfer);

/*!
* @brief
*	�����ļ����ػص��ӿ�
* @param hFileTransfer
*	�ļ����ؾ��,ͨ�������ļ����ػ�ȡ
* @param cbFileDownload
*	�ļ��������ݻص�
* @param dwUserData
*	�ļ����ػص�ʱ�ش���Ӧ�ò�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_FileDownloadCB(IN HFILE_TRANSFER hFileTransfer, IN CB_FileDownload cbFileDownload, IN DWORD dwUserData);

/*!
 * \brief
 *	�����������򣬼����豸��ע������
 * \param sListenIP
 *  PC ����IP ��ַ�����ΪNULL��SDK ���Զ���ȡPC ����IP ��ַ�����
 *   PC ���ж��IP ��ַ������ָ��һ��IP ��ַ���м�����
 * \param dwListenPort
 *   ���ؼ����˿ںţ����û�����;
 * \return
*	����0��ʾ�ɹ�, �����ʾ������
 */
HIECLIENT_API int HieClient_DeviceRegisterListenStart(IN char *sListenIP, IN DWORD dwListenPort);

/*!
 * \brief
 *	ֹͣ��������
 * \return
 *   TRUE��ʾ�ɹ��� FALSE��ʾʧ��
 */
HIECLIENT_API int HieClient_DeviceRegisterListenStop();

/*!
* \brief
*    �����豸ע��ص�����
* \param cbDeviceRegister
*    �ص�����ָ��
*/
HIECLIENT_API int HieClient_DeviceRegisterCB(IN CB_DeviceRegister cbDeviceRegister);

/*!
 * \brief
 *  Զ�̿���PTZ
 * \param hUser
 *  �û���¼���
 * \param dwChannel
 *   ͨ�����(��0��ʼ)
 * \param eCommandCode
 *   PTZ������
 * \param dwParam1
 *   PTZ�������1
 * \param dwParam2
 *   PTZ�������2
 * \param dwParam3
 *   PTZ�������3
 * \param dwParam4
 *   PTZ�������4
 * \return
 *	����0��ʾ�ɹ�, �����ʾ������
 */
HIECLIENT_API int HieClient_PTZControl(IN HUSER hUser, IN DWORD dwChannel, IN ePTZControlCmdCode eCommandCode, IN DWORD dwParam1, IN DWORD dwParam2, IN DWORD dwParam3, DWORD dwParam4);

/*!
 * \brief
 *  �ж�ĳ���Ƿ����ָ������
 * \param hUser
 *  �û���¼���
 * \param dwChannel
 *   ͨ�����(��0��ʼ������ѯͼƬ�ļ�ʱ���ò�����ʾͨ���ţ�����ѯ¼���ļ�ʱ���ò�����ʾ�����)
 * \param dwMajorType
 *   �����ͣ���0-¼���ļ�   1-ͼƬ�ļ�
 * \param dwMinorType
 *   �����ͣ���ʱû��ʹ�ã�
 * \param szYearMonth
 *   ����ʱ�䴮�����磺201001��
 * \return
 *	����0��ʾ�ɹ�, �����ʾ������
 */
HIECLIENT_API int HieClient_DataExistCheck(IN HUSER hUser, IN DWORD dwChannel, IN DWORD dwMajorType, IN DWORD dwMinorType, IN char *szYearMonth, OUT DWORD *dwResult);

/*!
* @brief
*	Զ���������
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param eOperationCode
*	������
* @param dwParam1-3
*	�����б�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DiskGroupManage(IN HUSER hUser, IN eDiskGroupOperation eOperationCode, IN DWORD dwParam1, IN DWORD dwParam2, IN DWORD dwParam3);

/*!
* @brief
*	��ȡ���ݴ�С��֧�ֶ���¼�����͵���ϣ�
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannelBits
*	0��31λ�ֱ��ʾ0��31ͨ����ѡ��״̬��1��ʾѡ��
* @param eDskGroupType
*	���̷�������
* @param eStreamType
*	¼������
* @param szStartTime
*	��ʼʱ��
* @param szEndTime
*	����ʱ��
* @param dwDataSize
*	���ݴ�С
* @param dwUserData
*	�û�����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_GetMultiTypeDataSize(IN HUSER hUser, IN DWORD dwChannelBits,IN eDiskGroupType eDskGroupType, IN DWORD dwStreamType, IN const char *szStartTime, IN const char *szEndTime, IN DWORD dwUserData, OUT DWORD *dwDataSize);

/*!
* @brief
*	��ȡ���ݴ�С����֧�ֵ�һ¼�����ͺ�����¼�����ͣ�
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannelBits
*	0��31λ�ֱ��ʾ0��31ͨ����ѡ��״̬��1��ʾѡ��
* @param eDskGroupType
*	���̷�������
* @param eStreamType
*	¼������
* @param szStartTime
*	��ʼʱ��
* @param szEndTime
*	����ʱ��
* @param dwDataSize
*	���ݴ�С
* @param dwUserData
*	�û�����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_GetDataSize(IN HUSER hUser, IN DWORD dwChannelBits,IN eDiskGroupType eDskGroupType, IN eHistoryStreamType dwStreamType, IN const char *szStartTime, IN const char *szEndTime, IN DWORD dwUserData, OUT DWORD *dwDataSize);

/*!
* @brief
*	����ǿ��ɾ���ѵ�¼�û��ص��ӿ�
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cbStreamMedia
*	��ý��ص��ӿ�,��ֵΪ��(NULL),��ʾ������Ҫ�ص�
* @param dwUserData
*	��������ʱ�ش���Ӧ�ò�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	Ӧ�ò��ʹ�ô˽ӿ�����ǿ��ɾ���ѵ�¼�û��ص�,
*	�ɴ˽ӿ�֪ͨ�û��ѱ��豸��ǿ��ɾ��,
*	���ڴ˻ص���������Ҫ�ظ��豸,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����.
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DeleteUserForceCB(IN CB_DeleteUserForce cbDeleteUserForce, IN DWORD dwUserData);

/*!
* \brief
*	�ַ���ת����
* \param pString
*	Դ�ַ���
* \param cFont
*   ������Ϣ����
* \param buffer
*   �������ݻ�����
* \param dwBuflen
*   �������ݻ���������,ת���󽫱���дΪʵ��ʹ�õĳ���
* \param dwWidth
*   ʵ�ʵ�����
* \param dwHeight
*   ʵ�ʵ���߶�
* \return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_StringToLattice(IN const char *pString, IN const LPFontPara cFont, OUT void *buffer, IN_OUT DWORD *dwBuflen, OUT DWORD *dwWidth, OUT DWORD *dwHeight);


/*
* @brief
*	����ģʽ���ƽӿ�
* @param dwScreenDev
*	0��������, 1��2��3��4�ֱ����spot1��spot2��spot3��spot4
* @param dwUserID
*	�û�ID
* @param dwSplitNum
*	��������֧��1-16����
* @param pChanList
*	ͨ���б�pChanList��ʾһ��DWORD�����飬����16��DWORD��Ա�����磺dwSplitNumΪ4ʱ���ܹ���4��������
*	���pChanList[0]Ϊ2����ʾ��һ������Ԥ��ͨ��2����Ƶ�źš���
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_SetScreenSplitMode(IN HUSER hUser, IN const DWORD dwScreenDev, IN const DWORD dwSplitNum, IN DWORD* pChanList);


/*!
* \brief
*	ʹ��HTTPЭ���ȡ����˵�������Ϣ
* \param pURL
*	�����URL·��,���ø�ʽ:
*	������:			http://xxx.xxx.com
*	��IP��ַ:		http://xxx.xxx.xxx.xxx
*	������˿�:		http://xxx.xxx.com:port
*	IP��ַ��˿�	http://xxx.xxx.xxx.xxx:port
* \param cConfig
*   ����HTTP���豸����
* \return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_GetDeviceConfigFromHttp(IN const char *pURL, OUT LPDeviceConfigFromHttp cConfig);

/*!
* \brief
*	����̽���豸,��ָ����̽����Ϣ��Χ��̽���豸
* \param cParameter
*	̽�����ò���
* \param cbDeviceProbe
*	̽��ص��ӿ�
* \return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DeviceProbeStart(IN const LPDeviceProbeParameter cParameter, IN CB_DeviceProbe cbDeviceProbe);

/*!
* \brief
*	ֹͣ̽���豸
* \return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DeviceProbeStop();

/*!
* \brief
*	ͨ��̽�ⷽʽ�����豸����
* \param pMac
*	�豸MAC��ַ, ͬDeviceProbeConfig�ṹ��MAC��ַ��Ϣ, ����Ϊ MAC_BINARY_ADDRESS_LEN
* \param wProbePort
*	�豸̽��˿�
* \param cConfig
*	�豸������Ϣ
* \return
*	����0��ʾ�ɹ�, �����ʾ������
*/
HIECLIENT_API int HieClient_DeviceProbeSetDeviceConfig(IN const BYTE *pMac, IN WORD wProbePort, IN const LPDeviceProbeConfig cConfig);

/*!
* \brief
*	ͨ��̽�ⷽʽ����ָ��̽��˿ڷ�Χ�ڵ������豸����
* \param cParameter
*	̽�����ò���
* \param cConfig
*	�豸������Ϣ
* \return
*	����0��ʾ�ɹ�, �����ʾ������
*/
HIECLIENT_API int HieClient_DeviceProbeSetAllDeviceConfig(IN const LPDeviceProbeParameter cParameter, IN const LPDeviceProbeConfig cConfig);

/*
* @brief
*	��ȡ���״̬
* @param dwUserID
*	�û�ID
* @param cStatus
*	���״̬
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_PanelGetStatus(IN HUSER hUser, OUT LPPanelStatusInfo cStatus);

/*
* @brief
*	�������״̬
* @param dwUserID
*	�û�ID
* @param cStatus
*	���״̬
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_PanelSetStatus(IN HUSER hUser, IN LPPanelStatusInfo cStatus);

/*
* @brief
*	������
* @param dwUserID
*	�û�ID
* @param cControl
*	�����Ʋ���
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_PanelControl(IN HUSER hUser, IN LPPanelControlParameter cControl);

/*!
* @brief
*	Զ�����ûָ�ɫ��Ĭ�ϲ���
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	ͨ����
* @param dwTimeSection
*	ʱ��α�ţ�����ɫ�����õĸ߼�ģʽ��ɫ�ȵ����÷�Ϊ4��ʱ��Σ�1��ʾĬ��ʱ���(��ָ�����Զ���ʱ�������ʱ��)��
*	2��4��8�ֱ��ʾ3���Զ���ʱ��Ρ�
*	����ͨ��������Զ���Զ���ʱ��ν������ã�����(1|4)��ʾ��Ĭ��ʱ��κ͵�2���Զ���ʱ��ν������á���
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_SetChromaDefault(IN HUSER hUser,IN DWORD dwChannel, IN DWORD dwTimeSection);

/*
* @brief
*	Ĭ���ļ�ͷ��ȡ
* @param inStreamID
*	ý����ID
* @param pBuffer
*	���Ĭ���ļ�ͷ�Ļ�����
* @param pBufferLen
*	Ĭ���ļ�ͷ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_GetFileHeader(IN DWORD inStreamID,IN_OUT char* pBuffer,IN_OUT DWORD* pBufferLen);
#if 0
/*!
* @brief
*	��ת������
* @param hStream
*	��ý����,���Ӻ�ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	����ͨ����
* @param cStreamPara
*	���Ӳ�����Ϣ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*	���ڽ�����ƵԴ�豸��ȡ����ת�������������洢�豸.
*/
HIECLIENT_API int HieClient_StreamTransferConnect(OUT HSTREAM *hStream, IN HUSER hUser, IN DWORD dwChannel, IN const LPStreamTransferPara cStreamPara);

/*!
* @brief
*	ý����ת��
* @param hStream
*	��ý����,ͨ����ת�����ӻ�ȡ
* @param cFrame
*	֡��Ϣ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_StreamTransferSend(IN HSTREAM hStream, IN const LPStreamTransferFrame cFrame);

/*!
* @brief
*	��ת���Ͽ�
* @param hStream
*	��ý����,ͨ����ת�����ӻ�ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_StreamTransferDisconnect(IN HSTREAM hStream);

/*!
* @brief
*	��̬������ý������
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	����ͨ����
* @param cStreamPara
*	���Ӳ�����Ϣ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*	��̬��ý�����Ӳ��ᱣ��,�豸���������ý�岻���Զ�����
*/
HIECLIENT_API int HieClient_DecoderDynamicConnect(IN HUSER hUser, IN DWORD dwChannel, IN const LPDecoderDynamicInformation cStreamPara);

/*!
* @brief
*	��̬������ý��Ͽ�
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	����ͨ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderDynamicDisconnect(IN HUSER hUser, IN DWORD dwChannel);

/*!
* @brief
*	���ý���������Ϣ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cConfig
*	����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderSetConfig(IN HUSER hUser, IN const LPDecoderDeviceConfig cConfig);

/*!
* @brief
*	��ȡ����������Ϣ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cConfig
*	����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderGetConfig(IN HUSER hUser, IN LPDecoderDeviceConfig cConfig);

/*!
* @brief
*	���ý���ͨ��������Ϣ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	����ͨ����
* @param cConfig
*	����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderSetChannelConfig(IN HUSER hUser, IN DWORD dwChannel, IN const LPDecoderChannelConfig cConfig);

/*!
* @brief
*	��ȡ����ͨ��������Ϣ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	����ͨ����
* @param cConfig
*	����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderGetChannelConfig(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderChannelConfig cConfig);

/*!
* @brief
*	���ý���ͨ����Ƶ��ʽ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	����ͨ����
* @param cConfig
*	����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderSetVideoStandard(IN HUSER hUser, IN DWORD dwChannel, IN const LPDecoderVideoStandardConfig cConfig);

/*!
* @brief
*	��ȡ����ͨ����Ƶ��ʽ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	����ͨ����
* @param cConfig
*	����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderGetVideoStandard(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderVideoStandardConfig cConfig);

/*!
* @brief
*	���ý���ͨ����ת����
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	����ͨ����
* @param cConfig
*	����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderSetChannelLoopConfig(IN HUSER hUser, IN DWORD dwChannel, IN const LPDecoderChannelLoopConfig cConfig);

/*!
* @brief
*	��ȡ����ͨ����ת����
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	����ͨ����
* @param cConfig
*	����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderGetChannelLoopConfig(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderChannelLoopConfig cConfig);

/*!
* @brief
*	���ý���ͨ����ѯ״̬
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	����ͨ����
* @param eStatus
*	״̬
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderChannelSetLoopEnable(IN HUSER hUser, IN DWORD dwChannel, IN eDecoderChannelStatus eStatus);

/*!
* @brief
*	��ȡ����ͨ����ѯ״̬
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	����ͨ����
* @param eStatus
*	״̬
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderChannelGetLoopEnable(IN HUSER hUser, IN DWORD dwChannel, IN eDecoderChannelStatus *eStatus);

/*!
* @brief
*	��ȡ����ͨ����ѯ״̬
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStatus
*	״̬
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderGetLoopEnable(IN HUSER hUser, IN LPDecoderLoopStatus cStatus);

/*!
* @brief
*	��ȡ����ͨ����Ϣ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	����ͨ����
* @param cInformation
*	״̬
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderGetChannelInformation(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderChannelInformation cInformation);

/*!
* @brief
*	��ȡ������ͨ��״̬
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStatus
*	״̬
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderChannelGetStatus(IN HUSER hUser, IN LPDecoderChannelStatus cStatus);

/*!
* @brief
*	���ý�����ͨ������״̬
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	����ͨ����
* @param cControl
*	���Ʋ���
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderChannelSetPlayStatus(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderSetPlayStatusParameter cControl);

/*!
* @brief
*	��ȡ������ͨ������״̬
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cControl
*	���Ʋ���
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderChannelGetPlayStatus(IN HUSER hUser, IN LPDecoderGetPlayStatusParameter cControl);

/*!
* @brief
*	�ϴ�LOGOͼƬ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	ͨ����
* @param cParameter
*	LOGOͼƬ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_UploadLogo(IN HUSER hUser, IN DWORD dwChannel, IN LPUploadLogoParameter cParameter);

/*!
* @brief
*	�л�����ͨ��LOGOͼƬ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	ͨ����
* @param eOperationCode
*	�����롡
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderChannelLogoSwitch(IN HUSER hUser, IN DWORD dwChannel, IN eDeviceChannelControl eOperationCode);

/*!
* @brief
*	������ʾͨ����ʾ״̬
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwDisplay
*	��ʾͨ����
* @param cStatus
*	״̬
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderChannelDisplayControl(IN HUSER hUser, IN DWORD dwDisplay, IN LPDecoderDisplayStatus cStatus);

/*!
* @brief
*	������ʾ����
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwDisplay
*	��ʾ�豸��
* @param cConfig
*	����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderSetDisplayConfig(IN HUSER hUser, IN DWORD dwDisplay, IN const LPDecoderDisplayConfig cConfig);

/*!
* @brief
*	��ȡ��ʾ����
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwDisplay
*	��ʾ�豸��
* @param cConfig
*	����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DecoderGetDisplayConfig(IN HUSER hUser, IN DWORD dwDisplay, IN LPDecoderDisplayConfig cConfig);

/*!
* @brief
*	ת����ʷ����ѯ���Ӳ�����֧�ֶ���¼�����͵���ϣ�
* @param hStreamQuery
*	��ʷ����ѯ���,���Ӻ�ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStreamQueryFactor
*	��ʷ����ѯ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_TransmitHistoryStreamQueryConnect(OUT HSTREAM_QUERY *hStreamQuery, IN HUSER hUser, IN LPTransmitHistoryStreamQueryFactor cStreamQueryFactor);

/*!
* @brief
*	ת����ʷ����ѯ�Ͽ�����
* @param hStreamQuery
*	��ʷ����ѯ���,ͨ��������ʷ����ѯ��ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_TransmitHistoryStreamQueryDisconnect(IN HSTREAM_QUERY hStreamQuery);

/*!
* @brief
*	ת����ʷ����ѯ��һ������֧�ֵ�һ¼�����ͺ�����¼�����ͣ�
* @param hStreamQuery
*	��ʷ����ѯ���,ͨ��������ʷ����ѯ��ȡ
* @param pStreamQueryResult
*	��ʷ����ѯ��һ����¼
* @return
*	����0��ʾ�ɹ�, 2Ϊ��ѯæ,3Ϊ��ѯ�Ѿ����,����ֵΪ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_TransmitHistoryStreamQueryNext(IN HSTREAM_QUERY hStreamQuery, OUT LPHistoryStreamMultiTypeQueryResult pStreamQueryResult);
#endif
/*!
* @brief
*	����豸�Ƿ�����
* @param cAddress
*	�豸��ַ
* @param dwCommandPort
*	�豸����˿�
* @param dwTimeOut
*	��ⳬʱʱ��(����),��С��100��ʹ��Ĭ��ʱ��
* @return
*	����0��ʾ�ɹ�(����), 1��ʾʧ��(������)
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_DeviceIsOnline(IN const char *cAddress, IN DWORD dwCommandPort, IN DWORD dwTimeOut);

/*!
* @brief
*	ʶ��ָ�����豸ʹ���������¾ɰ汾
*	��������
* @param sServerIP
*	�豸��IP��ַ
* @param dwCommandPort
*	�˿ں�
* @param dwTimeOut
*	��ʱʱ��(����),��Ϊ0��ʹ��Ĭ��ʱ��10��
* @param nType
*	�����İ汾����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECLIENT_API int HieClient_GetSDKVersion(IN const char *sServerIP, IN DWORD dwCommandPort, IN DWORD dwTimeOut, OUT eNetworkSDKVersion *nType);

#endif
