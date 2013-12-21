#ifndef HIE_CLIENT_CONFIGURE_H

#define HIE_CLIENT_CONFIGURE_H

/*!
* @file
*  HieClient_Configure.h
* @brief
*  Զ�����ýṹ����
*  Զ�����ù���ϵͳ���ýṹ�嶨��
* @author
*  ����
* @date
*  2009��8��10��
* @version
*  1.0.0
*/

/**************************************************************************
*                           ���Ͷ���                                     *
************************************************************************* */

//1500ϵ��
/** @brief 4· CIFǶ��ʽ											                    			 */
#define	DVR_1500_4CIF		1

/** @brief 8· CIFǶ��ʽ											                    			 */
#define	DVR_1500_8CIF		2

/** @brief 12· CIFǶ��ʽ											                    			 */
#define	DVR_1500_12CIF		3

/** @brief 16· CIFǶ��ʽ											                    			 */
#define	DVR_1500_16CIF		4

/** @brief 4· D1Ƕ��ʽ															          			 */
#define	DVR_1500_4D1		5

/** @brief 8· D1Ƕ��ʽ															         			 */
#define	DVR_1500_8D1		6


//8550ϵ��
/** @brief 4· CIFǶ��ʽ											                    			 */
#define	DVR_8550_4CIF		7

//1700ϵ��
/** @brief 8· 1700 CIFǶ��ʽ											                    		 */
#define	DVR_1700_8CIF		8

/** @brief 16· 1700 CIFǶ��ʽ											                    		 */
#define	DVR_1700_16CIF		9

/** @brief 4· 1700 D1Ƕ��ʽ											                    		 */
#define	DVR_1700_4D1		10

/** @brief 8· 1700 D1Ƕ��ʽ											                    		 */
#define	DVR_1700_8D1		11

/** @brief 16· 1700 D1FǶ��ʽ											                    		 */
#define	DVR_1700_16D1		12


/**************************************************************************
*                           ��������                                     *
************************************************************************* */

/** @brief �������������											                    		 */
#define DVR_MAX_VIDEOIN_NUM				(16)

/** @brief ���PTZ��											                    			 */
#define DVR_MAX_PTZ_NUM					(DVR_MAX_VIDEOIN_NUM)

/** @brief �����Ƶ����������										                    		 */
#define DVR_MAX_VIDEOENC_NUM			(DVR_MAX_VIDEOIN_NUM)

/** @brief ��󱨾�������											                    		 */
#define DVR_MAX_ALARMIN_NUM				(16)

/** @brief ��󱨾������											                    		 */
#define DVR_MAX_ALARMOUT_NUM			(8)

/** @brief ����쳣����											                    			 */
#define DVR_MAX_EXCEPTION_NUM			(8)

/** @brief ��������������											                    		 */
#define DVR_MAX_VIDEOOUT_NUM			(8)

/** @brief һ��������															          		 */
#define DVR_MAX_DAYS					(7)

/** @brief һ�����ʱ��Σ�ÿ5����һ��ʱ��Σ�						                    		 */
#define DVR_MAX_TIMESEGMENT				(24 * 60 / 5)

/** @brief ���IP��ַ����														          		 */
#define DVR_MAX_IP_STR_LEN				(16)

/** @brief ���MAC��ַ����														          		 */
#define DVR_MAX_MAC_STR_LEN				(18)

/** @brief MAC��ַ���ָ���															          	 */
#define DVR_MAX_MAC_NUM_LEN				(6)

/** @brief ���֧��DDNSЭ�����													          		 */
#define DVR_MAX_DDNSPRO_NUM				(32)

/** @brief ���DDNSЭ�����Ƴ���													          		 */
#define DVR_MAX_DDNSPRONAME_LEN			(128)

/** @brief �����������															          		 */
#define DVR_MAX_DOMAINNAME_LEN 			(256)

/** @brief ���Email����														          		 */
#define DVR_MAX_EMAIL_LEN				(256)

/** @brief �豸����û���														          		 */
#define DVR_MAX_USER_NUM 				(16)

/** @brief ����û�������														          		 */
#define DVR_MAX_USERNAME_LEN 			(64)

/** @brief ������볤��															          		 */
#define DVR_MAX_PASSWORD_LEN 			(64)

/** @brief ���Ȩ�޸���															          		 */
#define DVR_MAX_RIGHT_NUM				(32)

/** @brief ��������û���																		*/
#define DVR_MAX_ONLINEUSER_NUM			(16)

/** @brief IP��������																			*/
#define DVR_MAX_WHITEIP_NUM				(10)

/** @brief ���Ԥ�õ����															       		 */
#define DVR_MAX_PRESET_NUM				(128)

/** @brief �ƶ�����������														          		 */
#define DVR_MAX_MOTIONSCOPE_NUM			(32)

/** @brief ���ɫ�ȵ�Ԫ����											          		 */
#define DVR_MAX_PICSEC_NUM				(24)

/** @brief �������������											          		 */
#define DVR_MAX_VIDEOSHELTER_NUM		(8)

/** @brief ����������												          		 */
#define DVR_MAX_FONTNAME_LEN			(32)

/** @brief ����ͨ������󳤶�,��������								          		 */
#define DVR_MAX_CHANNELNAME_LEN			(20 + 1)

/** @brief PTZЭ�����Ƴ���															 */
#define DVR_MAX_PTZPRONAME_LEN			(48)

/** @brief PTZЭ�����(��װ��δ��װ��256)											 */
#define DVR_MAX_PTZPRO_NUM				(512)

/** @brief ������															    	 */
#define DVR_MAX_LATTICE_WIDTH			(24 * 10)

/** @brief ����߶�													          		 */
#define DVR_MAX_LATTICE_HEIGHT			(24)

/** @brief ���������С												          		 */
#define DVR_MAX_LATTICE_BUFSIZE			(24 * 24 * 10 / 8)

/** @brief �豸�ڵ�������											          		 */
#define DVR_MAX_PARTITION_DEVNODE_LEN	(16)

/** @brief ����Ӳ��������������													 */
#define DVR_MAX_PARTITION_IN_HARDDISK	(15)

/** @brief ����豸�ڵ����											          		 */
#define DVR_MAX_PARTITION_IN_DISKGROUP	(32)

/** @brief ���Ӳ�̸���												          		 */
#define DVR_MAX_HARDDISK_NUM 			(8)

/** @brief ���Ӳ�������											          		 */
#define DVR_MAX_DISKGROUP_NUM 			(8)

/** @brief ���֧�ֱַ��ʸ���										          		 */
#define DVR_MAX_VGARESOLVING_NUM		(16)

/** @brief �豸�汾���Ƴ���												          	 */
#define DVR_MAX_VERSION_LEN				(32)

/** @brief Hxht��ͨ�ַ�������														*/
#define DVR_COMMON_STRING_LEN			(32)

/** @brief ֧�ֵ�Э����������													*/
#define DVR_MAX_SUPPORT_PROTOCOL_NUM	(32)

/** @brief WIFI�ȵ�������󳤶�														*/
#define DVR_MAX_SSID_LEN				(128)

/** @brief ����ʶ���WIFI�ȵ�������												 */
#define DVR_MAX_AP_NUM					(10)

/** @brief WIFI��Կ��󳤶�															*/
#define DVR_MAX_WIFI_KEY_LEN			(128)

/** @brief ���Դ�豸����															*/
#define MAX_SOURCE_DEVICE_NUMBER		(16)

/** @brief �������豸����															*/
#define MAX_DEVICE_OUTPUT				(16)

//֧�����VGA����
#define MAX_VGA_NUM						(8)

//TV���
#define MAX_TV_NUM						(8) 

/** @brief ISP ����ģ����� */
#define DVR_MAX_ISP_TEMPLATE		(6)

/** @brief ISP ������AEWindow ���� */
#define DVR_MAX_ISP_AEWINDOW		(6)

/** @brief ISP ������ƽ��ģ����� */
#define DVR_MAX_ISP_WHITEBALANCE	(6)

/**************************************************************************
*								Э�����ƶ���			                  *
**************************************************************************/
/** @brief ˽��Э��														*/
#define	PROTOCOL_PRIVATE				0

/** @brief �ֻ�Э��														*/
#define	PROTOCOL_TIDEMOBILE				1

/** @brief ���Ż�ͨЭ��													*/
#define	PROTOCOL_HXHT					(1<<1)

/** @brief xxxЭ��														*/
//#define PROTOCOL_XXX					(1<<2)

/**************************************************************************
*                             ������Ϣ���������Ͷ���                      *
************************************************************************* */

///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ�������												          	 */
#define HY_DVR_GET_NETCFG 					101

/** @brief �����������												          	 */
#define HY_DVR_SET_NETCFG 					102

//������
/** @brief ȫ����������(HY_DVR_NET_CFG)								          	 */
#define NETCFG_ALL						 	0xFFFFFFFF

/** @brief Dhcp������Ϣ(HY_DVR_DHCP_CONF)										*/
#define NETCFG_DHCP_CONF					1

/** @brief Dhcp״̬��Ϣ(HY_DVR_DHCP_STATE)							          	 */
#define NETCFG_DHCP_STATE					(1 << 1)

/** @brief Eth������Ϣ(HY_DVR_ETH_IF)								          	 */
#define NETCFG_ETH_IF						(1 << 2)

/** @brief PPPoE����(HY_DVR_PPPOE_CONF)								          	 */
#define NETCFG_PPPOE_CONF					(1 << 3)

/** @brief PPPoE������Ϣ(HY_DVR_PPPOE_IF)							          	 */
#define NETCFG_PPPOE_IF						(1 << 4)

/** @brief DNS������Ϣ(HY_DVR_DNS_CONF)								          	 */
#define NETCFG_DNS_CONF						(1 << 5)

/** @brief DDNS������Ϣ(HY_DVR_DDNS_CONF)							          	 */
#define NETCFG_DDNS_CONF					(1 << 6)

/** @brief http����(HY_DVR_HTTP_CONF)								          	 */
#define NETCFG_HTTP_CONF					(1 << 7)

/** @brief ����˿�������Ϣ(HY_DVR_LISTENPORT_CONF)						       	 */
#define NETCFG_LISTENPORT_CONF				(1 << 8)

/** @brief �ֻ��˿�������Ϣ(HY_DVR_MOBILE_CONF)							       	 */
#define NETCFG_MOBILE_CONF					(1 << 9)

/** @brief �Զ����ֶ˿�������Ϣ(HY_DVR_AUTODETECT_CONF)					     	 */
#define NETCFG_AUTODETECT_CONF				(1 << 10)

/** @brief WIFI������Ϣ(HY_DVR_ETH_IF)											*/
#define NETCFG_WLAN_IF						(1 << 11)

/** @brief WIFI DHCP����(HY_DVR_DHCP_CONF)										*/
#define NETCFG_WLAN_DHCP_CONF				(1 << 12)

/** @brief WIFI Dhcp״̬��Ϣ(HY_DVR_DHCP_STATE)									*/
#define NETCFG_WLAN_DHCP_STATE				(1 << 13)

/** @brief WIFI DNS������Ϣ(HY_DVR_DNS_CONF)									*/
#define NETCFG_WLAN_DNS_CONF				(1 << 14)

/** @brief WIFI �ȵ��б�(HY_DVR_WLAN_ACCESSPOINT_CFG)							*/
#define NETCFG_WLAN_ACCESSPOINTS			(1 << 15)

/** @brief WIFI ��������(HY_DVR_WLAN_CONNECTION)								*/
#define NETCFG_WLAN_CONNECTION				(1 << 16)

/** @brief WIFI ����״̬(HY_DVR_WLAN_STATE)										*/
#define NETCFG_WLAN_STATE					(1 << 17)

///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ���������ò���												   	 */
#define HY_DVR_GET_NETSERVERCFG 			103

/** @brief ���÷��������ò���												     */
#define HY_DVR_SET_NETSERVERCFG 			104

//������
/** @brief ȫ����������(HY_DVR_NET_MANAGER)									     */
#define NETSERVERCFG_ALL					0xFFFFFFFF

/** @brief CMS������Ϣ(HY_DVR_NET_CMS)										 	 */
#define NETSERVERCFG_CMS_CONF				1

/** @brief CMS״̬��Ϣ(HY_DVR_CMS_STATE)								    	 */
#define NETSERVERCFG_CMS_STATE				2

/** @brief AMS������Ϣ(HY_DVR_NET_AMS)										   	 */
#define NETSERVERCFG_AMS_CONF				4

/** @brief NTP������Ϣ(HY_DVR_NET_NTP)										  	 */
#define NETSERVERCFG_NTP_CONF				8

/** @brief EML������Ϣ(HY_DVR_NET_EML)										 	 */
#define NETSERVERCFG_EML_CONF				16

/** @brief EML(1.1.0�汾)������Ϣ(HY_DVR_NET_EML_1)							 	 */
#define NETSERVERCFG_EML_1_CONF				32

/** @brief CMSЭ����Ϣ														 	 */
#define NETSERVERCFG_CMS_PROTOCOL			64

///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡͼ�����ò���													  	 */
#define HY_DVR_GET_PICCFG 					105

/** @brief ����ͼ�����ò���													  	 */
#define HY_DVR_SET_PICCFG 					106

//������
/** @brief ȫ����������(HY_DVR_PIC_CFG)										 	 */
#define PICCFG_ALL							0xFFFFFFFF

/** @brief ��Ƶ��ʽ������Ϣ(û��ʵ��)										 	 */
#define PICCFG_VIDEOSTANDARD_CONF			1

/** @brief OSD��Ϣ(û��ʵ��)												   	 */
#define PICCFG_OSD_CONF						2

/** @brief ͨ��������Ϣ(�ṹ��HY_DVR_PIC_CFG�еĽṹ��HY_DVR_ALIAS_CFG)		   	 */
#define PICCFG_CHNAME_CONF					4

/** @brief ʱ�����Ϣ(û��ʵ��)												   	 */
#define PICCFG_TIMESEC_CONF					8

/** @brief ��Ƶ��ʧ������Ϣ(û��ʵ��)										   	 */
#define PICCFG_VIDEOLOST_CONF				16

/** @brief �ƶ����������Ϣ(û��ʵ��)										   	 */
#define PICCFG_MOTION_CONF					32

/** @brief ������������Ϣ(û��ʵ��)											   	 */
#define PICCFG_MOSAIC_CONF					64

/** @brief ͨ��������Ϣ��Unicode��(�ṹ��HY_DVR_PIC_CFG�еĽṹ��HY_DVR_ALIAS_CFG_1) */
#define PICCFG_CHNAME_UNICODE_CONF			128

/** @brief  NXP8850 Image Sensor Processing������Ϣ */
#define PICCFG_NXP8850ISP_CONF				256

///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ�������ò���													  	 */
#define HY_DVR_GET_COMPRESSCFG 				107

/** @brief ���ñ������ò���													  	 */
#define HY_DVR_SET_COMPRESSCFG 				108

//������
/** @brief ȫ����������(HY_DVR_COMPRESSION_CFG)								  	 */
#define COMPRESSCFG_ALL						0xFFFFFFFF

/** @brief ����ģʽ������Ϣ(û��ʵ��)										  	 */
#define COMPRESSCFG_WORKMODE_CONF			1

/** @brief ����������Ϣ(û��ʵ��)											 	 */
#define COMPRESSCFG_COMPRESS_CAP			2

/** @brief ����������Ϣ(û��ʵ��)												 */
#define COMPRESSCFG_COMPRESS_CONF			4



///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ����¼�����														 */
#define HY_DVR_GET_RECORDCFG 				109

/** @brief ���ñ���¼�����														 */
#define HY_DVR_SET_RECORDCFG 				110

//������
/** @brief ȫ��¼������(HY_DVR_RECORD_SCHED)									 */
#define RECORDCFG_ALL						0xFFFFFFFF

/** @brief ¼�����״̬����(HY_DVR_RECORD_CTRLSTATE)							 */
#define RECORD_CTRL_STATE					1

/** @brief ¼������ѡ��(HY_DVR_RECORD_STREAM)									 */
#define RECORD_STREAM						2

///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡϵͳʱ�����														 */
#define HY_DVR_GET_SYSTIME 					111

/** @brief ����ϵͳʱ�����														 */
#define HY_DVR_SET_SYSTIME 					112

//������
/** @brief ϵͳʱ������(HY_DVR_TIME)											 */
#define SYSTIME_ALL							0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ��̨����															 */
#define HY_DVR_GET_PTZCFG 					113

/** @brief ������̨����															 */
#define HY_DVR_SET_PTZCFG 					114

//������
/** @brief ��̨��������(HY_DVR_PTZPRO_CFG)										 */
#define PTZCFG_ALL							0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ�������ò���														 */
#define HY_DVR_GET_SERIALCFG 				115

/** @brief ���ô������ò���														 */
#define HY_DVR_SET_SERIALCFG 				116

//������
/** @brief ȫ�����ڲ�������(HY_DVR_DECODER_CFG)									 */
#define SERIALCFG_ALL						0xFFFFFFFF

/** @brief ����PTZ����(HY_DVR_PTZ_ELCTRONIC)									 */
#define SERIALCFG_PTZ_ELCTRONIC_CFG			1


///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ�������ò���														 */
#define HY_DVR_GET_ALARMCFG 				117

/** @brief ���ñ������ò���														 */
#define HY_DVR_SET_ALARMCFG 				118

//������
/** @brief ȫ��������������(HY_DVR_ALARM_CFG)									 */
#define ALARMCFG_ALL						0xFFFFFFFF

/** @brief ��������ģʽ(û��ʵ��)												 */
#define ALARMCFG_WORKMODE_CONF				1

/** @brief ��������(û��ʵ��)													 */
#define ALARMCFG_IMGCAPTURE_CONF			2

/** @brief ������������(û��ʵ��)												 */
#define ALARMCFG_ALARMIN_CONF				4

/** @brief �����������(û��ʵ��)												 */
#define ALARMCFG_ALARMOUT_CONF				8

/** @brief �쳣��������(û��ʵ��)												 */
#define ALARMCFG_EXCEPTION_CONF				16


///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ��ʾ������ò���													 */
#define HY_DVR_GET_VIDEOOUTCFG 				119

/** @brief ������ʾ������ò���													 */
#define HY_DVR_SET_VIDEOOUTCFG 				120

//������
/** @brief ȫ����ʾ�����������(HY_DVR_VO_CFG)									 */
#define VIDEOOUTCFG_ALL						0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ�û���Ϣ����														 */
#define HY_DVR_GET_USERCFG 					121

/** @brief �����û���Ϣ����														 */
#define HY_DVR_SET_USERCFG 					122

//������
/** @brief �û���Ϣ����(HY_DVR_USER_CFG)										 */
#define USERCFG_ALL							0xFFFFFFFF

/** @brief �����û���Ϣ(HY_DVR_USER)											 */
#define USERCFG_ONE							1

/** @brief ����û�(HY_DVR_USER)												 */
#define USERCFG_CREATE						2

/** @brief ɾ���û�(HY_DVR_USER)												 */
#define USERCFG_REMOVE						4

/** @brief �����û�(HY_DVR_ONLINEUSER_CFG)										*/
#define USERCFG_USER_ONLINE					8

/** @brief ǿ��ɾ�����������û�(HY_DVR_ONLINEUSER)								*/
#define USERCFG_USER_ONLINE_ONE				16

/** @brief �Ƿ������û�������(HY_DVR_WHITEIP_ENABLE)							*/
#define USERCFG_WHITE_IP_ENABLE				32

/** @brief �û�������(�ṹ��HY_DVR_USER_CFG�е�HY_DVR_WHITEIP)					*/
#define USERCFG_WHITE_IP					64

///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ�豸��Ϣ����														 */
#define HY_DVR_GET_DEVICEINFO 				123

/** @brief �����豸��Ϣ������ֻ��												 */
#define HY_DVR_SET_DEVICEINFO				124

//������
/** @brief ȫ���豸��Ϣ����(HY_DVR_DEVICE_INFO)									 */
#define DEVICEINFO_ALL						0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ�豸���ò���														 */
#define HY_DVR_GET_DEVICECFG 				125

/** @brief �����豸���ò���														 */
#define HY_DVR_SET_DEVICECFG				126

//������
/** @brief ȫ���豸���ò���(HY_DVR_DEVICE_CFG)									 */
#define DEVICECFG_ALL						0xFFFFFFFF

/** @brief ����ʱ�����(û��ʵ��)												 */
#define DEVICECFG_LOCKSCREENTIME_CONF		1

/** @brief ����(û��ʵ��)														 */
#define DEVICECFG_LANGUAGE_CONF				2

/** @brief ����ʱ���ʽ(û��ʵ��)												 */
#define DEVICECFG_DATETIME_CONF				4

/** @brief ��ʱ��(û��ʵ��)														 */
#define DEVICECFG_DST_CONF					8

/** @brief �豸ID������ң����(û��ʵ��)											 */
#define DEVICECFG_REMOTECONTROL_ID			16

/** @brief ʱ��(û��ʵ��)														 */
#define DEVICECFG_TIMEZONE_CONF				32

/** @brief ��Ƶ��ʽ������Ϣ(û��ʵ��)											 */
#define DEVICECFG_VIDEOSTANDARD_CONF		64


///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ�洢ϵͳ��Ϣ														 */
#define HY_DVR_GET_STORAGEINFO				127

/** @brief ���ô洢ϵͳ��Ϣ��ֻ��												 */
#define HY_DVR_SET_STORAGEINFO				128

//������
/** @brief ȫ���豸��Ϣ����(HY_DVR_STORAGE_CFG)									 */
#define STORAGEINFO_ALL						0xFFFFFFFF

/** @brief �洢ϵͳ����ģʽ����(û��ʵ��)										 */
#define STORAGEINFO_WORKMODE_CONF			1

/** @brief Ӳ����Ϣ����(û��ʵ��)												 */
#define STORAGEINFO_DISK_INFO				2

/** @brief ��������Ϣ����(û��ʵ��)												 */
#define STORAGEINFO_DISKGROUP_INFO			4

/** @brief ����Ч����(û��ʵ��)													 */
#define STORAGEINFO_DISK_MARK				8


///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ�豸״̬��Ϣ														 */
#define HY_DVR_GET_DEVICESTATE				129

/** @brief �����豸״̬��Ϣ���ճ�����											 */
#define HY_DVR_SET_DEVICESTATE				130

//������
/** @brief ȫ���豸״̬��Ϣ(HY_DVR_DEVICE_STATE)								 */
#define DEVICESTATE_ALL						0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ�豸�Զ�ά������													 */
#define HY_DVR_GET_DEVICEMAINTENANCE		131

/** @brief �����豸�Զ�ά������													 */
#define HY_DVR_SET_DEVICEMAINTENANCE		132

//������
/** @brief ȫ���豸�Զ�ά������(HY_DVR_DEVICE_MAINTENANCE)						 */
#define DEVICEMAINTENANCE_ALL				0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ�豸���ܶ�������													 */
#define HY_DVR_GET_DEVICECUSTOM				133

/** @brief �����豸���ܶ�������													 */
#define HY_DVR_SET_DEVICECUSTOM				134

//������
/** @brief ȫ���豸���ܶ�������(HY_DVR_DEVICE_CUSTOM)							 */
#define DEVICECUSTOM_ALL					0xFFFFFFFF

/** @brief HC���ͱ������Դ����ģʽ��Ϣ����ʱ���ã�								 */
#define DEVICECUSTOM_HCRESMODE_CONF			8

///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡHXHT����(û��ʵ��)												 */
#define HY_DVR_GET_HXHT						135

/** @brief ����HXHT����(û��ʵ��)												 */
#define HY_DVR_SET_HXHT						136

//������
/** @brief ȫ��HXHT����(û��ʵ��)												 */
#define HXHT_ALL							0xFFFFFFFF

/** @brief NAT״̬����(û��ʵ��)												 */
#define	HXHT_NATSTATUS						1

/** @brief ������������(û��ʵ��)												 */
#define	HXHT_VOICEPARAM						2

/** @brief CMS�洢ע��������Ϣ(û��ʵ��)										 */
#define HXHT_CMS_STORAGE					4

/** @brief ǰ���豸ID(û��ʵ��)													 */
#define HXHT_DEVICE_ID						8


///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡҪ���ص�Э�����ƣ�˽��Э���Ǳ�����صģ��������У�(û��ʵ��)		 */
#define	HY_DVR_GET_PROTOCOL					137

/** @brief ����Ҫ���ص�Э������	(û��ʵ��)										 */
#define	HY_DVR_SET_PROTOCOL					138

//������
/** @brief ȫ��Ҫ���ص�Э������(û��ʵ��)										 */
#define PROTOCOL_ALL						0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡԴ�豸����														 */
#define	HY_DVR_GET_SOURCE_DEVICE			139

/** @brief ����Դ�豸����														 */
#define	HY_DVR_SET_SOURCE_DEVICE			140

//������
/** @brief ȫ��Դ�豸����(HY_DVR_SOURCE_DEVICE_INFO_CONFIG)						 */
#define SOURCE_DEVICE_ALL					0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
////������
///** @brief ��ȡ�豸���															*/
//#define	HY_DVR_GET_DEVICE_OUTPUT			141
//
///** @brief �����豸���(��Ч���ֻ�ܻ�ȡ����������)							 */
//#define	HY_DVR_SET_DEVICE_OUTPUT			142
//
////������
///** @brief ȫ���豸���(HY_DVR_DEVICE_OUTPUT)									 */
//#define DEVICE_OUTPUT_ALL					0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//������
/** @brief ��ȡ��������ʾ�豸��Ϣ												*/
#define	HY_DVR_GET_DISP_DEV					143

/** @brief ���ý�������ʾ�豸��Ϣ												*/
#define	HY_DVR_SET_DISP_DEV					144

//������
/** @brief ���н�������ʾ�豸��Ϣ(HY_DVR_DISPDEV_CFG)						 */
#define DISP_DEV_ALL						0xFFFFFFFF

/** @brief VGA��Ϣ(HY_DVR_VGAPARA_CFG)										 */
#define DISP_DEV_VGA						1

/** @brief TV ��Ϣ(HY_DVR_VOOUT_CFG)										 */
#define DISP_DEV_TV							2

///////////////////////////////////////////////////////////////////////////////////////////////////////
#define	HY_DVR_GET_NXP8850ISP		145	/* ��ȡNXP8850 ISP���� */
#define	HY_DVR_SET_NXP8850ISP		146	/* ����NXP8850 ISP���� */
//������
#define NXP8850ISP_ALL				0xFFFFFFFF	/* ȫ��ISP���� */

///////////////////////////////////////////////////////////////////////////////////////////////////////
/**************************************************************************
*                        ������Ϣ�ṹ�嶨��                              *
************************************************************************* */

////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_SCHEDTIME
*  @brief	ʱ��ƻ�, 24Сʱ�ȷֳ�48��ʱ���
 */
typedef struct tagHY_DVR_SCHEDTIME
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	unsigned char bySetType[DVR_MAX_DAYS][DVR_MAX_TIMESEGMENT];	/*!< 0Ϊ��������1Ϊ���� */
	unsigned char byState;										/*!< ״̬,0Ϊȫ�첼��,1Ϊ����,2Ϊ��֧�� */
	unsigned char byReserve[3];									/*!< ����λ */

} HY_DVR_SCHEDTIME, *LPHY_DVR_SCHEDTIME;

/*!
*  @struct	tagHY_DVR_WORKMODE
*  @brief	����ģʽ
 */
typedef struct tagHY_DVR_WORKMODE
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int nWorkMode;												/*!< �߼�ģʽ��0Ϊ��ͨģʽ��1Ϊ�߼�ģʽ */

} HY_DVR_WORKMODE, *LPHY_DVR_WORKMODE;

/*!
*  @struct	tagHY_DVR_FONT_INFO
*  @brief	������Ϣ
 */
typedef struct tagHY_DVR_FONT_INFO
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	char szFontName[DVR_MAX_FONTNAME_LEN];						/*!< ������ */
	int nFontStyle;												/*!< ������ */
	int nFontSize;												/*!< �����С */

} HY_DVR_FONT_INFO, *LPHY_DVR_FONT_INFO;

/*!
*  @struct	tagHY_DVR_ALIAS_CFG
*  @brief	��������
 */
typedef struct tagHY_DVR_ALIAS_CFG
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	char strName[DVR_MAX_CHANNELNAME_LEN];						/*!< ͨ������ */
	int nCharSet;												/*!< ͨ�����ַ���: 0-GB, 1-unicode */
	int nWidth;													/*!< ͨ�����������ַ������(������Ϊ��λ)������� DVR_MAX_LATTICE_WIDTH */
	int nHeight;												/*!< ͨ�����������ַ����߶�(������Ϊ��λ)�����߶� DVR_MAX_LATTICE_HEIGHT */
	unsigned char byLattice[DVR_MAX_LATTICE_BUFSIZE];			/*!< ���󣬰���ɨ�裬��Ϊ(nWidth+7)/8����ΪnHeight��Ŀǰ���֧��10��24*24�ĵ��� */
	HY_DVR_FONT_INFO struFontInfo;								/*!< ͨ����������Ϣ */

} HY_DVR_ALIAS_CFG, *LPHY_DVR_ALIAS_CFG;

/*!
*  @struct	tagHY_DVR_ALIAS_CFG_1
*  @brief	��������(Unicode)
*/
typedef struct tagHY_DVR_ALIAS_CFG_1
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	unsigned short strName[DVR_MAX_CHANNELNAME_LEN];			/*!< ͨ������ */
	int nCharSet;												/*!< ͨ�����ַ���: 0-GB, 1-unicode */
	int nWidth;													/*!< ͨ�����������ַ������(������Ϊ��λ)������� DVR_MAX_LATTICE_WIDTH */
	int nHeight;												/*!< ͨ�����������ַ����߶�(������Ϊ��λ)�����߶� DVR_MAX_LATTICE_HEIGHT */
	unsigned char byLattice[DVR_MAX_LATTICE_BUFSIZE];			/*!< ���󣬰���ɨ�裬��Ϊ(nWidth+7)/8����ΪnHeight��Ŀǰ���֧��10��24*24�ĵ��� */
	HY_DVR_FONT_INFO struFontInfo;								/*!< ͨ����������Ϣ */

} HY_DVR_ALIAS_CFG_1, *LPHY_DVR_ALIAS_CFG_1;

////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_DDNS
*  @brief	DDNSЭ����Ϣ�ṹ
 */
typedef struct tagHY_DVR_DDNS
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bDdnsEnable;											/*!< 0-�������Զ�ע��, 1-�����Զ�ע��  */
	int nDdnsState;												/*!< ĿǰDDNSֻ����0��ʾ�Ѿ�ֹͣ��1��ʾ����������2��ʾ�Ѿ�������3��ʾ����ֹͣ */
	char szProtocolName[DVR_MAX_DDNSPRONAME_LEN];				/*!< Э������(ֻ��)  */
	char szUserName[DVR_MAX_USERNAME_LEN];						/*!< ע���û���  */
	char szUserPassword[DVR_MAX_PASSWORD_LEN];					/*!< ע���û�����  */
	char szDomainName[DVR_MAX_DOMAINNAME_LEN];					/*!< ע���û�����  */
	unsigned short wRegisterPort;								/*!< ����˿�  */
	int nAutoRegIntervals;										/*!< �Զ�ע����ʱ�䣬��λΪ��  */

} HY_DVR_DDNS, *LPHY_DVR_DDNS;

/*!
*  @struct	tagHY_DVR_DDNS_CONF
*  @brief	DDNS�������ýṹ
 */
typedef struct tagHY_DVR_DDNS_CONF
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int nDdnsProtocolCount;										/*!< ֧�ֵ�DDNSЭ������(ֻ��) */
	HY_DVR_DDNS struDdnsProtocol[DVR_MAX_DDNSPRO_NUM];			/*!< DDNSЭ����Ϣ */

} HY_DVR_DDNS_CONF, *LPHY_DVR_DDNS_CONF;

/*!
*  @struct	tagHY_DVR_PPPOE_CONF
*  @brief	PPPoE����������Ϣ
 */
typedef struct tagHY_DVR_PPPOE_CONF
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bPPPoEEnable;											/*!< 0-������PPPoE��1-���� PPPoE  */
	char szPPPoEUser[DVR_MAX_USERNAME_LEN];						/*!< PPPoE�û���  */
	char szPPPoEPassword[DVR_MAX_PASSWORD_LEN];					/*!< PPPoE����  */

} HY_DVR_PPPOE_CONF, *LPHY_DVR_PPPOE_CONF;

/*!
*  @struct	tagHY_DVR_PPPOE_IF
*  @brief	PPPoE������Ϣ
 */
typedef struct tagHY_DVR_PPPOE_IF
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int nPPPoEState;											/*!< PPPoE ����״̬(ֻ��),0��ʾû�����ӣ�1��ʾ�������ӣ�2��ʾ���ӳɹ���3��ʾ���ڹҶ� */
	char szPPPoEIP[DVR_MAX_IP_STR_LEN];							/*!< PPPoE IP��ַ(ֻ��)  */
	char szPPPoESubnetMask[DVR_MAX_IP_STR_LEN];					/*!< PPPoE ��������(ֻ��)  */
	char szPPPoEGateway[DVR_MAX_IP_STR_LEN];					/*!< PPPoE ����(ֻ��)  */

} HY_DVR_PPPOE_IF, *LPHY_DVR_PPPOE_IF;

/*!
*  @struct	tagHY_DVR_DHCP_CONF
*  @brief	DHCP������Ϣ
 */
typedef struct tagHY_DVR_DHCP_CONF
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bDhcpEnable;											/*!< 0-������Dhcp,1-����Dhcp  */

} HY_DVR_DHCP_CONF, *LPHY_DVR_DHCP_CONF;

/*!
*  @struct	tagHY_DVR_DHCP_STATE
*  @brief	DHCP״̬��Ϣ
 */
typedef struct tagHY_DVR_DHCP_STATE
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int nDhcpState;												/*!< Dhcp״̬ (ֻ��)��Ŀǰ��֧�� */

} HY_DVR_DHCP_STATE, *LPHY_DVR_DHCP_STATE;

/*!
*  @struct	tagHY_DVR_DNS_CONF
*  @brief	DNS������Ϣ
 */
typedef struct tagHY_DVR_DNS_CONF
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	char szPrimaryDNS[DVR_MAX_IP_STR_LEN];						/*!< ��DNS������  */
	char szSecondaryDNS[DVR_MAX_IP_STR_LEN];					/*!< ����DNS  */

} HY_DVR_DNS_CONF, *LPHY_DVR_DNS_CONF;

/*!
*  @struct	tagHY_DVR_HTTP_CONF
*  @brief	http������Ϣ
 */
typedef struct tagHY_DVR_HTTP_CONF
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bEnable;												/*!< ���û����http���� */
	unsigned short wHttpPort;									/*!< Http�˿�  */

} HY_DVR_HTTP_CONF, *LPHY_DVR_HTTP_CONF;

/*!
*  @struct	tagHY_DVR_LISTENPORT_CONF
*  @brief	��������˿���Ϣ
 */
typedef struct tagHY_DVR_LISTENPORT_CONF
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	unsigned short wLocalCmdPort;								/*!< ��������˿�  */
	unsigned short wLocalMediaPort;								/*!< ����ý��˿�  */
	unsigned short wRtpPort;									/*!< ����RTP�˿�  */

} HY_DVR_LISTENPORT_CONF, *LPHY_DVR_LISTENPORT_CONF;

/** @brief ��������˿ڽṹ����																				 */
#define LISTENPORT_CONF_LEN		sizeof(HY_DVR_LISTENPORT_CONF)

//�˳��ֻ��ͻ�������
typedef struct
{
	int bValid;					//! ���ṹ���Ƿ���Ч��=0��ʾ��Ч

	unsigned short wMobilePort;	/*�ֻ��˿� */

} HY_DVR_TIDE_MOBILE, *LPHY_DVR_TIDE_MOBILE;

//�ֻ������˿���Ϣ
typedef struct
{
	int bValid;					//! ���ṹ���Ƿ���Ч��=0��ʾ��Ч

	HY_DVR_TIDE_MOBILE struTide;	/*�˳��ֻ����� */

} HY_DVR_MOBILE_CONF, *LPHY_DVR_MOBILE_CONF;

#define MOBILE_CONF_LEN		sizeof(HY_DVR_MOBILE_CONF)

/*!
*  @struct	tagHY_DVR_ETH_IF
*  @brief	ETH0���ýṹ
 */
typedef struct tagHY_DVR_ETH_IF
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	char szIPAddress[DVR_MAX_IP_STR_LEN];						/*!< DVR IP��ַ  */
	char szSubnetMask[DVR_MAX_IP_STR_LEN];						/*!< DVR ��������  */
	char szGateway[DVR_MAX_IP_STR_LEN];							/*!< ���ص�ַ  */
	char szMacAddress[DVR_MAX_MAC_STR_LEN];						/*!< ֻ�����������������ַ  */

} HY_DVR_ETH_IF, *LPHY_DVR_ETH_IF;

/*!
*  @struct	tagHY_DVR_AUTODETECT_CONF
*  @brief	�Զ����ֶ˿���Ϣ
*/
typedef struct tagHY_DVR_AUTODETECT_CONF
{
	int bValid;												/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	unsigned short wAutoDetectPort;							/*!< �Զ����ֶ˿� */

} HY_DVR_AUTODETECT_CONF, *LPHY_DVR_AUTODETECT_CONF;

/*!
*  @struct	tagHY_DVR_WLAN_STATE
*  @brief	WIFI״̬
*/
typedef struct tagHY_DVR_WLAN_STATE
{
	int bValid;												/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bEnable;											/*!< WIFI״̬ 0 ������ 1 ����, 2 ����δ�ҵ�*/

} HY_DVR_WLAN_STATE, *LPHY_DVR_WLAN_STATE;

/*!
*  @struct	tagHY_DVR_WLAN_ACCESSPOINT
*  @brief	WIFI�ȵ�
*/
typedef struct tagHY_DVR_WLAN_ACCESSPOINT
{
	int bValid;														/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	char szSSID[DVR_MAX_SSID_LEN];									/*!< �ȵ����� */
	char szMacAddress[DVR_MAX_MAC_STR_LEN];							/*!< �ȵ�MAC��ַ */
	int nSignal;													/*!< �ȵ��ź�ǿ�� */
	int nAuthentication;											/*!< ��֤ģʽ 0-Open,1-Shared,2-WPAPSK, 3-WPA2PSK, 4-WPANONE(ad-hocģʽ),5-WPA,6-WPA2 */
	int nEncrypType;												/*!< ����ģʽ  0��ʾNONE 1��ʾWEP 2��ʾTKIP 3��ʾAES */
	int nWirelessMode;												/*!< 1: legacy 11B only 2: legacy 11A only 3: legacy 11a/b/g mixed
																		 4: legacy 11G only 5: 11ABGN mixed    6: 11N only
																		 7: 11GN mixed      8: 11AN mixed      9: 11BGN mixed */

} HY_DVR_WLAN_ACCESSPOINT, *LP_HY_DVR_WLAN_ACCESSPOINT;

/*!
*  @struct	tagHY_DVR_WLAN_ACCESSPOINT_CFG
*  @brief	WIFI�ȵ�����
*/
typedef struct tagHY_DVR_WLAN_ACCESSPOINT_CFG
{
	int bValid;														/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	HY_DVR_WLAN_ACCESSPOINT struAccessPoints[DVR_MAX_AP_NUM];		/*!< WIFI�ȵ� */

} HY_DVR_WLAN_ACCESSPOINT_CFG, *LP_HY_DVR_WLAN_ACCESSPOINT_CFG;

/*!
*  @struct	tagHY_DVR_WLAN_KEY
*  @brief	WIFI��Կ
*/
typedef struct tagHY_DVR_WLAN_KEY
{
	int bValid;														/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	char szKey[DVR_MAX_WIFI_KEY_LEN];								/*!< ���� */
} HY_DVR_WLAN_KEY, *LPHY_DVR_WLAN_KEY;

/*!
*  @struct	tagHY_DVR_WLAN_KEY_CFG
*  @brief	WIFI��Կ����
*/
typedef struct tagHY_DVR_WLAN_KEY_CFG
{
	int bValid;														/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int nDefKeyID;													/*!< WEP��֤��ǰ�õ�KEY������,1~4 */
	HY_DVR_WLAN_KEY Key1;											/*!< WEP KEY1 */
	HY_DVR_WLAN_KEY Key2;											/*!< WEP KEY2 */
	HY_DVR_WLAN_KEY Key3;											/*!< WEP KEY3 */
	HY_DVR_WLAN_KEY Key4;											/*!< WEP KEY4 */
	HY_DVR_WLAN_KEY WPAKey;											/*!< WPA KEY */
} HY_DVR_WLAN_KEY_CFG, *LPHY_DVR_WLAN_KEY_CFG;

/*!
*  @struct	tagHY_DVR_WLAN_CONNECTION
*  @brief	WIFI��������
*/
typedef struct tagHY_DVR_WLAN_CONNECTION
{
	int bValid;														/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bConnect;													/*!< �Ƿ������ϣ�0��ʾδ������ 1��ʾ������(ֻ��) */
	char szSSID[DVR_MAX_SSID_LEN];									/*!< �ȵ����� */
	char szMacAddress[DVR_MAX_MAC_STR_LEN];							/*!< �ȵ�MAC��ַ */
	int nNetworkType;												/*!< ��������: 0��ʾManaged, 1��ʾAd-hoc */
	int nAuthMode;													/*!< ��֤ģʽ: 0-OPEN,1-SHARED,2-WEPAUTO,3-WPAPSK,4-WPA2PSK,5-WPANONE,6-WPA,7-WPA2*/
	int nEncrypType;												/*!< �����㷨 0-NONE,1-WEP,2-TKIP,3-AES */
	HY_DVR_WLAN_KEY_CFG struKeyCfg;									/*!< �������� */

} HY_DVR_WLAN_CONNECTION, *LP_HY_DVR_WLAN_CONNECTION;


////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_NET_CFG
*  @brief	�����������������ýṹ
 */
typedef struct tagHY_DVR_NET_CFG
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	HY_DVR_DHCP_CONF struDhcp_Conf;								/*!< Dhcp������Ϣ */
	HY_DVR_DHCP_STATE struDhcp_State;							/*!< Dhcp״̬��Ϣ */
	HY_DVR_ETH_IF struEth;										/*!< Eth������Ϣ */
	HY_DVR_PPPOE_CONF struPPPoE_Conf;							/*!< PPPoE���� */
	HY_DVR_PPPOE_IF struPPPoE_IF;								/*!< PPPoE������Ϣ */
	HY_DVR_DNS_CONF struDNS;									/*!< DNS������Ϣ */
	HY_DVR_DDNS_CONF struDDNS;									/*!< DDNS������Ϣ */
	HY_DVR_HTTP_CONF struHttp;									/*!< HTTP���� */
	HY_DVR_LISTENPORT_CONF struListenPort;						/*!< ����˿�������Ϣ */
	HY_DVR_MOBILE_CONF struMobilePort;							/*!< �ֻ��˿�������Ϣ */
	HY_DVR_AUTODETECT_CONF struAutoDetectPort;					/*!< �Զ����ֶ˿����� */

	HY_DVR_DHCP_CONF struWIFIDhcp_Conf;							/*!< WIFI DHCP���� */
	HY_DVR_DHCP_STATE struWIFIDhcp_State;						/*!< WIFI Dhcp״̬��Ϣ */
	HY_DVR_ETH_IF struWIFICommon;								/*!< WIFI ������Ϣ */
	HY_DVR_DNS_CONF struWIFIDNS;								/*!< WIFI DNS������Ϣ */
	HY_DVR_WLAN_ACCESSPOINT_CFG struWIFIAccessPoint;			/*!< WIFI�ȵ����� */
	HY_DVR_WLAN_CONNECTION struWIFIConnectCfg;					/*!< WIFI�������� */
	HY_DVR_WLAN_STATE struWIFIState;							/*!< WIFI ״̬ */

} HY_DVR_NET_CFG, *LPHY_DVR_NET_CFG;

/** @brief �����������������ýṹ����																		 */
#define NET_CFG_LEN   sizeof (HY_DVR_NET_CFG)
////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_NET_CMS
*  @brief	���Ĺ��������������Ϣ
 */
typedef struct tagHY_DVR_NET_CMS
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bCmsEnable;												/*!< 0-�����ù��������, 1-����  */
	char szManageHostAddress[DVR_MAX_DOMAINNAME_LEN];			/*!< Զ�̹���������ַ�����ȿ�������  */
	unsigned short wManageHostPort;								/*!< Զ�̹��������˿�  */
	int nAutoRegIntervals;										/*!< ע����ʱ�䣬��λΪ��  */

} HY_DVR_NET_CMS, *LPHY_DVR_NET_CMS;

/*!
*  @struct	tagHY_DVR_CMS_STATE
*  @brief	���Ĺ������������״̬
 */
typedef struct tagHY_DVR_CMS_STATE
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int nCmsState;												/*!< CMSע��״̬,Ŀǰϵͳ��֧��  */

} HY_DVR_CMS_STATE, *LPHY_DVR_CMS_STATE;

/*!
*  @struct	tagHY_DVR_NET_AMS
*  @brief	�������������������Ϣ
 */
typedef struct tagHY_DVR_NET_AMS
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bAmsEnable;												/*!< 0-�����ñ���������, 1-����  */
	char szAlarmHostAddress[DVR_MAX_DOMAINNAME_LEN];			/*!< ���������� */
	unsigned short wAlarmHostPort;								/*!< �����������˿�  */

} HY_DVR_NET_AMS, *LPHY_DVR_NET_AMS;

/*!
*  @struct	tagHY_DVR_NET_NTP
*  @brief	Ntp������������Ϣ
 */
typedef struct tagHY_DVR_NET_NTP
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bNtpEnable;												/*!< 0-������, 1-����  */
	char szNtpHostAddress[DVR_MAX_DOMAINNAME_LEN];				/*!< Ntp�����������ȿ�������  */
	unsigned short wNtpHostPort;								/*!< Ntp���������˿�  */
	int nAutoRegIntervals;										/*!< Ntp������ͬ�����ʱ�䣬��λΪ��  */

} HY_DVR_NET_NTP, *LPHY_DVR_NET_NTP;

/*!
*  @struct	tagHY_DVR_NET_EML
*  @brief	Email������������Ϣ
 */
typedef struct tagHY_DVR_NET_EML
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bEmlEnable;												/*!< 0-������, 1-����  */
	char szSmtpServer[DVR_MAX_DOMAINNAME_LEN];					/*!< smtp��������ַ  */
	unsigned short wSmtpPort;									/*!< smtp�������˿�  */
	char szSenderAddress[DVR_MAX_EMAIL_LEN];					/*!< �����������ַ  */
	char szSmtpUserName[DVR_MAX_USERNAME_LEN];					/*!< smtp�������ʺ�  */
	char szSmtpPassword[DVR_MAX_PASSWORD_LEN];					/*!< smtp����������  */

} HY_DVR_NET_EML, *LPHY_DVR_NET_EML;

/*!
*  @struct	tagHY_DVR_NET_EML_1
*  @brief	Email������������Ϣ(1.1.0�汾ʹ��)
*/
typedef struct	tagHY_DVR_NET_EML_1
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч		*/
	int bEmlEnable;												/*!< 0-������, 1-����					*/

	char szSmtpServer[DVR_MAX_DOMAINNAME_LEN];					/*!< smtp��������ַ						*/
	unsigned short wSmtpPort;									/*!< �˿�								*/
	int nSmtpAuth;												/*!< ��֤��ʽ(0ΪNONE, 1ΪLOGIN)		*/
	int nSmtpTLS;												/*!< �Ƿ�ʹ�ð�ȫ��½(0Ϊoff, 1Ϊon)	*/

	char szSenderEmail[DVR_MAX_EMAIL_LEN];						/*!< �����������ַ						*/
	char szSenderPassword[DVR_MAX_PASSWORD_LEN];				/*!< ��������������						*/

	//���²����ݲ�ʹ��
	int nProtocol;												/*!< (ĿǰΪsmtp)						*/
	int nTimeout;												/*!< ��ʱ����							*/
	int nAuto_from;

	//����ΪTLS��ظ߼��������ݲ�ʹ��
	int nTls_starttls;
	int nTls_certcheck;
	int nTls_force_sslv3;
	int nTls_min_dh_prime_bits;
	int nTls_priorities;

} HY_DVR_NET_EML_1, *LPHY_DVR_NET_EML_1;

/*!
*  @struct	tagHY_DVR_CMS_FOR_PROTOCOL
*  @brief	CMS��Ӧ��Э������
*/
typedef struct tagHY_DVR_CMS_FOR_PROTOCOL
{
	int bValid;											//���ṹ���Ƿ���Ч��=0��ʾ��Ч

	DWORD dwCMSProtocol;								/*!< Э�����ƣ���CMS����Ҫ��дIP��ַ����Ҫ�����豸�ˣ����
														CMS�е�IP��ַ��Ϊ��һ��Э��׼���ģ������˽��Э�飬��ô�豸
														��ע�ᵽNVMS�У������HxhtЭ�飬���豸ע�ᵽHxht�Ľ���������С�
														�ò���ֻ�ܱ�ʾһ��Э�顣*/
}HY_DVR_CMS_FOR_PROTOCOL, *LPHY_DVR_CMS_FOR_PROTOCOL;

////////////////////////////////////////////////////////////////////////////
/*!
*  @struct	tagHY_DVR_NET_MANAGER
*  @brief	�������ṹ
 */
typedef struct tagHY_DVR_NET_MANAGER
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	HY_DVR_NET_CMS struCMS;										/*!< ���Ĺ����������Ϣ */
	HY_DVR_NET_AMS struAMS;										/*!< ������������Ϣ */
	HY_DVR_NET_NTP struNTP;										/*!< NTP��������Ϣ */
	HY_DVR_NET_EML struEML;										/*!< Email��������Ϣ */
	HY_DVR_CMS_FOR_PROTOCOL struCMSForProtocol;					/*!< ���Ĺ����������Ϣ��Ӧ��Э�飨��CMS�ǰ󶨵ģ�*/
	HY_DVR_CMS_STATE struCmsState;								/*!< ���Ĺ������������״̬ */
	HY_DVR_NET_EML_1 struEML_1;									/*!< Email(1.1.0�汾)��������Ϣ */

} HY_DVR_NET_MANAGER, *LPHY_DVR_NET_MANAGER;

/** @brief �������ṹ����																				 */
#define NET_MANAGER_LEN   sizeof (HY_DVR_NET_MANAGER)
////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_CHROMA_SEC
*  @brief	ɫ�ȵ�Ԫ���ýṹ
 */
typedef struct tagHY_DVR_CHROMA_SEC
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bTimeSegEnable;											/*!< ����ʱ��Ƭ  */
	int nStartTime;												/*!< ��ʼʱ�� ���00:00ʱ������   */
	int nStopTime;												/*!< ����ʱ�� ���00:00ʱ������   */
	int nBrightness;											/*!< ����,0-255  */
	int nContrast;												/*!< �Աȶ�,0-255  */
	int nSaturation;											/*!< ���Ͷ�,0-255  */
	int nHue;													/*!< ɫ��,0-255  */

} HY_DVR_CHROMA_SEC, *LPHY_DVR_CHROMA_SEC;

/*!
*  @struct	tagHY_DVR_CHROMA_SEC
*  @brief	ɫ�����ýṹ(ÿͨ��֧��24��ʱ���)
 */
typedef struct tagHY_DVR_CHROMA
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	HY_DVR_CHROMA_SEC struChromaSec[DVR_MAX_PICSEC_NUM];		/*!< ɫ�ȵ�Ԫ */

} HY_DVR_CHROMA, *LPHY_DVR_CHROMA;


/*�쳣����ʽ */

/** @brief ����Ӧ																				 */
#define DVR_ALARM_TRIGGER_NONE			0

/** @brief ������Ļ��ʾ��ͨ��������¼���������													 */
#define DVR_ALARM_TRIGGER_PREVIEW		(0x1)

/** @brief ��������																				 */
#define DVR_ALARM_TRIGGER_AUDIOOUT		(0x1 << 1)

/** @brief ����¼��																				 */
#define DVR_ALARM_TRIGGER_RECORD		(0x1 << 2)

/** @brief ��������																				 */
#define DVR_ALARM_TRIGGER_SNAPSHOT		(0x1 << 3)

/** @brief �����������																			 */
#define DVR_ALARM_TRIGGER_ALARMOUT		(0x1 << 4)

/** @brief �ϴ���������																			 */
#define DVR_ALARM_TRIGGER_NOTIFYAMS		(0x1 << 5)

/** @brief ����PTZ																				 */
#define DVR_ALARM_TRIGGER_PTZ			(0x1 << 6)

/** @brief ����EMail֪ͨ																		 */
#define DVR_ALARM_TRIGGER_EMAIL			(0x1 << 7)

/** @brief ��Ļ��ʾ																				 */
#define DVR_ALARM_TRIGGER_NOTIFYGUI		(0x1 << 8)

/*!
*  @struct	tagHY_DVR_HANDLEEXCEPTION
*  @brief	��������ṹ��
 */
typedef struct tagHY_DVR_HANDLEEXCEPTION
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч  */

	unsigned long dwHandleType;									/*!< ����ʽ,����ʽ��"��"���  */
	int nRecordChannelMask;										/*!< ����¼��ͨ����ʶ����λ��ʾ����λ0Ϊ1����ʾͨ��1��ѡ�У��Դ�����  */
	int nSnapshotChannelMask;									/*!< ��������ͨ����ʶ����λ��ʾ����λ0Ϊ1����ʾͨ��1��ѡ�У��Դ�����  */
	int nAlarmOutChannelMask;									/*!< �����������ͨ����ʶ����λ��ʾ����λ0Ϊ1����ʾͨ��1��ѡ�У��Դ�����  */
	int nPtzAction[DVR_MAX_PTZ_NUM];							/*!< �����Ķ���,  0��ʾ�޶��� , 1����Ԥ�õ�, 2����Ѳ�� 3�����켣  */
	int nPtzIndex[DVR_MAX_PTZ_NUM];								/*!< ������Ԥ�õ�/Ѳ��/�켣�ı��  */
	int nMonitorMask;											/*!< 0-������ʾ������ʾ 1-���� 2-SPOT1 4-SPOT2 8-SPOT3 16-SPOT4������Ҫ������ϣ�����Щֵ��Ӽ��� */

} HY_DVR_HANDLEEXCEPTION, *LPHY_DVR_HANDLEEXCEPTION;

/*!
*  @struct	tagHY_DVR_MOTION
*  @brief	�ƶ����
 */
typedef struct tagHY_DVR_MOTION
{
	int bValid;																		/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч  */

	int bEnable;																	/*!< �Ƿ����ƶ����  */
	int nSenstive;																	/*!< �ƶ����������, 0 - 5,Խ��Խ����,0xff�ر�  */
	int nXScope;																	/*!< X�����鷶Χ��0-32��Ŀǰ9000�豸֧��0-16��  */
	int nYScope;																	/*!< Y�����鷶Χ��0-32��Ŀǰ9000�豸֧��0-12��*/
	unsigned char byMotionScope[DVR_MAX_MOTIONSCOPE_NUM][DVR_MAX_MOTIONSCOPE_NUM];	/*!< �������,1��ʾ�ĺ�����ƶ��������,0��ʾ����  */
	HY_DVR_HANDLEEXCEPTION struHandleType;											/*!< ����ʽ  */
	HY_DVR_SCHEDTIME struSchedTime;													/*!< �����ƻ�  */

} HY_DVR_MOTION, *LPHY_DVR_MOTION;

/*!
*  @struct	tagHY_DVR_VILOST
*  @brief	�źŶ�ʧ����
 */
typedef struct tagHY_DVR_VILOST
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bEnable;												/*!< �Ƿ����źŶ�ʧ����  */
	HY_DVR_HANDLEEXCEPTION struHandleType;						/*!< ����ʽ  */
	HY_DVR_SCHEDTIME struSchedTime;								/*!< �����ƻ�  */

} HY_DVR_VILOST, *LPHY_DVR_VILOST;

/*!
*  @struct	tagHY_DVR_MOSAIC_INFO
*  @brief	������������Ϣ
 */
typedef struct tagHY_DVR_MOSAIC_INFO
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bEnable;												/*!< �Ƿ�����  */
	int nHideAreaTopLeftX;										/*!< ��������������ϵ�x������꣨0-703��  */
	int nHideAreaTopLeftY;										/*!< ��������������ϵ�y������꣨0-575��  */
	int nHideAreaBottomRightX;									/*!< ��������������µ�x������꣨0-703��  */
	int nHideAreaBottomRightY;									/*!< ��������������µ�y������꣨0-575��  */

} HY_DVR_MOSAIC_INFO, *LPHY_DVR_MOSAIC_INFO;

/*!
*  @struct	tagHY_DVR_MOSAIC
*  @brief	������������Ϣ
 */
typedef struct tagHY_DVR_MOSAIC
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bEnableMosaic;											/*!< �Ƿ������ڵ� ,0-��,1-�� ����Ϊ704*576  */
	HY_DVR_MOSAIC_INFO struMosaicInfo[DVR_MAX_VIDEOSHELTER_NUM];/*!< ���������� */

} HY_DVR_MOSAIC, *LPHY_DVR_MOSAIC;

/*!
*  @struct	tagHY_DVR_OSD_CFG
*  @brief	OSD������Ϣ
 */
typedef struct tagHY_DVR_OSD_CFG
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int nShowOsd;												/*!< 0Ϊͨ��ʱ�������ʾ��1Ϊ��ʾͨ����2��Ϊ��ʾʱ�䡢3Ϊ���߾���ʾ  */
	int nTimeTopLeftX;											/*!< ʱ���x���꣨0-703��  */
	int nTimeTopLeftY;											/*!< ʱ���y���꣨0-575��  */
	int nNameTopLeftX;											/*!< ���Ƶ�x���꣨0-703��  */
	int nNameTopLeftY;											/*!< ���Ƶ�y���꣨0-575��  */

} HY_DVR_OSD_CFG, *LPHY_DVR_OSD_CFG;

/*!
*  @struct	tagHY_DVR_OSD_CFG
*  @brief	ͼ������ṹ
 */
typedef struct tagHY_DVR_PIC_CFG
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	HY_DVR_WORKMODE struWorkMode;								/*!< ����ģʽ(ֻ��) */
	HY_DVR_OSD_CFG struOsd[DVR_MAX_VIDEOIN_NUM];				/*!< OSD���� */
	HY_DVR_ALIAS_CFG struChName[DVR_MAX_VIDEOIN_NUM];			/*!< ͨ���������� */
	HY_DVR_CHROMA struChroma[DVR_MAX_VIDEOIN_NUM];				/*!< ɫ������ */
	HY_DVR_VILOST struViLost[DVR_MAX_VIDEOIN_NUM];				/*!< �źŶ�ʧ���� */
	HY_DVR_MOTION struMotion[DVR_MAX_VIDEOIN_NUM];				/*!< �ƶ���� */
	HY_DVR_MOSAIC struMosaic[DVR_MAX_VIDEOIN_NUM];				/*!< ������ */
	HY_DVR_ALIAS_CFG_1 struChName_1[DVR_MAX_VIDEOIN_NUM];		/*!< ͨ����������(Unicode) */

} HY_DVR_PIC_CFG, *LPHY_DVR_PIC_CFG;

/** @brief ͼ��������Ϣ����																	 */
#define PIC_CFG_LEN   sizeof (HY_DVR_PIC_CFG)
/////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////

/* NXP8850 Image Sensor Processing������Ϣ: ���ֽ��� ��De-Noise��*/
typedef struct tagHY_DVR_ISP_COMMON
{
	int bValid;					//! ���ṹ���Ƿ���Ч��=0��ʾ��Ч

	/*
	   ����ģ������ :
	   ���壺 ͨ�����������Ĳ�ͬ���в�ͬ�����ű��ĵ���
	   0    ��ͨ 
	   1    ���� 
	   2 ���ڵ����� 
	   3 ����
	   4 �����
	   5 �Զ���
	   6��7 ����
	 */
	int nWorkMode;

	/*
	   ͼ����ɫ ��Video Color��
	   0    �ڰ�
	   1    ��ɫ  
	 */
	int nVideoColor;

	/*
	   ͼ���� (Video orientation)
	   0    ����
	   1    ��ת      
	   2    ����
	   3    ��ת+ ����
	 */
	int nVideoOrientation;

	/*
	ǰ������Ƶ��
	0    50Hz
	1    60Hz
	*/
	int nInputFrequency;

} HY_DVR_ISP_COMMON, *LPHY_DVR_ISP_COMMON;

/* NXP8850 Image Sensor Processing������Ϣ: AE Mode ����*/
typedef struct tagHY_DVR_AE_MODE
{
	int bValid;					//! ���ṹ���Ƿ���Ч��=0��ʾ��Ч

	int nMode;					//AEģʽ��0-�Զ� 1-���� 2-�ֶ�

}HY_DVR_AE_MODE, *LPHY_DVR_AE_MODE;

/* NXP8850 Image Sensor Processing������Ϣ: AE Window ����*/
typedef struct tagHY_DVR_AEWINDOW_CFG
{
	int bValid;					//! ���ṹ���Ƿ���Ч��=0��ʾ��Ч

	//����(on /off)
	int bOpen;

	//X (0-4095) ��Ҫʶ�����Ŀ�ȣ���������720p,����1280
	int nX;

	//Y (0-4095) ��Ҫʶ�������Ч���ظ߶�
	int nY;

	//width (1-4095) ��Ҫʶ�����Ŀ��
	int nWidth;

	//height(1-4095) ��Ҫʶ�������Ч���ظ߶�
	int nHeight;

	//Weighting (1X �� 8X��ѡ) ����0-7
	int nWeighting;
	
} HY_DVR_AEWINDOW_CFG, *LPHY_DVR_AEWINDOW_CFG;

/* NXP8850 Image Sensor Processing������Ϣ: �ع����*/
typedef struct tagHY_DVR_EXPOSAL_CFG
{
	int bValid;					//! ���ṹ���Ƿ���Ч��=0��ʾ��Ч

	/*
		��ͷ��Ȧ��(Lens Type)
		�ر��Զ��Զ�  ����������Ȧ   �ֶ���Ȧ
	*/
	int bLensType;

	/*
		Ŀ������  (Target Lumiance)	0-255
	*/
	int nTargetLumiance;

	/*
		ƫ�� (Offset)	0-255
	*/
	int nOffset;

	/*
		�����ٶ�  (Shutter Speed)
		��С�ٶȣ�0��1/2
		����ٶȣ�1/120��1
		�ٶȿ�ѡ
		0,1/120,1/60,1/30,1/15,1/8,1/4,1/2,1 
	*/
	int nMinShutterSpeed;
	int nMaxShutterSpeed;

	/*
		����ϵ�� (Gain)
		��С���� 1x ~ 16x 
		������� 2x ~ 32x
	*/
	int nMinAutoGain;
	int nMaxAutoGain;
	
} HY_DVR_EXPOSAL_CFG, *LPHY_DVR_EXPOSAL_CFG;

/* NXP8850 Image Sensor Processing������Ϣ: ��ƽ�� (White Balance)*/
typedef struct tagHY_DVR_WHITEBALANCE_CFG
{
	int bValid;					//! ���ṹ���Ƿ���Ч��=0��ʾ��Ч

	/*
		1 �Զ�
		2 �ֶ��� �ֶ� ��Ҫ�޸� RED Gain (0-255),Blue Gain(0-255)
		3 ����
		4 ̫��
		5 ����
		6 ���ӫ���
	*/
	int bWorkMode;

	int nRedGain[DVR_MAX_ISP_WHITEBALANCE];

	int nBlueGain[DVR_MAX_ISP_WHITEBALANCE];

} HY_DVR_WHITEBALANCE_CFG, *LPHY_DVR_WHITEBALANCE_CFG;

/* NXP8850 Image Sensor Processing������Ϣ: ���ֽ��� ��De-Noise��*/
typedef struct tagHY_DVR_DENOISE_CFG
{
	int bValid;					//! ���ṹ���Ƿ���Ч��=0��ʾ��Ч

	/*
		�ر�
		������ Y  Strength ��0-255��
				   Cb strength (0-255)
				   Cr strength (0-255)
	*/
	int bWorkMode;

	int nYStrength;

	int nCbStrength;

	int nCrStrength;

} HY_DVR_DENOISE_CFG, *LPHY_DVR_DENOISE_CFG;

/* NXP8850 Image Sensor Processing������Ϣ*/
typedef struct tagHY_DVR_ISP_TEMPLATE
{
	int bValid;					//! ���ṹ���Ƿ���Ч��=0��ʾ��Ч

	/*
	AE ģʽ��Ϊ�ֶ�ģʽʱ��AE Window�������ò�����Ч��
	*/
	HY_DVR_AE_MODE struAEMode;

	/*
		AE Window ����,�ֳ�6��Window,�ֱ��� 1 -6 
	*/
	HY_DVR_AEWINDOW_CFG struAEWindow[DVR_MAX_ISP_AEWINDOW];

	/*
		�ع����
	*/
	HY_DVR_EXPOSAL_CFG struExposal;
		
	/*
		��ƽ�� (White Balance)
	*/
	HY_DVR_WHITEBALANCE_CFG struWhiteBalance;

	/*
		���ֽ��� ��De-Noise��
	*/
	HY_DVR_DENOISE_CFG struDeNoise;
}
HY_DVR_ISP_TEMPLATE, *LPHY_DVR_ISP_TEMPLATE;

/* NXP8850 Image Sensor Processing������Ϣ*/
typedef struct tagHY_DVR_NXP8850ISP_CFG
{
	int bValid;					//! ���ṹ���Ƿ���Ч��=0��ʾ��Ч

	//ISP�������ò���
	HY_DVR_ISP_COMMON struCommon;

	//ISP����ģ��
	HY_DVR_ISP_TEMPLATE struTemplate[DVR_MAX_ISP_TEMPLATE];

} HY_DVR_NXP8850ISP_CFG, *LPHY_DVR_NXP8850ISP_CFG;

#define NXP8850ISP_CFG_LEN		(sizeof (HY_DVR_NXP8850ISP_CFG))
/////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////
//��������
#define   DVR_MAX_STREAM_TYPE		2
#define   DVR_CAP_NORMAL_H264    	0x01
#define   DVR_CAP_ADVANCED_H264		0x02

#define   DVR_CAP_RESOLUTION_QCIF   0x01
#define   DVR_CAP_RESOLUTION_CIF    0x02
#define   DVR_CAP_RESOLUTION_D1   	0x04			//ʵʱ2CIF
#define   DVR_CAP_RESOLUTION_SD    	0x08			//ʵʱD1

#define DVR_CAP_RESOLUTION_4CIF_SIM   0x10		//��ʵʱD1
#define DVR_CAP_RESOLUTION_2CIF_SIM   0x20		//��ʵʱ2CIF

#define DVR_CAP_RESOLUTION_QVGA		0x40		//320*240
#define DVR_CAP_RESOLUTION_VGA			0x80		//640*480
#define DVR_CAP_RESOLUTION_SVGA		0x100		//800*600
#define DVR_CAP_RESOLUTION_XVGA		0x200		//1024*768
#define DVR_CAP_RESOLUTION_HD720		0x400	//1280*720
#define DVR_CAP_RESOLUTION_QuadVGA	0x800		//1280*960
#define DVR_CAP_RESOLUTION_SXGA		0x1000		//1280*1024
#define DVR_CAP_RESOLUTION_UXGA		0x2000		//1600*1200
#define DVR_CAP_RESOLUTION_HD1080		0x4000		//1920*1080

/*!
*  @struct	tagHY_DVR_COMPRESS_CAP
*  @brief	���������ṹ
 */
typedef struct tagHY_DVR_COMPRESS_CAP
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int nStreamFormatCap;										/*!< ֧�ֵ�������ʽ�� ����֧�ֵĸ�ʽ���Ľ��  */
	unsigned long dwResolutionCap[DVR_MAX_STREAM_TYPE];			/*!< ÿ�ֱ����ʽ��֧�ֵķֱ��ʸ�ʽ,֧�����еĸ�ʽ���Ľ��  */

} HY_DVR_COMPRESS_CAP, *LPHY_DVR_COMPRESS_CAP;

/*!
*  @struct	tagHY_DVR_COMPRESSION_INFO
*  @brief	�������ýṹ
 */
typedef struct tagHY_DVR_COMPRESSION_INFO
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int nVideoFrameRate;										/*!< ֡�� 1-20��ffΪȫ֡�� */
	int nVideoBitrateH;											/*!< ��������,��λKbit/s */
	int nVideoBitrateL;											/*!< ��������,��λKbit/s */
	int nQuotiety;												/*!< ����ϵ��:0-6 */
	int nResolution;											/*!< �ֱ���0-CIF, 1-D1 */
	int nStreamType;											/*!< �������� 0-��Ƶ�� 1-������ */
	int nPicQuality;											/*!< ¼������ 0-������ 1-��׼ 2-�� 3-�Զ��� */
	int nBitrateType;											/*!< �������� 0-�������� 1-���� 2-�޶����� */

} HY_DVR_COMPRESSION_INFO, *LPHY_DVR_COMPRESSION_INFO;

/*!
*  @struct	tagHY_DVR_AUX_COMPRESSION_INFO
*  @brief	��������������ṹ
 */
typedef struct tagHY_DVR_AUX_COMPRESSION_INFO
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int bEnalbe;												/*!< �Ƿ�����������  */
	int nVideoFrameRate;										/*!< ֡�� 1-20��ffΪȫ֡�� */
	int nVideoBitrate;											/*!< ����:32Kbin/s,48Kbit/s,64Kbit/s,128Kbit/s,256Kbit/s,512Kbit/s */

} HY_DVR_AUX_COMPRESSION_INFO, *LPHY_DVR_AUX_COMPRESSION_INFO;

/*!
*  @struct	tagHY_DVR_COMPRESSION_CHANNEL
*  @brief	ͨ����������ṹ
 */
typedef struct tagHY_DVR_COMPRESSION_CHANNEL
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int nDelayRecordTime;										/*!< ¼���ӳ�ʱ��:10s��30s���Զ��壨10s-300s�� */
	int nPreRecordTime;											/*!< Ԥ¼ʱ��:0��ʾ���Ԥ¼ʱ�䡢5�롢10�� */
	HY_DVR_COMPRESS_CAP struCompressCap;						/*!< ѹ��������ֻ����  */
	HY_DVR_AUX_COMPRESSION_INFO struNetPara;					/*!< ������  */
	HY_DVR_COMPRESSION_INFO struRecordPara[3];					/*!< 0��������,1�¼�¼��,2�ֶ�¼��  */

} HY_DVR_COMPRESSION_CHANNEL, *LPHY_DVR_COMPRESSION_CHANNEL;

/*!
*  @struct	tagHY_DVR_HC_RESMODE
*  @brief	HC���ͱ������Դ����ģʽ
*/
typedef struct tagHY_DVR_HC_RESMODE
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	//�ýṹ��ֻ��HC��HS��������Ч

	/*  ����ģʽȡֵ��ΧΪ(0 - 2)
	16·����: 
	ģʽ0ʱ��ϵͳ֧��16·ʵʱCIF���ʵʱ2CIF��D1��ʽ�����
	ģʽ1ʱ��ϵͳ֧��8·ʵʱ2CIF ��8·ʵʱCIF ��⣬4·2CIFʵʱ����
	ģʽ2ʱ��ϵͳ֧��4·ʵʱD1 ��12·ʵʱCIF���룬1·D1ʵʱ����
	8·����: 
	ģʽ0ʱ��ϵͳ֧��8·ʵʱCIF���ʵʱ2CIF��D1��ʽ�����
	ģʽ1ʱ��ϵͳ֧��2·ʵʱD1 ��6·ʵʱCIF ��⣬4·D1ʵʱ����
	ģʽ2ʱ��ϵͳ֧��6·ʵʱD1 ��2·ʵʱCIF���룬1·D1ʵʱ����
	*/
	int nMode;

	DWORD dwChMask;												/*!< ͨ�����룬��0λΪ1��ʾͨ��1֧��2CIF��D1��ʽ���룬�������� */

} HY_DVR_HC_RESMODE, *LPHY_DVR_HC_RESMODE;

/////////////////////////////////////////////////////////////////////////////////////////////////
/*!
*  @struct	tagHY_DVR_VGA_NET_CFG
*  @brief	VGA�������ṹ
*/
typedef struct tagHY_DVR_HD_NET_CFG
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	HY_DVR_COMPRESSION_INFO struVGANetPara[DVR_MAX_VIDEOIN_NUM];				/*!< VGA������ */

}HY_DVR_VGA_NET_CFG, *LPHY_DVR_VGA_NET_CFG;

/*!
*  @struct	tagHY_DVR_COMPRESSION_CFG
*  @brief	��������ṹ
*/
typedef struct tagHY_DVR_COMPRESSION_CFG
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	HY_DVR_WORKMODE struWorkMode;											/*!< ����ģʽ(ֻ��) */
	HY_DVR_COMPRESSION_CHANNEL struCompressChannel[DVR_MAX_VIDEOIN_NUM];	/*!< ��ͨ��������� */
	HY_DVR_VGA_NET_CFG	struVGANet;											/*!< ��ͨ��VGA������ */

} HY_DVR_COMPRESSION_CFG, *LPHY_DVR_COMPRESSION_CFG;

/** @brief �������ýṹ�峤��																	 */
#define COMPRESS_CFG_LEN   sizeof (HY_DVR_COMPRESSION_CFG)
/////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////
/*!
*  @struct	tagHY_DVR_RECORD_CTRLSTATE
*  @brief	¼�����״̬
*/
typedef struct tagHY_DVR_RECORD_CTRLSTATE
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	unsigned int uRecordMode[DVR_MAX_VIDEOIN_NUM];							/*!< 0��ʾ�ֶ�¼��,1��ʾ�Զ�¼��,2��ʾ�ر�¼�� */

} HY_DVR_RECORD_CTRLSTATE, *LPHY_DVR_RECORD_CTRLSTATE;

/*!
*  @struct	tagHY_DVR_RECORD_STREAM
*  @brief	¼������ѡ��
*/
typedef struct tagHY_DVR_RECORD_STREAM
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��=0��ʾ��Ч */

	unsigned int uStreamIndex[DVR_MAX_VIDEOIN_NUM];							/*!< 0��ʾ������,1��ʾ������(CIF),2��ʾ����������(VGA) */

} HY_DVR_RECORD_STREAM, *LPHY_DVR_RECORD_STREAM;

/*!
*  @struct	tagHY_DVR_RECORD_SCHED
*  @brief	¼��ƻ��ṹ
 */
typedef struct tagHY_DVR_RECORD_SCHED
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	HY_DVR_SCHEDTIME struRecordTime[DVR_MAX_VIDEOIN_NUM];					/*!< ¼��ʱ��ƻ� */
	HY_DVR_RECORD_CTRLSTATE struRecordCtlState;								/*!< ¼�����״̬ */
	HY_DVR_RECORD_STREAM struRecordStream;									/*!< ¼������ */

} HY_DVR_RECORD_SCHED, *LPHY_DVR_RECORD_SCHED;

/** @brief ¼��ƻ��ṹ�峤��																	 */
#define RECORD_SCHED_LEN sizeof(HY_DVR_RECORD_SCHED)
/////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_TIME
*  @brief	����ϵͳʱ�����
 */
typedef struct tagHY_DVR_TIME
{
	int nYear;																/*!< �� */
	int nMonth;																/*!< �� */
	int nDay;																/*!< �� */
	int nHour;																/*!< ʱ */
	int nMinute;															/*!< �� */
	int nSecond;															/*!< �� */

} HY_DVR_TIME, *LPHY_DVR_TIME;

/** @brief ����ϵͳʱ��ṹ�峤��																 */
#define TIME_CFG_LEN sizeof(HY_DVR_TIME)
/////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_PTZPRO
*  @brief	��̨Э����Ϣ
 */
typedef struct tagHY_DVR_PTZPRO
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int nUseable;															/*!< PTZЭ���״̬��0��δ��װ 1���Ѱ�װ��  */
	int bSystem;															/*!< PTZЭ���״̬��0����ϵͳ���еģ���ɾ�� 1��ϵͳ���еģ�����ɾ����  */
	char szPTZName[DVR_MAX_PTZPRONAME_LEN];									/*!< PTZЭ������  */

} HY_DVR_PTZPRO, *LPHY_DVR_PTZPRO;

/*!
*  @struct	tagHY_DVR_PTZPRO_CFG
*  @brief	��̨Э�������Ϣ
 */
typedef struct tagHY_DVR_PTZPRO_CFG
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int nPtzCount;															/*!< ϵͳ֧��PTZЭ��ĸ���  */
	HY_DVR_PTZPRO struPTZProtocol[DVR_MAX_PTZPRO_NUM];						/*!< ϵͳPTZ  */

} HY_DVR_PTZPRO_CFG, *LPHY_DVR_PTZPRO_CFG;

/** @brief ��̨Э�����ṹ�峤��																 */
#define PTZPRO_CFG_LEN sizeof(HY_DVR_PTZPRO_CFG)
/////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_PTZ
*  @brief	��̨��Ϣ
 */
typedef struct tagHY_DVR_PTZ
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	unsigned char bySetPreset[DVR_MAX_PRESET_NUM];							/*!< Ԥ�õ��Ƿ�����,0-û������,1-����  */
	unsigned char bySetCruise[DVR_MAX_PRESET_NUM];							/*!< Ѳ���Ƿ�����: 0-û������,1-����  */
	unsigned char bySetTrack[DVR_MAX_PRESET_NUM];							/*!< �켣�Ƿ�����,0-û������,1-����  */

} HY_DVR_PTZ, *LPHY_DVR_PTZ;

/*!
*  @struct	tagHY_DVR_SERIAL
*  @brief	��������
 */
typedef struct tagHY_DVR_SERIAL
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int nBaudRate;															/*!< ������(bps)��1200��2400��4800��9600 */
	int nDataBit;															/*!< ֻ�� */
	int nStopBit;															/*!< ֻ�� */
	int nParity;															/*!< ֻ�� */
	int nFlowcontrol;														/*!< ֻ�� */
	int nDecoderAddress;													/*!< ��������ַ:0 - 255  */
	int nComType;															/*!< 0��COM1 RS232��1��COM2 RS485  */

} HY_DVR_SERIAL, *LPHY_DVR_SERIAL;

/*!
*  @struct	tagHY_DVR_DECODER_CHANNEL
*  @brief	����ͨ������
 */
typedef struct tagHY_DVR_DECODER_CHANNEL
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	char szPTZName[DVR_MAX_PTZPRONAME_LEN];									/*!< PTZЭ������  */
	HY_DVR_SERIAL struSerial;												/*!< �������� */

} HY_DVR_DECODER_CHANNEL, *LPHY_DVR_DECODER_CHANNEL;

/*!
*  @struct	tagHY_DVR_PTZ_ELCTRONIC_SONY
*  @brief	sony�ĵ���ptz��о����
*/
typedef struct  tagHY_DVR_PTZ_ELCTRONIC_SONY
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int nDigitZoom;															/*!< ���ֱ䱶 (0-�� 1-��)			                        */
	int nLowLum;															/*!< ���ն� (0-�� 1-��)										*/
	int nBackLight;															/*!< ���ⲹ�� (0-�� 1-��)									*/
	int nAutoShutter;														/*!< �Զ����� (0-�ֶ� 1-�Զ�)			                    */
	int nWhiteBalance;														/*!< ��ƽ�� (0-�ֶ� 1-�Զ� 2-���� 3-���� 4-ATW 5-ONE PUSH)	*/
	int nRedGain;															/*!< ������ (0~255)											*/
	int nBlueGain;															/*!< ������ (0~255)											*/
	int nAcutance;															/*!< ��� (0~15)											*/
	int nExpMode;															/*!< �ع�ģʽ (0-�Զ� 1-�ֶ� 2-�������� 3-��Ȧ����)			*/
	int nShutterSpeed;														/*!< �����ٶ� (0~15)				                        */
	int nIrisSpeed;															/*!< ��Ȧ (0-�ֶ� 1-�Զ���									*/
	int nWideDyn;															/*!< ��̬ (0-�� 1-��)										*/
	int n3DFilter;															/*!< 3D����	(0-�� 1-��)										*/
	int nMirror;															/*!< ����  (0-�� 1-��)										*/
	int nReverse;															/*!< ��ת  (0-�� 1-��)										*/
	int nInputFrequency;													/*!< ����Ƶ��  (0-50Hz 1-60Hz)                              */
	int nLongRestrict;														/*!< �������٣�1-����0-�أ�									*/
	int nNorthSet;															/*!< ��λ�趨��1-�趨��										*/

} HY_DVR_PTZ_ELCTRONIC_SONY, *LPHY_DVR_PTZ_ELCTRONIC_SONY;

/*!
*  @struct	tagHY_DVR_PTZ_ELCTRONIC_CHANNEL
*  @brief	����ͨ���ĵ���ptz����
*/
typedef struct  tagHY_DVR_PTZ_ELCTRONIC_CHANNEL
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	HY_DVR_PTZ_ELCTRONIC_SONY struPtzElcSony;								/*!< SONY����PTZ��о���� */

} HY_DVR_PTZ_ELCTRONIC_CHANNEL, *LPHY_DVR_PTZ_ELCTRONIC_CHANNEL;

/*!
*  @struct	tagHY_DVR_PTZ_ELCTRONIC
*  @brief	����ͨ���ĵ���ptz����
*/
typedef struct  tagHY_DVR_PTZ_ELCTRONIC
{
	int bValid;					//! ���ṹ���Ƿ���Ч��=0��ʾ��Ч

	HY_DVR_PTZ_ELCTRONIC_CHANNEL   struPtzElcChannel[DVR_MAX_PTZ_NUM];

} HY_DVR_PTZ_ELCTRONIC, *LPHY_DVR_PTZ_ELCTRONIC;

//��̨��������
/*!
*  @struct	tagHY_DVR_PTZACTION
*  @brief	��̨��������
*/
typedef struct tagHY_DVR_PTZACTION
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int nUseable;															/*!< �Ƿ������������� */
	int nCycle;																/*!< ��������������, 0��ʾ���� */
	int nAction;															/*!< �������� 0��ʾԤ�õ� 1��ʾѲ�� 2��ʾ�켣 3��ʾ�Զ�ɨ�� */
	int nIndex;																/*!< ������(Ԥ�õ��,Ѳ����,�켣��,�Զ�ɨ����·��) */

} HY_DVR_PTZACTION, *LPHY_DVR_PTZACTION;

/*!
*  @struct	tagHY_DVR_PTZACTION
*  @brief	��̨��������
*/
typedef struct tagHY_DVR_PTZACTION_CFG
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	HY_DVR_PTZACTION struPTZAction[DVR_MAX_PTZ_NUM];						/*!< ��̨���� */

} HY_DVR_PTZACTION_CFG, *LPHY_DVR_PTZACTION_CFG;

/*!
*  @struct	tagHY_DVR_DECODER_CFG
*  @brief	�豸��������
 */
typedef struct tagHY_DVR_DECODER_CFG
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	HY_DVR_DECODER_CHANNEL struDecoder[DVR_MAX_PTZ_NUM];					/*!< ������ͨ������ */
	HY_DVR_PTZACTION_CFG	struPtzAction;									/*!< ��ͨ����̨�������� */
	HY_DVR_PTZ_ELCTRONIC	struPtzElc;										/*!< ����ptz���� */

} HY_DVR_DECODER_CFG, *LPHY_DVR_DECODER_CFG;

/** @brief �豸�������ýṹ�峤��																 */
#define  DECODER_CFG_LEN  sizeof(HY_DVR_DECODER_CFG)
///////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_ALARMIN_CHANNEL
*  @brief	��ͨ��������������
 */
typedef struct tagHY_DVR_ALARMIN_CHANNEL
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int nAlarmInType;														/*!< ����������,0������,1������  */
	HY_DVR_HANDLEEXCEPTION struHandleType;									/*!< ����ʽ  */
	HY_DVR_SCHEDTIME struSchedTime;											/*<! �������벼��ʱ�� */

} HY_DVR_ALARMIN_CHANNEL, *LPHY_DVR_ALARMIN_CHANNEL;

/*!
*  @struct	tagHY_DVR_ALARMOUT_CHANNEL
*  @brief	��ͨ�������������
 */
typedef struct tagHY_DVR_ALARMOUT_CHANNEL
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int nAlarmOutDelay;														/*!< �������ʱ��(0Ϊ���ޣ���Ҫ�ֶ��ر�)  */
	HY_DVR_SCHEDTIME struSchedTime;											/*!< �����������ʱ�� */

} HY_DVR_ALARMOUT_CHANNEL, *LPHY_DVR_ALARMOUT_CHANNEL;

/*!
*  @struct	tagHY_DVR_ALARM_CAPTURE_PIC
*  @brief	��������ץͼ����
 */
typedef struct tagHY_DVR_ALARM_CAPTURE_PIC
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int nCapPicCount;														/*!< ������������ */
	int nCapPicIntervalTime;												/*!< �������ռ��ʱ�� */

} HY_DVR_ALARM_CAPTURE_PIC, *LPHY_DVR_ALARM_CAPTURE_PIC;

/*!
*  @struct	tagHY_DVR_SYSTEM_EXCEPTION
*  @brief	ϵͳ�쳣���
 */
typedef struct tagHY_DVR_SYSTEM_EXCEPTION
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int bEnable;															/*!< �Ƿ�������� */
	int nCheckTime;															/*!< ���ʱ��������λΪ�루Ŀǰ��֧�֣� */
	HY_DVR_HANDLEEXCEPTION struHandleType;									/*!< ��������ʽ  */

} HY_DVR_SYSTEM_EXCEPTION, *LPHY_DVR_SYSTEM_EXCEPTION;

/*!
*  @struct	tagHY_DVR_ALARM_CFG
*  @brief	��������
 */
typedef struct tagHY_DVR_ALARM_CFG
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	HY_DVR_WORKMODE struWorkMode;											/*!< ����ģʽ(ֻ��) */
	HY_DVR_ALARM_CAPTURE_PIC struCapPic;									/*!< �������� */
	HY_DVR_ALARMIN_CHANNEL struAlarmIn[DVR_MAX_ALARMIN_NUM];				/*!< ������������ */
	HY_DVR_ALARMOUT_CHANNEL struAlarmOut[DVR_MAX_ALARMOUT_NUM];				/*!< ������������ */
	HY_DVR_SYSTEM_EXCEPTION struSystemException[DVR_MAX_EXCEPTION_NUM];		/*!< ϵͳ�쳣����0-Ӳ�̹���,1-IP��ͻ,2-�Ƿ�����,3-���߶�,4-������,5-�����쳣 */
	HY_DVR_ALIAS_CFG struAlarmInAlias[DVR_MAX_ALARMIN_NUM];					/*!< ��������ͨ������ */
	HY_DVR_ALIAS_CFG struAlarmOutAlias[DVR_MAX_ALARMOUT_NUM];				/*!< �������ͨ������ */
	HY_DVR_ALIAS_CFG_1 struAlarmInAlias_1[DVR_MAX_ALARMIN_NUM];				/*!< ��������ͨ������(Unicode) */
	HY_DVR_ALIAS_CFG_1 struAlarmOutAlias_1[DVR_MAX_ALARMOUT_NUM];			/*!< �������ͨ������(Unicode) */

} HY_DVR_ALARM_CFG, *LPHY_DVR_ALARM_CFG;

/** @brief �������ýṹ�峤��																 */
#define ALARM_CFG_LEN   sizeof (HY_DVR_ALARM_CFG)
//////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_VO_CFG
*  @brief	��ʾ����
 */
typedef struct tagHY_DVR_VO_CFG
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int nScreenSaveTime;													/*!< ��Ļ����ʱ�䣺0��ʾ�Ӳ�������Ļ������60s-3600s��ʾ��Ļ����ʱ�䣩  */
	int nMenuAlphaValue;													/*!< �˵��뱳��ͼ��Աȶȣ�0��ʾ��͸����4��ʾ4:1��8��ʾ3:1  */

} HY_DVR_VO_CFG, *LPHY_DVR_VO_CFG;

/** @brief ��ʾ�����ṹ�峤��																 */
#define VO_CFG_LEN   sizeof (HY_DVR_VO_CFG)
/////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_USER_ENABLE
*  @brief	�û�ʹ����Ϣ
 */
typedef struct tagHY_DVR_USER_ENABLE
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int bEnable;															/*!< �Ƿ�����:0��ʾ���ã�1��ʾ���� */

} HY_DVR_USER_ENABLE, *LPHY_DVR_USER_ENABLE;

/*!
*  @struct	tagHY_DVR_USER_INFO
*  @brief	�û�������Ϣ
 */
typedef struct tagHY_DVR_USER_INFO
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	char szPassword[DVR_MAX_PASSWORD_LEN];									/*!< ����  */
	unsigned char byLimitMac[DVR_MAX_MAC_NUM_LEN];							/*!< ���Ʒ��������ַ  */
	char szLimitIP[DVR_MAX_IP_STR_LEN];										/*!< ���Ʒ���IP��ַ  */
	char szEmail[DVR_MAX_EMAIL_LEN];										/*!< Email��ַ */

} HY_DVR_USER_INFO, *LPHY_DVR_USER_INFO;

/*!
*  @struct	tagHY_DVR_USER_RIGHT
*  @brief	�û�Ȩ����Ϣ
 */
typedef struct tagHY_DVR_USER_RIGHT
{
	int bValid;								/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int nLocalRight[DVR_MAX_RIGHT_NUM];		/*!< ����Ȩ�ޣ�����0-����ϵͳ���ã�1-�ļ�����2-¼�񱸷ݣ�3-ϵͳ�رգ�4-�ʼ�֪ͨ */
	int nRemoteRight[DVR_MAX_RIGHT_NUM];	/*!< Զ��Ȩ�ޣ�����0-ϵͳ���ã�1-�����Խ���2-���������3-���������4-Զ��������5-�ر�ϵͳ */
	int nChannelRight[DVR_MAX_RIGHT_NUM];	/*!< ͨ��Ȩ�ޣ�����0-���ػطţ�1-����Ԥ����2-������̨���ƣ�3-�����ֶ�¼��4-Զ�̻طţ�5-Զ��Ԥ����6-Զ����̨���ƣ�7-Զ���ֶ�¼�� */

} HY_DVR_USER_RIGHT, *LPHY_DVR_USER_RIGHT;

/*!
*  @struct	tagHY_DVR_USER
*  @brief	�û���Ϣ
 */
typedef struct tagHY_DVR_USER
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	char szUserName[DVR_MAX_USERNAME_LEN];									/*!< �û��� ���16λ  */
	HY_DVR_USER_ENABLE struUserEnable;										/*!< �û�ʹ����Ϣ */
	HY_DVR_USER_INFO struUserInfo;											/*!< �û�������Ϣ */
	HY_DVR_USER_RIGHT struUserRight;										/*!< �û�Ȩ����Ϣ */

} HY_DVR_USER, *LPHY_DVR_USER;

/*!
*  @struct	tagHY_DVR_ONLINEUSER
*  @brief	�����û���Ϣ
*/
typedef struct tagHY_DVR_ONLINEUSER
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bRemote;															/*!< �Ƿ�ΪԶ���û�	*/
	int bConnect;															/*!< �Ƿ�������״̬ */
	DWORD dwUserID;															/*!< �û���� */
	DWORD dwProtocolID;														/*!< ��½Э�� */
	char szUserName[DVR_MAX_USERNAME_LEN];									/*!< �û��� */
	DWORD dwIPAddress;														/*!< ��½IP */
	HY_DVR_TIME struLoginTime;												/*!< ��½ʱ�� */
	DWORD dwBitrate;														/*!< �������� b/s */

}HY_DVR_ONLINEUSER, *LPHY_DVR_ONLINEUSER; 

/*!
*  @struct	tagHY_DVR_ONLINEUSER_CFG
*  @brief	�����û�����
*/
typedef struct tagHY_DVR_ONLINEUSER_CFG
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	HY_DVR_ONLINEUSER struOnlineUser[DVR_MAX_ONLINEUSER_NUM];				/*!< �����û��б� */

} HY_DVR_ONLINEUSER_CFG, *LPHY_DVR_ONLINEUSER_CFG;

/*!
*  @struct	tagHY_DVR_WHITEIP_ENABLE
*  @brief	������ʹ��
*/
typedef struct tagHY_DVR_WHITEIP_ENABLE
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bEnable;															/*!< �Ƿ�����IP������*/
} HY_DVR_WHITEIP_ENABLE, *LPHY_DVR_WHITEIP_ENABLE;

/*!
*  @struct	tagHY_DVR_WHITEIP
*  @brief	�������û���Ϣ
*/
typedef struct
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	DWORD dwWhiteIP;														/*!< ������IP��ַ */

} HY_DVR_WHITEIP, *LPHY_DVR_WHITEIP;

/*!
*  @struct	tagHY_DVR_USER_CFG
*  @brief	�û�������Ϣ
 */
typedef struct tagHY_DVR_USER_CFG
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	HY_DVR_WORKMODE struWorkMode;											/*!< ����ģʽ(ֻ��) */
	HY_DVR_USER struUser[DVR_MAX_USER_NUM];									/*!< �û���Ϣ */
	HY_DVR_ONLINEUSER_CFG struUserOnline;									/*!< �����û���Ϣ */
	HY_DVR_WHITEIP struWhiteIP[DVR_MAX_WHITEIP_NUM];						/*!< ��������Ϣ */
	HY_DVR_WHITEIP_ENABLE struWhiteIPEnable;								/*!< ������ʹ����Ϣ */

} HY_DVR_USER_CFG, *LPHY_DVR_USER_CFG;

/** @brief �û�������Ϣ�ṹ�峤��														 */
#define USER_CFG_LEN	sizeof(HY_DVR_USER_CFG)
/////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_DEVICE_INFO
*  @brief	�豸��Ϣ�ṹ(ֻ��)
 */
typedef struct tagHY_DVR_DEVICE_INFO
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	unsigned long dwBoardType;												/*!< ���ͱ�� */
	char szTypeName[DVR_MAX_VERSION_LEN];									/*!< �豸�������ƣ���HY-2016HC */
	unsigned long dwSerialNum;												/*!< ���к�  */
	char szHardwareVersion[DVR_MAX_VERSION_LEN];							/*!< Ӳ���汾 */
	char szSoftwareVersion[DVR_MAX_VERSION_LEN];							/*!< ����汾 */
	char szDspVersion[DVR_MAX_VERSION_LEN];									/*!< ����汾 */

	unsigned char byVideoInChannels;										/*!< ��Ƶ����·��  */
	unsigned char byAudioInChannels;										/*!< ��Ƶ����·��  */
	unsigned char byAlarmInChannels;										/*!< ��������·��  */
	unsigned char byAlarmOutChannels;										/*!< �������·��  */

	unsigned char byVGAChannels;											/*!< VGA�ӿڸ���  */

	unsigned char bySpotOutChannles;										/*!< SPOT���·��  */
	unsigned char byVoiceInChannels;										/*!< �����Խ�����·��  */

} HY_DVR_DEVICE_INFO, *LPHY_DVR_DEVICE_INFO;

/** @brief �豸��Ϣ�ṹ�峤��														 */
#define	DEVICE_INFO_LEN	sizeof(HY_DVR_DEVICE_INFO)
//////////////////////////////////////////////////////////////////////////////


///*!
//*  @struct	tagHY_DVR_DEVICE_OUTPUT_INDEX
//*  @brief	����豸���(ֻ��)
//*/
//typedef struct tagHY_DVR_DEVICE_OUTPUT_INDEX
//{
//	int bValid;															/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
//	
//	DWORD	dwDeviceType;												/*!< �豸����(0: ��Ч, 1: VGA, 2 :TV) */
//	DWORD	dwDeviceIndex;												/*!< �豸��� */
//
//} HY_DVR_DEVICE_OUTPUT_INDEX, *LPHY_DVR_DEVICE_OUTPUT_INDEX;
//
///*!
//*  @struct	tagHY_DVR_DEVICE_OUTPUT
//*  @brief	����豸��Ϣ(ֻ��)
//*/
//typedef struct tagHY_DVR_DEVICE_OUTPUT
//{
//	int bValid;															/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
//
//	HY_DVR_DEVICE_OUTPUT_INDEX cOutputDevice[MAX_DEVICE_OUTPUT];
//
//} HY_DVR_DEVICE_OUTPUT, *LPHY_DVR_DEVICE_OUTPUT;

//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_DST
*  @brief	��ʱ����Ϣ�ṹ
 */
typedef struct tagHY_DVR_DST
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int bEnableDST;															/*!< �Ƿ�������ʱ��:0��ʾ���ã�1��ʾ���� */
	HY_DVR_TIME struStart;													/*!< ��ʼʱ�䣬����Ч */
	HY_DVR_TIME struEnd;													/*!< ����ʱ�䣬����Ч */
	int nDSTBias;															/*!< ����ʱ�䣬����Ϊ��λ��������ʾ��ʱ��������ʾ��ǰ��ȡֵ��Χ60-3600 */

} HY_DVR_DST, *LPHY_DVR_DST;

/*!
*  @struct	tagHY_DVR_GUI
*  @brief	����ʱ���ʽ����
 */
typedef struct tagHY_DVR_GUI
{
	int bValid;					/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int nAutoLockScreenTime;	/*!< �Զ�����ʱ�䣺0��ʾ�Ӳ������� 60s-3600s��ʾ����ʱ��*/
	int nMenuLanguage;			/*!< ���ԣ�0(Default)-�������ģ�1-�������ģ�2-Ӣ�� */
	int nDateFormat;			/*!< ���ڸ�ʽ��0(Default)-YYYY-MM-DD W hh:mm:ss, 1-YYYY-MM-DD hh:mm:ss, 2-MM-DD-YYYY W hh:mm:ss, 3-MM-DD-YYYY hh:mm:ss */
	int nTimeFormat;			/*!< ʱ���ʽ��0-12Сʱ�ƣ�1-24Сʱ�� */

} HY_DVR_GUI, *LPHY_DVR_GUI;

/*!
*  @struct	tagHY_DVR_TIMEZONE
*  @brief	ʱ������
 */
typedef struct tagHY_DVR_TIMEZONE
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int nTimeZone;															/*!< ʱ��ʱ�� */

} HY_DVR_TIMEZONE, *LPHY_DVR_TIMEZONE;

/*!
*  @struct	tagHY_DVR_DVRID
*  @brief	DVRID����
 */
typedef struct tagHY_DVR_DVRID
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	int nDvrID;																/*!< DVR ID,����ң����  */

} HY_DVR_DVRID, *LPHY_DVR_DVRID;

/*!
*  @struct	tagHY_DVR_STANDARD
*  @brief	��Ƶ��ʽ����
 */
typedef struct tagHY_DVR_STANDARD
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int nVideoInStandard;													/*!< ��Ƶ������ʽ:1-NTSC,2-PAL,4-SECAM */
	int nVideoOutStandard;													/*!< ��Ƶ�����ʽ��ͨ����������ʽһ���� */

} HY_DVR_STANDARD, *LPHY_DVR_STANDARD;

/*!
*  @struct	tagHY_DVR_DEVICE_CFG
*  @brief	�豸�������ýṹ
 */
typedef struct tagHY_DVR_DEVICE_CFG
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	HY_DVR_DVRID struDvrID;													/*!< DVRID���� */

	HY_DVR_GUI struGUI;														/*!< ����ʱ���ʽ���� */

	HY_DVR_TIMEZONE struTimeZone;											/*!< ʱ������ */

	HY_DVR_DST struDST;														/*!< ��ʱ������ */

	HY_DVR_ALIAS_CFG struDvrAlias;											/*!< �豸�������� */

	HY_DVR_STANDARD	struStandard;											/*!< ��Ƶ��ʽ���� */

	HY_DVR_ALIAS_CFG_1 struDvrAlias_1;										/*!< �豸��������(Unicode) */

} HY_DVR_DEVICE_CFG, *LPHY_DVR_DEVICE_CFG;

/** @brief �豸�������ýṹ�峤��														 */
#define	DEVICE_CFG_LEN	sizeof(HY_DVR_DEVICE_CFG)
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_DISK_PARTITION
*  @brief	������Ϣ�ṹ��ֻ����
 */
typedef struct tagHY_DVR_DISK_PARTITION
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	char szDevNode[DVR_MAX_PARTITION_DEVNODE_LEN];							/*!< �豸�ڵ���, �� /dev/sda1 */
	unsigned long dwCapacity;												/*!< ������, MΪ��λ */
	unsigned long dwSpare;													/*!< ʣ������ */
	unsigned long dwStartCHS;												/*!< ������ʼ���� */
	unsigned long dwEndtCHS;												/*!< ������������ */

} HY_DVR_DISK_PARTITION, *LPHY_DVR_DISK_PARTITION;

/*!
*  @struct	tagHY_DVR_DISK_MARK
*  @brief	Ӳ�̱�ǣ�ֻ����
 */
typedef struct tagHY_DVR_DISK_MARK
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int nVerifyMark;														/*!< ��֤��(���øı�ʱ����֤���ͬ���ı�) */

} HY_DVR_DISK_MARK, *LPHY_DVR_DISK_MARK;

/** @brief Ӳ�̱�ǽṹ�峤��														 */
#define	DISK_MARK_LEN	sizeof(HY_DVR_DISK_MARK)

/*!
*  @struct	tagHY_DVR_DISK_TYPE
*  @brief	�洢�豸���ͣ�HD��SD��USB��IPSAN��NAS��
*/
typedef struct
{
	int bValid;					//! ���ṹ���Ƿ���Ч��=0��ʾ��Ч

	int nDiskType;				//! 0- unkonown��1-HDD��2-USB��4-CDROM��8-SD��16-IPSAN��32-NAS
}HY_DVR_DISK_TYPE, *LPHY_DVR_DISK_TYPE;

/*!
*  @struct	tagHY_DVR_DISK
*  @brief	Ӳ����Ϣ�ṹ��ֻ����
 */
typedef struct tagHY_DVR_DISK
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bEnable;															/*!< �Ƿ�װ�д�Ӳ��:0��ʾû�У�1��ʾ�� */

	HY_DVR_DISK_MARK struVerifyMark;										/*!< ��֤��(���øı�ʱ����֤���ͬ���ı�) */

	int nRestState;															/*!< Ӳ��״̬:0-������1-����д�룬2-�쳣��3-���� */
	int nWriteState;														/*!< Ӳ��״̬:0-û��д����0-����д�� */

	char szSerialNum[DVR_MAX_VERSION_LEN];									/*!< ���к� */
	char szTypeName[DVR_MAX_VERSION_LEN];									/*!< Ӳ������ */
	int nBusNum;															/*!< ����λ��,��SATA1 */

	unsigned long dwCapacity;												/*!< ����,MΪ��λ */
	int nPartitionCount;													/*!< �������� */

	HY_DVR_DISK_PARTITION struPartitionInfo[DVR_MAX_PARTITION_IN_HARDDISK];	/*!< ������Ϣ */

} HY_DVR_DISK, *LPHY_DVR_DISK;

/*!
*  @struct	tagHY_DVR_DISK_GROUP
*  @brief	������Ϣ�ṹ��ֻ����
 */
typedef struct tagHY_DVR_DISK_GROUP
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bEnable;															/*!< �Ƿ����ñ����� */
	int nGroupType;															/*!< ��������:0-��ͨ���飬1-�������飬2-�������飬3-�������� */
	int nBindChannelMask;													/*!< �󶨵�ͨ��:��λ��ǣ�����0λΪ1����ʾͨ��1��ѡ�У��Դ����� */
	int nDataKeepTime;														/*!< ���ݱ���ʱ��:0x80000000-һֱ���֣�24 * 3600-����1�죬2 * 24 * 3600-����2�죬7 * 24 * 3600-����7�죬����ֵ-��󱣳� */
	int nPartitionCount;													/*!< ����ӵķ������� */
	char szPartitionList[DVR_MAX_PARTITION_IN_DISKGROUP][DVR_MAX_PARTITION_DEVNODE_LEN];/*!< �豸�ڵ��б�,֧��32������ */

} HY_DVR_DISK_GROUP, *LPHY_DVR_DISK_GROUP;

/*!
*  @struct	tagHY_DVR_DISK_TYPE_CFG
*  @brief	�洢�豸��������
*/
typedef struct tagHY_DVR_DISK_TYPE_CFG
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	HY_DVR_DISK_TYPE struDiskType[DVR_MAX_HARDDISK_NUM];					/*!< �洢�豸���� */

}HY_DVR_DISK_TYPE_CFG, *LPHY_DVR_DISK_TYPE_CFG;

/*!
*  @struct	tagHY_DVR_STORAGE_CFG
*  @brief	�洢����ṹ
 */
typedef struct tagHY_DVR_STORAGE_CFG
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	HY_DVR_WORKMODE struWorkMode;											/*!< ����ģʽ(ֻ��) */
	HY_DVR_DISK struDisk[DVR_MAX_HARDDISK_NUM];								/*!< Ӳ����Ϣ��ֻ���� */
	HY_DVR_DISK_GROUP struDiskGroup[DVR_MAX_DISKGROUP_NUM];					/*!< ������Ϣ��ֻ���� */
	HY_DVR_DISK_TYPE_CFG struDiskType;										/*!< �洢�豸�������ã�ֻ���� */

} HY_DVR_STORAGE_CFG, *LPHY_DVR_STORAGE_CFG;

/** @brief �豸�洢����ṹ�峤��														 */
#define	STORAGE_CFG_LEN	sizeof(HY_DVR_STORAGE_CFG)
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
/*!
*	@struct tagHY_DVR_VGA_VIDEO_BITRATE
*	@brief	VGA����������
*/
typedef struct tagHY_DVR_VGA_VIDEO_BITRATE
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int nVGAVideoBitrate;													/*!< ���������ʣ���λkbit/s�� */

}HY_DVR_VGA_VIDEO_BITRATE, *LPHY_DVR_VGA_VIDEO_BITRATE;

/*!
*  @struct	tagHY_DVR_CHANNEL_STATE
*  @brief	�豸ͨ��״̬
 */
typedef struct tagHY_DVR_CHANNEL_STATE
{
	int bValid;																/*���ṹ���Ƿ���Ч����ʾ��Ч(��ϵͳû�и�ͨ��) */

	int nVideoBitrate;														/*!< ���������ʣ�128kbit/s-5120kbit/s�� */
	int nChildVideoBitrate;													/*!< CIF���������ʣ�32 48 64 128 256 512kbit/s�� */
	int bUseAuxVideoStream;													/*!< �Ƿ�������������0-�����ã�1-���� */

	int nRecordType;														/*!< ¼��״̬��0-��¼��1-����¼�����ͣ�2-��ͨ���ͣ�3-�ֶ�¼�����ͣ�4-�ƶ�¼�� */
	int bViLost;															/*!< �Ƿ�������Ƶ�źű���(0��ʾ���źţ�1��ʾ���ź�) */
	int bMotion;															/*!< �Ƿ����ƶ�����(�в�֧��) */

} HY_DVR_CHANNEL_STATE, *LPHY_DVR_CHANNEL_STATE;

/*!
*  @struct	tagHY_DVR_VGA_VIDEO_BITRATE_CFG
*  @brief	VGA��������������
*/
typedef struct tagHY_DVR_VGA_VIDEO_BITRATE_CFG
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	HY_DVR_VGA_VIDEO_BITRATE struVGABitrate[DVR_MAX_VIDEOIN_NUM];			/*!< VGA���������� */

}HY_DVR_VGA_VIDEO_BITRATE_CFG, *LPHY_DVR_VGA_VIDEO_BITRATE_CFG;

/*!
*  @struct	tagHY_DVR_DEVICE_STATE
*  @brief	�豸״̬��Ϣ
 */
typedef struct tagHY_DVR_DEVICE_STATE
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	HY_DVR_CHANNEL_STATE struChannelState[DVR_MAX_VIDEOIN_NUM];				/*!< ͨ��״̬ */
	HY_DVR_VGA_VIDEO_BITRATE_CFG struVGABitrate;							/*!< VGA�������������� */

} HY_DVR_DEVICE_STATE, *LPHY_DVR_DEVICE_STATE;

/** @brief �豸״̬�ṹ�峤��														 */
#define	DEVICE_STATE_LEN	sizeof(HY_DVR_DEVICE_STATE)
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_MAINTENANCE_COMMON
*  @brief	�豸�Զ�ά����������
 */
typedef struct tagHY_DVR_MAINTENANCE_COMMON
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int bEnable;															/*!< �Ƿ����� */
	int nMode;																/*!< ά��ģʽ:0-ÿ��,1-ÿ��,2-���� */
	int nWeekDayMask;														/*!< ����ģʽʱ����0λ��ʾ������,��1λ��ʾ����1,��ӦλΪ1��ʾ������Ч */
	HY_DVR_TIME struTime;													/*!< ����ģʽ����������ʱ����Ч������ģʽ��ʱ����Ч */

} HY_DVR_MAINTENANCE_COMMON, *LPHY_DVR_MAINTENANCE_COMMON;

/*!
*  @struct	tagHY_DVR_DEVICE_MAINTENANCE
*  @brief	�豸�Զ�ά��
 */
typedef struct tagHY_DVR_DEVICE_MAINTENANCE
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	HY_DVR_MAINTENANCE_COMMON struCommon;									/*!< �豸�Զ�ά���������� */

} HY_DVR_DEVICE_MAINTENANCE, *LPHY_DVR_DEVICE_MAINTENANCE;

/** @brief �豸�Զ�ά���ṹ�峤��														 */
#define	DEVICE_MAINTENANCE_LEN	sizeof(HY_DVR_DEVICE_MAINTENANCE)
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_DEVICE_CUSTOM
*  @brief	�豸���ܶ���
 */
typedef struct tagHY_DVR_DEVICE_CUSTOM
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	HY_DVR_WORKMODE struUser;												/*!< �߼��û�����ģʽ */

	HY_DVR_WORKMODE struAlarm;												/*!< �߼���������ģʽ */

	HY_DVR_WORKMODE struPic;												/*!< �߼�ͼ��������� */

	HY_DVR_WORKMODE struEmail;												/*!< Email�������� */

	HY_DVR_WORKMODE struRecord;												/*!< �߼�¼��������� */

	HY_DVR_WORKMODE struCMS;												/*!< ���Ĺ������������ */

	HY_DVR_WORKMODE struAMS;												/*!< �������������� */

	HY_DVR_WORKMODE struNTP;												/*!< NTP���������� */

	HY_DVR_WORKMODE struStorage;											/*!< �߼��洢���� */

	HY_DVR_WORKMODE struMaintenance;										/*!< �Զ�ά������ */

	HY_DVR_HC_RESMODE struHCResMode;										/*!< HC���ͱ������Դ����ģʽ */

} HY_DVR_DEVICE_CUSTOM, *LPHY_DVR_DEVICE_CUSTOM;

/** @brief �豸���ܶ��ƽṹ�峤��														 */
#define	DEVICE_CUSTOM_LEN	sizeof(HY_DVR_DEVICE_CUSTOM)
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_THRESHOLD
*  @brief	�澯��ֵ���ݲ�ʵ�֣�
*/
typedef struct tagHY_DVR_THRESHOLD
{
	int bValid;														/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	float fCPUUseRatio;												/*!< CPU������ */
	float fMemoryUseRatio;											/*!< �ڴ������� */
	float fDiskSpaceRatio;											/*!< Ӳ�������� */
	DWORD dwDiskSpaceBalance;										/*!< Ӳ��ʣ��ռ� */

}HY_DVR_THRESHOLD, *LPHY_DVR_THRESHOLD;

/*!
*  @struct	tagHY_DVR_DOWNLOAD_MODE
*  @brief	���ط�ʽ���ã���������NAT�����������֣��ݲ�ʵ�֣�
*/
typedef struct tagHY_DVR_DOWNLOAD_MODE
{
	int bValid;														/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */
	DWORD dwDownloadMode;											/*!< ���ط�ʽ�� 0-hxht, 1-STREAM_TCP */

}HY_DVR_DOWNLOAD_MODE, *LPHY_DVR_DOWNLOADMODE;

//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_NATSTATUS
*  @brief	NAT����
*/
typedef struct tagHY_DVR_NATSTATUS
{
	int bValid;														/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	DWORD dwIsNAT;													/*!< �Ƿ���NAT���棬0��ʾ���ں��棬1��ʾ��NAT���� */

}HY_DVR_NATSTATUS, *LPHY_DVR_NATSTATUS;


//////////////////////////////////////////////////////////////////////////////
/*
ѹ����ʽ ����ͨ���� �������   ��������    
G711U.HX      1        16        8000  
G711A.HX      1        16        8000  
G722.HX       1        16    8000��16000
*/

/*!
*  @struct	tagHY_DVR_VOICEPARAM
*  @brief	������������
*/
typedef struct tagHY_DVR_VOICEPARAM
{
	int bValid;														/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	char szAudioEncoder[DVR_COMMON_STRING_LEN];						/*!< ֧�ֵ����������ʽ�������ж�����Զ��Ÿ�����G711U.HX G711A.HX G722.HX */
	DWORD dwChannel;												/*!< ͨ���� */
	DWORD dwBitsPerSample;											/*!< ������� */
	DWORD dwSamplesPerSec;											/*!< ������ */

}HY_DVR_VOICEPARAM, *LPHY_DVR_VOICEPARAM;


//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_NET_CMS_STOREAGE
*  @brief	���Ĺ���������洢ע��������Ϣ
*/
typedef struct tagHY_DVR_NET_CMS_STOREAGE
{
	int bValid;														/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	char szManageHostAddress[DVR_MAX_DOMAINNAME_LEN];				/*!< Զ�̹���������ַ�����ȿ������� */

	unsigned short wManageHostPort;									/*!< Զ�̹��������˿� */

} HY_DVR_NET_CMS_STOREAGE, *LPHY_DVR_NET_CMS_STOREAGE;

//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_DEVICE_ID
*  @brief	ǰ���豸ID����ID����Hxht�������������ģ�
*/
typedef struct tagHY_DVR_DEVICE_ID
{
	int bValid;														/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	char szDeviceID[DVR_COMMON_STRING_LEN];							/*!< ǰ���豸ID */

} HY_DVR_DEVICE_ID, *LPHY_DVR_DEVICE_ID;

//////////////////////////////////////////////////////////////////////////////

typedef struct  
{
	int bValid;														/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	HY_DVR_NET_CMS_STOREAGE struCmsStorage;							/*!< ���Ĺ���������洢ע����Ϣ */
	HY_DVR_DEVICE_ID		struDeviceID;							/*!< ǰ���豸ID */
	HY_DVR_NATSTATUS		struNATStatus;							/*!< NAT״̬ */
	HY_DVR_VOICEPARAM		struVoiceParam;							/*!< �������в��� */

}HY_DVR_HXHT_CFG, *LPHY_DVR_HXHT_CFG;

//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_PROTOCOL_NAME
*  @brief	Э����������
*/
typedef struct tagHY_DVR_PROTOCOL_NAME
{
	int bValid;														/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	DWORD dwProtocolName;											/*!< Э�����ƣ�Э���ǰ�λ���úͶ�ȡ�ģ�����ֻ���ֻ�Э��ʱ����ֵΪ1��
																	ֻ�л��Ż�ͨЭ��ʱ����ֵΪ2������Э�鶼��ʱ����ֵΪ3��
																	��˽��Э���Ǳ�����صģ��������У� */
}HY_DVR_PROTOCOL_NAME, *LPHY_DVR_PROTOCOL_NAME;

//////////////////////////////////////////////////////////////////////////////
/** @brief ��ַ����(��������)															*/
#define HY_DVR_ADDRESS_LEN				(256)

/** @brief �û�������																	*/
#define HY_DVR_USERNAME_LEN				(32)

/** @brief �û����볤��																	*/
#define HY_DVR_USERPASS_LEN				(32)

/** @brief Ĭ�ϱ����ֶθ���																*/
#define HY_DVR_DEF_RESERVE_NUM			(3)

/*!
*  @struct	tagHY_DVR_USERLOGIN_INFO
*  @brief	�û���¼����
*/
typedef struct tagHY_DVR_USERLOGIN_INFO
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	char	sServerIP[HY_DVR_ADDRESS_LEN];						/*!< ��������IP��ַ							*/
	unsigned long	dwCommandPort;								/*!< ��¼���ӵ�����˿�						*/
	char	sUName[HY_DVR_USERNAME_LEN];						/*!< ��¼�û����û�����						*/
	char	sUPass[HY_DVR_USERPASS_LEN];						/*!< ��¼�û����û�����						*/
	unsigned long	dwReserve[HY_DVR_DEF_RESERVE_NUM];			/*!< ����									*/
}HY_DVR_USERLOGIN_INFO, *LPHY_DVR_USERLOGIN_INFO;

/*!
*  @struct	tagHY_DVR_SOURCE_DEVICE_INFO
*  @brief	Դ�豸��Ϣ
*/
typedef struct tagHY_DVR_SOURCE_DEVICE_INFO
{
	int bValid;													/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int						nEnable;							/*!< 0��ʾ�����ã�1��ʾ����			*/
	HY_DVR_USERLOGIN_INFO	cUserPara;							/*!< �û�����						*/
	unsigned long			dwVideoInNumber;					/*!< ��Ƶ������						*/
	unsigned long			dwReserve[HY_DVR_DEF_RESERVE_NUM];	/*!< ����							*/
}HY_DVR_SOURCE_DEVICE_INFO, *LPHY_DVR_SOURCE_DEVICE_INFO;

/*!
*  @struct	tagHY_DVR_SOURCE_DEVICE_INFO_CONFIG
*  @brief	Դ�豸����
*/
typedef struct tagHY_DVR_SOURCE_DEVICE_INFO_CONFIG
{
	int bValid;																/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	HY_DVR_SOURCE_DEVICE_INFO	cSourceDevice[MAX_SOURCE_DEVICE_NUMBER];	/*!< Դ�豸��Ϣ					*/
	unsigned long				dwReserve[HY_DVR_DEF_RESERVE_NUM];			/*!< ����				*/
}HY_DVR_SOURCE_DEVICE_INFO_CONFIG, *LPHY_DVR_SOURCE_DEVICE_INFO_CONFIG;


//////////////////////////////////////////////////////////////////////////////
//��ʾ�豸����
//��ȡ��ʾ�豸��Ϣ

/*!
*  @struct	tagHY_DVR_VGAPARA
*  @brief	VGA����
*/
typedef struct tagHY_DVR_VGAPARA
{
	int bValid;									/*!< ���ṹ���Ƿ���Ч��0��ʾ��Ч */

	int nResolution;							/*!< �ֱ��� ,����λ��ʾ */
	int nResolutionCap;							/*!< ����������ֻ������ֱ����й�,��λ��ʾ�������ھ�λΪ1��ʾ
												֧��9���� */
	unsigned long	dwDeviceIndex;				/*!< �豸��� */

}HY_DVR_VGAPARA, *LPHY_DVR_VGAPARA;

/*!
*  @struct	tagHY_DVR_VGAPARA_CFG
*  @brief	VGA��������
*/
typedef struct tagHY_DVR_VGAPARA_CFG
{
	int bValid;									/*!< 0��ʾ��Ч 1��ʾ��Ч */

	int nVGACount;								/*!< VGA Outʵ�ʸ��� */
	HY_DVR_VGAPARA struVga[MAX_VGA_NUM];

}HY_DVR_VGAPARA_CFG, *LPHY_DVR_VGAPARA_CFG;

/*!
*  @struct	tagHY_DVR_VOOUT
*  @brief	��Ƶ���
*/
typedef struct tagHY_DVR_VOOUT
{
	int bValid; 								/*!< 0��ʾ��Ч 1��ʾ��Ч */

	int byVideoFormat;							/*!< �����ʽ,0-PAL,1-NTSC */
	int wLeftffset;								/*!< ��Ƶ�����ƫ�� */
	int wRightffset;							/*!< ��Ƶ�����ƫ�� */
	int wTopffset;								/*!< ��Ƶ�����ƫ�� */
	int wBottomffset;							/*!< ��Ƶ�����ƫ�� */
	int dwResolutionCap;						/*!< ����������ֻ����*/
	unsigned long	dwDeviceIndex;				/*!< �豸��� */

}HY_DVR_VOOUT, *LPHY_DVR_VOOUT;

/*!
*  @struct	tagHY_DVR_VOOUT_CFG
*  @brief	��Ƶ�������
*/
typedef struct tagHY_DVR_VOOUT_CFG
{
	int bValid;									/*!< 0��ʾ��Ч 1��ʾ��Ч */
	int nTVCount;								/*!< TV Out ����*/
	HY_DVR_VOOUT struTv[MAX_TV_NUM];

}HY_DVR_VOOUT_CFG, *LPHY_DVR_VOOUT_CFG;

/*!
*  @struct	tagHY_DVR_DISPDEV_CFG
*  @brief	��������ʾ�豸��Ϣ
*/
typedef struct tagHY_DVR_DISPDEV_CFG
{
	int bValid; 								/*!< 0��ʾ��Ч 1��ʾ��Ч */

	HY_DVR_VGAPARA_CFG struVGA;					/*!< VGA���� */
	HY_DVR_VOOUT_CFG struTV;					/*!< TV���� */

} HY_DVR_DISPDEV_CFG,  * LPHY_DVR_DISPDEV_CFG;

//////////////////////////////////////////////////////////////////////////////

#endif
