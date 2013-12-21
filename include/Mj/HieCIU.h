/*!
 *\file   HieCIU.h
 *\brief  
 *        �����������ĵ�����,�ͻ�����SDKλ�ڿͻ���SDK���ϲ㣨���¼��IU����
 *        �²���ҵ����SDK������FU�����ṩ����������ͨ�ţ�ҵ�����ݹ���ȹ��ܡ�
 *        IU��������FU��IU���ý�����ݴ����ܣ����װ����룬�������SDK����
 *        ��طţ��������ֵ�IU�Ľӿ���ɡ�FU���Զ������������û��޽��ý������
 *        ���д���ʱ��
 *
 *        ���ι滮����������ʷ�汾�ļ��ݡ�
 *        ��չ�Ա��뿼�ǣ������������ý�������������������������Ŀǰ������
 *        �Խ����ͺ���֧���µ�������ʽ�����Ƶ����������ÿ����ʱ�����������졣
 *        ��ֲ�ԣ���δ������linux��ʵ�ֿͻ���SDK��������������Ӧ�ü��Կ��ǣ���
 *        ��Ϊδ����Ԥ��һ��ռ䡣
 *\author hdd
 *\date	  2009/04/27
 *\version 0.1
 */

#ifndef __HIECIU_H__
#define __HIECIU_H__

#ifdef HIECIU_EXPORTS
#define HIECIU_API extern "C" __declspec(dllexport)
#else
#ifdef __cplusplus
#define HIECIU_API extern "C" __declspec(dllimport)
#else
#define HIECIU_API 
#endif
#endif

#include "HieCIU_Common.h"

/*!
* @brief
*	���ý���ģʽ(�����|�������)
* @param nDecodeMode
*	����ģʽ
* @return
*	����0��ʾ�ɹ�, �����ʾʧ�ܣ������ش�����
* @note
*	�˽ӿ���Ϊ�˽�������ʱ��γ�ʼ��ϵͳSDK�����⣬��һ�������Ѿ������˾������ʱ����һ�����̾Ͳ�Ӧ�����þ�����룬���򽫵���
*	���󿨳�ʼ��Ӱ�쵽��һ�����̡��˽ӿ����ڽӿ�HieCIU_Initialize��HieCIU_StartUp֮ǰ���ã��������ô˽ӿ�ʱĬ�����ý���ģʽ
*	ΪeDecodeModeAll��
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API void HieCIU_SetDecodeMode(eDecodeModeSetting nDecodeMode);

/*!
* @brief
*	��������������֮ǰ�������õĲ���,��������ý���Ĭ�ϵķ�ʽ����
*   �������������Щ�����������T_SYSTEM_INFO�Ķ���
* @return
*	����0��ʾ�ɹ�, �����ʾʧ�ܣ������ش�����
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_Initialize(PT_SYSTEM_INFO pSystemInfo);

/*!
* @brief
*	��������(�����Ҫ���ڴ棬�̵߳���Դ)
* @return
*	����0��ʾ�ɹ�, �����ʾʧ�ܣ������ش�����
* @note
*	���������,������Ҫ����ʱ�ɵ���ֹͣ����ӿ�HieCIU_CleanUp
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_StartUp();

/*!
* @brief
*	ֹͣ����(�ͷŷ�����ʹ�õ��ڴ棬�̵߳���Դ)
* @return
*	����0��ʾ�ɹ�, �����ʾʧ�ܣ������ش�����
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_CleanUp();


/*!
* @brief
*	�û���¼,���豸�����в�������Ҫ�ȵ�¼
* @param hUser
*	�û������ַ,��¼��ӿ����þ��ֵ
* @param cUserLoginPara
*	�û���¼������Ϣ,����cUserLoginPara�����Ϳɲμ���ṹ��UserLoginPara����˵��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_UserLogin(OUT HUSER *hUser, IN const LPUserLoginPara cUserLoginPara);

/*!
* @brief
*	�û�ע��,�ɹ�ע����˾��ֵ������Ч
* @param hUser
*	�û����ֵ,ͨ���û���¼��ȡ�ľ��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_UserLogout(IN HUSER hUser);

/*!
* @brief
*	���ķ������¼�
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwEventTypes
*	Զ���¼�����,ͨ��������һ�ο��Զ��Ķ����¼���������ͬ�ص����û�����
* @param dwUserData
*	�¼��ص�ʱ�ش���Ӧ�ò�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_SubscribeEvent(IN HUSER hUser, IN DWORD dwEventTypes, IN CB_UserEvent cbEvent, IN DWORD dwUserData);

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
HIECIU_API int HieCIU_UnSubscribeEvent(IN HUSER hUser, IN DWORD dwEventTypes);

/*!
* @brief
*	����������Ϣ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cConfig
*	������Ϣ,����cConfig�����Ϳɲμ���ṹ��ConfigInformation����˵��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_SetConfig(IN HUSER hUser, IN const LPConfigInformation cConfig);

/*!
* @brief
*	��ȡ������Ϣ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cConfig
*	������Ϣ,����cConfig�����Ϳɲμ���ṹ��ConfigInformation����˵��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_GetConfig(IN HUSER hUser, IN LPConfigInformation cConfig);

/*!
* @brief
*	����������Ϣ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cConfig
*	������Ϣ,����cConfig�����Ϳɲμ���ṹ��ConfigInformationV2����˵��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_SetConfigV2(IN HUSER hUser, IN const LPConfigInformationV2 cConfig);

/*!
* @brief
*	��ȡ������Ϣ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cConfig
*	������Ϣ,����cConfig�����Ϳɲμ���ṹ��ConfigInformationV2����˵��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_GetConfigV2(IN HUSER hUser, IN LPConfigInformationV2 cConfig);

/*!
* @brief
*	����ʵʱ��
* @param hStream
*	��ý������ַ,���ӳɹ���ӿڽ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStreamPara
*	ʵʱ��������Ϣ,cStreamPara������Ϣ��μ�RealStreamPara����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_RealStreamConnect(OUT HSTREAM *hStream, IN HUSER hUser, IN const LPRealStreamPara cStreamPara);

/*!
* @brief
*	�Ͽ�ʵʱ��,����ر���Զ�Ӧ�Ĳ���ͨ��
* @param hStream
*	��ý����,ͨ������ʵʱ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_RealStreamDisconnect(IN HSTREAM hStream);

/*!
* @brief
*	������ʷ��ͨ����֧�ֶ���¼�����͵���ϣ�
* @param hHistory
*	��ʷ��ͨ�����,������ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStreamPara
*	��ʷͨ��������Ϣ,����cStreamPara�����Ϳɲμ���ṹ��HistoryStreamPara����˵��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_HistoryStreamMultiTypeCreate(OUT HSTREAM *hHistoryStream, IN HUSER hUser, IN const LPHistoryStreamMultiTypePara cStreamPara);

/*!
* @brief
*	������ʷ��ͨ������֧�ֵ�һ¼�����ͺ�����¼�����ͣ�
* @param hHistory
*	��ʷ��ͨ�����,������ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStreamPara
*	��ʷͨ��������Ϣ,����cStreamPara�����Ϳɲμ���ṹ��HistoryStreamPara����˵��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_HistoryStreamCreate(OUT HSTREAM *hHistoryStream, IN HUSER hUser, IN const LPHistoryStreamPara cStreamPara);

/*!
* @brief
*	������ʷ��ͨ��,����ر���Զ�Ӧ�Ĳ���ͨ��
* @param hHistory
*	��ʷͨ�����,ͨ��������ʷͨ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_HistoryStreamDestroy(IN HSTREAM hHistoryStream);

/*!
* @brief
*	��ȡ��������ʷ��ͨ��ʱ��λ��
*   ������ʹ�ô˽ӿ�����ʾ����λ�ã���λ��ֻ��ʾ�����Ѿ������˱��أ�������ʾ���ڲ��ŵ�λ��
*   ��Ҫ��ȡλ�ÿ���ʹ��HieCIU_StreamGetAbsoluteTime����HieCIU_StreamGetPlayedTime��ȡ��
* @param hHistoryStream
*	��ʷ��ͨ�����,ͨ��������ʷͨ����ȡ
* @param eOperation
*	��ʷ��ͨ����������,��eOperationSet����,��eOperationGet��ȡ��
*   ��ʷ�����صĽ���Ҳ�ɴ˽ӿڻ�ȡ��
* @param cTime
*	��ʷͨ��ʱ����Ϣ,��ȡʱ�˲���Ϊ����,����ʱ�˲���Ϊ���
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_HistoryStreamPosition(IN HSTREAM hHistoryStream, 
											IN eOperationType eOperation, 
											IN_OUT TimeInfo *cTime);
#if 0
/*!
* @brief
*	��ʷ��ͨ������
* @param hHistory
*	��ʷ��ͨ�����,ͨ��������ʷ��ͨ����ȡ
* @param eControl
*	��ʷ��ͨ����������,��Ҫ�ǿ�ʼeTaskStart��ֹͣeTaskStop��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_HistoryStreamControl(IN HSTREAM hHistoryStream, IN eTaskControl eControl);
#endif
/*!
* @brief
*	Ϊ����һ������������HieCIU_StreamPlay֮ǰ����
* @param hStream
*	ʵʱ���������ʷ�����,ͨ������ʵʱ��HieCIU_RealStreamConnect�򴴽���ʷ��HieCIU_HistoryStreamCreate��ȡ
* @param inDecodeMode  
*   ����ģʽ,��⣬Ӳ�̻�������
* @param inShowMode
*   ��ʾͼ��ģʽ,OVERLAYģʽ����ͨģʽ
* @param inColorKey
*   ����OVERLAYģʽ��ʾͼ������Ҫָ��һ�ֹؼ�ɫ���ڴ�֮ǰ��Ҫ����ʾ���ڵı���ɫ����Ϊ����ɫ
* @param inDrawMode  
*	�����ַ���ͼƬģʽ,���������NULL(Ӳ��;�������ݲ�֧�ֵ��Ӳ���)
* @param pcbDrawFun 
*	�����ַ���ͼƬ�ص�����ָ��,���������NULL(Ӳ��;�������ݲ�֧�ֵ��Ӳ���)
* @param dwUserData
*   �����ַ���ͼƬ�ص������ص�ʱ���û�����,���������NULL(Ӳ��;�������ݲ�֧�ֵ��Ӳ���)
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamOpen(IN HSTREAM hStream,
										IN eDecodeMode   inDecodeMode,
										IN eDecodeShowMode inShowMode,
										IN COLORREF inColorKey,
										IN eDrawFuncMode inDrawMode,
										IN CB_DrawFun pcbDrawFun, 
										IN DWORD dwUserData);

/*!
* @brief
*	��ʼ�����룬�ط�
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @param inWnd
*   ͼ����ʾ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamPlay(IN HSTREAM hStream,
										IN HWINDOW inWnd);

/*!
* @brief
*	��ͣ���Ĳ���
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @param inbPause
*   ����Ϊ��ͣ������Ϊ�ָ�����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamPause(IN HSTREAM hHistoryStream, 
										 IN BOOL inbPause);

/*!
* @brief
*	ֹͣ�����룬�ط�
* @param hStream
*	�����,ͨ������ʵʱ���򴴽���ʷ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamStop(IN HSTREAM hStream);
#if 0
/*!
* @brief
*	��ʼ����
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamStartDecode(IN HSTREAM hStream);

/*!
* @brief
*	ֹͣ������(��Ȼ�޷��ٽ�����ʾͼ��,Ҳ�޷����������ݻص����û�)
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamStopDecode(IN HSTREAM hStream);

/*!
* @brief
*	�����յ�����ֱ�ӱ�����ļ�
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamCaptureFile(IN HSTREAM hStream, IN char* inFileName);
#endif
/*!
* @brief
*	��������
*   ע��˺��������ڽ����߳�����ã���������������
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamPlaySound(IN HSTREAM hStream);

/*!
* @brief
*	������������
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @param inVolume
*   ��������Χ(0x0~0xFFFF)
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamSetVolume(IN HSTREAM hStream, IN WORD inVolumn);

/*!
* @brief
*	ֹͣ��������
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamStopSound(IN HSTREAM hStream);

/*!
* @brief
*	��ȡ�Ѿ����ŵ�ʱ��(��ʱ�������ڲ����������ʱ��)
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamGetPlayedTime(IN HSTREAM hStream, OUT DWORD* outPlayedTime);

/*!
* @brief
*	��ȡ���ڲ��ŵ�ʱ��
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @param outPlayTime
*   ���ɹ����ط���ʱ���ʾ��ȡ���ڲ��ŵ�ʱ����������ʱ������1970����������(���ȣ���)
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamGetAbsoluteTime(IN HSTREAM hStream, OUT DWORD* outPlayTime);

/*!
* @brief
*	��ȡ�Ѿ����ŵ�֡��(��ʱ�������ڲ����������֡��)
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @param outPlayedFrameNum
*   ���ڱ����Ѿ����ŵ�֡��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamGetPlayedFrameNum(IN HSTREAM hStream, OUT DWORD* outPlayedFrameNum);

/*!
* @brief
*	������֡(��δʵ��)
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @param inFrameNum
*   Ҫ���ģ�֡��Ŀ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamThrowBFrame(IN HSTREAM hStream, IN DWORD inFrameNum);

/*!
* @brief
*	ץͼ
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @inFileName
*   ץͼ�����ļ�ȫ��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamSnapShot(IN HSTREAM hStream, IN char* inFileName);

/*!
* @brief
*	��������
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @param inBright
*   ����ֵ,��Χ0~255
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamChangeBright(IN HSTREAM hStream, IN DWORD inBright);


/*!
* @brief
*	����ͼ����ʾ����(����Ŀǰ�Կ�����һ�����ǿ����һ��ɲ�����)
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @param inQuality
*   �߻��(eHighQuality��eLowQuality)
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamSetPicQuality(IN HSTREAM hStream, IN eShowQualityMode inQuality );

/*!
* @brief
*	���öԱȶ�
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @param inContrast
*   �Աȶ�ֵ,��Χ0~255
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamChangeContrast(IN HSTREAM hStream, IN DWORD inContrast);

/*!
* @brief
*   ֻ֧�־�����뿨��ʽ��
*	���ý���ͨ������Ƶ�ⲿ��������������������Ƶͼ���hStream��ʹ�õĽ�
*   ��ͨ���ĵ�inPort·���͵���inDisplayChannel����ʾͨ���ĵ�inDisplayRegion����
*   �򡣴˺�����inPort ĿǰΪ0��һ·����ͨ��֧��һ·�ⲿ��Ƶ��������������inOpen 
*   Ϊ0����inDisplayChannel��inDisplayRegion �����塣
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @param inPort
*   ����ͨ��������˿�
* @param inOpen
*   TRUE ����FALSE �أ�
* @param inDisplayChannel
*   Ҫ�������ʾͨ������
* @param inDisplayRegion
*   Ҫ�������ʾ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_StreamSetDecVideoOut(IN HSTREAM hStream, 
												  IN int inPort,
												  IN BOOL inOpen,
												  IN int inDisplayChannel,
												  IN int inDisplayRegion);

/*!
* @brief
*	���,ÿ����һ�β����ٶȿ�һ������16��ֹ
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_HistoryStreamFast(IN HSTREAM hStream);

/*!
* @brief
*	����,ÿ����һ�β����ٶ���һ������1/16��ֹ
* @param hStream
*	�����,ͨ������ʵʱ������ʷ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_HistoryStreamSlow(IN HSTREAM hStream);

/*!
* @brief
*	��֡��,Ҫ�ָ��������ſɵ���HieCIU_StreamPlay����
* @param hStream
*	�����,ͨ��������ʷ����ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_HistoryStreamOneByOne(IN HSTREAM inHistoryStream);

/*!
* @brief
*	��֡��(��δʵ��)
* @param inHistoryStream
*	�����,ͨ��������ʷ����ȡ.
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_HistoryStreamOneByOneBack(IN HSTREAM inHistoryStream);


/*!
* @brief
*	��·��ʷ��ͬ���ط�
* @param inHistoryStream
*	�����,ͨ��������ʷ����ȡ.
* @param inDestStream
*	�����,ͨ��������ʷ����ȡ.��ʾ��·��������inHistoryStreamͬ���طţ�
*   ��׼ΪinHistoryStream,��������׼��ʱ���ڴ�·��������ͬ�Ĳ���
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_HistoryStreamSync(IN HSTREAM inHistoryStream, 
													IN HSTREAM inDestStream);

/*!
* @brief
*	�޳��Ѿ���·��ͬ���ط��е�һ����ͨ�������ڻ�׼���������Ĳ�������Ӱ�챻�޳�ͬ������
* @param inHistoryStream
*	�����,ͨ��������ʷ����ȡ.
* @param inDestStream
*	�����,ͨ��������ʷ����ȡ.
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_HistoryStreamUnsync(IN HSTREAM inHistoryStream, 
													IN HSTREAM inDestStreamID);

/*!
* @brief
*	��ȡĳ����ʷ������������ͬ���ط���ͨ���б�
* @param inHistoryStream
*	�����,ͨ��������ʷ����ȡ.���������ͬ���Ļ�׼
* @param outStreamList
*	�û�������ʷ�����������Ķ�·ͬ���ط������������,һ��ɸ���һ�����乹���ݵĻ�����
* @param outStreamNum
*   ��������ʷ�������Ŀ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_HistoryStreamGetSyncList(IN HSTREAM inHistoryStream, 
													   OUT HSTREAM * outStreamList,
													   IN_OUT unsigned int * outStreamNum );



/*!
* @brief
*	���þ�����ʾ����
* @param inDisplayChannel
*	������ʾͨ����
* @param inRegionCount
*   �������
* @param pParam
*   ������������׵�ַ,����pParam����μ�REGION_PARAM
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_MatrixSetDisplayRegion(IN int inDisplayChannel,			
													IN int inRegionCount,
													IN REGION_PARAM *pParam);

/*!
* @brief
*	���þ�����ʾͨ������ʽ
* @param inDisplayChannel
*	������ʾͨ����
* @param VideoStandard
*	��ʽ,Ŀǰ��	StandardNTSC,StandardPAL,StandardSECAM����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_MatrixSetDisplaySignalStandard(IN int inDisplayChannel,		// ������ʾͨ����
															IN VideoStandard_t VideoStandard);

/*!
* @brief
*	���þ�����ʾλ��
* @param inDisplayChannel
*	������ʾͨ����
* @param inRegionCount
*   Ҫ����λ�õ������
* @param inLeft
*   �������λ��(X����)
* @param inTop
*   �������λ��(Y����)
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_MatrixSetDisplayPosition(IN int inDisplayChannel,
													  IN int inRegionCount,
													  IN int inLeft,
													  IN int inTop);

/*!
* @brief
*	���������ʾͨ����ĳ����
* @param inDisplayChannel
*	������ʾͨ����
* @param inRegionCount
*   Ҫ����λ�õ������
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_MatrixClearRegion(IN int inDisplayChannel,
												  IN int inRegionCount);


/*!
* @brief
*	���ĳ������ʾͨ����ĳ����
* @param inDisplayChannel
*	������ʾͨ����
* @param inRegionCount
*   Ҫ���������
* @param inFileName
*   ������ͼ���ļ�����inFileName��ָ��ͼ������HieCIU_MatrixSetDisplayRegion��
*   ���õ�ͼ���С��ͬ������ͼ���޷�������ʾ��
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API HIE_RESULT HieCIU_MatrixFillRegion(IN int inDisplayChannel,
												 IN int inRegionCount,
												 IN char * inFileName);



/*!
* @brief
*	����������
* @param hStream
*	�����������ַ,���Ӻ�ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStreamPara
*	������������Ϣ��cStreamPara������Ϣ��μ�VoiceStreamPara����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_VoiceStreamConnect(OUT HSTREAM *hStream, 
										 IN HUSER hUser, 
										 IN const LPVoiceStreamPara cStreamPara);

/*!
* @brief
*	�Ͽ�������
* @param hStream
*	���������,ͨ������������HieCIU_VoiceStreamConnect��ȡ
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_VoiceStreamDisconnect(IN HSTREAM hStream);

/*!
* @brief
*	����������������(��δʵ��)
* @param hStream
*	���������,ͨ��������������ȡ
* @param inVolume
*	����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_SetVoiceStreamVolume(IN HSTREAM hStream, IN WORD inVolume);

/*!
* @brief
*	�����������ص��ӿ�
* @param hStream
*	���������,ͨ��������������ȡ
* @param cbStreamVoice
*	�������ص��ӿ�,��ֵΪ��(NULL),��ʾ������Ҫ�ص�
* @param dwUserData
*	�������ص�ʱ�ش���������
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	���ڴ˻ص����������������ݽ����벶���̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����,�Ա�����ֶ�֡.
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_VoiceStreamCB(IN HSTREAM hStream, 
									IN CB_Nettalk cbStreamVoice, 
									IN DWORD dwUserData);


/*!
* @brief
*	������ý��ص��ӿ�
* @param hStream
*	��ý����,ͨ����������ȡ
* @param cbStreamMedia
*	��ý��ص��ӿ�,��ֵΪ��(NULL),��ʾ������Ҫ�ص�,cbStreamMedia������Ϣ��μ�CB_StreamMedia����
* @param dwUserData
*	��ý��ص�ʱ�ش���������
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	Ӧ�ò��ʹ�ô˽ӿ�������ý�����ݻص�,
*	���ڴ˻ص���������ý�����ݽ����̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����,�Ա�����ֶ�֡.
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_StreamMediaCB(IN HSTREAM hStream, 
									IN CB_StreamMedia cbStreamMedia, 
									IN DWORD dwUserData);

/*!
* @brief
*	����ԭʼ��ý��ص��ӿ�
* @param hStream
*	��ý����,ͨ����������ȡ
* @param cbStreamMedia
*	��ý��ص��ӿ�,��ֵΪ��(NULL),��ʾ������Ҫ�ص�,cbStreamMedia������Ϣ��μ�CB_StreamMediaRaw����
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
HIECIU_API int HieCIU_StreamMediaRawCB(IN HSTREAM hStream, IN CB_StreamMediaRaw cbStreamMedia, IN DWORD dwUserData);

/*!
* @brief
*	��ý����ƽӿ�,������ý���������ֹͣ
* @param hStream
*	��ý����,ͨ����������ȡ,ʵʱ���������ʷ��������������������ʹ�á�
* @param eMediaControl
*	��ý���������,��ʼeTaskStart��ֹͣeTaskStop
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_StreamMediaControl(IN HSTREAM hStream, 
										 IN eTaskControl eMediaControl);



/*!
* @brief
*	��ʷ����ѯ���Ӳ�������֧�ֵ�һ¼�����ͺ�����¼�����ͣ�
*   ��Ҫ���ڽ�����ʷ¼������ʱ����,���������������ĳͨ��ĳʱ��ε�¼��������Ϣ
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
HIECIU_API int HieCIU_HistoryStreamQueryConnect(IN HSTREAM_QUERY *hStreamQuery, 
												IN HUSER hUser, 
												IN LPHistoryStreamQueryFactor cStreamQueryFactor);

/*!
* @brief
*	��ʷ����ѯ���Ӳ�����֧�ֶ���¼�����͵���ϣ�
*   ��Ҫ���ڽ�����ʷ¼������ʱ����,���������������ĳͨ��ĳʱ��ε�¼��������Ϣ
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
HIECIU_API int HieCIU_HistoryStreamMultiTypeQueryConnect(IN HSTREAM_QUERY *hStreamQuery, 
														 IN HUSER hUser, 
														 IN LPHistoryStreamMultiTypeQueryFactor cStreamQueryFactor);

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
HIECIU_API int HieCIU_HistoryStreamQueryDisconnect(IN HSTREAM_QUERY hStreamQuery);

/*!
* @brief
*	��ʷ����ѯ��һ������֧�ֵ�һ¼�����ͺ�����¼�����ͣ�
* @param hStreamQuery
*	��ʷ����ѯ���,ͨ��������ʷ����ѯ��ȡ
* @param pStreamQueryResult
*	��ʷ����ѯ��һ����¼
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_HistoryStreamQueryNext(IN HSTREAM_QUERY hStreamQuery, 
											 OUT LPHistoryStreamQueryResult pStreamQueryResult);

/*!
* @brief
*	��ʷ����ѯ��һ����֧�ֶ���¼�����͵���ϣ�
* @param hStreamQuery
*	��ʷ����ѯ���,ͨ��������ʷ����ѯ��ȡ
* @param pStreamQueryResult
*	��ʷ����ѯ��һ����¼
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_HistoryStreamMultiTypeQueryNext(IN HSTREAM_QUERY hStreamQuery, 
													  OUT LPHistoryStreamMultiTypeQueryResult pStreamQueryResult);

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
HIECIU_API int HieCIU_HistoryLogQueryConnect(IN HLOG_QUERY *hLogQuery, 
											 IN HUSER hUser, 
											 IN LPLogQueryFactor cLogQueryFactor);

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
HIECIU_API int HieCIU_HistoryLogQueryDisconnect(IN HLOG_QUERY hLogQuery);

/*!
* @brief
*	��ʷ��־��ѯ��һ��
* @param hLogQuery
*	��ʷ��־��ѯ���,ͨ��������ʷ��־��ѯ��ȡ
* @param pLogQueryResult
*	��ʷ��־��ѯ��һ����¼
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_HistoryLogQueryNext(IN HLOG_QUERY hLogQuery, 
										  OUT LPLogQueryResult pLogQueryResult);

/*!
* @brief
*	͸��ͨ�����Ӳ���
* @param hTransparent
*	͸��ͨ�����,���Ӻ�ӿ����þ��ֵ
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cTransparentPara
*	͸��ͨ�����Ӳ���
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_TransparentChannelConnect(IN HTRANSPARENT *hTransparent, 
												IN HUSER hUser, 
												IN LPTransparentChannelPara cTransparentPara);

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
HIECIU_API int HieCIU_TransparentChannelDisconnect(IN HTRANSPARENT hTransparent);

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
HIECIU_API int HieCIU_TransparentChannelWrite(IN HTRANSPARENT hTransparent, 
											  IN const LPBuffer cBuffer);

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
HIECIU_API int HieCIU_TransparentChannelCB(IN HTRANSPARENT hTransparent, 
										   IN CB_TransparentChannel cbTransparent, 
										   IN DWORD dwUserData);



#if 0
// �Ѿ�ʹ�õ����Ľӿڽ��е��ã��˽ӿ���������
/*!
 *  \fn HIECIU_API HIE_RESULT HieCIU_ControlDevice(IN unsigned int inUserID,
													 IN eControlDeviceFlag inCDFlag, 
													 void* pParam);
 *  \brief  �����豸
 *  \param  inUserID  �û�ID
 *  \param  inCDFlag  �����豸���ͱ�ʶ,���eControlDeviceFlag����
 *  \param  pParam    �����豸����Ӧ�Ĳ���ָ��,pParm������inCDFlag�Ĳ�ͬ�п���Ϊ���������������������
 *  \return HIEC_ERR_OK , �ɹ�
 *  \return ����ֵ��������붨��
 */
HIECIU_API HIE_RESULT HieCIU_ControlDevice(IN unsigned int inUserID,
										   IN eControlDeviceFlag inCDFlag, 
										   IN_OUT void* pParam);

#endif



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
HIECIU_API HIE_RESULT HieCIU_PtzControl(IN unsigned int UserID, 
										IN unsigned int inChannel, 
										IN ePTZControlCmdCode inCommand, 
										IN int inParam1, 
										IN int inParam2, 
										IN int inParam3, 
										IN int inParam4);

/*!
 *  \fn HIECIU_API HIE_RESULT HieCIU_VerifyVersion(IN char* inDeviceIP);
 *  \brief  ��֤�汾(��δʵ��)
 *  \param  inDeviceIP  �豸IP��ַ
 *  \return HIEC_ERR_OK , �ɹ�
 *  \return ����ֵ��������붨��
 */
HIECIU_API HIE_RESULT HieCIU_VerifyVersion(IN char* inDeviceIP);




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
HIECIU_API int HieCIU_FileQueryConnect(OUT HFILE_QUERY *hFileQuery, IN HUSER hUser, IN LPFileQueryFactor pFileQueryFactor);

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
HIECIU_API int HieCIU_FileQueryDisconnect(IN HFILE_QUERY hFileQuery);

/*!
* @brief
*	�ļ���ѯ��һ��
* @param hFileQuery
*	�ļ���ѯ��� ,ͨ�������ļ���ѯ��ȡ
* @param pFileQueryResult
*	�ļ���ѯ��һ����¼
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_FileQueryNext(IN HFILE_QUERY hFileQuery, OUT LPFileQueryResult pFileQueryResult);


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
HIECIU_API int HieCIU_FileUploadConnect(OUT HFILE_TRANSFER *hFileTransfer, IN HUSER hUser, IN LPFileUploadPara pFileUploadPara);

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
HIECIU_API int HieCIU_FileUploadControl(IN HFILE_TRANSFER hFileTransfer, IN eFileTransferControl eControlCode);

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
HIECIU_API int HieCIU_FileUploadDisconnect(IN HFILE_TRANSFER hFileTransfer);

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
HIECIU_API int HieCIU_FileUploadCB(IN HFILE_TRANSFER hFileTransfer, IN CB_FileUpload cbFileUpload, IN DWORD dwUserData);

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
HIECIU_API int HieCIU_FileDownloadConnect(OUT HFILE_TRANSFER *hFileTransfer, IN HUSER hUser, IN LPFileDownloadPara pFileDownloadPara);

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
HIECIU_API int HieCIU_FileDownloadControl(IN HFILE_TRANSFER hFileTransfer, IN eFileTransferControl eControlCode);

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
HIECIU_API int HieCIU_FileDownloadDisconnect(IN HFILE_TRANSFER hFileTransfer);

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
HIECIU_API int HieCIU_FileDownloadCB(IN HFILE_TRANSFER hFileTransfer, IN CB_FileDownload cbFileDownload, IN DWORD dwUserData);


/*!
* @brief
*	Զ���豸����
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param eOperationCode
*	�豸������
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_DeviceControl(IN HUSER hUser, eRemoteDeviceControl eOperationCode);

/*!
* @brief
*	Զ���豸������
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannel
*	ͨ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_ForceIFrame(IN HUSER hUser,IN DWORD dwChannel);

/*!
* @brief
*	Զ���豸������
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
HIECIU_API int HieCIU_AlarmClear(IN HUSER hUser,IN DWORD dwChannel, IN DWORD dwAlarmType);

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
HIECIU_API int HieCIU_ImageCapture(IN HUSER hUser, IN DWORD dwChannel, IN eImageFormat eFormat, OUT LPImageFileInfo pImageFileInfo);

/*!
* @brief
*	Զ������ͼƬ
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
HIECIU_API int HieCIU_FileLock(IN HUSER hUser, IN char *szFileName, IN eFileLockOperationCode eOperationCode);

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
HIECIU_API int HieCIU_RecordControl(IN HUSER hUser, IN DWORD dwChannel, IN DWORD dwRecordType);

/*!
* @brief
*	Զ��¼�����
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
HIECIU_API int HieCIU_AlarmoutControl(IN HUSER hUser, IN DWORD dwChannel, IN DWORD dwSwitch);

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
HIECIU_API int HieCIU_AlarmoutStateGet(IN HUSER hUser, OUT DWORD* dwChanNum, OUT DWORD* dwStateBits);

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
HIECIU_API int HieCIU_AlarminStateGet(IN HUSER hUser, OUT DWORD* dwChanNum, OUT DWORD* dwStateBits);

/*!
* \brief
*  �ж�ĳ���Ƿ����ָ������
* \param hUser
*  �û���¼���
* \param dwChannel
*   ͨ�����(��0��ʼ)
* \param dwMajorType
*   �����ͣ���0-¼���ļ�   1-ͼƬ�ļ�
* \param dwMinorType
*   ������
* \param szYearMonth
*   ����ʱ�䴮
* \return
*	����0��ʾ�ɹ�, �����ʾ������
*/
HIECIU_API int HieCIU_DataExistCheck(IN HUSER hUser, IN DWORD dwChannel, IN DWORD dwMajorType, IN DWORD dwMinorType, IN char *szYearMonth, OUT DWORD *dwResult);

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
HIECIU_API int HieCIU_DeviceRegisterListenStart(IN char *sListenIP, IN DWORD dwListenPort);

/*!
* \brief
*	ֹͣ��������
* \return
*   TRUE��ʾ�ɹ��� FALSE��ʾʧ��
*/
HIECIU_API int HieCIU_DeviceRegisterListenStop();


/*!
* \brief
*    ����PU�豸��ע��ص�����
* \param cbf
*    �ص�����ָ��
*/
HIECIU_API int HieCIU_DeviceRegisterCB(IN CB_DeviceRegister cbDeviceRegister);


/*!
* @brief
*	��ʷ�����أ���֧�ֵ�һ¼�����ͺ�����¼�����ͣ�
* @param hHistoryStream
*   ����������ʷ�������ַ�����ɹ���˾��ֵ���ᱻ���
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStreamPara
*   Ҫ���ص���ʷ����Ϣ����ʱ��Σ�ͨ����
* @param pFnSpecifyFileName
*   �����ع����л����û��л�������ļ����Ĵ����������Ա��û�������Щ���ص��ļ�
* @param dwMaxFileSize
*	���ص��ļ�����󳤶�
*   ��Ҫ�˽�������ص��ļ���С����һ��С�ڻ����ָ���Ĵ�С�����ļ���С����ָ����Сʱ
*   ��һֱ�ȵ���һ���ؼ�֡�����Żᱻ�رգ���ζ��I֮֡ǰ������֡Ҳ�ᱻд�����ļ��С�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_HistoryStreamDownload(OUT HSTREAM *hHistoryStream, 
											IN HUSER hUser, 
											IN const LPHistoryStreamPara cStreamPara, 
											IN CB_SpecifyFileName pFnSpecifyFileName,
											IN UINT dwMaxFileSize);

/*!
* @brief
*	��ʷ�����أ�֧�ֶ���¼�����͵���ϣ�
* @param hHistoryStream
*   ����������ʷ�������ַ�����ɹ���˾��ֵ���ᱻ���
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param cStreamPara
*   Ҫ���ص���ʷ����Ϣ����ʱ��Σ�ͨ����
* @param pFnSpecifyFileName
*   �����ع����л����û��л�������ļ����Ĵ����������Ա��û�������Щ���ص��ļ�
* @param dwMaxFileSize
*	���ص��ļ�����󳤶�
*   ��Ҫ�˽�������ص��ļ���С����һ��С�ڻ����ָ���Ĵ�С�����ļ���С����ָ����Сʱ
*   ��һֱ�ȵ���һ���ؼ�֡�����Żᱻ�رգ���ζ��I֮֡ǰ������֡Ҳ�ᱻд�����ļ��С�
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_HistoryStreamMultiTypeDownload(OUT HSTREAM *hHistoryStream, 
											IN HUSER hUser, 
											IN const LPHistoryStreamMultiTypePara cStreamPara, 
											IN CB_SpecifyFileName pFnSpecifyFileName,
											IN UINT dwMaxFileSize);
/*!
* @brief
*	ֹͣ��ʷ������
* @param hHistoryStream
*   ʹ��HieCIU_HistoryStreamDownload��������ʷ�����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_HistoryStreamDownloadDestory(IN HSTREAM hHistoryStream);

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
HIECIU_API int HieCIU_DiskGroupManage(IN HUSER hUser, IN eDiskGroupOperation eOperationCode, IN DWORD dwParam1, IN DWORD dwParam2, IN DWORD dwParam3);

/*!
* @brief
*	��ȡ���ݴ�С����֧�ֵ�һ¼�����ͺ�����¼�����ͣ�
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannelBits
*	0��31λ�ֱ��ʾ0��31ͨ����ѡ��״̬��1��ʾѡ��
* @param eStreamType
*	¼������
* @param eDskGroupType
*	���̷������͡�
* @param szStartTime
*	��ʼʱ��
* @param szEndTime
*	����ʱ��
* @param dwUserData
*	�û�����
* @param dwDataSize
*	���ݴ�С
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_GetDataSize(IN HUSER hUser, IN DWORD dwChannelBits, IN eDiskGroupType eDskGroupType, IN eHistoryStreamType eStreamType, IN const char *szStartTime, IN const char *szEndTime, IN DWORD dwUserData, OUT DWORD *dwDataSize);


/*!
* @brief
*	��ȡ���ݴ�С��֧�ֶ���¼�����͵���ϣ�
* @param hUser
*	�û����,ͨ���û���¼��ȡ�ľ��
* @param dwChannelBits
*	0��31λ�ֱ��ʾ0��31ͨ����ѡ��״̬��1��ʾѡ��
* @param eStreamType
*	¼������
* @param eDskGroupType
*	���̷������͡�
* @param szStartTime
*	��ʼʱ��
* @param szEndTime
*	����ʱ��
* @param dwUserData
*	�û�����
* @param dwDataSize
*	���ݴ�С
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_GetMultiTypeDataSize(IN HUSER hUser, IN DWORD dwChannelBits, IN eDiskGroupType eDskGroupType, IN DWORD eStreamType, IN const char *szStartTime, IN const char *szEndTime, IN DWORD dwUserData, OUT DWORD *dwDataSize);

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
HIECIU_API int HieCIU_DeleteUserForceCB(IN CB_DeleteUserForce cbDeleteUserForce, IN DWORD dwUserData);

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
HIECIU_API int HieCIU_StringToLattice(IN const char *pString, IN const LPFontPara cFont, OUT void *buffer, IN_OUT DWORD *dwBuflen, OUT DWORD *dwWidth, OUT DWORD *dwHeight);

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
HIECIU_API int HieCIU_SetStreamMediaLinkID(IN HSTREAM hStream, IN DWORD dwLinkID);

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
HIECIU_API int HieCIU_QueryStreamMediaLinkID(IN HUSER hUser, IN eMediaFunctionType eType, IN LPMediaLinkIDQueryResult cQueryResult);

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
HIECIU_API int HieCIU_GetAttribute(IN eClientSDKAttributeType eType, OUT DWORD *dwAttribute);

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
HIECIU_API int HieCIU_SetAttribute(IN eClientSDKAttributeType eType, IN DWORD dwAttribute);


/*
* @brief
*	����ģʽ���ƽӿ�
* @param dwUserID
*	�û�ID
* @param dwScreenDev
*	0��������, 1��2��3��4�ֱ����spot1��spot2��spot3��spot4
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
HIECIU_API int HieCIU_SetScreenSplitMode(IN HUSER hUser, IN const DWORD dwScreenDev, IN const DWORD dwSplitNum, IN DWORD* pChanList);



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
HIECIU_API int HieCIU_GetDeviceConfigFromHttp(IN const char *pURL, OUT LPDeviceConfigFromHttp cConfig);

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
HIECIU_API int HieCIU_DeviceProbeStart(IN const LPDeviceProbeParameter cParameter, IN CB_DeviceProbe cbDeviceProbe);

/*!
* \brief
*	ֹͣ̽���豸
* \return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_DeviceProbeStop();

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
HIECIU_API int HieCIU_DeviceProbeSetDeviceConfig(IN const BYTE *pMac, IN WORD wProbePort, IN const LPDeviceProbeConfig cConfig);

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
HIECIU_API int HieCIU_DeviceProbeSetAllDeviceConfig(IN const LPDeviceProbeParameter cParameter, IN const LPDeviceProbeConfig cConfig);

/*!
* @brief
*	Զ�ָ̻�ɫ��Ĭ�ϲ���
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
HIECIU_API int HieCIU_SetChromaDefault(IN HUSER hUser,IN DWORD dwChannel,IN DWORD dwTimeSection);

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
HIECIU_API int HieCIU_PanelGetStatus(IN HUSER hUser, OUT LPPanelStatusInfo cStatus);

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
HIECIU_API int HieCIU_PanelSetStatus(IN HUSER hUser, IN LPPanelStatusInfo cStatus);

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
HIECIU_API int HieCIU_PanelControl(IN HUSER hUser, IN LPPanelControlParameter cControl);


/*
* @brief
*	���û�������ʾ���򡣿������ֲ��Ŵ���ʾ
* @param hStream
*	��ý����,ͨ����������ȡ
* @param nRegionNum
*	��ʾ������ţ�0~(MAX_DISPLAY_WND-1)�����nRegionNumΪ0����ʾ��
*	��Ҫ��ʾ����(MP4Play_ Play�����õĴ���)�������ã�������hDestWnd��bEnable ������
* @param pSrcRect
*	������Ҫ��ʾ��ԭʼͼ���ϵ������磺���ԭʼͼ����352*288����ô
*	pSrcRect �����õķ�Χֻ���ڣ�0��0��352��288��֮�С����pSrcRect=NULL,����ʾ����ͼ��
* @param hDestWnd
*	������ʾ���ڡ����������Ĵ����Ѿ����ù����򿪹�������ô�ò�����
*	����
* @param bEnable
*	�򿪣����ã���ر���ʾ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_SoftSetDisplayRegion(IN HSTREAM hStream, IN DWORD nRegionNum, IN RECT *pSrcRect, IN HWND hDestWnd, IN BOOL bEnable);


/*
* @brief
*	Ĭ���ļ�ͷ��ȡ
* @param pBuffer
*	���Ĭ���ļ�ͷ�Ļ�����
* @param pBufferLen
*	Ĭ���ļ�ͷ����
* @return
*	����0��ʾ�ɹ�, �����ʾ������
* @note
*	�ӿ�����: ����ʽ
*/
HIECIU_API int HieCIU_GetFileHeader(IN_OUT char* pBuffer,IN_OUT DWORD* pBufferLen);

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
//HIECIU_API int HieCIU_StreamTransferConnect(OUT HSTREAM *hStream, IN HUSER hUser, IN DWORD dwChannel, IN const LPStreamTransferPara cStreamPara);

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
//HIECIU_API int HieCIU_StreamTransferSend(IN HSTREAM hStream, IN const LPStreamTransferFrame cFrame);

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
//HIECIU_API int HieCIU_StreamTransferDisconnect(IN HSTREAM hStream);

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
//HIECIU_API int HieCIU_DecoderDynamicConnect(IN HUSER hUser, IN DWORD dwChannel, IN const LPDecoderDynamicInformation cStreamPara);

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
//HIECIU_API int HieCIU_DecoderDynamicDisconnect(IN HUSER hUser, IN DWORD dwChannel);

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
//HIECIU_API int HieCIU_DecoderSetConfig(IN HUSER hUser, IN const LPDecoderDeviceConfig cConfig);

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
//HIECIU_API int HieCIU_DecoderGetConfig(IN HUSER hUser, IN LPDecoderDeviceConfig cConfig);

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
//HIECIU_API int HieCIU_DecoderSetChannelConfig(IN HUSER hUser, IN DWORD dwChannel, IN const LPDecoderChannelConfig cConfig);

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
//HIECIU_API int HieCIU_DecoderGetChannelConfig(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderChannelConfig cConfig);

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
//HIECIU_API int HieCIU_DecoderSetVideoStandard(IN HUSER hUser, IN DWORD dwChannel, IN const LPDecoderVideoStandardConfig cConfig);

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
//HIECIU_API int HieCIU_DecoderGetVideoStandard(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderVideoStandardConfig cConfig);

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
//HIECIU_API int HieCIU_DecoderSetChannelLoopConfig(IN HUSER hUser, IN DWORD dwChannel, IN const LPDecoderChannelLoopConfig cConfig);

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
//HIECIU_API int HieCIU_DecoderGetChannelLoopConfig(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderChannelLoopConfig cConfig);

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
//HIECIU_API int HieCIU_DecoderChannelSetLoopEnable(IN HUSER hUser, IN DWORD dwChannel, IN eDecoderChannelStatus eStatus);

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
//HIECIU_API int HieCIU_DecoderChannelGetLoopEnable(IN HUSER hUser, IN DWORD dwChannel, IN eDecoderChannelStatus *eStatus);

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
//HIECIU_API int HieCIU_DecoderGetLoopEnable(IN HUSER hUser, IN LPDecoderLoopStatus cStatus);

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
//HIECIU_API int HieCIU_DecoderGetChannelInformation(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderChannelInformation cInformation);

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
//HIECIU_API int HieCIU_DecoderChannelGetStatus(IN HUSER hUser, IN LPDecoderChannelStatus cStatus);

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
//HIECIU_API int HieCIU_DecoderChannelSetPlayStatus(IN HUSER hUser, IN DWORD dwChannel, IN LPDecoderSetPlayStatusParameter cControl);

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
//HIECIU_API int HieCIU_DecoderChannelGetPlayStatus(IN HUSER hUser, IN LPDecoderGetPlayStatusParameter cControl);

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
//HIECIU_API int HieCIU_UploadLogo(IN HUSER hUser, IN DWORD dwChannel, IN LPUploadLogoParameter cParameter);

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
//HIECIU_API int HieCIU_DecoderChannelLogoSwitch(IN HUSER hUser, IN DWORD dwChannel, IN eDeviceChannelControl eOperationCode);

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
//HIECIU_API int HieCIU_DecoderChannelDisplayControl(IN HUSER hUser, IN DWORD dwDisplay, IN LPDecoderDisplayStatus cStatus);

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
//HIECIU_API int HieCIU_DecoderSetDisplayConfig(IN HUSER hUser, IN DWORD dwDisplay, IN const LPDecoderDisplayConfig cConfig);

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
//HIECIU_API int HieCIU_DecoderGetDisplayConfig(IN HUSER hUser, IN DWORD dwDisplay, IN LPDecoderDisplayConfig cConfig);

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
//HIECIU_API int HieCIU_TransmitHistoryStreamQueryConnect(OUT HSTREAM_QUERY *hStreamQuery, IN HUSER hUser, IN LPTransmitHistoryStreamQueryFactor cStreamQueryFactor);

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
//HIECIU_API int HieCIU_TransmitHistoryStreamQueryDisconnect(IN HSTREAM_QUERY hStreamQuery);

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
//HIECIU_API int HieCIU_TransmitHistoryStreamQueryNext(IN HSTREAM_QUERY hStreamQuery, OUT LPHistoryStreamMultiTypeQueryResult pStreamQueryResult);

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
HIECIU_API int HieCIU_DeviceIsOnline(IN const char *cAddress, IN DWORD dwCommandPort, IN DWORD dwTimeOut);

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
HIECIU_API int  HieCIU_GetSDKVersion(IN const char *sServerIP, IN DWORD dwCommandPort, IN DWORD dwTimeOut, OUT eNetworkSDKVersion *nType);

#endif
// end of file
