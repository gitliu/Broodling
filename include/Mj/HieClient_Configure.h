#ifndef HIE_CLIENT_CONFIGURE_H

#define HIE_CLIENT_CONFIGURE_H

/*!
* @file
*  HieClient_Configure.h
* @brief
*  远程配置结构定义
*  远程配置管理，系统配置结构体定义
* @author
*  曹力
* @date
*  2009年8月10日
* @version
*  1.0.0
*/

/**************************************************************************
*                           板型定义                                     *
************************************************************************* */

//1500系列
/** @brief 4路 CIF嵌入式											                    			 */
#define	DVR_1500_4CIF		1

/** @brief 8路 CIF嵌入式											                    			 */
#define	DVR_1500_8CIF		2

/** @brief 12路 CIF嵌入式											                    			 */
#define	DVR_1500_12CIF		3

/** @brief 16路 CIF嵌入式											                    			 */
#define	DVR_1500_16CIF		4

/** @brief 4路 D1嵌入式															          			 */
#define	DVR_1500_4D1		5

/** @brief 8路 D1嵌入式															         			 */
#define	DVR_1500_8D1		6


//8550系列
/** @brief 4路 CIF嵌入式											                    			 */
#define	DVR_8550_4CIF		7

//1700系列
/** @brief 8路 1700 CIF嵌入式											                    		 */
#define	DVR_1700_8CIF		8

/** @brief 16路 1700 CIF嵌入式											                    		 */
#define	DVR_1700_16CIF		9

/** @brief 4路 1700 D1嵌入式											                    		 */
#define	DVR_1700_4D1		10

/** @brief 8路 1700 D1嵌入式											                    		 */
#define	DVR_1700_8D1		11

/** @brief 16路 1700 D1F嵌入式											                    		 */
#define	DVR_1700_16D1		12


/**************************************************************************
*                           常量定义                                     *
************************************************************************* */

/** @brief 最大视屏输入数											                    		 */
#define DVR_MAX_VIDEOIN_NUM				(16)

/** @brief 最大PTZ数											                    			 */
#define DVR_MAX_PTZ_NUM					(DVR_MAX_VIDEOIN_NUM)

/** @brief 最大视频解码器个数										                    		 */
#define DVR_MAX_VIDEOENC_NUM			(DVR_MAX_VIDEOIN_NUM)

/** @brief 最大报警输入数											                    		 */
#define DVR_MAX_ALARMIN_NUM				(16)

/** @brief 最大报警输出数											                    		 */
#define DVR_MAX_ALARMOUT_NUM			(8)

/** @brief 最大异常个数											                    			 */
#define DVR_MAX_EXCEPTION_NUM			(8)

/** @brief 最大视屏输出个数											                    		 */
#define DVR_MAX_VIDEOOUT_NUM			(8)

/** @brief 一星期天数															          		 */
#define DVR_MAX_DAYS					(7)

/** @brief 一天最大时间段（每5分钟一个时间段）						                    		 */
#define DVR_MAX_TIMESEGMENT				(24 * 60 / 5)

/** @brief 最大IP地址长度														          		 */
#define DVR_MAX_IP_STR_LEN				(16)

/** @brief 最大MAC地址长度														          		 */
#define DVR_MAX_MAC_STR_LEN				(18)

/** @brief MAC地址数字个数															          	 */
#define DVR_MAX_MAC_NUM_LEN				(6)

/** @brief 最大支持DDNS协议个数													          		 */
#define DVR_MAX_DDNSPRO_NUM				(32)

/** @brief 最大DDNS协议名称长度													          		 */
#define DVR_MAX_DDNSPRONAME_LEN			(128)

/** @brief 最大域名长度															          		 */
#define DVR_MAX_DOMAINNAME_LEN 			(256)

/** @brief 最大Email长度														          		 */
#define DVR_MAX_EMAIL_LEN				(256)

/** @brief 设备最大用户数														          		 */
#define DVR_MAX_USER_NUM 				(16)

/** @brief 最大用户名长度														          		 */
#define DVR_MAX_USERNAME_LEN 			(64)

/** @brief 最大密码长度															          		 */
#define DVR_MAX_PASSWORD_LEN 			(64)

/** @brief 最大权限个数															          		 */
#define DVR_MAX_RIGHT_NUM				(32)

/** @brief 最大在线用户数																		*/
#define DVR_MAX_ONLINEUSER_NUM			(16)

/** @brief IP白名单数																			*/
#define DVR_MAX_WHITEIP_NUM				(10)

/** @brief 最大预置点个数															       		 */
#define DVR_MAX_PRESET_NUM				(128)

/** @brief 移动侦测区域个数														          		 */
#define DVR_MAX_MOTIONSCOPE_NUM			(32)

/** @brief 最大色度单元个数											          		 */
#define DVR_MAX_PICSEC_NUM				(24)

/** @brief 最大马赛克区域											          		 */
#define DVR_MAX_VIDEOSHELTER_NUM		(8)

/** @brief 字体名长度												          		 */
#define DVR_MAX_FONTNAME_LEN			(32)

/** @brief 点阵通道名最大长度,含结束符								          		 */
#define DVR_MAX_CHANNELNAME_LEN			(20 + 1)

/** @brief PTZ协议名称长度															 */
#define DVR_MAX_PTZPRONAME_LEN			(48)

/** @brief PTZ协议个数(安装和未安装各256)											 */
#define DVR_MAX_PTZPRO_NUM				(512)

/** @brief 点阵宽度															    	 */
#define DVR_MAX_LATTICE_WIDTH			(24 * 10)

/** @brief 点阵高度													          		 */
#define DVR_MAX_LATTICE_HEIGHT			(24)

/** @brief 点阵总体大小												          		 */
#define DVR_MAX_LATTICE_BUFSIZE			(24 * 24 * 10 / 8)

/** @brief 设备节点名长度											          		 */
#define DVR_MAX_PARTITION_DEVNODE_LEN	(16)

/** @brief 单个硬盘中最大分区个数													 */
#define DVR_MAX_PARTITION_IN_HARDDISK	(15)

/** @brief 最大设备节点个数											          		 */
#define DVR_MAX_PARTITION_IN_DISKGROUP	(32)

/** @brief 最大硬盘个数												          		 */
#define DVR_MAX_HARDDISK_NUM 			(8)

/** @brief 最大硬盘组个数											          		 */
#define DVR_MAX_DISKGROUP_NUM 			(8)

/** @brief 最大支持分辨率个数										          		 */
#define DVR_MAX_VGARESOLVING_NUM		(16)

/** @brief 设备版本名称长度												          	 */
#define DVR_MAX_VERSION_LEN				(32)

/** @brief Hxht普通字符串长度														*/
#define DVR_COMMON_STRING_LEN			(32)

/** @brief 支持的协议库的最大个数													*/
#define DVR_MAX_SUPPORT_PROTOCOL_NUM	(32)

/** @brief WIFI热点名称最大长度														*/
#define DVR_MAX_SSID_LEN				(128)

/** @brief 可以识别的WIFI热点最大个数												 */
#define DVR_MAX_AP_NUM					(10)

/** @brief WIFI密钥最大长度															*/
#define DVR_MAX_WIFI_KEY_LEN			(128)

/** @brief 最大源设备个数															*/
#define MAX_SOURCE_DEVICE_NUMBER		(16)

/** @brief 最大输出设备个数															*/
#define MAX_DEVICE_OUTPUT				(16)

//支持最大VGA个数
#define MAX_VGA_NUM						(8)

//TV输出
#define MAX_TV_NUM						(8) 

/** @brief ISP 参数模版个数 */
#define DVR_MAX_ISP_TEMPLATE		(6)

/** @brief ISP 参数邋AEWindow 个数 */
#define DVR_MAX_ISP_AEWINDOW		(6)

/** @brief ISP 参数白平衡模版个数 */
#define DVR_MAX_ISP_WHITEBALANCE	(6)

/**************************************************************************
*								协议名称定义			                  *
**************************************************************************/
/** @brief 私有协议														*/
#define	PROTOCOL_PRIVATE				0

/** @brief 手机协议														*/
#define	PROTOCOL_TIDEMOBILE				1

/** @brief 互信互通协议													*/
#define	PROTOCOL_HXHT					(1<<1)

/** @brief xxx协议														*/
//#define PROTOCOL_XXX					(1<<2)

/**************************************************************************
*                             配置信息主、次类型定义                      *
************************************************************************* */

///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取网络参数												          	 */
#define HY_DVR_GET_NETCFG 					101

/** @brief 设置网络参数												          	 */
#define HY_DVR_SET_NETCFG 					102

//次类型
/** @brief 全部网络配置(HY_DVR_NET_CFG)								          	 */
#define NETCFG_ALL						 	0xFFFFFFFF

/** @brief Dhcp配置信息(HY_DVR_DHCP_CONF)										*/
#define NETCFG_DHCP_CONF					1

/** @brief Dhcp状态信息(HY_DVR_DHCP_STATE)							          	 */
#define NETCFG_DHCP_STATE					(1 << 1)

/** @brief Eth网络信息(HY_DVR_ETH_IF)								          	 */
#define NETCFG_ETH_IF						(1 << 2)

/** @brief PPPoE配置(HY_DVR_PPPOE_CONF)								          	 */
#define NETCFG_PPPOE_CONF					(1 << 3)

/** @brief PPPoE网络信息(HY_DVR_PPPOE_IF)							          	 */
#define NETCFG_PPPOE_IF						(1 << 4)

/** @brief DNS配置信息(HY_DVR_DNS_CONF)								          	 */
#define NETCFG_DNS_CONF						(1 << 5)

/** @brief DDNS配置信息(HY_DVR_DDNS_CONF)							          	 */
#define NETCFG_DDNS_CONF					(1 << 6)

/** @brief http配置(HY_DVR_HTTP_CONF)								          	 */
#define NETCFG_HTTP_CONF					(1 << 7)

/** @brief 服务端口配置信息(HY_DVR_LISTENPORT_CONF)						       	 */
#define NETCFG_LISTENPORT_CONF				(1 << 8)

/** @brief 手机端口配置信息(HY_DVR_MOBILE_CONF)							       	 */
#define NETCFG_MOBILE_CONF					(1 << 9)

/** @brief 自动发现端口配置信息(HY_DVR_AUTODETECT_CONF)					     	 */
#define NETCFG_AUTODETECT_CONF				(1 << 10)

/** @brief WIFI网络信息(HY_DVR_ETH_IF)											*/
#define NETCFG_WLAN_IF						(1 << 11)

/** @brief WIFI DHCP配置(HY_DVR_DHCP_CONF)										*/
#define NETCFG_WLAN_DHCP_CONF				(1 << 12)

/** @brief WIFI Dhcp状态信息(HY_DVR_DHCP_STATE)									*/
#define NETCFG_WLAN_DHCP_STATE				(1 << 13)

/** @brief WIFI DNS配置信息(HY_DVR_DNS_CONF)									*/
#define NETCFG_WLAN_DNS_CONF				(1 << 14)

/** @brief WIFI 热点列表(HY_DVR_WLAN_ACCESSPOINT_CFG)							*/
#define NETCFG_WLAN_ACCESSPOINTS			(1 << 15)

/** @brief WIFI 连接配置(HY_DVR_WLAN_CONNECTION)								*/
#define NETCFG_WLAN_CONNECTION				(1 << 16)

/** @brief WIFI 连接状态(HY_DVR_WLAN_STATE)										*/
#define NETCFG_WLAN_STATE					(1 << 17)

///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取服务器配置参数												   	 */
#define HY_DVR_GET_NETSERVERCFG 			103

/** @brief 设置服务器配置参数												     */
#define HY_DVR_SET_NETSERVERCFG 			104

//次类型
/** @brief 全部网络配置(HY_DVR_NET_MANAGER)									     */
#define NETSERVERCFG_ALL					0xFFFFFFFF

/** @brief CMS配置信息(HY_DVR_NET_CMS)										 	 */
#define NETSERVERCFG_CMS_CONF				1

/** @brief CMS状态信息(HY_DVR_CMS_STATE)								    	 */
#define NETSERVERCFG_CMS_STATE				2

/** @brief AMS配置信息(HY_DVR_NET_AMS)										   	 */
#define NETSERVERCFG_AMS_CONF				4

/** @brief NTP配置信息(HY_DVR_NET_NTP)										  	 */
#define NETSERVERCFG_NTP_CONF				8

/** @brief EML配置信息(HY_DVR_NET_EML)										 	 */
#define NETSERVERCFG_EML_CONF				16

/** @brief EML(1.1.0版本)配置信息(HY_DVR_NET_EML_1)							 	 */
#define NETSERVERCFG_EML_1_CONF				32

/** @brief CMS协议信息														 	 */
#define NETSERVERCFG_CMS_PROTOCOL			64

///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取图像配置参数													  	 */
#define HY_DVR_GET_PICCFG 					105

/** @brief 设置图像配置参数													  	 */
#define HY_DVR_SET_PICCFG 					106

//次类型
/** @brief 全部网络配置(HY_DVR_PIC_CFG)										 	 */
#define PICCFG_ALL							0xFFFFFFFF

/** @brief 视频制式配置信息(没有实现)										 	 */
#define PICCFG_VIDEOSTANDARD_CONF			1

/** @brief OSD信息(没有实现)												   	 */
#define PICCFG_OSD_CONF						2

/** @brief 通道别名信息(结构体HY_DVR_PIC_CFG中的结构体HY_DVR_ALIAS_CFG)		   	 */
#define PICCFG_CHNAME_CONF					4

/** @brief 时间段信息(没有实现)												   	 */
#define PICCFG_TIMESEC_CONF					8

/** @brief 视频丢失配置信息(没有实现)										   	 */
#define PICCFG_VIDEOLOST_CONF				16

/** @brief 移动侦测配置信息(没有实现)										   	 */
#define PICCFG_MOTION_CONF					32

/** @brief 马赛克配置信息(没有实现)											   	 */
#define PICCFG_MOSAIC_CONF					64

/** @brief 通道别名信息（Unicode）(结构体HY_DVR_PIC_CFG中的结构体HY_DVR_ALIAS_CFG_1) */
#define PICCFG_CHNAME_UNICODE_CONF			128

/** @brief  NXP8850 Image Sensor Processing配置信息 */
#define PICCFG_NXP8850ISP_CONF				256

///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取编码配置参数													  	 */
#define HY_DVR_GET_COMPRESSCFG 				107

/** @brief 设置编码配置参数													  	 */
#define HY_DVR_SET_COMPRESSCFG 				108

//次类型
/** @brief 全部网络配置(HY_DVR_COMPRESSION_CFG)								  	 */
#define COMPRESSCFG_ALL						0xFFFFFFFF

/** @brief 工作模式配置信息(没有实现)										  	 */
#define COMPRESSCFG_WORKMODE_CONF			1

/** @brief 编码能力信息(没有实现)											 	 */
#define COMPRESSCFG_COMPRESS_CAP			2

/** @brief 编码配置信息(没有实现)												 */
#define COMPRESSCFG_COMPRESS_CONF			4



///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取本地录像参数														 */
#define HY_DVR_GET_RECORDCFG 				109

/** @brief 设置本地录像参数														 */
#define HY_DVR_SET_RECORDCFG 				110

//次类型
/** @brief 全部录像配置(HY_DVR_RECORD_SCHED)									 */
#define RECORDCFG_ALL						0xFFFFFFFF

/** @brief 录像控制状态配置(HY_DVR_RECORD_CTRLSTATE)							 */
#define RECORD_CTRL_STATE					1

/** @brief 录像码流选择(HY_DVR_RECORD_STREAM)									 */
#define RECORD_STREAM						2

///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取系统时间参数														 */
#define HY_DVR_GET_SYSTIME 					111

/** @brief 设置系统时间参数														 */
#define HY_DVR_SET_SYSTIME 					112

//次类型
/** @brief 系统时间配置(HY_DVR_TIME)											 */
#define SYSTIME_ALL							0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取云台参数															 */
#define HY_DVR_GET_PTZCFG 					113

/** @brief 设置云台参数															 */
#define HY_DVR_SET_PTZCFG 					114

//次类型
/** @brief 云台参数配置(HY_DVR_PTZPRO_CFG)										 */
#define PTZCFG_ALL							0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取串口配置参数														 */
#define HY_DVR_GET_SERIALCFG 				115

/** @brief 设置串口配置参数														 */
#define HY_DVR_SET_SERIALCFG 				116

//次类型
/** @brief 全部串口参数配置(HY_DVR_DECODER_CFG)									 */
#define SERIALCFG_ALL						0xFFFFFFFF

/** @brief 电子PTZ配置(HY_DVR_PTZ_ELCTRONIC)									 */
#define SERIALCFG_PTZ_ELCTRONIC_CFG			1


///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取报警配置参数														 */
#define HY_DVR_GET_ALARMCFG 				117

/** @brief 设置报警配置参数														 */
#define HY_DVR_SET_ALARMCFG 				118

//次类型
/** @brief 全部报警参数配置(HY_DVR_ALARM_CFG)									 */
#define ALARMCFG_ALL						0xFFFFFFFF

/** @brief 报警工作模式(没有实现)												 */
#define ALARMCFG_WORKMODE_CONF				1

/** @brief 快照配置(没有实现)													 */
#define ALARMCFG_IMGCAPTURE_CONF			2

/** @brief 报警输入配置(没有实现)												 */
#define ALARMCFG_ALARMIN_CONF				4

/** @brief 报警输出配置(没有实现)												 */
#define ALARMCFG_ALARMOUT_CONF				8

/** @brief 异常处理配置(没有实现)												 */
#define ALARMCFG_EXCEPTION_CONF				16


///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取显示输出配置参数													 */
#define HY_DVR_GET_VIDEOOUTCFG 				119

/** @brief 设置显示输出配置参数													 */
#define HY_DVR_SET_VIDEOOUTCFG 				120

//次类型
/** @brief 全部显示输出参数配置(HY_DVR_VO_CFG)									 */
#define VIDEOOUTCFG_ALL						0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取用户信息参数														 */
#define HY_DVR_GET_USERCFG 					121

/** @brief 设置用户信息参数														 */
#define HY_DVR_SET_USERCFG 					122

//次类型
/** @brief 用户信息参数(HY_DVR_USER_CFG)										 */
#define USERCFG_ALL							0xFFFFFFFF

/** @brief 单个用户信息(HY_DVR_USER)											 */
#define USERCFG_ONE							1

/** @brief 添加用户(HY_DVR_USER)												 */
#define USERCFG_CREATE						2

/** @brief 删除用户(HY_DVR_USER)												 */
#define USERCFG_REMOVE						4

/** @brief 在线用户(HY_DVR_ONLINEUSER_CFG)										*/
#define USERCFG_USER_ONLINE					8

/** @brief 强制删除单个在线用户(HY_DVR_ONLINEUSER)								*/
#define USERCFG_USER_ONLINE_ONE				16

/** @brief 是否启用用户白名单(HY_DVR_WHITEIP_ENABLE)							*/
#define USERCFG_WHITE_IP_ENABLE				32

/** @brief 用户白名单(结构体HY_DVR_USER_CFG中的HY_DVR_WHITEIP)					*/
#define USERCFG_WHITE_IP					64

///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取设备信息参数														 */
#define HY_DVR_GET_DEVICEINFO 				123

/** @brief 设置设备信息参数，只读												 */
#define HY_DVR_SET_DEVICEINFO				124

//次类型
/** @brief 全部设备信息参数(HY_DVR_DEVICE_INFO)									 */
#define DEVICEINFO_ALL						0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取设备配置参数														 */
#define HY_DVR_GET_DEVICECFG 				125

/** @brief 设置设备配置参数														 */
#define HY_DVR_SET_DEVICECFG				126

//次类型
/** @brief 全部设备配置参数(HY_DVR_DEVICE_CFG)									 */
#define DEVICECFG_ALL						0xFFFFFFFF

/** @brief 锁屏时间参数(没有实现)												 */
#define DEVICECFG_LOCKSCREENTIME_CONF		1

/** @brief 语言(没有实现)														 */
#define DEVICECFG_LANGUAGE_CONF				2

/** @brief 日期时间格式(没有实现)												 */
#define DEVICECFG_DATETIME_CONF				4

/** @brief 夏时制(没有实现)														 */
#define DEVICECFG_DST_CONF					8

/** @brief 设备ID，用于遥控器(没有实现)											 */
#define DEVICECFG_REMOTECONTROL_ID			16

/** @brief 时区(没有实现)														 */
#define DEVICECFG_TIMEZONE_CONF				32

/** @brief 视频制式配置信息(没有实现)											 */
#define DEVICECFG_VIDEOSTANDARD_CONF		64


///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取存储系统信息														 */
#define HY_DVR_GET_STORAGEINFO				127

/** @brief 设置存储系统信息，只读												 */
#define HY_DVR_SET_STORAGEINFO				128

//次类型
/** @brief 全部设备信息参数(HY_DVR_STORAGE_CFG)									 */
#define STORAGEINFO_ALL						0xFFFFFFFF

/** @brief 存储系统工作模式参数(没有实现)										 */
#define STORAGEINFO_WORKMODE_CONF			1

/** @brief 硬盘信息参数(没有实现)												 */
#define STORAGEINFO_DISK_INFO				2

/** @brief 磁盘组信息参数(没有实现)												 */
#define STORAGEINFO_DISKGROUP_INFO			4

/** @brief 磁盘效验码(没有实现)													 */
#define STORAGEINFO_DISK_MARK				8


///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取设备状态信息														 */
#define HY_DVR_GET_DEVICESTATE				129

/** @brief 设置设备状态信息，空出不用											 */
#define HY_DVR_SET_DEVICESTATE				130

//次类型
/** @brief 全部设备状态信息(HY_DVR_DEVICE_STATE)								 */
#define DEVICESTATE_ALL						0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取设备自动维护配置													 */
#define HY_DVR_GET_DEVICEMAINTENANCE		131

/** @brief 设置设备自动维护配置													 */
#define HY_DVR_SET_DEVICEMAINTENANCE		132

//次类型
/** @brief 全部设备自动维护配置(HY_DVR_DEVICE_MAINTENANCE)						 */
#define DEVICEMAINTENANCE_ALL				0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取设备功能定制配置													 */
#define HY_DVR_GET_DEVICECUSTOM				133

/** @brief 设置设备功能定制配置													 */
#define HY_DVR_SET_DEVICECUSTOM				134

//次类型
/** @brief 全部设备功能定制配置(HY_DVR_DEVICE_CUSTOM)							 */
#define DEVICECUSTOM_ALL					0xFFFFFFFF

/** @brief HC板型编解码资源分配模式信息（暂时不用）								 */
#define DEVICECUSTOM_HCRESMODE_CONF			8

///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取HXHT配置(没有实现)												 */
#define HY_DVR_GET_HXHT						135

/** @brief 设置HXHT配置(没有实现)												 */
#define HY_DVR_SET_HXHT						136

//次类型
/** @brief 全部HXHT配置(没有实现)												 */
#define HXHT_ALL							0xFFFFFFFF

/** @brief NAT状态配置(没有实现)												 */
#define	HXHT_NATSTATUS						1

/** @brief 语音呼叫配置(没有实现)												 */
#define	HXHT_VOICEPARAM						2

/** @brief CMS存储注册配置信息(没有实现)										 */
#define HXHT_CMS_STORAGE					4

/** @brief 前端设备ID(没有实现)													 */
#define HXHT_DEVICE_ID						8


///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取要加载的协议名称（私有协议是必须加载的，不在其中）(没有实现)		 */
#define	HY_DVR_GET_PROTOCOL					137

/** @brief 设置要加载的协议名称	(没有实现)										 */
#define	HY_DVR_SET_PROTOCOL					138

//次类型
/** @brief 全部要加载的协议名称(没有实现)										 */
#define PROTOCOL_ALL						0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取源设备配置														 */
#define	HY_DVR_GET_SOURCE_DEVICE			139

/** @brief 设置源设备配置														 */
#define	HY_DVR_SET_SOURCE_DEVICE			140

//次类型
/** @brief 全部源设备配置(HY_DVR_SOURCE_DEVICE_INFO_CONFIG)						 */
#define SOURCE_DEVICE_ALL					0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
////主类型
///** @brief 获取设备输出															*/
//#define	HY_DVR_GET_DEVICE_OUTPUT			141
//
///** @brief 设置设备输出(无效命令，只能获取，不能设置)							 */
//#define	HY_DVR_SET_DEVICE_OUTPUT			142
//
////次类型
///** @brief 全部设备输出(HY_DVR_DEVICE_OUTPUT)									 */
//#define DEVICE_OUTPUT_ALL					0xFFFFFFFF


///////////////////////////////////////////////////////////////////////////////////////////////////////
//主类型
/** @brief 获取解码器显示设备信息												*/
#define	HY_DVR_GET_DISP_DEV					143

/** @brief 设置解码器显示设备信息												*/
#define	HY_DVR_SET_DISP_DEV					144

//次类型
/** @brief 所有解码器显示设备信息(HY_DVR_DISPDEV_CFG)						 */
#define DISP_DEV_ALL						0xFFFFFFFF

/** @brief VGA信息(HY_DVR_VGAPARA_CFG)										 */
#define DISP_DEV_VGA						1

/** @brief TV 信息(HY_DVR_VOOUT_CFG)										 */
#define DISP_DEV_TV							2

///////////////////////////////////////////////////////////////////////////////////////////////////////
#define	HY_DVR_GET_NXP8850ISP		145	/* 获取NXP8850 ISP参数 */
#define	HY_DVR_SET_NXP8850ISP		146	/* 设置NXP8850 ISP参数 */
//次类型
#define NXP8850ISP_ALL				0xFFFFFFFF	/* 全部ISP参数 */

///////////////////////////////////////////////////////////////////////////////////////////////////////
/**************************************************************************
*                        配置信息结构体定义                              *
************************************************************************* */

////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_SCHEDTIME
*  @brief	时间计划, 24小时等分成48个时间段
 */
typedef struct tagHY_DVR_SCHEDTIME
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	unsigned char bySetType[DVR_MAX_DAYS][DVR_MAX_TIMESEGMENT];	/*!< 0为不布防，1为布防 */
	unsigned char byState;										/*!< 状态,0为全天布防,1为启用,2为不支持 */
	unsigned char byReserve[3];									/*!< 保留位 */

} HY_DVR_SCHEDTIME, *LPHY_DVR_SCHEDTIME;

/*!
*  @struct	tagHY_DVR_WORKMODE
*  @brief	工作模式
 */
typedef struct tagHY_DVR_WORKMODE
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int nWorkMode;												/*!< 高级模式，0为普通模式，1为高级模式 */

} HY_DVR_WORKMODE, *LPHY_DVR_WORKMODE;

/*!
*  @struct	tagHY_DVR_FONT_INFO
*  @brief	字体信息
 */
typedef struct tagHY_DVR_FONT_INFO
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	char szFontName[DVR_MAX_FONTNAME_LEN];						/*!< 字体名 */
	int nFontStyle;												/*!< 字体风格 */
	int nFontSize;												/*!< 字体大小 */

} HY_DVR_FONT_INFO, *LPHY_DVR_FONT_INFO;

/*!
*  @struct	tagHY_DVR_ALIAS_CFG
*  @brief	别名配置
 */
typedef struct tagHY_DVR_ALIAS_CFG
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	char strName[DVR_MAX_CHANNELNAME_LEN];						/*!< 通道名称 */
	int nCharSet;												/*!< 通道名字符集: 0-GB, 1-unicode */
	int nWidth;													/*!< 通道名称完整字符串宽度(以像素为单位)，最大宽度 DVR_MAX_LATTICE_WIDTH */
	int nHeight;												/*!< 通道名称完整字符串高度(以像素为单位)，最大高度 DVR_MAX_LATTICE_HEIGHT */
	unsigned char byLattice[DVR_MAX_LATTICE_BUFSIZE];			/*!< 点阵，按行扫描，宽为(nWidth+7)/8，高为nHeight，目前最大支持10个24*24的点阵 */
	HY_DVR_FONT_INFO struFontInfo;								/*!< 通道名字体信息 */

} HY_DVR_ALIAS_CFG, *LPHY_DVR_ALIAS_CFG;

/*!
*  @struct	tagHY_DVR_ALIAS_CFG_1
*  @brief	别名配置(Unicode)
*/
typedef struct tagHY_DVR_ALIAS_CFG_1
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	unsigned short strName[DVR_MAX_CHANNELNAME_LEN];			/*!< 通道名称 */
	int nCharSet;												/*!< 通道名字符集: 0-GB, 1-unicode */
	int nWidth;													/*!< 通道名称完整字符串宽度(以像素为单位)，最大宽度 DVR_MAX_LATTICE_WIDTH */
	int nHeight;												/*!< 通道名称完整字符串高度(以像素为单位)，最大高度 DVR_MAX_LATTICE_HEIGHT */
	unsigned char byLattice[DVR_MAX_LATTICE_BUFSIZE];			/*!< 点阵，按行扫描，宽为(nWidth+7)/8，高为nHeight，目前最大支持10个24*24的点阵 */
	HY_DVR_FONT_INFO struFontInfo;								/*!< 通道名字体信息 */

} HY_DVR_ALIAS_CFG_1, *LPHY_DVR_ALIAS_CFG_1;

////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_DDNS
*  @brief	DDNS协议信息结构
 */
typedef struct tagHY_DVR_DDNS
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int bDdnsEnable;											/*!< 0-不启用自动注册, 1-启用自动注册  */
	int nDdnsState;												/*!< 目前DDNS只读，0表示已经停止，1表示正在启动，2表示已经启动，3表示正在停止 */
	char szProtocolName[DVR_MAX_DDNSPRONAME_LEN];				/*!< 协议名称(只读)  */
	char szUserName[DVR_MAX_USERNAME_LEN];						/*!< 注册用户名  */
	char szUserPassword[DVR_MAX_PASSWORD_LEN];					/*!< 注册用户密码  */
	char szDomainName[DVR_MAX_DOMAINNAME_LEN];					/*!< 注册用户域名  */
	unsigned short wRegisterPort;								/*!< 服务端口  */
	int nAutoRegIntervals;										/*!< 自动注册间隔时间，单位为秒  */

} HY_DVR_DDNS, *LPHY_DVR_DDNS;

/*!
*  @struct	tagHY_DVR_DDNS_CONF
*  @brief	DDNS功能配置结构
 */
typedef struct tagHY_DVR_DDNS_CONF
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int nDdnsProtocolCount;										/*!< 支持的DDNS协议总数(只读) */
	HY_DVR_DDNS struDdnsProtocol[DVR_MAX_DDNSPRO_NUM];			/*!< DDNS协议信息 */

} HY_DVR_DDNS_CONF, *LPHY_DVR_DDNS_CONF;

/*!
*  @struct	tagHY_DVR_PPPOE_CONF
*  @brief	PPPoE功能配置信息
 */
typedef struct tagHY_DVR_PPPOE_CONF
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int bPPPoEEnable;											/*!< 0-不启用PPPoE，1-启用 PPPoE  */
	char szPPPoEUser[DVR_MAX_USERNAME_LEN];						/*!< PPPoE用户名  */
	char szPPPoEPassword[DVR_MAX_PASSWORD_LEN];					/*!< PPPoE密码  */

} HY_DVR_PPPOE_CONF, *LPHY_DVR_PPPOE_CONF;

/*!
*  @struct	tagHY_DVR_PPPOE_IF
*  @brief	PPPoE网络信息
 */
typedef struct tagHY_DVR_PPPOE_IF
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int nPPPoEState;											/*!< PPPoE 连接状态(只读),0表示没有连接，1表示正在连接，2表示连接成功，3表示正在挂断 */
	char szPPPoEIP[DVR_MAX_IP_STR_LEN];							/*!< PPPoE IP地址(只读)  */
	char szPPPoESubnetMask[DVR_MAX_IP_STR_LEN];					/*!< PPPoE 子网掩码(只读)  */
	char szPPPoEGateway[DVR_MAX_IP_STR_LEN];					/*!< PPPoE 网关(只读)  */

} HY_DVR_PPPOE_IF, *LPHY_DVR_PPPOE_IF;

/*!
*  @struct	tagHY_DVR_DHCP_CONF
*  @brief	DHCP配置信息
 */
typedef struct tagHY_DVR_DHCP_CONF
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int bDhcpEnable;											/*!< 0-不启用Dhcp,1-启用Dhcp  */

} HY_DVR_DHCP_CONF, *LPHY_DVR_DHCP_CONF;

/*!
*  @struct	tagHY_DVR_DHCP_STATE
*  @brief	DHCP状态信息
 */
typedef struct tagHY_DVR_DHCP_STATE
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int nDhcpState;												/*!< Dhcp状态 (只读)，目前不支持 */

} HY_DVR_DHCP_STATE, *LPHY_DVR_DHCP_STATE;

/*!
*  @struct	tagHY_DVR_DNS_CONF
*  @brief	DNS配置信息
 */
typedef struct tagHY_DVR_DNS_CONF
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	char szPrimaryDNS[DVR_MAX_IP_STR_LEN];						/*!< 主DNS服务器  */
	char szSecondaryDNS[DVR_MAX_IP_STR_LEN];					/*!< 备用DNS  */

} HY_DVR_DNS_CONF, *LPHY_DVR_DNS_CONF;

/*!
*  @struct	tagHY_DVR_HTTP_CONF
*  @brief	http配置信息
 */
typedef struct tagHY_DVR_HTTP_CONF
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int bEnable;												/*!< 启用或禁用http服务 */
	unsigned short wHttpPort;									/*!< Http端口  */

} HY_DVR_HTTP_CONF, *LPHY_DVR_HTTP_CONF;

/*!
*  @struct	tagHY_DVR_LISTENPORT_CONF
*  @brief	网络监听端口信息
 */
typedef struct tagHY_DVR_LISTENPORT_CONF
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	unsigned short wLocalCmdPort;								/*!< 本地命令端口  */
	unsigned short wLocalMediaPort;								/*!< 本地媒体端口  */
	unsigned short wRtpPort;									/*!< 本地RTP端口  */

} HY_DVR_LISTENPORT_CONF, *LPHY_DVR_LISTENPORT_CONF;

/** @brief 网络监听端口结构长度																				 */
#define LISTENPORT_CONF_LEN		sizeof(HY_DVR_LISTENPORT_CONF)

//浪潮手机客户端配置
typedef struct
{
	int bValid;					//! 本结构体是否有效，=0表示无效

	unsigned short wMobilePort;	/*手机端口 */

} HY_DVR_TIDE_MOBILE, *LPHY_DVR_TIDE_MOBILE;

//手机监听端口信息
typedef struct
{
	int bValid;					//! 本结构体是否有效，=0表示无效

	HY_DVR_TIDE_MOBILE struTide;	/*浪潮手机配置 */

} HY_DVR_MOBILE_CONF, *LPHY_DVR_MOBILE_CONF;

#define MOBILE_CONF_LEN		sizeof(HY_DVR_MOBILE_CONF)

/*!
*  @struct	tagHY_DVR_ETH_IF
*  @brief	ETH0配置结构
 */
typedef struct tagHY_DVR_ETH_IF
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	char szIPAddress[DVR_MAX_IP_STR_LEN];						/*!< DVR IP地址  */
	char szSubnetMask[DVR_MAX_IP_STR_LEN];						/*!< DVR 子网掩码  */
	char szGateway[DVR_MAX_IP_STR_LEN];							/*!< 网关地址  */
	char szMacAddress[DVR_MAX_MAC_STR_LEN];						/*!< 只读：服务器的物理地址  */

} HY_DVR_ETH_IF, *LPHY_DVR_ETH_IF;

/*!
*  @struct	tagHY_DVR_AUTODETECT_CONF
*  @brief	自动发现端口信息
*/
typedef struct tagHY_DVR_AUTODETECT_CONF
{
	int bValid;												/*!< 本结构体是否有效，0表示无效 */

	unsigned short wAutoDetectPort;							/*!< 自动发现端口 */

} HY_DVR_AUTODETECT_CONF, *LPHY_DVR_AUTODETECT_CONF;

/*!
*  @struct	tagHY_DVR_WLAN_STATE
*  @brief	WIFI状态
*/
typedef struct tagHY_DVR_WLAN_STATE
{
	int bValid;												/*!< 本结构体是否有效，0表示无效 */

	int bEnable;											/*!< WIFI状态 0 不启用 1 启用, 2 网卡未找到*/

} HY_DVR_WLAN_STATE, *LPHY_DVR_WLAN_STATE;

/*!
*  @struct	tagHY_DVR_WLAN_ACCESSPOINT
*  @brief	WIFI热点
*/
typedef struct tagHY_DVR_WLAN_ACCESSPOINT
{
	int bValid;														/*!< 本结构体是否有效，0表示无效 */

	char szSSID[DVR_MAX_SSID_LEN];									/*!< 热点名称 */
	char szMacAddress[DVR_MAX_MAC_STR_LEN];							/*!< 热点MAC地址 */
	int nSignal;													/*!< 热点信号强度 */
	int nAuthentication;											/*!< 认证模式 0-Open,1-Shared,2-WPAPSK, 3-WPA2PSK, 4-WPANONE(ad-hoc模式),5-WPA,6-WPA2 */
	int nEncrypType;												/*!< 加密模式  0表示NONE 1表示WEP 2表示TKIP 3表示AES */
	int nWirelessMode;												/*!< 1: legacy 11B only 2: legacy 11A only 3: legacy 11a/b/g mixed
																		 4: legacy 11G only 5: 11ABGN mixed    6: 11N only
																		 7: 11GN mixed      8: 11AN mixed      9: 11BGN mixed */

} HY_DVR_WLAN_ACCESSPOINT, *LP_HY_DVR_WLAN_ACCESSPOINT;

/*!
*  @struct	tagHY_DVR_WLAN_ACCESSPOINT_CFG
*  @brief	WIFI热点配置
*/
typedef struct tagHY_DVR_WLAN_ACCESSPOINT_CFG
{
	int bValid;														/*!< 本结构体是否有效，0表示无效 */

	HY_DVR_WLAN_ACCESSPOINT struAccessPoints[DVR_MAX_AP_NUM];		/*!< WIFI热点 */

} HY_DVR_WLAN_ACCESSPOINT_CFG, *LP_HY_DVR_WLAN_ACCESSPOINT_CFG;

/*!
*  @struct	tagHY_DVR_WLAN_KEY
*  @brief	WIFI密钥
*/
typedef struct tagHY_DVR_WLAN_KEY
{
	int bValid;														/*!< 本结构体是否有效，0表示无效 */

	char szKey[DVR_MAX_WIFI_KEY_LEN];								/*!< 密码 */
} HY_DVR_WLAN_KEY, *LPHY_DVR_WLAN_KEY;

/*!
*  @struct	tagHY_DVR_WLAN_KEY_CFG
*  @brief	WIFI密钥配置
*/
typedef struct tagHY_DVR_WLAN_KEY_CFG
{
	int bValid;														/*!< 本结构体是否有效，0表示无效 */

	int nDefKeyID;													/*!< WEP认证当前用的KEY的索引,1~4 */
	HY_DVR_WLAN_KEY Key1;											/*!< WEP KEY1 */
	HY_DVR_WLAN_KEY Key2;											/*!< WEP KEY2 */
	HY_DVR_WLAN_KEY Key3;											/*!< WEP KEY3 */
	HY_DVR_WLAN_KEY Key4;											/*!< WEP KEY4 */
	HY_DVR_WLAN_KEY WPAKey;											/*!< WPA KEY */
} HY_DVR_WLAN_KEY_CFG, *LPHY_DVR_WLAN_KEY_CFG;

/*!
*  @struct	tagHY_DVR_WLAN_CONNECTION
*  @brief	WIFI连接配置
*/
typedef struct tagHY_DVR_WLAN_CONNECTION
{
	int bValid;														/*!< 本结构体是否有效，0表示无效 */

	int bConnect;													/*!< 是否连接上：0表示未连接上 1表示连接上(只读) */
	char szSSID[DVR_MAX_SSID_LEN];									/*!< 热点名称 */
	char szMacAddress[DVR_MAX_MAC_STR_LEN];							/*!< 热点MAC地址 */
	int nNetworkType;												/*!< 网络类型: 0表示Managed, 1表示Ad-hoc */
	int nAuthMode;													/*!< 认证模式: 0-OPEN,1-SHARED,2-WEPAUTO,3-WPAPSK,4-WPA2PSK,5-WPANONE,6-WPA,7-WPA2*/
	int nEncrypType;												/*!< 加密算法 0-NONE,1-WEP,2-TKIP,3-AES */
	HY_DVR_WLAN_KEY_CFG struKeyCfg;									/*!< 密码配置 */

} HY_DVR_WLAN_CONNECTION, *LP_HY_DVR_WLAN_CONNECTION;


////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_NET_CFG
*  @brief	本地网络适配器配置结构
 */
typedef struct tagHY_DVR_NET_CFG
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	HY_DVR_DHCP_CONF struDhcp_Conf;								/*!< Dhcp配置信息 */
	HY_DVR_DHCP_STATE struDhcp_State;							/*!< Dhcp状态信息 */
	HY_DVR_ETH_IF struEth;										/*!< Eth网络信息 */
	HY_DVR_PPPOE_CONF struPPPoE_Conf;							/*!< PPPoE配置 */
	HY_DVR_PPPOE_IF struPPPoE_IF;								/*!< PPPoE网络信息 */
	HY_DVR_DNS_CONF struDNS;									/*!< DNS配置信息 */
	HY_DVR_DDNS_CONF struDDNS;									/*!< DDNS配置信息 */
	HY_DVR_HTTP_CONF struHttp;									/*!< HTTP配置 */
	HY_DVR_LISTENPORT_CONF struListenPort;						/*!< 服务端口配置信息 */
	HY_DVR_MOBILE_CONF struMobilePort;							/*!< 手机端口配置信息 */
	HY_DVR_AUTODETECT_CONF struAutoDetectPort;					/*!< 自动发现端口配置 */

	HY_DVR_DHCP_CONF struWIFIDhcp_Conf;							/*!< WIFI DHCP配置 */
	HY_DVR_DHCP_STATE struWIFIDhcp_State;						/*!< WIFI Dhcp状态信息 */
	HY_DVR_ETH_IF struWIFICommon;								/*!< WIFI 网络信息 */
	HY_DVR_DNS_CONF struWIFIDNS;								/*!< WIFI DNS配置信息 */
	HY_DVR_WLAN_ACCESSPOINT_CFG struWIFIAccessPoint;			/*!< WIFI热点配置 */
	HY_DVR_WLAN_CONNECTION struWIFIConnectCfg;					/*!< WIFI连接配置 */
	HY_DVR_WLAN_STATE struWIFIState;							/*!< WIFI 状态 */

} HY_DVR_NET_CFG, *LPHY_DVR_NET_CFG;

/** @brief 本地网络适配器配置结构长度																		 */
#define NET_CFG_LEN   sizeof (HY_DVR_NET_CFG)
////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_NET_CMS
*  @brief	中心管理服务器配置信息
 */
typedef struct tagHY_DVR_NET_CMS
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int bCmsEnable;												/*!< 0-不启用管理服务器, 1-启用  */
	char szManageHostAddress[DVR_MAX_DOMAINNAME_LEN];			/*!< 远程管理主机地址，长度考虑域名  */
	unsigned short wManageHostPort;								/*!< 远程管理主机端口  */
	int nAutoRegIntervals;										/*!< 注册间隔时间，单位为秒  */

} HY_DVR_NET_CMS, *LPHY_DVR_NET_CMS;

/*!
*  @struct	tagHY_DVR_CMS_STATE
*  @brief	中心管理服务器连接状态
 */
typedef struct tagHY_DVR_CMS_STATE
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int nCmsState;												/*!< CMS注册状态,目前系统不支持  */

} HY_DVR_CMS_STATE, *LPHY_DVR_CMS_STATE;

/*!
*  @struct	tagHY_DVR_NET_AMS
*  @brief	报警管理服务器配置信息
 */
typedef struct tagHY_DVR_NET_AMS
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int bAmsEnable;												/*!< 0-不启用报警服务器, 1-启用  */
	char szAlarmHostAddress[DVR_MAX_DOMAINNAME_LEN];			/*!< 报警服务器 */
	unsigned short wAlarmHostPort;								/*!< 报警服务器端口  */

} HY_DVR_NET_AMS, *LPHY_DVR_NET_AMS;

/*!
*  @struct	tagHY_DVR_NET_NTP
*  @brief	Ntp服务器配置信息
 */
typedef struct tagHY_DVR_NET_NTP
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int bNtpEnable;												/*!< 0-不启用, 1-启用  */
	char szNtpHostAddress[DVR_MAX_DOMAINNAME_LEN];				/*!< Ntp服务器，长度考虑域名  */
	unsigned short wNtpHostPort;								/*!< Ntp服务器，端口  */
	int nAutoRegIntervals;										/*!< Ntp服务器同步间隔时间，单位为秒  */

} HY_DVR_NET_NTP, *LPHY_DVR_NET_NTP;

/*!
*  @struct	tagHY_DVR_NET_EML
*  @brief	Email服务器配置信息
 */
typedef struct tagHY_DVR_NET_EML
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int bEmlEnable;												/*!< 0-不启用, 1-启用  */
	char szSmtpServer[DVR_MAX_DOMAINNAME_LEN];					/*!< smtp服务器地址  */
	unsigned short wSmtpPort;									/*!< smtp服务器端口  */
	char szSenderAddress[DVR_MAX_EMAIL_LEN];					/*!< 发件人邮箱地址  */
	char szSmtpUserName[DVR_MAX_USERNAME_LEN];					/*!< smtp服务器帐号  */
	char szSmtpPassword[DVR_MAX_PASSWORD_LEN];					/*!< smtp服务器密码  */

} HY_DVR_NET_EML, *LPHY_DVR_NET_EML;

/*!
*  @struct	tagHY_DVR_NET_EML_1
*  @brief	Email服务器配置信息(1.1.0版本使用)
*/
typedef struct	tagHY_DVR_NET_EML_1
{
	int bValid;													/*!< 本结构体是否有效，0表示无效		*/
	int bEmlEnable;												/*!< 0-不启用, 1-启用					*/

	char szSmtpServer[DVR_MAX_DOMAINNAME_LEN];					/*!< smtp服务器地址						*/
	unsigned short wSmtpPort;									/*!< 端口								*/
	int nSmtpAuth;												/*!< 验证方式(0为NONE, 1为LOGIN)		*/
	int nSmtpTLS;												/*!< 是否使用安全登陆(0为off, 1为on)	*/

	char szSenderEmail[DVR_MAX_EMAIL_LEN];						/*!< 发件人邮箱地址						*/
	char szSenderPassword[DVR_MAX_PASSWORD_LEN];				/*!< 发件人邮箱密码						*/

	//以下参数暂不使用
	int nProtocol;												/*!< (目前为smtp)						*/
	int nTimeout;												/*!< 超时配置							*/
	int nAuto_from;

	//以下为TLS相关高级参数，暂不使用
	int nTls_starttls;
	int nTls_certcheck;
	int nTls_force_sslv3;
	int nTls_min_dh_prime_bits;
	int nTls_priorities;

} HY_DVR_NET_EML_1, *LPHY_DVR_NET_EML_1;

/*!
*  @struct	tagHY_DVR_CMS_FOR_PROTOCOL
*  @brief	CMS对应的协议名称
*/
typedef struct tagHY_DVR_CMS_FOR_PROTOCOL
{
	int bValid;											//本结构体是否有效，=0表示无效

	DWORD dwCMSProtocol;								/*!< 协议名称：在CMS中需要填写IP地址，需要告诉设备端，这个
														CMS中的IP地址是为哪一个协议准备的，如果是私有协议，那么设备
														将注册到NVMS中；如果是Hxht协议，则设备注册到Hxht的接入服务器中。
														该参数只能表示一种协议。*/
}HY_DVR_CMS_FOR_PROTOCOL, *LPHY_DVR_CMS_FOR_PROTOCOL;

////////////////////////////////////////////////////////////////////////////
/*!
*  @struct	tagHY_DVR_NET_MANAGER
*  @brief	网络管理结构
 */
typedef struct tagHY_DVR_NET_MANAGER
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	HY_DVR_NET_CMS struCMS;										/*!< 中心管理服务器信息 */
	HY_DVR_NET_AMS struAMS;										/*!< 报警服务器信息 */
	HY_DVR_NET_NTP struNTP;										/*!< NTP服务器信息 */
	HY_DVR_NET_EML struEML;										/*!< Email服务器信息 */
	HY_DVR_CMS_FOR_PROTOCOL struCMSForProtocol;					/*!< 中心管理服务器信息对应的协议（和CMS是绑定的）*/
	HY_DVR_CMS_STATE struCmsState;								/*!< 中心管理服务器连接状态 */
	HY_DVR_NET_EML_1 struEML_1;									/*!< Email(1.1.0版本)服务器信息 */

} HY_DVR_NET_MANAGER, *LPHY_DVR_NET_MANAGER;

/** @brief 网络管理结构长度																				 */
#define NET_MANAGER_LEN   sizeof (HY_DVR_NET_MANAGER)
////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_CHROMA_SEC
*  @brief	色度单元配置结构
 */
typedef struct tagHY_DVR_CHROMA_SEC
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int bTimeSegEnable;											/*!< 启用时间片  */
	int nStartTime;												/*!< 开始时间 相对00:00时的秒数   */
	int nStopTime;												/*!< 结束时间 相对00:00时的秒数   */
	int nBrightness;											/*!< 亮度,0-255  */
	int nContrast;												/*!< 对比度,0-255  */
	int nSaturation;											/*!< 饱和度,0-255  */
	int nHue;													/*!< 色调,0-255  */

} HY_DVR_CHROMA_SEC, *LPHY_DVR_CHROMA_SEC;

/*!
*  @struct	tagHY_DVR_CHROMA_SEC
*  @brief	色度配置结构(每通道支持24个时间段)
 */
typedef struct tagHY_DVR_CHROMA
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	HY_DVR_CHROMA_SEC struChromaSec[DVR_MAX_PICSEC_NUM];		/*!< 色度单元 */

} HY_DVR_CHROMA, *LPHY_DVR_CHROMA;


/*异常处理方式 */

/** @brief 无响应																				 */
#define DVR_ALARM_TRIGGER_NONE			0

/** @brief 触发屏幕显示，通道参数由录像参数决定													 */
#define DVR_ALARM_TRIGGER_PREVIEW		(0x1)

/** @brief 声音警告																				 */
#define DVR_ALARM_TRIGGER_AUDIOOUT		(0x1 << 1)

/** @brief 触发录像																				 */
#define DVR_ALARM_TRIGGER_RECORD		(0x1 << 2)

/** @brief 触发拍照																				 */
#define DVR_ALARM_TRIGGER_SNAPSHOT		(0x1 << 3)

/** @brief 触发报警输出																			 */
#define DVR_ALARM_TRIGGER_ALARMOUT		(0x1 << 4)

/** @brief 上传报警中心																			 */
#define DVR_ALARM_TRIGGER_NOTIFYAMS		(0x1 << 5)

/** @brief 触发PTZ																				 */
#define DVR_ALARM_TRIGGER_PTZ			(0x1 << 6)

/** @brief 发生EMail通知																		 */
#define DVR_ALARM_TRIGGER_EMAIL			(0x1 << 7)

/** @brief 屏幕提示																				 */
#define DVR_ALARM_TRIGGER_NOTIFYGUI		(0x1 << 8)

/*!
*  @struct	tagHY_DVR_HANDLEEXCEPTION
*  @brief	联动处理结构体
 */
typedef struct tagHY_DVR_HANDLEEXCEPTION
{
	int bValid;													/*!< 本结构体是否有效，0表示无效  */

	unsigned long dwHandleType;									/*!< 处理方式,处理方式的"或"结果  */
	int nRecordChannelMask;										/*!< 联动录像通道标识，按位表示，若位0为1，表示通道1被选中，以此类推  */
	int nSnapshotChannelMask;									/*!< 联动快照通道标识，按位表示，若位0为1，表示通道1被选中，以此类推  */
	int nAlarmOutChannelMask;									/*!< 联动报警输出通道标识，按位表示，若位0为1，表示通道1被选中，以此类推  */
	int nPtzAction[DVR_MAX_PTZ_NUM];							/*!< 联动的动作,  0表示无动作 , 1联动预置点, 2联动巡航 3联动轨迹  */
	int nPtzIndex[DVR_MAX_PTZ_NUM];								/*!< 联动的预置点/巡航/轨迹的编号  */
	int nMonitorMask;											/*!< 0-不在显示器上显示 1-主显 2-SPOT1 4-SPOT2 8-SPOT3 16-SPOT4，若需要多种组合，将这些值相加即可 */

} HY_DVR_HANDLEEXCEPTION, *LPHY_DVR_HANDLEEXCEPTION;

/*!
*  @struct	tagHY_DVR_MOTION
*  @brief	移动侦测
 */
typedef struct tagHY_DVR_MOTION
{
	int bValid;																		/*!< 本结构体是否有效，0表示无效  */

	int bEnable;																	/*!< 是否处理移动侦测  */
	int nSenstive;																	/*!< 移动侦测灵敏度, 0 - 5,越低越灵敏,0xff关闭  */
	int nXScope;																	/*!< X方向宏块范围：0-32（目前9000设备支持0-16）  */
	int nYScope;																	/*!< Y方向宏块范围：0-32（目前9000设备支持0-12）*/
	unsigned char byMotionScope[DVR_MAX_MOTIONSCOPE_NUM][DVR_MAX_MOTIONSCOPE_NUM];	/*!< 侦测区域,1表示改宏块是移动侦测区域,0表示不是  */
	HY_DVR_HANDLEEXCEPTION struHandleType;											/*!< 处理方式  */
	HY_DVR_SCHEDTIME struSchedTime;													/*!< 布防计划  */

} HY_DVR_MOTION, *LPHY_DVR_MOTION;

/*!
*  @struct	tagHY_DVR_VILOST
*  @brief	信号丢失报警
 */
typedef struct tagHY_DVR_VILOST
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int bEnable;												/*!< 是否处理信号丢失报警  */
	HY_DVR_HANDLEEXCEPTION struHandleType;						/*!< 处理方式  */
	HY_DVR_SCHEDTIME struSchedTime;								/*!< 布防计划  */

} HY_DVR_VILOST, *LPHY_DVR_VILOST;

/*!
*  @struct	tagHY_DVR_MOSAIC_INFO
*  @brief	马赛克区域信息
 */
typedef struct tagHY_DVR_MOSAIC_INFO
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int bEnable;												/*!< 是否启用  */
	int nHideAreaTopLeftX;										/*!< 马赛克区域的左上点x相对坐标（0-703）  */
	int nHideAreaTopLeftY;										/*!< 马赛克区域的左上点y相对坐标（0-575）  */
	int nHideAreaBottomRightX;									/*!< 马赛克区域的右下点x相对坐标（0-703）  */
	int nHideAreaBottomRightY;									/*!< 马赛克区域的右下点y相对坐标（0-575）  */

} HY_DVR_MOSAIC_INFO, *LPHY_DVR_MOSAIC_INFO;

/*!
*  @struct	tagHY_DVR_MOSAIC
*  @brief	马赛克配置信息
 */
typedef struct tagHY_DVR_MOSAIC
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int bEnableMosaic;											/*!< 是否启动遮挡 ,0-否,1-是 区域为704*576  */
	HY_DVR_MOSAIC_INFO struMosaicInfo[DVR_MAX_VIDEOSHELTER_NUM];/*!< 马赛克区域 */

} HY_DVR_MOSAIC, *LPHY_DVR_MOSAIC;

/*!
*  @struct	tagHY_DVR_OSD_CFG
*  @brief	OSD配置信息
 */
typedef struct tagHY_DVR_OSD_CFG
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int nShowOsd;												/*!< 0为通道时间均不显示、1为显示通道，2、为显示时间、3为两者均显示  */
	int nTimeTopLeftX;											/*!< 时间的x坐标（0-703）  */
	int nTimeTopLeftY;											/*!< 时间的y坐标（0-575）  */
	int nNameTopLeftX;											/*!< 名称的x坐标（0-703）  */
	int nNameTopLeftY;											/*!< 名称的y坐标（0-575）  */

} HY_DVR_OSD_CFG, *LPHY_DVR_OSD_CFG;

/*!
*  @struct	tagHY_DVR_OSD_CFG
*  @brief	图像参数结构
 */
typedef struct tagHY_DVR_PIC_CFG
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	HY_DVR_WORKMODE struWorkMode;								/*!< 工作模式(只读) */
	HY_DVR_OSD_CFG struOsd[DVR_MAX_VIDEOIN_NUM];				/*!< OSD配置 */
	HY_DVR_ALIAS_CFG struChName[DVR_MAX_VIDEOIN_NUM];			/*!< 通道别名配置 */
	HY_DVR_CHROMA struChroma[DVR_MAX_VIDEOIN_NUM];				/*!< 色度配置 */
	HY_DVR_VILOST struViLost[DVR_MAX_VIDEOIN_NUM];				/*!< 信号丢失报警 */
	HY_DVR_MOTION struMotion[DVR_MAX_VIDEOIN_NUM];				/*!< 移动侦测 */
	HY_DVR_MOSAIC struMosaic[DVR_MAX_VIDEOIN_NUM];				/*!< 马赛克 */
	HY_DVR_ALIAS_CFG_1 struChName_1[DVR_MAX_VIDEOIN_NUM];		/*!< 通道别名配置(Unicode) */

} HY_DVR_PIC_CFG, *LPHY_DVR_PIC_CFG;

/** @brief 图像配置信息长度																	 */
#define PIC_CFG_LEN   sizeof (HY_DVR_PIC_CFG)
/////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////

/* NXP8850 Image Sensor Processing配置信息: 数字降噪 （De-Noise）*/
typedef struct tagHY_DVR_ISP_COMMON
{
	int bValid;					//! 本结构体是否有效，=0表示无效

	/*
	   参数模板配置 :
	   意义： 通过环境条件的不同进行不同参数脚本的调节
	   0    普通 
	   1    室内 
	   2 室内低亮度 
	   3 室外
	   4 出入口
	   5 自定义
	   6，7 待定
	 */
	int nWorkMode;

	/*
	   图像颜色 （Video Color）
	   0    黑白
	   1    彩色  
	 */
	int nVideoColor;

	/*
	   图像方向 (Video orientation)
	   0    正常
	   1    翻转      
	   2    镜像
	   3    翻转+ 镜像
	 */
	int nVideoOrientation;

	/*
	前端输入频率
	0    50Hz
	1    60Hz
	*/
	int nInputFrequency;

} HY_DVR_ISP_COMMON, *LPHY_DVR_ISP_COMMON;

/* NXP8850 Image Sensor Processing配置信息: AE Mode 设置*/
typedef struct tagHY_DVR_AE_MODE
{
	int bValid;					//! 本结构体是否有效，=0表示无效

	int nMode;					//AE模式，0-自动 1-背光 2-手动

}HY_DVR_AE_MODE, *LPHY_DVR_AE_MODE;

/* NXP8850 Image Sensor Processing配置信息: AE Window 设置*/
typedef struct tagHY_DVR_AEWINDOW_CFG
{
	int bValid;					//! 本结构体是否有效，=0表示无效

	//开关(on /off)
	int bOpen;

	//X (0-4095) 需要识别到最大的宽度，如果是最大720p,就是1280
	int nX;

	//Y (0-4095) 需要识别最大有效像素高度
	int nY;

	//width (1-4095) 需要识别到最大的宽度
	int nWidth;

	//height(1-4095) 需要识别最大有效像素高度
	int nHeight;

	//Weighting (1X 到 8X可选) 参数0-7
	int nWeighting;
	
} HY_DVR_AEWINDOW_CFG, *LPHY_DVR_AEWINDOW_CFG;

/* NXP8850 Image Sensor Processing配置信息: 曝光参数*/
typedef struct tagHY_DVR_EXPOSAL_CFG
{
	int bValid;					//! 本结构体是否有效，=0表示无效

	/*
		镜头光圈：(Lens Type)
		关闭自动自动  开启启动光圈   手动光圈
	*/
	int bLensType;

	/*
		目标亮度  (Target Lumiance)	0-255
	*/
	int nTargetLumiance;

	/*
		偏移 (Offset)	0-255
	*/
	int nOffset;

	/*
		快门速度  (Shutter Speed)
		最小速度，0～1/2
		最大速度，1/120～1
		速度可选
		0,1/120,1/60,1/30,1/15,1/8,1/4,1/2,1 
	*/
	int nMinShutterSpeed;
	int nMaxShutterSpeed;

	/*
		增益系数 (Gain)
		最小增益 1x ~ 16x 
		最大增益 2x ~ 32x
	*/
	int nMinAutoGain;
	int nMaxAutoGain;
	
} HY_DVR_EXPOSAL_CFG, *LPHY_DVR_EXPOSAL_CFG;

/* NXP8850 Image Sensor Processing配置信息: 白平衡 (White Balance)*/
typedef struct tagHY_DVR_WHITEBALANCE_CFG
{
	int bValid;					//! 本结构体是否有效，=0表示无效

	/*
		1 自动
		2 手动： 手动 需要修改 RED Gain (0-255),Blue Gain(0-255)
		3 多云
		4 太阳
		5 阴天
		6 冷白荧光灯
	*/
	int bWorkMode;

	int nRedGain[DVR_MAX_ISP_WHITEBALANCE];

	int nBlueGain[DVR_MAX_ISP_WHITEBALANCE];

} HY_DVR_WHITEBALANCE_CFG, *LPHY_DVR_WHITEBALANCE_CFG;

/* NXP8850 Image Sensor Processing配置信息: 数字降噪 （De-Noise）*/
typedef struct tagHY_DVR_DENOISE_CFG
{
	int bValid;					//! 本结构体是否有效，=0表示无效

	/*
		关闭
		开启： Y  Strength （0-255）
				   Cb strength (0-255)
				   Cr strength (0-255)
	*/
	int bWorkMode;

	int nYStrength;

	int nCbStrength;

	int nCrStrength;

} HY_DVR_DENOISE_CFG, *LPHY_DVR_DENOISE_CFG;

/* NXP8850 Image Sensor Processing配置信息*/
typedef struct tagHY_DVR_ISP_TEMPLATE
{
	int bValid;					//! 本结构体是否有效，=0表示无效

	/*
	AE 模式，为手动模式时，AE Window设置配置才是有效的
	*/
	HY_DVR_AE_MODE struAEMode;

	/*
		AE Window 设置,分成6个Window,分别是 1 -6 
	*/
	HY_DVR_AEWINDOW_CFG struAEWindow[DVR_MAX_ISP_AEWINDOW];

	/*
		曝光参数
	*/
	HY_DVR_EXPOSAL_CFG struExposal;
		
	/*
		白平衡 (White Balance)
	*/
	HY_DVR_WHITEBALANCE_CFG struWhiteBalance;

	/*
		数字降噪 （De-Noise）
	*/
	HY_DVR_DENOISE_CFG struDeNoise;
}
HY_DVR_ISP_TEMPLATE, *LPHY_DVR_ISP_TEMPLATE;

/* NXP8850 Image Sensor Processing配置信息*/
typedef struct tagHY_DVR_NXP8850ISP_CFG
{
	int bValid;					//! 本结构体是否有效，=0表示无效

	//ISP基本配置参数
	HY_DVR_ISP_COMMON struCommon;

	//ISP参数模版
	HY_DVR_ISP_TEMPLATE struTemplate[DVR_MAX_ISP_TEMPLATE];

} HY_DVR_NXP8850ISP_CFG, *LPHY_DVR_NXP8850ISP_CFG;

#define NXP8850ISP_CFG_LEN		(sizeof (HY_DVR_NXP8850ISP_CFG))
/////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////
//编码类型
#define   DVR_MAX_STREAM_TYPE		2
#define   DVR_CAP_NORMAL_H264    	0x01
#define   DVR_CAP_ADVANCED_H264		0x02

#define   DVR_CAP_RESOLUTION_QCIF   0x01
#define   DVR_CAP_RESOLUTION_CIF    0x02
#define   DVR_CAP_RESOLUTION_D1   	0x04			//实时2CIF
#define   DVR_CAP_RESOLUTION_SD    	0x08			//实时D1

#define DVR_CAP_RESOLUTION_4CIF_SIM   0x10		//非实时D1
#define DVR_CAP_RESOLUTION_2CIF_SIM   0x20		//非实时2CIF

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
*  @brief	编码能力结构
 */
typedef struct tagHY_DVR_COMPRESS_CAP
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */
	int nStreamFormatCap;										/*!< 支持的码流格式， 所有支持的格式相或的结果  */
	unsigned long dwResolutionCap[DVR_MAX_STREAM_TYPE];			/*!< 每种编码格式下支持的分辨率格式,支持所有的格式相或的结果  */

} HY_DVR_COMPRESS_CAP, *LPHY_DVR_COMPRESS_CAP;

/*!
*  @struct	tagHY_DVR_COMPRESSION_INFO
*  @brief	编码配置结构
 */
typedef struct tagHY_DVR_COMPRESSION_INFO
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */
	int nVideoFrameRate;										/*!< 帧率 1-20，ff为全帧率 */
	int nVideoBitrateH;											/*!< 码率上限,单位Kbit/s */
	int nVideoBitrateL;											/*!< 码率下限,单位Kbit/s */
	int nQuotiety;												/*!< 量化系数:0-6 */
	int nResolution;											/*!< 分辨率0-CIF, 1-D1 */
	int nStreamType;											/*!< 码流类型 0-视频流 1-复合流 */
	int nPicQuality;											/*!< 录像质量 0-高质量 1-标准 2-低 3-自定义 */
	int nBitrateType;											/*!< 码率类型 0-变码率率 1-定码 2-限定码率 */

} HY_DVR_COMPRESSION_INFO, *LPHY_DVR_COMPRESSION_INFO;

/*!
*  @struct	tagHY_DVR_AUX_COMPRESSION_INFO
*  @brief	子码流编码参数结构
 */
typedef struct tagHY_DVR_AUX_COMPRESSION_INFO
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */
	int bEnalbe;												/*!< 是否启用子码流  */
	int nVideoFrameRate;										/*!< 帧率 1-20，ff为全帧率 */
	int nVideoBitrate;											/*!< 码率:32Kbin/s,48Kbit/s,64Kbit/s,128Kbit/s,256Kbit/s,512Kbit/s */

} HY_DVR_AUX_COMPRESSION_INFO, *LPHY_DVR_AUX_COMPRESSION_INFO;

/*!
*  @struct	tagHY_DVR_COMPRESSION_CHANNEL
*  @brief	通道编码参数结构
 */
typedef struct tagHY_DVR_COMPRESSION_CHANNEL
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */
	int nDelayRecordTime;										/*!< 录象延迟时间:10s、30s、自定义（10s-300s） */
	int nPreRecordTime;											/*!< 预录时间:0表示最大预录时间、5秒、10秒 */
	HY_DVR_COMPRESS_CAP struCompressCap;						/*!< 压缩能力（只读）  */
	HY_DVR_AUX_COMPRESSION_INFO struNetPara;					/*!< 子码流  */
	HY_DVR_COMPRESSION_INFO struRecordPara[3];					/*!< 0基本配置,1事件录像,2手动录像  */

} HY_DVR_COMPRESSION_CHANNEL, *LPHY_DVR_COMPRESSION_CHANNEL;

/*!
*  @struct	tagHY_DVR_HC_RESMODE
*  @brief	HC板型编解码资源分配模式
*/
typedef struct tagHY_DVR_HC_RESMODE
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	//该结构体只在HC或HS板型中有效

	/*  工作模式取值范围为(0 - 2)
	16路板型: 
	模式0时，系统支持16路实时CIF或非实时2CIF、D1格式编解码
	模式1时，系统支持8路实时2CIF 加8路实时CIF 编解，4路2CIF实时解码
	模式2时，系统支持4路实时D1 加12路实时CIF编码，1路D1实时解码
	8路板型: 
	模式0时，系统支持8路实时CIF或非实时2CIF、D1格式编解码
	模式1时，系统支持2路实时D1 加6路实时CIF 编解，4路D1实时解码
	模式2时，系统支持6路实时D1 加2路实时CIF编码，1路D1实时解码
	*/
	int nMode;

	DWORD dwChMask;												/*!< 通道掩码，第0位为1表示通道1支持2CIF或D1格式编码，依次类推 */

} HY_DVR_HC_RESMODE, *LPHY_DVR_HC_RESMODE;

/////////////////////////////////////////////////////////////////////////////////////////////////
/*!
*  @struct	tagHY_DVR_VGA_NET_CFG
*  @brief	VGA子码流结构
*/
typedef struct tagHY_DVR_HD_NET_CFG
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	HY_DVR_COMPRESSION_INFO struVGANetPara[DVR_MAX_VIDEOIN_NUM];				/*!< VGA子码流 */

}HY_DVR_VGA_NET_CFG, *LPHY_DVR_VGA_NET_CFG;

/*!
*  @struct	tagHY_DVR_COMPRESSION_CFG
*  @brief	编码参数结构
*/
typedef struct tagHY_DVR_COMPRESSION_CFG
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	HY_DVR_WORKMODE struWorkMode;											/*!< 工作模式(只读) */
	HY_DVR_COMPRESSION_CHANNEL struCompressChannel[DVR_MAX_VIDEOIN_NUM];	/*!< 各通道编码参数 */
	HY_DVR_VGA_NET_CFG	struVGANet;											/*!< 各通道VGA子码流 */

} HY_DVR_COMPRESSION_CFG, *LPHY_DVR_COMPRESSION_CFG;

/** @brief 编码配置结构体长度																	 */
#define COMPRESS_CFG_LEN   sizeof (HY_DVR_COMPRESSION_CFG)
/////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////
/*!
*  @struct	tagHY_DVR_RECORD_CTRLSTATE
*  @brief	录像控制状态
*/
typedef struct tagHY_DVR_RECORD_CTRLSTATE
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	unsigned int uRecordMode[DVR_MAX_VIDEOIN_NUM];							/*!< 0表示手动录像,1表示自动录像,2表示关闭录像 */

} HY_DVR_RECORD_CTRLSTATE, *LPHY_DVR_RECORD_CTRLSTATE;

/*!
*  @struct	tagHY_DVR_RECORD_STREAM
*  @brief	录像码流选择
*/
typedef struct tagHY_DVR_RECORD_STREAM
{
	int bValid;																/*!< 本结构体是否有效，=0表示无效 */

	unsigned int uStreamIndex[DVR_MAX_VIDEOIN_NUM];							/*!< 0表示主码流,1表示子码流(CIF),2表示高清子码流(VGA) */

} HY_DVR_RECORD_STREAM, *LPHY_DVR_RECORD_STREAM;

/*!
*  @struct	tagHY_DVR_RECORD_SCHED
*  @brief	录像计划结构
 */
typedef struct tagHY_DVR_RECORD_SCHED
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	HY_DVR_SCHEDTIME struRecordTime[DVR_MAX_VIDEOIN_NUM];					/*!< 录像时间计划 */
	HY_DVR_RECORD_CTRLSTATE struRecordCtlState;								/*!< 录像控制状态 */
	HY_DVR_RECORD_STREAM struRecordStream;									/*!< 录像码流 */

} HY_DVR_RECORD_SCHED, *LPHY_DVR_RECORD_SCHED;

/** @brief 录像计划结构体长度																	 */
#define RECORD_SCHED_LEN sizeof(HY_DVR_RECORD_SCHED)
/////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_TIME
*  @brief	配置系统时间参数
 */
typedef struct tagHY_DVR_TIME
{
	int nYear;																/*!< 年 */
	int nMonth;																/*!< 月 */
	int nDay;																/*!< 日 */
	int nHour;																/*!< 时 */
	int nMinute;															/*!< 分 */
	int nSecond;															/*!< 秒 */

} HY_DVR_TIME, *LPHY_DVR_TIME;

/** @brief 配置系统时间结构体长度																 */
#define TIME_CFG_LEN sizeof(HY_DVR_TIME)
/////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_PTZPRO
*  @brief	云台协议信息
 */
typedef struct tagHY_DVR_PTZPRO
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	int nUseable;															/*!< PTZ协议的状态（0：未安装 1：已安装）  */
	int bSystem;															/*!< PTZ协议的状态（0：非系统固有的，可删除 1：系统固有的，不能删除）  */
	char szPTZName[DVR_MAX_PTZPRONAME_LEN];									/*!< PTZ协议名称  */

} HY_DVR_PTZPRO, *LPHY_DVR_PTZPRO;

/*!
*  @struct	tagHY_DVR_PTZPRO_CFG
*  @brief	云台协议管理信息
 */
typedef struct tagHY_DVR_PTZPRO_CFG
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	int nPtzCount;															/*!< 系统支持PTZ协议的个数  */
	HY_DVR_PTZPRO struPTZProtocol[DVR_MAX_PTZPRO_NUM];						/*!< 系统PTZ  */

} HY_DVR_PTZPRO_CFG, *LPHY_DVR_PTZPRO_CFG;

/** @brief 云台协议管理结构体长度																 */
#define PTZPRO_CFG_LEN sizeof(HY_DVR_PTZPRO_CFG)
/////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_PTZ
*  @brief	云台信息
 */
typedef struct tagHY_DVR_PTZ
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	unsigned char bySetPreset[DVR_MAX_PRESET_NUM];							/*!< 预置点是否设置,0-没有设置,1-设置  */
	unsigned char bySetCruise[DVR_MAX_PRESET_NUM];							/*!< 巡航是否设置: 0-没有设置,1-设置  */
	unsigned char bySetTrack[DVR_MAX_PRESET_NUM];							/*!< 轨迹是否设置,0-没有设置,1-设置  */

} HY_DVR_PTZ, *LPHY_DVR_PTZ;

/*!
*  @struct	tagHY_DVR_SERIAL
*  @brief	串口配置
 */
typedef struct tagHY_DVR_SERIAL
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	int nBaudRate;															/*!< 波特率(bps)，1200，2400，4800，9600 */
	int nDataBit;															/*!< 只读 */
	int nStopBit;															/*!< 只读 */
	int nParity;															/*!< 只读 */
	int nFlowcontrol;														/*!< 只读 */
	int nDecoderAddress;													/*!< 解码器地址:0 - 255  */
	int nComType;															/*!< 0－COM1 RS232，1－COM2 RS485  */

} HY_DVR_SERIAL, *LPHY_DVR_SERIAL;

/*!
*  @struct	tagHY_DVR_DECODER_CHANNEL
*  @brief	解码通道配置
 */
typedef struct tagHY_DVR_DECODER_CHANNEL
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	char szPTZName[DVR_MAX_PTZPRONAME_LEN];									/*!< PTZ协议名称  */
	HY_DVR_SERIAL struSerial;												/*!< 串口配置 */

} HY_DVR_DECODER_CHANNEL, *LPHY_DVR_DECODER_CHANNEL;

/*!
*  @struct	tagHY_DVR_PTZ_ELCTRONIC_SONY
*  @brief	sony的电子ptz机芯配置
*/
typedef struct  tagHY_DVR_PTZ_ELCTRONIC_SONY
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	int nDigitZoom;															/*!< 数字变倍 (0-关 1-开)			                        */
	int nLowLum;															/*!< 低照度 (0-关 1-开)										*/
	int nBackLight;															/*!< 背光补偿 (0-关 1-开)									*/
	int nAutoShutter;														/*!< 自动快门 (0-手动 1-自动)			                    */
	int nWhiteBalance;														/*!< 白平衡 (0-手动 1-自动 2-室内 3-室外 4-ATW 5-ONE PUSH)	*/
	int nRedGain;															/*!< 红增益 (0~255)											*/
	int nBlueGain;															/*!< 蓝增益 (0~255)											*/
	int nAcutance;															/*!< 锐度 (0~15)											*/
	int nExpMode;															/*!< 曝光模式 (0-自动 1-手动 2-快门优先 3-光圈优先)			*/
	int nShutterSpeed;														/*!< 快门速度 (0~15)				                        */
	int nIrisSpeed;															/*!< 光圈 (0-手动 1-自动）									*/
	int nWideDyn;															/*!< 宽动态 (0-关 1-开)										*/
	int n3DFilter;															/*!< 3D降噪	(0-关 1-开)										*/
	int nMirror;															/*!< 镜像  (0-关 1-开)										*/
	int nReverse;															/*!< 翻转  (0-关 1-开)										*/
	int nInputFrequency;													/*!< 输入频率  (0-50Hz 1-60Hz)                              */
	int nLongRestrict;														/*!< 长焦限速（1-开，0-关）									*/
	int nNorthSet;															/*!< 北位设定（1-设定）										*/

} HY_DVR_PTZ_ELCTRONIC_SONY, *LPHY_DVR_PTZ_ELCTRONIC_SONY;

/*!
*  @struct	tagHY_DVR_PTZ_ELCTRONIC_CHANNEL
*  @brief	单个通道的电子ptz配置
*/
typedef struct  tagHY_DVR_PTZ_ELCTRONIC_CHANNEL
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	HY_DVR_PTZ_ELCTRONIC_SONY struPtzElcSony;								/*!< SONY电子PTZ机芯配置 */

} HY_DVR_PTZ_ELCTRONIC_CHANNEL, *LPHY_DVR_PTZ_ELCTRONIC_CHANNEL;

/*!
*  @struct	tagHY_DVR_PTZ_ELCTRONIC
*  @brief	所有通道的电子ptz配置
*/
typedef struct  tagHY_DVR_PTZ_ELCTRONIC
{
	int bValid;					//! 本结构体是否有效，=0表示无效

	HY_DVR_PTZ_ELCTRONIC_CHANNEL   struPtzElcChannel[DVR_MAX_PTZ_NUM];

} HY_DVR_PTZ_ELCTRONIC, *LPHY_DVR_PTZ_ELCTRONIC;

//云台守望动作
/*!
*  @struct	tagHY_DVR_PTZACTION
*  @brief	云台守望动作
*/
typedef struct tagHY_DVR_PTZACTION
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	int nUseable;															/*!< 是否启用守望动作 */
	int nCycle;																/*!< 守望动作的周期, 0表示开机 */
	int nAction;															/*!< 动作类型 0表示预置点 1表示巡航 2表示轨迹 3表示自动扫描 */
	int nIndex;																/*!< 索引号(预置点号,巡航号,轨迹号,自动扫描线路号) */

} HY_DVR_PTZACTION, *LPHY_DVR_PTZACTION;

/*!
*  @struct	tagHY_DVR_PTZACTION
*  @brief	云台守望动作
*/
typedef struct tagHY_DVR_PTZACTION_CFG
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	HY_DVR_PTZACTION struPTZAction[DVR_MAX_PTZ_NUM];						/*!< 云台守望 */

} HY_DVR_PTZACTION_CFG, *LPHY_DVR_PTZACTION_CFG;

/*!
*  @struct	tagHY_DVR_DECODER_CFG
*  @brief	设备解码配置
 */
typedef struct tagHY_DVR_DECODER_CFG
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	HY_DVR_DECODER_CHANNEL struDecoder[DVR_MAX_PTZ_NUM];					/*!< 各解码通道配置 */
	HY_DVR_PTZACTION_CFG	struPtzAction;									/*!< 各通道云台守望配置 */
	HY_DVR_PTZ_ELCTRONIC	struPtzElc;										/*!< 电子ptz配置 */

} HY_DVR_DECODER_CFG, *LPHY_DVR_DECODER_CFG;

/** @brief 设备解码配置结构体长度																 */
#define  DECODER_CFG_LEN  sizeof(HY_DVR_DECODER_CFG)
///////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_ALARMIN_CHANNEL
*  @brief	各通道报警输入配置
 */
typedef struct tagHY_DVR_ALARMIN_CHANNEL
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	int nAlarmInType;														/*!< 报警器类型,0：常开,1：常闭  */
	HY_DVR_HANDLEEXCEPTION struHandleType;									/*!< 处理方式  */
	HY_DVR_SCHEDTIME struSchedTime;											/*<! 报警输入布防时间 */

} HY_DVR_ALARMIN_CHANNEL, *LPHY_DVR_ALARMIN_CHANNEL;

/*!
*  @struct	tagHY_DVR_ALARMOUT_CHANNEL
*  @brief	各通道报警输出配置
 */
typedef struct tagHY_DVR_ALARMOUT_CHANNEL
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	int nAlarmOutDelay;														/*!< 输出保持时间(0为无限，需要手动关闭)  */
	HY_DVR_SCHEDTIME struSchedTime;											/*!< 报警输出布防时间 */

} HY_DVR_ALARMOUT_CHANNEL, *LPHY_DVR_ALARMOUT_CHANNEL;

/*!
*  @struct	tagHY_DVR_ALARM_CAPTURE_PIC
*  @brief	报警联动抓图配置
 */
typedef struct tagHY_DVR_ALARM_CAPTURE_PIC
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	int nCapPicCount;														/*!< 联动快照张数 */
	int nCapPicIntervalTime;												/*!< 联动快照间隔时间 */

} HY_DVR_ALARM_CAPTURE_PIC, *LPHY_DVR_ALARM_CAPTURE_PIC;

/*!
*  @struct	tagHY_DVR_SYSTEM_EXCEPTION
*  @brief	系统异常检测
 */
typedef struct tagHY_DVR_SYSTEM_EXCEPTION
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	int bEnable;															/*!< 是否启动检测 */
	int nCheckTime;															/*!< 检测时间间隔，单位为秒（目前不支持） */
	HY_DVR_HANDLEEXCEPTION struHandleType;									/*!< 联动处理方式  */

} HY_DVR_SYSTEM_EXCEPTION, *LPHY_DVR_SYSTEM_EXCEPTION;

/*!
*  @struct	tagHY_DVR_ALARM_CFG
*  @brief	报警设置
 */
typedef struct tagHY_DVR_ALARM_CFG
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	HY_DVR_WORKMODE struWorkMode;											/*!< 工作模式(只读) */
	HY_DVR_ALARM_CAPTURE_PIC struCapPic;									/*!< 联动快照 */
	HY_DVR_ALARMIN_CHANNEL struAlarmIn[DVR_MAX_ALARMIN_NUM];				/*!< 报警输入配置 */
	HY_DVR_ALARMOUT_CHANNEL struAlarmOut[DVR_MAX_ALARMOUT_NUM];				/*!< 报警输入配置 */
	HY_DVR_SYSTEM_EXCEPTION struSystemException[DVR_MAX_EXCEPTION_NUM];		/*!< 系统异常处理：0-硬盘故障,1-IP冲突,2-非法访问,3-网线断,4-盘组满,5-盘组异常 */
	HY_DVR_ALIAS_CFG struAlarmInAlias[DVR_MAX_ALARMIN_NUM];					/*!< 报警输入通道别名 */
	HY_DVR_ALIAS_CFG struAlarmOutAlias[DVR_MAX_ALARMOUT_NUM];				/*!< 报警输出通道别名 */
	HY_DVR_ALIAS_CFG_1 struAlarmInAlias_1[DVR_MAX_ALARMIN_NUM];				/*!< 报警输入通道别名(Unicode) */
	HY_DVR_ALIAS_CFG_1 struAlarmOutAlias_1[DVR_MAX_ALARMOUT_NUM];			/*!< 报警输出通道别名(Unicode) */

} HY_DVR_ALARM_CFG, *LPHY_DVR_ALARM_CFG;

/** @brief 报警设置结构体长度																 */
#define ALARM_CFG_LEN   sizeof (HY_DVR_ALARM_CFG)
//////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_VO_CFG
*  @brief	显示参数
 */
typedef struct tagHY_DVR_VO_CFG
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	int nScreenSaveTime;													/*!< 屏幕保护时间：0表示从不启动屏幕保护，60s-3600s表示屏幕保护时间）  */
	int nMenuAlphaValue;													/*!< 菜单与背景图象对比度：0表示不透明，4表示4:1，8表示3:1  */

} HY_DVR_VO_CFG, *LPHY_DVR_VO_CFG;

/** @brief 显示参数结构体长度																 */
#define VO_CFG_LEN   sizeof (HY_DVR_VO_CFG)
/////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_USER_ENABLE
*  @brief	用户使能信息
 */
typedef struct tagHY_DVR_USER_ENABLE
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	int bEnable;															/*!< 是否启用:0表示禁用，1表示启用 */

} HY_DVR_USER_ENABLE, *LPHY_DVR_USER_ENABLE;

/*!
*  @struct	tagHY_DVR_USER_INFO
*  @brief	用户基本信息
 */
typedef struct tagHY_DVR_USER_INFO
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	char szPassword[DVR_MAX_PASSWORD_LEN];									/*!< 密码  */
	unsigned char byLimitMac[DVR_MAX_MAC_NUM_LEN];							/*!< 限制访问物理地址  */
	char szLimitIP[DVR_MAX_IP_STR_LEN];										/*!< 限制访问IP地址  */
	char szEmail[DVR_MAX_EMAIL_LEN];										/*!< Email地址 */

} HY_DVR_USER_INFO, *LPHY_DVR_USER_INFO;

/*!
*  @struct	tagHY_DVR_USER_RIGHT
*  @brief	用户权限信息
 */
typedef struct tagHY_DVR_USER_RIGHT
{
	int bValid;								/*!< 本结构体是否有效，0表示无效 */
	int nLocalRight[DVR_MAX_RIGHT_NUM];		/*!< 本地权限：数组0-本地系统设置；1-文件管理；2-录像备份；3-系统关闭；4-邮件通知 */
	int nRemoteRight[DVR_MAX_RIGHT_NUM];	/*!< 远程权限：数组0-系统设置；1-语音对讲；2-串口输出；3-报警输出；4-远程升级；5-关闭系统 */
	int nChannelRight[DVR_MAX_RIGHT_NUM];	/*!< 通道权限：数组0-本地回放；1-本地预览；2-本地云台控制；3-本地手动录像；4-远程回放；5-远程预览；6-远程云台控制；7-远程手动录像 */

} HY_DVR_USER_RIGHT, *LPHY_DVR_USER_RIGHT;

/*!
*  @struct	tagHY_DVR_USER
*  @brief	用户信息
 */
typedef struct tagHY_DVR_USER
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	char szUserName[DVR_MAX_USERNAME_LEN];									/*!< 用户名 最大16位  */
	HY_DVR_USER_ENABLE struUserEnable;										/*!< 用户使能信息 */
	HY_DVR_USER_INFO struUserInfo;											/*!< 用户基本信息 */
	HY_DVR_USER_RIGHT struUserRight;										/*!< 用户权限信息 */

} HY_DVR_USER, *LPHY_DVR_USER;

/*!
*  @struct	tagHY_DVR_ONLINEUSER
*  @brief	在线用户信息
*/
typedef struct tagHY_DVR_ONLINEUSER
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	int bRemote;															/*!< 是否为远程用户	*/
	int bConnect;															/*!< 是否处于连接状态 */
	DWORD dwUserID;															/*!< 用户句柄 */
	DWORD dwProtocolID;														/*!< 登陆协议 */
	char szUserName[DVR_MAX_USERNAME_LEN];									/*!< 用户名 */
	DWORD dwIPAddress;														/*!< 登陆IP */
	HY_DVR_TIME struLoginTime;												/*!< 登陆时间 */
	DWORD dwBitrate;														/*!< 网络流量 b/s */

}HY_DVR_ONLINEUSER, *LPHY_DVR_ONLINEUSER; 

/*!
*  @struct	tagHY_DVR_ONLINEUSER_CFG
*  @brief	在线用户配置
*/
typedef struct tagHY_DVR_ONLINEUSER_CFG
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	HY_DVR_ONLINEUSER struOnlineUser[DVR_MAX_ONLINEUSER_NUM];				/*!< 在线用户列表 */

} HY_DVR_ONLINEUSER_CFG, *LPHY_DVR_ONLINEUSER_CFG;

/*!
*  @struct	tagHY_DVR_WHITEIP_ENABLE
*  @brief	白名单使能
*/
typedef struct tagHY_DVR_WHITEIP_ENABLE
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	int bEnable;															/*!< 是否启用IP白名单*/
} HY_DVR_WHITEIP_ENABLE, *LPHY_DVR_WHITEIP_ENABLE;

/*!
*  @struct	tagHY_DVR_WHITEIP
*  @brief	白名单用户信息
*/
typedef struct
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	DWORD dwWhiteIP;														/*!< 白名单IP地址 */

} HY_DVR_WHITEIP, *LPHY_DVR_WHITEIP;

/*!
*  @struct	tagHY_DVR_USER_CFG
*  @brief	用户配置信息
 */
typedef struct tagHY_DVR_USER_CFG
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	HY_DVR_WORKMODE struWorkMode;											/*!< 工作模式(只读) */
	HY_DVR_USER struUser[DVR_MAX_USER_NUM];									/*!< 用户信息 */
	HY_DVR_ONLINEUSER_CFG struUserOnline;									/*!< 在线用户信息 */
	HY_DVR_WHITEIP struWhiteIP[DVR_MAX_WHITEIP_NUM];						/*!< 白名单信息 */
	HY_DVR_WHITEIP_ENABLE struWhiteIPEnable;								/*!< 白名单使能信息 */

} HY_DVR_USER_CFG, *LPHY_DVR_USER_CFG;

/** @brief 用户配置信息结构体长度														 */
#define USER_CFG_LEN	sizeof(HY_DVR_USER_CFG)
/////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_DEVICE_INFO
*  @brief	设备信息结构(只读)
 */
typedef struct tagHY_DVR_DEVICE_INFO
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	unsigned long dwBoardType;												/*!< 板型编号 */
	char szTypeName[DVR_MAX_VERSION_LEN];									/*!< 设备型谱名称，如HY-2016HC */
	unsigned long dwSerialNum;												/*!< 序列号  */
	char szHardwareVersion[DVR_MAX_VERSION_LEN];							/*!< 硬件版本 */
	char szSoftwareVersion[DVR_MAX_VERSION_LEN];							/*!< 软件版本 */
	char szDspVersion[DVR_MAX_VERSION_LEN];									/*!< 编码版本 */

	unsigned char byVideoInChannels;										/*!< 视频输入路数  */
	unsigned char byAudioInChannels;										/*!< 音频输入路数  */
	unsigned char byAlarmInChannels;										/*!< 报警输入路数  */
	unsigned char byAlarmOutChannels;										/*!< 报警输出路数  */

	unsigned char byVGAChannels;											/*!< VGA接口个数  */

	unsigned char bySpotOutChannles;										/*!< SPOT输出路数  */
	unsigned char byVoiceInChannels;										/*!< 语音对讲输入路数  */

} HY_DVR_DEVICE_INFO, *LPHY_DVR_DEVICE_INFO;

/** @brief 设备信息结构体长度														 */
#define	DEVICE_INFO_LEN	sizeof(HY_DVR_DEVICE_INFO)
//////////////////////////////////////////////////////////////////////////////


///*!
//*  @struct	tagHY_DVR_DEVICE_OUTPUT_INDEX
//*  @brief	输出设备编号(只读)
//*/
//typedef struct tagHY_DVR_DEVICE_OUTPUT_INDEX
//{
//	int bValid;															/*!< 本结构体是否有效，0表示无效 */
//	
//	DWORD	dwDeviceType;												/*!< 设备类型(0: 无效, 1: VGA, 2 :TV) */
//	DWORD	dwDeviceIndex;												/*!< 设备编号 */
//
//} HY_DVR_DEVICE_OUTPUT_INDEX, *LPHY_DVR_DEVICE_OUTPUT_INDEX;
//
///*!
//*  @struct	tagHY_DVR_DEVICE_OUTPUT
//*  @brief	输出设备信息(只读)
//*/
//typedef struct tagHY_DVR_DEVICE_OUTPUT
//{
//	int bValid;															/*!< 本结构体是否有效，0表示无效 */
//
//	HY_DVR_DEVICE_OUTPUT_INDEX cOutputDevice[MAX_DEVICE_OUTPUT];
//
//} HY_DVR_DEVICE_OUTPUT, *LPHY_DVR_DEVICE_OUTPUT;

//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_DST
*  @brief	夏时制信息结构
 */
typedef struct tagHY_DVR_DST
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	int bEnableDST;															/*!< 是否启用夏时制:0表示禁用，1表示启用 */
	HY_DVR_TIME struStart;													/*!< 开始时间，年无效 */
	HY_DVR_TIME struEnd;													/*!< 结束时间，年无效 */
	int nDSTBias;															/*!< 调整时间，以秒为单位，正数表示延时，负数表示提前，取值范围60-3600 */

} HY_DVR_DST, *LPHY_DVR_DST;

/*!
*  @struct	tagHY_DVR_GUI
*  @brief	日期时间格式配置
 */
typedef struct tagHY_DVR_GUI
{
	int bValid;					/*!< 本结构体是否有效，0表示无效 */
	int nAutoLockScreenTime;	/*!< 自动锁屏时间：0表示从不锁屏， 60s-3600s表示锁屏时间*/
	int nMenuLanguage;			/*!< 语言：0(Default)-简体中文；1-繁体中文；2-英文 */
	int nDateFormat;			/*!< 日期格式：0(Default)-YYYY-MM-DD W hh:mm:ss, 1-YYYY-MM-DD hh:mm:ss, 2-MM-DD-YYYY W hh:mm:ss, 3-MM-DD-YYYY hh:mm:ss */
	int nTimeFormat;			/*!< 时间格式：0-12小时制，1-24小时制 */

} HY_DVR_GUI, *LPHY_DVR_GUI;

/*!
*  @struct	tagHY_DVR_TIMEZONE
*  @brief	时区配置
 */
typedef struct tagHY_DVR_TIMEZONE
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	int nTimeZone;															/*!< 时区时差 */

} HY_DVR_TIMEZONE, *LPHY_DVR_TIMEZONE;

/*!
*  @struct	tagHY_DVR_DVRID
*  @brief	DVRID配置
 */
typedef struct tagHY_DVR_DVRID
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	int nDvrID;																/*!< DVR ID,用于遥控器  */

} HY_DVR_DVRID, *LPHY_DVR_DVRID;

/*!
*  @struct	tagHY_DVR_STANDARD
*  @brief	视频制式配置
 */
typedef struct tagHY_DVR_STANDARD
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	int nVideoInStandard;													/*!< 视频输入制式:1-NTSC,2-PAL,4-SECAM */
	int nVideoOutStandard;													/*!< 视频输出制式（通常和输入制式一样） */

} HY_DVR_STANDARD, *LPHY_DVR_STANDARD;

/*!
*  @struct	tagHY_DVR_DEVICE_CFG
*  @brief	设备基本配置结构
 */
typedef struct tagHY_DVR_DEVICE_CFG
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	HY_DVR_DVRID struDvrID;													/*!< DVRID配置 */

	HY_DVR_GUI struGUI;														/*!< 日期时间格式配置 */

	HY_DVR_TIMEZONE struTimeZone;											/*!< 时区配置 */

	HY_DVR_DST struDST;														/*!< 夏时制配置 */

	HY_DVR_ALIAS_CFG struDvrAlias;											/*!< 设备别名配置 */

	HY_DVR_STANDARD	struStandard;											/*!< 视频制式配置 */

	HY_DVR_ALIAS_CFG_1 struDvrAlias_1;										/*!< 设备别名配置(Unicode) */

} HY_DVR_DEVICE_CFG, *LPHY_DVR_DEVICE_CFG;

/** @brief 设备基本配置结构体长度														 */
#define	DEVICE_CFG_LEN	sizeof(HY_DVR_DEVICE_CFG)
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_DISK_PARTITION
*  @brief	分区信息结构（只读）
 */
typedef struct tagHY_DVR_DISK_PARTITION
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	char szDevNode[DVR_MAX_PARTITION_DEVNODE_LEN];							/*!< 设备节点名, 如 /dev/sda1 */
	unsigned long dwCapacity;												/*!< 总容量, M为单位 */
	unsigned long dwSpare;													/*!< 剩余容量 */
	unsigned long dwStartCHS;												/*!< 分区起始扇区 */
	unsigned long dwEndtCHS;												/*!< 分区结束扇区 */

} HY_DVR_DISK_PARTITION, *LPHY_DVR_DISK_PARTITION;

/*!
*  @struct	tagHY_DVR_DISK_MARK
*  @brief	硬盘标记（只读）
 */
typedef struct tagHY_DVR_DISK_MARK
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	int nVerifyMark;														/*!< 验证码(配置改变时，验证码会同步改变) */

} HY_DVR_DISK_MARK, *LPHY_DVR_DISK_MARK;

/** @brief 硬盘标记结构体长度														 */
#define	DISK_MARK_LEN	sizeof(HY_DVR_DISK_MARK)

/*!
*  @struct	tagHY_DVR_DISK_TYPE
*  @brief	存储设备类型（HD、SD、USB、IPSAN、NAS）
*/
typedef struct
{
	int bValid;					//! 本结构体是否有效，=0表示无效

	int nDiskType;				//! 0- unkonown、1-HDD、2-USB、4-CDROM、8-SD、16-IPSAN、32-NAS
}HY_DVR_DISK_TYPE, *LPHY_DVR_DISK_TYPE;

/*!
*  @struct	tagHY_DVR_DISK
*  @brief	硬盘信息结构（只读）
 */
typedef struct tagHY_DVR_DISK
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	int bEnable;															/*!< 是否安装有此硬盘:0表示没有，1表示有 */

	HY_DVR_DISK_MARK struVerifyMark;										/*!< 验证码(配置改变时，验证码会同步改变) */

	int nRestState;															/*!< 硬盘状态:0-正常，1-正在写入，2-异常，3-警告 */
	int nWriteState;														/*!< 硬盘状态:0-没有写，非0-正在写入 */

	char szSerialNum[DVR_MAX_VERSION_LEN];									/*!< 序列号 */
	char szTypeName[DVR_MAX_VERSION_LEN];									/*!< 硬盘类型 */
	int nBusNum;															/*!< 物理位置,如SATA1 */

	unsigned long dwCapacity;												/*!< 容量,M为单位 */
	int nPartitionCount;													/*!< 分区数量 */

	HY_DVR_DISK_PARTITION struPartitionInfo[DVR_MAX_PARTITION_IN_HARDDISK];	/*!< 分区信息 */

} HY_DVR_DISK, *LPHY_DVR_DISK;

/*!
*  @struct	tagHY_DVR_DISK_GROUP
*  @brief	盘组信息结构（只读）
 */
typedef struct tagHY_DVR_DISK_GROUP
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	int bEnable;															/*!< 是否启用本盘组 */
	int nGroupType;															/*!< 盘组类型:0-普通盘组，1-报警盘组，2-冗余盘组，3-备份盘组 */
	int nBindChannelMask;													/*!< 绑定的通道:按位标记，若第0位为1，表示通道1被选中，以此类推 */
	int nDataKeepTime;														/*!< 数据保持时间:0x80000000-一直保持，24 * 3600-保持1天，2 * 24 * 3600-保持2天，7 * 24 * 3600-保持7天，其他值-最大保持 */
	int nPartitionCount;													/*!< 已添加的分区数量 */
	char szPartitionList[DVR_MAX_PARTITION_IN_DISKGROUP][DVR_MAX_PARTITION_DEVNODE_LEN];/*!< 设备节点列表,支持32个分区 */

} HY_DVR_DISK_GROUP, *LPHY_DVR_DISK_GROUP;

/*!
*  @struct	tagHY_DVR_DISK_TYPE_CFG
*  @brief	存储设备类型配置
*/
typedef struct tagHY_DVR_DISK_TYPE_CFG
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	HY_DVR_DISK_TYPE struDiskType[DVR_MAX_HARDDISK_NUM];					/*!< 存储设备类型 */

}HY_DVR_DISK_TYPE_CFG, *LPHY_DVR_DISK_TYPE_CFG;

/*!
*  @struct	tagHY_DVR_STORAGE_CFG
*  @brief	存储管理结构
 */
typedef struct tagHY_DVR_STORAGE_CFG
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	HY_DVR_WORKMODE struWorkMode;											/*!< 工作模式(只读) */
	HY_DVR_DISK struDisk[DVR_MAX_HARDDISK_NUM];								/*!< 硬盘信息（只读） */
	HY_DVR_DISK_GROUP struDiskGroup[DVR_MAX_DISKGROUP_NUM];					/*!< 盘组信息（只读） */
	HY_DVR_DISK_TYPE_CFG struDiskType;										/*!< 存储设备类型配置（只读） */

} HY_DVR_STORAGE_CFG, *LPHY_DVR_STORAGE_CFG;

/** @brief 设备存储管理结构体长度														 */
#define	STORAGE_CFG_LEN	sizeof(HY_DVR_STORAGE_CFG)
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
/*!
*	@struct tagHY_DVR_VGA_VIDEO_BITRATE
*	@brief	VGA子码流码率
*/
typedef struct tagHY_DVR_VGA_VIDEO_BITRATE
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	int nVGAVideoBitrate;													/*!< 子码流码率（单位kbit/s） */

}HY_DVR_VGA_VIDEO_BITRATE, *LPHY_DVR_VGA_VIDEO_BITRATE;

/*!
*  @struct	tagHY_DVR_CHANNEL_STATE
*  @brief	设备通道状态
 */
typedef struct tagHY_DVR_CHANNEL_STATE
{
	int bValid;																/*本结构体是否有效，表示无效(即系统没有该通道) */

	int nVideoBitrate;														/*!< 主码流码率（128kbit/s-5120kbit/s） */
	int nChildVideoBitrate;													/*!< CIF子码流码率（32 48 64 128 256 512kbit/s） */
	int bUseAuxVideoStream;													/*!< 是否启动子码流：0-不启用，1-启用 */

	int nRecordType;														/*!< 录像状态：0-无录像，1-报警录像类型，2-普通类型，3-手动录像类型，4-移动录像 */
	int bViLost;															/*!< 是否有无视频信号报警(0表示无信号，1表示有信号) */
	int bMotion;															/*!< 是否有移动报警(尚不支持) */

} HY_DVR_CHANNEL_STATE, *LPHY_DVR_CHANNEL_STATE;

/*!
*  @struct	tagHY_DVR_VGA_VIDEO_BITRATE_CFG
*  @brief	VGA子码流码率配置
*/
typedef struct tagHY_DVR_VGA_VIDEO_BITRATE_CFG
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */
	HY_DVR_VGA_VIDEO_BITRATE struVGABitrate[DVR_MAX_VIDEOIN_NUM];			/*!< VGA子码流码率 */

}HY_DVR_VGA_VIDEO_BITRATE_CFG, *LPHY_DVR_VGA_VIDEO_BITRATE_CFG;

/*!
*  @struct	tagHY_DVR_DEVICE_STATE
*  @brief	设备状态信息
 */
typedef struct tagHY_DVR_DEVICE_STATE
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	HY_DVR_CHANNEL_STATE struChannelState[DVR_MAX_VIDEOIN_NUM];				/*!< 通道状态 */
	HY_DVR_VGA_VIDEO_BITRATE_CFG struVGABitrate;							/*!< VGA子码流码率配置 */

} HY_DVR_DEVICE_STATE, *LPHY_DVR_DEVICE_STATE;

/** @brief 设备状态结构体长度														 */
#define	DEVICE_STATE_LEN	sizeof(HY_DVR_DEVICE_STATE)
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_MAINTENANCE_COMMON
*  @brief	设备自动维护基本配置
 */
typedef struct tagHY_DVR_MAINTENANCE_COMMON
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	int bEnable;															/*!< 是否启用 */
	int nMode;																/*!< 维护模式:0-每天,1-每周,2-单次 */
	int nWeekDayMask;														/*!< 星期模式时，第0位表示星期天,第1位表示星期1,对应位为1表示当天有效 */
	HY_DVR_TIME struTime;													/*!< 单次模式，则年月日时分有效；其它模式，时分有效 */

} HY_DVR_MAINTENANCE_COMMON, *LPHY_DVR_MAINTENANCE_COMMON;

/*!
*  @struct	tagHY_DVR_DEVICE_MAINTENANCE
*  @brief	设备自动维护
 */
typedef struct tagHY_DVR_DEVICE_MAINTENANCE
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	HY_DVR_MAINTENANCE_COMMON struCommon;									/*!< 设备自动维护基本配置 */

} HY_DVR_DEVICE_MAINTENANCE, *LPHY_DVR_DEVICE_MAINTENANCE;

/** @brief 设备自动维护结构体长度														 */
#define	DEVICE_MAINTENANCE_LEN	sizeof(HY_DVR_DEVICE_MAINTENANCE)
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_DEVICE_CUSTOM
*  @brief	设备功能定制
 */
typedef struct tagHY_DVR_DEVICE_CUSTOM
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	HY_DVR_WORKMODE struUser;												/*!< 高级用户管理模式 */

	HY_DVR_WORKMODE struAlarm;												/*!< 高级报警管理模式 */

	HY_DVR_WORKMODE struPic;												/*!< 高级图像参数配置 */

	HY_DVR_WORKMODE struEmail;												/*!< Email报警联动 */

	HY_DVR_WORKMODE struRecord;												/*!< 高级录像参数配置 */

	HY_DVR_WORKMODE struCMS;												/*!< 中心管理服务器配置 */

	HY_DVR_WORKMODE struAMS;												/*!< 报警服务器配置 */

	HY_DVR_WORKMODE struNTP;												/*!< NTP服务器配置 */

	HY_DVR_WORKMODE struStorage;											/*!< 高级存储管理 */

	HY_DVR_WORKMODE struMaintenance;										/*!< 自动维护配置 */

	HY_DVR_HC_RESMODE struHCResMode;										/*!< HC板型编解码资源分配模式 */

} HY_DVR_DEVICE_CUSTOM, *LPHY_DVR_DEVICE_CUSTOM;

/** @brief 设备功能定制结构体长度														 */
#define	DEVICE_CUSTOM_LEN	sizeof(HY_DVR_DEVICE_CUSTOM)
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_THRESHOLD
*  @brief	告警阀值（暂不实现）
*/
typedef struct tagHY_DVR_THRESHOLD
{
	int bValid;														/*!< 本结构体是否有效，0表示无效 */

	float fCPUUseRatio;												/*!< CPU利用率 */
	float fMemoryUseRatio;											/*!< 内存利用率 */
	float fDiskSpaceRatio;											/*!< 硬盘利用率 */
	DWORD dwDiskSpaceBalance;										/*!< 硬盘剩余空间 */

}HY_DVR_THRESHOLD, *LPHY_DVR_THRESHOLD;

/*!
*  @struct	tagHY_DVR_DOWNLOAD_MODE
*  @brief	下载方式配置（可以依据NAT的配置来区分，暂不实现）
*/
typedef struct tagHY_DVR_DOWNLOAD_MODE
{
	int bValid;														/*!< 本结构体是否有效，0表示无效 */
	DWORD dwDownloadMode;											/*!< 下载方式， 0-hxht, 1-STREAM_TCP */

}HY_DVR_DOWNLOAD_MODE, *LPHY_DVR_DOWNLOADMODE;

//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_NATSTATUS
*  @brief	NAT配置
*/
typedef struct tagHY_DVR_NATSTATUS
{
	int bValid;														/*!< 本结构体是否有效，0表示无效 */

	DWORD dwIsNAT;													/*!< 是否在NAT后面，0表示不在后面，1表示在NAT后面 */

}HY_DVR_NATSTATUS, *LPHY_DVR_NATSTATUS;


//////////////////////////////////////////////////////////////////////////////
/*
压缩格式 语音通道数 采样深度   采样速率    
G711U.HX      1        16        8000  
G711A.HX      1        16        8000  
G722.HX       1        16    8000或16000
*/

/*!
*  @struct	tagHY_DVR_VOICEPARAM
*  @brief	语音参数配置
*/
typedef struct tagHY_DVR_VOICEPARAM
{
	int bValid;														/*!< 本结构体是否有效，0表示无效 */

	char szAudioEncoder[DVR_COMMON_STRING_LEN];						/*!< 支持的语音编码格式，可以有多个，以逗号隔开；G711U.HX G711A.HX G722.HX */
	DWORD dwChannel;												/*!< 通道数 */
	DWORD dwBitsPerSample;											/*!< 采样深度 */
	DWORD dwSamplesPerSec;											/*!< 采样率 */

}HY_DVR_VOICEPARAM, *LPHY_DVR_VOICEPARAM;


//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_NET_CMS_STOREAGE
*  @brief	中心管理服务器存储注册配置信息
*/
typedef struct tagHY_DVR_NET_CMS_STOREAGE
{
	int bValid;														/*!< 本结构体是否有效，0表示无效 */

	char szManageHostAddress[DVR_MAX_DOMAINNAME_LEN];				/*!< 远程管理主机地址，长度考虑域名 */

	unsigned short wManageHostPort;									/*!< 远程管理主机端口 */

} HY_DVR_NET_CMS_STOREAGE, *LPHY_DVR_NET_CMS_STOREAGE;

//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_DEVICE_ID
*  @brief	前端设备ID（该ID是由Hxht接入服务器分配的）
*/
typedef struct tagHY_DVR_DEVICE_ID
{
	int bValid;														/*!< 本结构体是否有效，0表示无效 */

	char szDeviceID[DVR_COMMON_STRING_LEN];							/*!< 前端设备ID */

} HY_DVR_DEVICE_ID, *LPHY_DVR_DEVICE_ID;

//////////////////////////////////////////////////////////////////////////////

typedef struct  
{
	int bValid;														/*!< 本结构体是否有效，0表示无效 */

	HY_DVR_NET_CMS_STOREAGE struCmsStorage;							/*!< 中心管理服务器存储注册信息 */
	HY_DVR_DEVICE_ID		struDeviceID;							/*!< 前端设备ID */
	HY_DVR_NATSTATUS		struNATStatus;							/*!< NAT状态 */
	HY_DVR_VOICEPARAM		struVoiceParam;							/*!< 语音呼叫参数 */

}HY_DVR_HXHT_CFG, *LPHY_DVR_HXHT_CFG;

//////////////////////////////////////////////////////////////////////////////

/*!
*  @struct	tagHY_DVR_PROTOCOL_NAME
*  @brief	协议名称配置
*/
typedef struct tagHY_DVR_PROTOCOL_NAME
{
	int bValid;														/*!< 本结构体是否有效，0表示无效 */

	DWORD dwProtocolName;											/*!< 协议名称：协议是按位设置和读取的，例如只有手机协议时，该值为1；
																	只有互信互通协议时，该值为2；两个协议都有时，该值为3。
																	（私有协议是必须加载的，不在其中） */
}HY_DVR_PROTOCOL_NAME, *LPHY_DVR_PROTOCOL_NAME;

//////////////////////////////////////////////////////////////////////////////
/** @brief 地址长度(含结束符)															*/
#define HY_DVR_ADDRESS_LEN				(256)

/** @brief 用户名长度																	*/
#define HY_DVR_USERNAME_LEN				(32)

/** @brief 用户密码长度																	*/
#define HY_DVR_USERPASS_LEN				(32)

/** @brief 默认保留字段个数																*/
#define HY_DVR_DEF_RESERVE_NUM			(3)

/*!
*  @struct	tagHY_DVR_USERLOGIN_INFO
*  @brief	用户登录参数
*/
typedef struct tagHY_DVR_USERLOGIN_INFO
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	char	sServerIP[HY_DVR_ADDRESS_LEN];						/*!< 服务器端IP地址							*/
	unsigned long	dwCommandPort;								/*!< 登录连接的信令端口						*/
	char	sUName[HY_DVR_USERNAME_LEN];						/*!< 登录用户的用户名称						*/
	char	sUPass[HY_DVR_USERPASS_LEN];						/*!< 登录用户的用户密码						*/
	unsigned long	dwReserve[HY_DVR_DEF_RESERVE_NUM];			/*!< 保留									*/
}HY_DVR_USERLOGIN_INFO, *LPHY_DVR_USERLOGIN_INFO;

/*!
*  @struct	tagHY_DVR_SOURCE_DEVICE_INFO
*  @brief	源设备信息
*/
typedef struct tagHY_DVR_SOURCE_DEVICE_INFO
{
	int bValid;													/*!< 本结构体是否有效，0表示无效 */

	int						nEnable;							/*!< 0表示不启用，1表示启用			*/
	HY_DVR_USERLOGIN_INFO	cUserPara;							/*!< 用户参数						*/
	unsigned long			dwVideoInNumber;					/*!< 视频输入数						*/
	unsigned long			dwReserve[HY_DVR_DEF_RESERVE_NUM];	/*!< 保留							*/
}HY_DVR_SOURCE_DEVICE_INFO, *LPHY_DVR_SOURCE_DEVICE_INFO;

/*!
*  @struct	tagHY_DVR_SOURCE_DEVICE_INFO_CONFIG
*  @brief	源设备配置
*/
typedef struct tagHY_DVR_SOURCE_DEVICE_INFO_CONFIG
{
	int bValid;																/*!< 本结构体是否有效，0表示无效 */

	HY_DVR_SOURCE_DEVICE_INFO	cSourceDevice[MAX_SOURCE_DEVICE_NUMBER];	/*!< 源设备信息					*/
	unsigned long				dwReserve[HY_DVR_DEF_RESERVE_NUM];			/*!< 保留				*/
}HY_DVR_SOURCE_DEVICE_INFO_CONFIG, *LPHY_DVR_SOURCE_DEVICE_INFO_CONFIG;


//////////////////////////////////////////////////////////////////////////////
//显示设备属性
//获取显示设备信息

/*!
*  @struct	tagHY_DVR_VGAPARA
*  @brief	VGA参数
*/
typedef struct tagHY_DVR_VGAPARA
{
	int bValid;									/*!< 本结构体是否有效，0表示无效 */

	int nResolution;							/*!< 分辨率 ,比特位表示 */
	int nResolutionCap;							/*!< 分屏能力，只读。与分辨率有关,按位表示，例：第九位为1表示
												支持9分屏 */
	unsigned long	dwDeviceIndex;				/*!< 设备编号 */

}HY_DVR_VGAPARA, *LPHY_DVR_VGAPARA;

/*!
*  @struct	tagHY_DVR_VGAPARA_CFG
*  @brief	VGA参数配置
*/
typedef struct tagHY_DVR_VGAPARA_CFG
{
	int bValid;									/*!< 0表示无效 1表示有效 */

	int nVGACount;								/*!< VGA Out实际个数 */
	HY_DVR_VGAPARA struVga[MAX_VGA_NUM];

}HY_DVR_VGAPARA_CFG, *LPHY_DVR_VGAPARA_CFG;

/*!
*  @struct	tagHY_DVR_VOOUT
*  @brief	视频输出
*/
typedef struct tagHY_DVR_VOOUT
{
	int bValid; 								/*!< 0表示无效 1表示有效 */

	int byVideoFormat;							/*!< 输出制式,0-PAL,1-NTSC */
	int wLeftffset;								/*!< 视频输出左偏移 */
	int wRightffset;							/*!< 视频输出右偏移 */
	int wTopffset;								/*!< 视频输出上偏移 */
	int wBottomffset;							/*!< 视频输出下偏移 */
	int dwResolutionCap;						/*!< 分屏能力，只读。*/
	unsigned long	dwDeviceIndex;				/*!< 设备编号 */

}HY_DVR_VOOUT, *LPHY_DVR_VOOUT;

/*!
*  @struct	tagHY_DVR_VOOUT_CFG
*  @brief	视频输出配置
*/
typedef struct tagHY_DVR_VOOUT_CFG
{
	int bValid;									/*!< 0表示无效 1表示有效 */
	int nTVCount;								/*!< TV Out 个数*/
	HY_DVR_VOOUT struTv[MAX_TV_NUM];

}HY_DVR_VOOUT_CFG, *LPHY_DVR_VOOUT_CFG;

/*!
*  @struct	tagHY_DVR_DISPDEV_CFG
*  @brief	解码器显示设备信息
*/
typedef struct tagHY_DVR_DISPDEV_CFG
{
	int bValid; 								/*!< 0表示无效 1表示有效 */

	HY_DVR_VGAPARA_CFG struVGA;					/*!< VGA参数 */
	HY_DVR_VOOUT_CFG struTV;					/*!< TV参数 */

} HY_DVR_DISPDEV_CFG,  * LPHY_DVR_DISPDEV_CFG;

//////////////////////////////////////////////////////////////////////////////

#endif
