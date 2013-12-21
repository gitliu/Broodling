/*!
 *\file   HieCIU_Common.h
 *\brief  CIU��ص����ݽṹ���壬�ص��������壬�궨���
 *\author hdd
 *\date	  2009/04/28
 *\version 0.1
 */

#ifndef __HIECIU_COMMON_H__
#define __HIECIU_COMMON_H__

#include <Windows.h>
#include <time.h>
#include <stdio.h>

#include "HieClientUnit.h"

#include "tmsdk.h"

#define HIE_RESULT				int

#define HIEC_BASE_ERROR			(10000)

#define HIEC_ERR_OK				(0)
#define HIEC_ERR_PARAMETER		(HIEC_BASE_ERROR+1)			// ��������
#define HIEC_ERR_ORDER			(HIEC_BASE_ERROR+2)			// ����˳�����
#define HIEC_ERR_NEEDMEMORY		(HIEC_BASE_ERROR+3)			// ��Ҫ����Ļ��������ڴ�

#define HIEC_ERR_UNSUPPORTED	(HIEC_BASE_ERROR+100)		// ��֧�ֵĲ�����ӿ�
#define HIEC_ERR_NORESOURCE		(HIEC_BASE_ERROR+101)		// �޸������Դ
#define HIEC_ERR_INVALID_PROC	(HIEC_BASE_ERROR+200)		// ��Ч��SDK�ӿڣ������ǽ����İ汾����ȷ
#define HIEC_ERR_CALLSDK		(HIEC_BASE_ERROR+201)		// ���������SDK��������SDKʧ��
#define HIEC_ERR_FILE_USING		(HIEC_BASE_ERROR+202)		// �ļ����ڱ�ʹ��
#define HIEC_ERR_WRITE_FILE		(HIEC_BASE_ERROR+203)		// д�ļ�ʧ��
#define HIEC_ERR_INVALID_CODEC	(HIEC_BASE_ERROR+204)		// ��Ч�ı����ʽ
#define HIEC_ERR_AUDIO_OUT		(HIEC_BASE_ERROR+205)		// ��Ƶ����豸����
#define HIEC_ERR_INVALID_VOICE	(HIEC_BASE_ERROR+206)		// ��Ч�ĶԽ�����


#define SYSINFO_CAPS_MATRIX_DEC_WORK_MODE			(0x01 << 0)		// ��ʾ�������Ĺ���ģʽ�ֶ���Ч
#define SYSINFO_CAPS_OTHER_PARAMETER					(0x01 << 1)		// ����������չ

/*!
*  \enum tagSystemInfo
*  \brief ����������Ҫ��HieCIU_StartUp֮ǰ���õĲ���
*         ��������ã�ϵͳ����Ĭ�ϵķ�ʽ���в����ĳ�ʼ��
*/
typedef struct tagSystemInfo
{
	DWORD   dwSysCaps;									/*!< ��ʾ��ǰ��Щ�ֶ�Ϊ��Ч���� */

	DecoderCardWorkMode_t	dwMatrixDecodeWorkMode;		/*!< ���󿨽��빤��ģʽ, Ĭ���ǽ���CIF */

	DWORD   dwReservedValue[16];						/*!< �����Ժ���չ�����Ĳ���*/

	DWORD * pdwReservedPtr;								/*!< ����ָ�룬���������չ����Ҳ���ÿ��ô�ָ��*/
}T_SYSTEM_INFO, *PT_SYSTEM_INFO;

/*!
 *  \enum eStreamMode 
 *  \brief ý�������Ͷ���(��Ҫ����ʵʱ������ʷ��)
 */
typedef enum eStreamMode
{
	eStreamModeBegin,
	eStreamReal,					/*!< ʵʱ�� */
	eStreamHistory,					/*!< ��ʷ�� */
	eStreamEnd
}eStreamMode;

/*!
 *  \struct tagDecodedFrame 
 *  \brief  ����ص�����֡��Ϣ
 */
typedef struct tagDecodedFrameHeader 
{
	unsigned int nFrameType;		/*!< ֡���� */
	unsigned int nTimeStamp;		/*!< ֡ʱ��� */
	char* pFrameBuffer;				/*!< ������֡���� */
	unsigned int nFrameSize;		/*!< ������֡���ݳ��ȣ����ֽ�Ϊ��λ */
}T_DECODE_FRAME_HEADER, *PT_DECODE_FRAME_HEADER;

/*!
*  \fn (void* CB_Decode)(IN PT_DECODE_FRAME_HEADER pDecodedFrame, 
								IN inUserData);
 *  \brief  ����ص�������������ٶȽ��н��뼰��ص����û�
 *  \param  pDecodedFrame  ����֡�ṹ��
 *  \return HIEC_ERR_OK, �ɹ�
 *  \return ����ֵ��������붨��
 */
typedef void (* CB_Decode)(IN PT_DECODE_FRAME_HEADER pDecodedFrame, 
								 IN unsigned int inUserData);

/*!
 *  \struct tagTimeSlice 
 *  \brief  ʱ�����Ϣ
 */
typedef struct tagTimeSlice
{
	struct tm tmStart;						/*!< ĳһ��ʱ��ο�ʼʱ��(����ʱ��)*/
	struct tm tmEnd;						/*!< ĳһ��ʱ��ν���ʱ��(����ʱ��)*/
}T_TIME_SLICE, *PT_TIME_SLICE;


/*!
 *  \enum eSingalStandard
 *  \brief �ź���ʽ 
 */
typedef enum eSingalStandard
{
	eSingalStandardBegin,
	eSingalPAL,						/*!< PAL�� */
	eSingalNTSC,					/*!< NTSC�� */
	eSingalSECAM,					/*!< SECAM�� */
	eSingalStandardEnd
}eSingalStandard;
#if 0
/*!
 *  \enum eControlDeviceFlag 
 *  \brief  �豸���Ʊ�ʶ����
 */
typedef enum eControlDeviceFlag
{
	CDF_GET_IO_IN_STATE,				/*!< ��ȡIO����״̬*/
	CDF_SET_IO_IN_STATE,				/*!< ����IO����״̬*/
	CDF_GET_IO_OUT_STATE,				/*!< ��ȡIO���״̬*/
	CDF_SET_IO_OUT_STATE,				/*!< ����IO���״̬*/

	CDF_GET_RECORD_STATE,				/*!< ��ȡ¼��״̬*/
	CDF_MANAAL_RECORD_START,			/*!< Զ�������ֶ�¼��*/
	CDF_MANAAL_RECORD_STOP,				/*!< Զ��ֹͣ�ֶ�¼��*/

	CDF_CLS_ALARM_ACTION,				/*!< Զ���������*/
	CDF_REBOOT,							/*!< Զ������*/
	CDF_FORCE_IFRAME,					/*!< Զ��ǿ��I֡*/
}eControlDeviceFlag;					
#endif
/*!
 *  \enum eNettalkCodec 
 *  \brief  ֧�ֵĶԽ���Ƶ����������
 */
typedef enum eNettalkCodec
{
	eNettalkCodecBeginValue,
	eNettalkCodecG726		= 0x01,		/*!< G726 */
	eNettalkCodecG729		= 0x02,		/*!< G729 */
	eNettalkCodecADPCMima	= 0x04,		/*!< ADPCMima */
	eNettalkCodecPCMA		= 0x08,		/*!< PCM-A */
	eNettalkCodecPCMU		= 0x10,		/*!< PCM-U */
	eNettalkCodecEndValue
}eNettalkCodec;

/*!
 *  \enum eNettalkCodec 
 *  \brief  ��Ƶ������(ÿ���ӻ�ɼ��������)
 */
typedef enum eSamplePerSecond
{
	eSamplePerSecondBeginValue = 0,
	eSamplePerSecond_8000  = 8000,		/*!< ÿ��8000�� */
	eSamplePerSecond_11025 = 11025,		/*!< ÿ��11025�� */
	eSamplePerSecond_22050 = 22050,		/*!< ÿ��22050�� */
	eSamplePerSecond_44100 = 44100,		/*!< ÿ��44100�� */
	SamplePerSecondEndValue
}eSamplePerSecond;

/*!
 *  \struct tagAudioCodecParam 
 *  \brief  ��Ƶ�������
 */
typedef struct tagAudioCodecParam 
{
	eNettalkCodec CodecID;
	unsigned int nChannel;				/*!< ����(�豸�Խ�һ���ǵ�����:1) */
	unsigned int nBitsPerSample;		/*!< ÿ����������λ��ʾ(�豸�Խ�һ����16λ��ʾ) */
	unsigned int nSamplePerSecond;		/*!< ����Ƶ��(�豸�Խ�һ����8000��) */
}T_AUDIO_CODEC_PARAM, *PT_AUDIO_CODEC_PARAM;


/*!
*  \fn void (*CB_Nettalk)(IN unsigned int inUserID,  
						IN eNettalkCodec inCodec,
						IN PT_AUDIO_CODEC_PARAM inCodecParam,
						IN eVoiceStreamSource inDataSource,
						IN char* inBuffer,
						IN unsigned int inBufLen, 
						IN unsigned int inUserData);
 *  \brief  �����Խ��ص�,�ɽ����ضԽ�����Ƶ��Զ����Ƶ���ص���Ӧ�ò�
 *  \param  inUserID  �û���½ID
 *  \param  inCodecParam  �������
 *  \param  inDataSource  ������������,���ػ�Զ��
 *  \param  inBuffer  ����������
 *  \param  inBufLen  ���������ݵĳ���
 *  \param  inUserData  �û�����
 *  \return HIE_ERR_OK, �ɹ�
 *  \return ����ֵ��������붨��
 */
typedef void (*CB_Nettalk)(IN HSTREAM hStream,  
						  IN PT_AUDIO_CODEC_PARAM inCodecParam,
						  IN eVoiceStreamSource inDataSource,
						  IN char* inBuffer,
						  IN unsigned int inBufLen, 
						  IN unsigned int inUserData);

/*!
 *  \enum eShowQualityMode 
 *  \brief  ͼ����ʾ�����ߵ�ģʽ
 */
typedef enum eShowQualityMode
{
	eShowQualityModeBegin,
	eLowQuality,					/*!< ������ */
	eHighQuality,					/*!< ������ */
	eShowQualityModeEnd
}eShowQualityMode;


/*!
 *  \enum eDrawFuncMode 
 *  \brief  �����ַ���ͼ��ص��ķ�ʽ
 */
typedef enum eDrawFuncMode
{
	eDrawFuncModeBegin,
	eAutoSizeByShowWnd,				/*!<  ��ͼ��������ʾ�ı仯���仯 */
	eFixedPosition,					/*!<  ��ͼ���꼰��СΪ�������ʾ���ڵľ�������ͳߴ� */
	eDrawFuncModeEnd
}eDrawFuncMode;

/*!
*  @brief
*	������Ļ��ͼ��ص�,ֻ֧�������
* @param hStream
*	��ý����,ͨ����������ȡ,��ʾ��ý�����ݵ���Դ
* @param inDrawDC  
*	��ͼ����ģģ�
* @param dwUserData
*	�û�����,������ý�����ݻص�ʱ������û�����
* @return
*	����0
* @note
*	���ڴ˻ص���������ý�����ݽ����̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����,�Ա�����ֶ�֡.
*/
typedef void (CALLBACK *CB_DrawFun)(IN HSTREAM hStream, IN HDC inDrawDC, IN DWORD dwUserData);


/*!< �ļ�����󳤶� */
#define HIECIU_MAX_FILENAME_LEN				(256)
/*!
*  @brief
*	���ڻ�ȡ��Ƶ������ʱ�ļ����Ļص�
* @param hStream
*	��ý����,ͨ����������ȡ,��ʾ��ý�����ݵ���Դ
* @param inbComplete
*   �����Ƿ���ɣ�TRUE��ʾ��ɣ�FALSE��ʾδ���, 0xFFFFFFFF��ʾ��ǰ��֪ͨ���ص��ֽ���
* @param pFileName  
*	�ļ�������������Buffer�ĳ���ΪHIECIU_MAX_FILENAME_LEN,��ע���ļ�����Ҫ����������
* @param pAbsoluteTime
*   ��ʼ������Ƶ�ľ���ʱ��
* @param indwWrittedSize
*   �Ѿ������˶����ֽ�
* @return
*	����TRUE(1)��ʾ���ɳɹ���SDK����ʹ�����pFileName�ļ�����
*   ����FALSE(0)��ʾ����ʧ�ܣ�SDK����ʹ���������ɵ��ļ���(һ��������û���ò�Ҫ��������ʧ��)
* @note
*	���ڴ˻ص���������ý�����ݽ����̵߳���,
*	Ϊ�˱�֤ʵʱ��,�뾡���ܼ����ڻص��е�����ʽ����,�Ա�����ֶ�֡.
*/
typedef int(CALLBACK *CB_SpecifyFileName)(IN HSTREAM hStream, 
										  IN BOOL inbComplete, 
										  char* pFileName, 
										  IN const AbsoluteTime *pAbsoluteTime,
										  IN const LONGLONG indwWrittedSize);


/*!
 *  \struct tagLocalConfig 
 *  \brief  �������ü�PC���������
 */
typedef struct tagLocalConfig 
{
	unsigned int nMatrixDecChannelNum;			/*!< ������뿨�Ľ���ͨ����*/
	unsigned int nMatrixDisplayChannelNum;		/*!< ������뿨����ʾͨ����*/
}T_LOCAL_CONFIG, *PT_LOCAL_CONFIG;


/*!
 *  \enum eDecodeModeSetting 
 *  \brief ����ģʽ����
 */
typedef enum eDecodeModeSetting
{
	eDecodeModeSettingAll				=0,		/*!< �����ģʽ��������ģʽ	*/
	eDecodeModeSettingSoft,						/*!< �����ģʽ					*/
	eDecodeModeSettingMatrix,					/*!< �������ģʽ				*/
}eDecodeModeSetting;

#endif 

//end of file
