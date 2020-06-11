#ifndef _GPS_DATA_DEF_H_
#define _GPS_DATA_DEF_H_

#include "GPSDeviceDef.h"

#define GPS_DEV_ID_LEN						32
//#define GPS_MAX_DEV_CHN_NUM					16
#define GPS_MAX_DEV_CHN_NUM					12		//IO��Ŀ����Ϊ12����ͨ����Ŀ��16��Ϊ12��
#define GPS_MAX_DEV_CHN_NUM_EX				16		//����ʱ���������16��ͨ����
#define GPS_MAX_DEV_IO_NUM_OLD				8
#define GPS_MAX_DEV_IO_NUM_NEW				12
#define GPS_MAX_DEV_IO_NUM_NEW_EX			16		// 16 [2018-8-21 ydl]
#define GPS_MAX_TEMP_SENSOR_NUM				4
#define GPS_MAX_TEMP_SENSOR_NUM_EX			6				

#define GPSSERVER_TYPE_LOGIN				1
#define GPSSERVER_TYPE_GATEWAY				2
#define GPSSERVER_TYPE_MEDIA				3
#define GPSSERVER_TYPE_USRMGR				4
#define GPSSERVER_TYPE_STORAGE				5
#define GPSSERVER_TYPE_WEB					6
#define GPSSERVER_TYPE_DOWN					7		//���ط�����
#define GPSSERVER_TYPE_MYSQL				8		//mysql���� hw 2013/12/27
#define GPSSERVER_TYPE_LICENSE				9		//��Ȩ������
#define GPSSERVER_TYPE_GB28181				10
#define GPSSERVER_TYPE_FTP					11	
#define GPSSERVER_TYPE_MYCAT				12
#define GPSSERVER_TYPE_DATAPROC				13
#define GPSSERVER_TYPE_MANAGER				99		//���������

#define GPS_FILE_LOCATION_DEVICE			1		//�豸
#define GPS_FILE_LOCATION_STOSVR			2		//�洢������
#define GPS_FILE_LOCATION_LOCAL				3		//�ͻ��˱���
#define GPS_FILE_LOCATION_DOWNSVR			4		//���ط�����

#define GPS_FILE_ATTRIBUTE_JPEG				1		//ͼƬ
#define GPS_FILE_ATTRIBUTE_RECORD			2		//¼��
///#define GPS_FILE_ATTRIBUTE_ALL			3		//����ʱʹ�ñ�ʾ��������¼���ļ�
#define GPS_FILE_ATTRIBUTE_LOG				4		//log
#define GPS_FILE_ATTRIBUTE_AUDIO			5		//��Ƶ
#define GPS_FILE_ATTRIBUTE_TEXT				6		//�ձ�---�ı�
#define GPS_FILE_ATTRIBUTE_OTHER			7		//�ձ�---����

#define GPS_FILE_SOURCE_PLAN				1		//�洢�ƻ�����
#define GPS_FILE_SOURCE_UPLOAD				2		//�豸�����ϴ���
#define GPS_FILE_SOURCE_SB_ALARM			3		//�ձ��豸����������

#define GPS_LOGIN_SUC						0		//Login direction server success
#define GPS_LOGIN_FAILED					1		//Login direction server failed
#define	GPS_LOGIN_DISCNT					2		//Login direction server disconnect
#define	GPS_LOGIN_NAME_ERR					3		//Login direction server user name error
#define	GPS_LOGIN_PWD_ERR					4		//Login direction server user pwd error
#define	GPS_LOGIN_FULL_ERR					5		//Login direction server ���û��������û�����
#define	GPS_LOGIN_VER_ERR					6		//Login direction server version error
#define	GPS_LOGIN_USR_CHANGE				7		//Login direction server ���û�������λ�ý��е�¼��
#define GPS_LOGIN_USR_DEL					8		//Login direction server ���û���ɾ����
#define	GPS_LOGIN_EXPIRED					9		//Login direction server use expired
#define	GPS_LOGIN_SERVER_EMPTY				10		//Login direction server �����߲������û���������Ϣ��
#define GPS_LOGIN_PRIVILEGE_CHANGE			11		//�û�Ȩ�޷��ͱ仯
#define	GPS_LOGIN_SVR_CONFIG_CHANGE			12		//������������Ϣ���ͱ仯
#define GPS_LOGIN_USR_DISABLED				13		//�û���ͣ��
#define GPS_LOGIN_HAS_LOGINED				14		//�û��Ѿ���¼
#define GPS_LOGIN_LOGOUT_IMPERATIVE			15		//�û�ǿ������
#define GPS_LOGIN_NO_SUPPORT_PTT			16		//��֧�ֵ��ȹ���

#define GPS_LOGIN_TYPE_GPS_CLIENT			1

#define GPS_DEV_DOWN_DEV					0
#define GPS_DEV_DOWN_GROUP					1
#define GPS_DEV_DOWN_FAILED					2
#define GPS_DEV_DOWN_SUC					3
#define GPS_DEV_DOWN_RELATION				4
#define GPS_DEV_DOWN_DATA					5
#define GPS_DEV_DOWN_DATA_LONG				6	//�豸��Ϣ�еĹ�������


#define GPS_DOWN_CONFIG_DATA				1
#define GPS_DOWN_CONFIG_FAILED				2
#define GPS_DOWN_CONFIG_SUC					3
#define GPS_DOWN_MAP_MARKER					4		//��ͼ�����Ϣ
#define GPS_DOWN_MAP_LINE					5		//��ͼ��·��Ϣ
#define GPS_DOWM_MAP_TAB_INFO				6		//��ͼ�������
#define GPS_DOWN_ALL_USER_INFO				7		//�����û���Ϣ
#define GPS_DOWN_ALL_GROUP_INFO				8		//���з�����Ϣ
#define GPS_DOWN_USER_ONLINE_EX				9		//�û�������Ϣ��չ
#define GPS_DOWN_MAP_MARKER_STR				10

// �ͻ���������������ʱ,�ص����Ͷ���
#define GPS_BETCH_DOWN_DEVICE_VEHICLE_OTHER		10001	//��������չ��Ϣ,��Ӧ�ṹ��ΪGPSVehiOtherVariable_S
#define GPS_BETCH_DOWN_DEVICE_VEHICLE_WORKTIME	10002	//������ȫ�¹���ʱ��,��Ӧ�ṹ��ΪGPSVehiWorkTimeVariable_S
#define GPS_BETCH_DOWN_DEVICE_VEHICLE_OTHER_NEW	10003	//��������չ��Ϣ,��Ӧ�ṹ��ΪGPSVehiOtherVariableNew_S
#define GPS_BETCH_DOWN_DEVICE_VEHICLE_LONG_STR	10004	//�ַ�������

//hw 
#define GPS_VERSION_6_14_X_X				0		//6.14
#define GPS_VERSION_6_15_X_X				1		//6.15.X.X�汾,�޸��˴���UFT8��ʽ����
#define GPS_VERSION_CUR		GPS_VERSION_6_15_X_X	//��ǰ�汾

#define GPS_VERSION_EX_X_X					0		//6.18.0.2֮ǰ�汾�汾
#define GPS_VERSION_EX_6_18_0_2				1		//6.18.0.2�汾,�޸���TTS����1024����
#define GPS_VERSION_EX_7_0_0_12				2		//7.0.0.12�汾,��ͼ�ӷ��������� 
#define GPS_VERSION_EX_7_6_0_4				3		//7.6.0.4�汾,�ͻ���ʶ��������汾(�޸Ļ�ȡ��ͼ��ǩΪUTF8)
#define GPS_VERSION_EX_7_6_0_5				5		//7.6.0.5�汾,�ͻ���ʶ��������汾(�޸ķ���TTSΪUTF8)
#define GPS_VERSION_EX_7_6_0_6				6		//7.6.0.6�汾,�ͻ���ʶ��������汾(����͸����������Ϊ2048�ֽ�)
#define GPS_VERSION_EX_7_6_0_7				7		//7.6.0.7�汾,������֧��¼���·�ط�
#define GPS_VERSION_EX_7_6_0_8				8		//7.6.0.8�汾,������֧�ֲ��ֲ����洢
#define GPS_VERSION_EX_7_6_0_9				9		//7.6.0.9�汾,�������ĵ�ͼ����ȡ���ṹ��,ʹ���ַ���ƴ��
#define GPS_VERSION_EX_CUR		GPS_VERSION_EX_7_6_0_9	//��ǰ�汾

//�������汾���Ͷ��� zjt 2014-01-05
#define GPS_SVR_VERSION_DEFUALT				0	//CMS������
#define GPS_SVR_VERSION_DJWL				1	//CMS������(DJWL)
#define GPS_SVR_VERSION_JT808				2	//JT808������


//hw 2013/1/19
//���ӷ��������������� 0-ʹ�þ�����IP�� 1-ʹ�ù�����IP
#define GPS_NET_TYPE_LAN		0
#define GPS_NET_TYPE_WAN		1

//�ͻ���������Ϣλ����
#define GPS_DOWN_CONFIG
#define GPS_DOWN_CONFIG_SVR_CONFIG			0	//0λ����������
#define GPS_DOWN_CONFIG_PRIVILEG			1	//1λ�û�Ȩ��
#define GPS_DOWN_CONFIG_MAP_CONFIG			2	//2λ��ͼ����
#define GPS_DOWN_CONFIG_USER_INFO			3	//3λ�û���Ϣ
#define	GPS_DWON_CONFIG_USER_TYPE			4	//4λ�û�����
#define	GPS_DWON_CONFIG_CLIENT_FUNCTION		5	//5λ�ͻ��˹�������
#define GPS_DOWN_CONFIG_OTHER_PARAM			6	//6λ�������Ʋ���(�Զ��رյ�)
#define GPS_DOWN_CONFIG_GOOGLE_KEY			7	//�ȸ���������key


#define GPS_DOWNLOAD_MSG_FAILED				1 //ʧ��
#define GPS_DOWNLOAD_MSG_BEGIN				2 //��ʼ
#define GPS_DOWNLOAD_MSG_FINISHED			3 //���
#define GPS_DOWNLOAD_MSG_PROCESS			4 //����(�ļ�����)
#define GPS_DOWNLOAD_MSG_PROCESS_EX			5 //����(�ٷֱ�)


#define GPS_UPLOAD_MSG_FAILED				1
#define GPS_UPLOAD_MSG_FINISHED				2
#define GPS_UPLOAD_MSG_PROCESS				3


//�豸ģ��λ����
#define GPS_DEV_MOUDLE_VIDEO			0	//��Ƶ
#define GPS_DEV_MODULE_OIL_CONTROL		1	//��·����
#define GPS_DEV_MODULE_POWER_CONTROL	2	//��·����
#define GPS_DEV_MODULE_TTS				3	//tts����
#define GPS_DEV_MODULE_BK_TALK			4	//���ֶԽ�
#define GPS_DEV_MOUDLE_SNAPSHOT			5	//ץ��
#define GPS_DEV_MOUDLE_MONITOR			6	//����
#define GPS_DEV_MOUDLE_OIL_SEN			7	//����������
#define GPS_DEV_MOUDLE_TALK				8	//�Խ�
#define GPS_DEV_MOUDLE_ODB				9	//ODB����
#define GPS_DEV_MOUDLE_COUNT_PEOPLE		10	//����ͳ��ģ��
#define GPS_DEV_MOUDLE_OIL_EXPAND_100	14	//�����Ŵ�100��

//�Ϸ���������ģ�鶨��
#define GPS_DEV_MOUDLE_OIL_SEN_V6		0	//V6�汾����ģ��

//���������
#define GPS_BROWSER_TYPE_IE				0
#define GPS_BROWSER_TYPE_WEBKIT			1




const int GPS_CTRL_TYPE_OIL_STOP			= 1;	//�Ͽ���·
const int GPS_CTRL_TYPE_OIL_RESTORE			= 2;	//�ָ���·
const int GPS_CTRL_TYPE_ELEC_STOP			= 3;	//�Ͽ���·
const int GPS_CTRL_TYPE_ELEC_RESTORE		= 4;	//�ָ���·
const int GPS_CTRL_TYPE_REBOOT				= 5;	//�������� 
const int GPS_CTRL_TYPE_RESET				= 6;	//�豸��λ
const int GPS_CTRL_TYPE_MOD_DEV_NUM_OR_GET_STATUS = 7;//�޸��豸�š���ȡ�豸״̬
const int GPS_CTRL_TYPE_3G_REBOOT_IP       =8;     //IP,3G,����

const int  GPS_CTRL_TYPE_SLEEP				= 7;	//����
const int  GPS_CTRL_TYPE_WAKE				= 8;	//����
//¼���ͨ����0��ʾͨ��1��1��ʾͨ��2     98��ʾ����ͨ��(TTX_CHANNEL_ALL)
const int  GPS_CTRL_TYPE_START_RECORD		= 9;	//��ʼ¼��	//�����ֽ�Ϊ¼���ͨ���ţ������ֽ�Ϊָ��
const int  GPS_CTRL_TYPE_STOP_RECORD		= 10;	//ֹͣ¼��	//�����ֽ�Ϊ¼���ͨ���ţ������ֽ�Ϊָ��
const int  GPS_CTRL_TYPE_START_CRUISE		= 11;	//�ͻ��˿�ʼ�Դ�ͨ��������ѯ�������ֽ�Ϊͨ���ţ������ֽ�Ϊָ��
const int  GPS_CTRL_TYPE_STOP_CRUISE		= 12;	//�ͻ���ֹͣ�Դ�ͨ��������ѯ�������ֽ�Ϊͨ���ţ������ֽ�Ϊָ��
const int  GPS_CTRL_TYPE_WRITE_LOG		= 13;	//������¼��־����	�������ֽڴ���0��ʾд��־��0��ʾ��д��־
const int  GPS_CTRL_TYPE_FORMAT_HDD		= 14;	//��ʽ��Ӳ��(��λ��ʾӲ�̺�,Ӳ�̺Ŵ�0��ʼ,��λ��ʾ�����)
const int  GPS_CTRL_TYPE_MILEAGE_CLEARED 	= 15;	//�������	
const int  GPS_CTRL_TYPE_FLIP_HORIZONTAL 	= 16;	//ˮƽ��ת	//�����ֽ�Ϊͨ���ţ������ֽ�Ϊָ��
const int  GPS_CTRL_TYPE_FLIP_VERTICAL 		= 17;	//��ֱ��ת	//�����ֽ�Ϊͨ���ţ������ֽ�Ϊָ��
const int  GPS_CTRL_TYPE_CLEAR_ALARM		= 18;	//�������
const int  GPS__CTRL_TYPE_SWITCH_CAM		= 19;		//�л�����ͷ
const int  GPS__CTRL_TYPE_RECORD_SOUND		= 20;		//��ʼ¼��    //�����ֽ�Ϊ¼����ͨ���ţ������ֽ�Ϊָ��
const int  GPS__CTRL_TYPE_STOP_REC_SOUND	= 21;		//ֹͣ¼��    //�����ֽ�Ϊ¼����ͨ���ţ������ֽ�Ϊָ��
const int  GPS__CTRL_TYPE_WIFI_DOWN_FINISH	= 22;		//wifi���ؽ���
const int  GPS_CTRL_TYPE_RESET_PEOPLE		= 23;	//��λ����ͳ��

const int GPS_MNGCMD_SEND_SMS				= 1;    //���Ͷ���Ϣ
const int GPS_MNGCMD_SEND_TEXT				= 2;    //����TTS���豸�Ͻ��в��ŷ��͵��ļ�
const int GPS_MNGCMD_SEND_PTZ				= 3;    //PTZ����ָ��
const int GPS_MNGCMD_SEND_CTRL				= 4;    //���Ϳ���ָ�����͡��ϵ��
const int GPS_MNGCMD_READ_STATUS			= 5;    //��ȡ����״̬
const int GPS_MNGCMD_CHANGE_USR_PWD			= 6;    //�޸��û�����
const int GPS_MNGCMD_SET_GPS_INTERVAL		= 7;    //����GPS���ʱ��
const int GPS_MNGCMD_CHECK_CTRL_USR			= 8;	//���Ϳ�������ǰУ���û�
const int GPS_MNGCMD_READ_MOTION_PARAM		= 9;	//��ȡ�ƶ�������
const int GPS_MNGCMD_SET_MOTION_PARAM		= 10;   //�����ƶ�������
const int GPS_MNGCMD_READ_NETFLOW_STATISTICS	= 11;   //��ȡ������Ϣ
const int GPS_MNGCMD_SET_NETFLOW_PARAM			= 12;	//������������
const int GPS_MNGCMD_CLEAR_NETFLOW_STATISTICS	= 13;   //�������ͳ��
const int GPS_MNGCMD_ADJUST_NETFLOW_STATISTICS	= 14;	//��������ͳ��
const int GPS_MNGCMD_SET_USR_ALARMSHIELD	= 15;		//���ñ�������
const int GPS_MNGCMD_ADD_MAP_MARKER			= 16;		//��ӵ�ͼ�����Ϣ
const int GPS_MNGCMD_DEL_MAP_MARKER			= 17;		//ɾ����ͼ�����Ϣ
const int GPS_MNGCMD_SEND_DISPATCH_COMMAND	= 18;		//���͵���ָ����Ϣ
const int GPS_MNGCMD_ADD_MAP_MARKERINFO		= 19;		//��ӵ�ͼ�������
const int GPS_MNGCMD_SET_USER_MAP_CONFIG	= 20;		//�����û���ͼ����
const int GPS_MNGCMD_TRANSPARENT_DATA		= 24;		//͸������
const int GPS_MNGCMD_TRANSPARENT_CONFIG		= 25;		//����͸������
const int GPS_MNGCMD_FREE_PRESET_GET		= 26;		//��ȡ����Ԥ��λ
const int GPS_MNGCMD_SET_VIDEO_COLOR		= 27;		//������ɫ
const int GPS_MNGCMD_GET_VIDEO_COLOR		= 28;		//��ȡ��ɫ
const int GPS_MNGCMD_SET_DEV_FIX_GPS		= 29;		//�����豸��GPSλ��
const int GPS_MNGCMD_SET_DEV_OIL_RESISTANCE	= 30;		//�����豸�������̶�ֵ
const int GPS_MNGCMD_SET_DEV_HANDLE_ALARM   = 31;		//�豸��������
const int GPS_MNGCMD_ACK_809_PLATFORM		= 32;		//809�����ϢӦ��
const int GPS_MNGCMD_JT809_BUSINESS_PLATFORM	= 33;	//809���ҵ��
const int GPS_MNGCMD_SEND_USER_TEXT = 34;				//���û������ı���Ϣ
const int GPS_MNGCMD_SEND_FTP_TASK_CTRL = 35;			//��������FTP����
const int GPS_MNGCMD_SEND_CREATE_CLIENT_ALARM = 36;		//����һ������
const int GPS_MNGCMD_CHANGE_USE_STATUS = 37;			//�ı䳵��ʹ��״̬

// const int GPS_MNGCMD_SET_VIDEO_CONFIG		= 21;		//�����豸��Ƶ����
// const int GPS_MNGCMD_SET_AUDIO_CONFIG		= 22;		//�����豸��Ƶ����
// const int GPS_MNGCMD_SET_PTZ_CONFIG			= 23;		//�����豸��̨����
// const int GPS_MNGCMD_GET_VIDEO_CONFIG		= 24;		//��ȡ�豸��Ƶ����
// const int GPS_MNGCMD_GET_AUDIO_CONFIG		= 25;		//��ȡ�豸��Ƶ����
// const int GPS_MNGCMD_GET_PTZ_CONFIG			= 26;		//��ȡ�豸��̨����

const int GPS_MAPMARKER_TYPE_POINT			= 1;		//��
const int GPS_MAPMARKER_TYPE_RECTANGLE		= 2;		//����
const int GPS_MAPMARKER_TYPE_POLYGON		= 3;		//�����
const int GPS_MAPMARKER_TYPE_LINE			= 4;		//·��
const int GPS_MAPMARKER_TYPE_CIRCLE			= 10;		//Բ
const int GPS_MAPMARKER_TYPE_RECTANGLE_RESTRICTED = 11;	//�����������
const int GPS_MAPMARKER_TYPE_POLYGON_RESTRICTED = 12;	//������������
const int GPS_MAPMARKER_TYPE_LINE_RESTRICTED = 13;		//��������·��
const int GPS_MAPMARKER_TYPE_CIRCLE_RESTRICTED = 14;	//��������Բ

#include <tchar.h>
//�洢·�����壬�洢ʾ��	"E:\\gStorage\\RECORD_FILE\\100001\\2012-07-03\\"
const TCHAR GPS_STORAGE_PATH[]				= _T("gStorage");
const TCHAR GPS_RECORD_PATH[]				= _T("RECORD_FILE");
const TCHAR GPS_JPEG_PATH[]					= _T("JPEG_FILE");
const TCHAR GPS_LOG_PATH[]					= _T("LOG_FILE");

//0λ-����Χ��
//1λ-����
//2λ-�Զ�����
//3λ-3g����ͳ��
//4λ-�ֻ��ͻ���
//5λ-�㲥
//6λ-���Ĵ洢
//7λ-��Ա��λ
#define GPS_SVR_CONFIG_FENCE			0
#define GPS_SVR_CONFIG_SMS				1
#define GPS_SVR_CONFIG_AUTO_DONW		2
#define GPS_SVR_CONFIG_FLOW				3
#define GPS_SVR_CONFIG_PHONE			4
#define GPS_SVR_CONFIG_PLAYBACK			5
#define GPS_SVR_CONFIG_CENTER_STORAGE	6
#define GPS_SVR_CONFIG_TRACKER			7

//�û����Ͷ���
#define GPS_USER_TYPE_SYS_ADMIN		-1	//����Ա
#define GPS_USER_TYPE_COMMON		0	//��ͨ�û�
#define GPS_USER_TYPE_ADMIN			1	//��ҵ����Ա
#define GPS_USER_TYPE_TEST			2	//�����û�

//��������״̬����
#define GPS_DOWNTASK_STATUS_INIT		1		//����δ����״̬
#define GPS_DOWNTASK_STATUS_ALLOC		2		//�Ѿ����䣬��ʾ��������
#define GPS_DOWNTASK_STATUS_FAILED		3		//����ʧ��
#define GPS_DOWNTASK_STATUS_SUC			4		//���سɹ�

#define GPS_DOWNTASK_DOWNTYPE_FILE				1		//�������ͣ��ļ�����
#define GPS_DOWNTASK_DOWNTYPE_RANGE				2		//�ֶ�����

#define GPS_SERVER_MODE_VEHICLE						0			//����ϵͳ
#define GPS_SERVER_MODE_POLICE						1001		//ִ����
#define GPS_SERVER_MODE_VEHI_POLI					1002		//���غ�ִ����

// ���ַ�����ID����
#define GPS_LONG_STR_FLAG
// CMsgClientDevice::GetUsrDevPermitJT808��ʹ��
#define GPS_LONG_STR_FLAG_CHN_NAME_1		1	//ͨ������ ����ID,���
#define GPS_LONG_STR_FLAG_CHN_NAME_16		16
#define GPS_LONG_STR_FLAG_IO_NAME_1			17	//IO���� ����ID,���
#define GPS_LONG_STR_FLAG_IO_NAME_16		32
#define GPS_LONG_STR_FLAG_TEMP_NAME_1		33	//�¶ȴ����� ����ID,���
#define GPS_LONG_STR_FLAG_TEMP_NAME_16		48
#define GPS_LONG_STR_FLAG_VEHI_COLOR		49	//������ɫ ����ID
#define GPS_LONG_STR_FLAG_VEHI_BAND			50	//����Ʒ�� ����ID
#define GPS_LONG_STR_FLAG_VEHI_TYPE			51	//�������� ����ID
#define GPS_LONG_STR_FLAG_VEHI_USE			52	//����ʹ�� ����ID
#define GPS_LONG_STR_FLAG_VEHI_COMPANY		53	//������˾ ����ID
#define GPS_LONG_STR_FLAG_VEHI_DRIVER_NAME	54	//����˾�� ����ID
#define GPS_LONG_STR_FLAG_VEHI_DRIVER_TEL	55	//����˾���绰 ����ID
#define GPS_LONG_STR_FLAG_VEHI_PEOPLE_NAME	56	//��Ա��(ptt) ����ID

// CMsgClientDevice::DoBetchData��ʹ��
#define GPS_LONG_STR_FLAG_DBD_LINES_OPER	1000 //��Ӫ��·
#define GPS_LONG_STR_FLAG_DBD_MODEL_ADAS	1001 //ADAS�ͺ�
#define GPS_LONG_STR_FLAG_DBD_MODEL_DSM		1002 //DSM�ͺ�
#define GPS_LONG_STR_FLAG_DBD_MODEL_TPMS	1003 //TPMS�ͺ�
#define GPS_LONG_STR_FLAG_DBD_MODEL_BSD		1004 //BSD�ͺ�
#define GPS_LONG_STR_FLAG_DBD_BRAND_ADAS	1005 //ADASƷ��
#define GPS_LONG_STR_FLAG_DBD_BRAND_DSM		1006 //DSMƷ��
#define GPS_LONG_STR_FLAG_DBD_BRAND_TPMS	1007 //TPMSƷ��
#define GPS_LONG_STR_FLAG_DBD_BRAND_BSD		1008 //BSDƷ��

#pragma pack(4)

typedef struct _tagGPSDEVDevInfo
{
	int		nID;				//Device Index
	char	szName[32];			//Device Name
	char	szIDNO[32];			//Device id
	int		nType;				//0 :Encoder, 1 :Decoder
	unsigned char ucChanNum;			//Channel Number
	unsigned char ucIoInNum;			//IO ������Ŀ
	unsigned char ucTempSensorNum;	//�¶ȴ�������Ŀ
	unsigned char ucIcon;	//����ͼ��
	char	szChnName[GPS_MAX_DEV_CHN_NUM][16];		
	char	szIoInExtent[4][16];	//����4��IO����		2013-06-22����Ϊ12��IO
	char	szIoInName[GPS_MAX_DEV_IO_NUM_OLD][16];
	char	szTempSensorName[GPS_MAX_TEMP_SENSOR_NUM][16];
	int		nGroup;				//Device Group Index
	int		nOnline;			//Device Online Status
	
	char	szSIMCard[16];		//SIM����
	char	szVehiColor[16];	//������ɫ
	char	szVehiBand[16];		//����Ʒ��
	char	szVehiType[16];		//��������
	char	szVehiUse[16];		//������;
	char	szVehiCampany[16];	//������˾
	char	szDriverName[16];	//˾������
	char	szDriverTele[16];	//˾���绰
	unsigned int uiModule;		//ģ�����

	//hw2013/11/14
	char cPayEnable;			//�Ƿ����ýɷѹ���
	char cPayPeriod;			//��Լ���ޣ�����Ϊ��λ��
	char cPayMonth;				//�Ѹ���
	char cPayDelayDay;			//��������
	unsigned int uiPayBegin;	//��Լ��ʼ��
	
	char    szReserve[52];		//�����ֶ�	60
}GPSDEVDevInfo_S, *LPGPSDEVDevInfo_S;

//�˽ṹ���GPSDEVDevInfo_Sһ�£�ȥ��������52�ֽ�
//hw2013/11/14
typedef struct _tagGPSDEVDevInfoEx
{
	int		nID;				//Device Index
	char	szName[32];			//Device Name
	char	szIDNO[32];			//Device id
	int		nType;				//0 :Encoder, 1 :Decoder
	unsigned char ucChanNum;			//Channel Number
	unsigned char ucIoInNum;			//IO ������Ŀ
	unsigned char ucTempSensorNum;	//�¶ȴ�������Ŀ
	unsigned char ucIcon;	//����ͼ��
	char	szChnName[GPS_MAX_DEV_CHN_NUM][16];		
	char	szIoInExtent[4][16];	//����4��IO����		2013-06-22����Ϊ12��IO
	char	szIoInName[GPS_MAX_DEV_IO_NUM_OLD][16];
	char	szTempSensorName[GPS_MAX_TEMP_SENSOR_NUM][16];
	int		nGroup;				//Device Group Index
	int		nOnline;			//Device Online Status
	
	char	szSIMCard[16];		//SIM����
	char	szVehiColor[16];	//������ɫ
	char	szVehiBand[16];		//����Ʒ��
	char	szVehiType[16];		//��������
	char	szVehiUse[16];		//������;
	char	szVehiCampany[16];	//������˾
	char	szDriverName[16];	//˾������
	char	szDriverTele[16];	//˾���绰
	unsigned int uiModule;		//ģ�����

	char cPayEnable;			//�Ƿ����ýɷѹ���
	char cPayPeriod;			//��Լ���ޣ�����Ϊ��λ��
	char cPayMonth;				//�Ѹ���
	char cPayDelayDay;			//��������
	unsigned int uiPayBegin;	//��Լ��ʼ��

}GPSDEVDevInfoEx_S, *LPGPSDEVDevInfoEx_S;

typedef struct _tagGPSMDVRInfo
{
	unsigned char ucIoInNum;			//IO ������Ŀ
	unsigned char ucTempSensorNum;	//�¶ȴ�������Ŀ
	unsigned char ucPlateColor;		//������ɫ	808�õ�	afu 2014-04-28
	unsigned char szRes;
	char	szChnName[GPS_MAX_DEV_CHN_NUM][16];		
	char	szIoInExtent[4][16];
	char	szIoInName[GPS_MAX_DEV_IO_NUM_OLD][16];
	char	szTempSensorName[GPS_MAX_TEMP_SENSOR_NUM][16];
	
	char	szVehiColor[16];	//������ɫ
	char	szVehiBand[16];		//����Ʒ��
	char	szVehiType[16];		//��������
	char	szVehiUse[16];		//������; 
	char	szVehiCampany[16];	//������˾
	char	szDriverName[16];	//˾������
	char	szDriverTele[16];	//˾���绰
	char	szSerialNumber[16];	//�豸���к�
	int		nDriverID;			//˾��ID
	char    cSensorType[6];		//0-�¶ȣ�1-ʪ��
	char    szReserve[2];		//�����ֶ�//���� 44->40 zjt-2016/04/08 
	//40->36  zjt-2017/04/18 ���Ӵ���������
	//36-2  zjt 2017/05/23  ���Ӵ���������
	char	szTempSensorNameEx[2][16];
}GPSMDVRInfo_S, *LPGPSMDVRInfo_S;	//�ܴ�С624�ֽ�

typedef struct _tagGPSDVSInfo_S
{
	char	szChnName[16][16];								//16��ͨ������
	char	szIoInName[GPS_MAX_DEV_IO_NUM_NEW][16];			//12��IO����
	char	szTempSensorName[GPS_MAX_TEMP_SENSOR_NUM][16];	//�¶ȴ���������
	char	szContactName[16];			//��ϵ������
	char	szContactTel[16];			//��ϵ�˵绰
	unsigned char ucIoInNum;			//IO ������Ŀ
	unsigned char ucTempSensorNum;		//�¶ȴ�������Ŀ
	char    szReserve[78];				//����78�ֶ�
}GPSDVSInfo_S, *LPGPSDVSInfo_S;			//�ܴ�С624�ֽ�


typedef struct _tagGPSMobileDevInfo
{
	unsigned char nSex;			//�Ա�
	char strIDCar[19];			//���֤18λ
	char strUserNumber[16];		//���15
	char strGroupName[64];		//��������
	char strAddress[256];		//סַ
	int nUserPost;				//ְλ
	int	nEquip;					//һλ��ʾһ��װ��
	char szReserve[64];			//����64�ֶ�
}GPSMobileDevInfo_S, *LPGPSMobileDevInfo_S;	//�ܴ�С428

typedef struct _tagGPSDevInfo
{
	int nID;
	char szIDNO[32];				//Device id
	char szName[32];				//Device Name
	char szSIMCard[16];				//�绰
	int nDevType;					//�豸������		MDVR��MOBILE��
	int	nDevSubType;				//�豸������		��ͨGPS��ͨ����Ŀ��Ҫ����Ϊ0��
	int	nGroup;						//Device Group Index
	int nOnline;					//Device Online Status
	unsigned int uiModule;			//ģ�����
	unsigned char ucChanNum;		//Channel Number
	unsigned char ucIcon;			//����ͼ��
	char strRemark[94];				//��ע		//ԭ��Ϊ126
	char cProtocol;					//Э������
	char cAudioCodec;				//��Ƶ���������ͣ�����Խ�ʱ��ʹ�ô˲���
	char cDiskType;					//��������
	char cFactoryType;				//���Ҷ����豸����	��WKPЭ����ʹ��	
	char cFactoryDevType;			//�����豸���ͣ���������1078�豸
	char cExtendedProtocol;			//0:��, 1:�ձ�
	unsigned char ucMapValid;		//���õ�λ���Ƿ���Ч
	unsigned char ucMapType;		//��ͼ����
	int	nJingDu;					//����	4�ֽ� ��������	9999999 = 9.999999 
	int nWeiDu;						//γ��	4�ֽ� ��������	9999999 = 9.999999
	char cPayEnable;				//�Ƿ����ýɷѹ���
	char cPayPeriod;				//��Լ���ޣ�����Ϊ��λ��
	char cPayMonth;					//�Ѹ���
	char cPayDelayDay;				//��������
	unsigned int uiPayBegin;		//��Լ��ʼ��
	char cDevStatus;				//�豸ά��״̬(V7) 0-���� 1-ά�� 2-ͣ�� 3-Ƿ��
	char cProtocolVersion;			//Э��汾
	char strReserve[4];				//���� zjt 7-5 2018/4/23 ,8->7 hw2014/07/23 16->8 hw2013/11/12, 27->16 hw2013/8/1
	unsigned short usSpeedLimit;	//ƽ̨���ó�������ֵ
	union
	{
		GPSMDVRInfo_S gDVRInfo;
		GPSMobileDevInfo_S gMobileDevInfo;
		GPSDVSInfo_S DVSInfo;
	};
}GPSDevInfo_S, *LPGPSDevInfo_S;

static_assert(856 == sizeof(GPSDevInfo_S), "GPSDevInfo_S Size Error");

typedef struct _tagGPSChnName
{
	char szName[16];		// Channel Name
}GPSChnName_S, *LPGPSChnName_S;

typedef GPSChnName_S GPSIOName_S;

typedef struct _tagGPSDEVGroup
{
	int		nID;			//Group Index
	char	szName[32];		//Group Name
	int		nParent;		//Parent Group,  -1 : no Parent
	char	szRemarks[48];	//2016-2-23����64λ��Ϊ48λ
	char	cLevel;			//����,1Ϊ��ͨ��˾,2Ϊ���� 3-��·
	char	cReserve[15];	//�����ֶ�
}GPSDEVGroup_S, *LPGPSDEVGroup_S;

//��˾��Ϣ
typedef struct _tagCompanyInfo
{
	int  nID;
	char szName[32];
	int  nParent;	
	char cLevel;				//����,1Ϊ��ͨ��˾,2Ϊ����, 3-��·
	int  nStationCount[2];		//վ�����, ����Ϊ3ʱ����Ч
}CompanyInfo_S, *LPCompanyInfo_S;

//˾����Ϣ
typedef struct _tagGPSDriverInfo
{
	int		nID;				// ID, Ψһ
	char	szJobNum[32];		//����, Ψһ
	char	szName[32];			//����
	int		nCompanyID;			//������˾ID
	int		nSex;				//�Ա�,1��2Ů
	char	IDNumber[32];		//��ʻ֤��
	char	szLicenseType[32];	//��ʻ֤����
	SYSTEMTIME tmValid;			//��Чʱ��
	int nRemindDay;				//������������
	char	cReserve[32];		//�����ֶ�
}GPSDriverInfo_S, *LPGPSDriverInfo_S;

typedef struct _tagGPSDriverInfoEx_S 
{
	unsigned short usSize;		//���ṹ���С
	unsigned short usDataLen;	//��������ݳ���
	int nID;					//���ݿ�ID
	int nDelete;				//ɾ�����,���˱�־��Чʱ,��ʾ��ID��ɾ��
	GPSTime_S ValidTime;		//��Чʱ��
	int nCompanyID;				//������˾ID
	int nSex;					//�Ա�,1=�� 2=Ů
	int nRemindDay;				//������������
	unsigned char ucJobNumLen;	//����, Ψһ
	unsigned char ucNameLen;	//����
	unsigned char ucContactLen;	//��ϵ��ʽ
	unsigned char ucDriverLicenseLen;//��ʻ֤
	unsigned char ucIDNumberLen;//���֤
	unsigned char ucLicenseTypeLen;	//��������
	unsigned char ucRemarkLen;	//��ע
	unsigned char ucResvered[5];//Ԥ��(5���ֽ�)
}GPSDriverInfoEx_S, *LPGPSDriverInfoEx_S;

//�����豸����
typedef struct _tagGPSVehiDevRelation
{
	int		nID;					//ID ���豸ID��
	char	szVehiIDNO[32];			//���ƺ�
	char	szDevIDNO[32];			//�豸��
	char	szSIMCard[16];			//�绰
	char	szChnAttr[40];			//ͨ������ ��,�ָ�  ��:0,1 ��ʾͨ��1,ͨ��2
	char	szIOInAttr[40];			//IO��������
	char	szIOOutAttr[40];		//IO�������
	char	szTempAttr[40];			//�¶ȴ���������
	int		nMoudle;				//������������, ÿһλ��ʾһ������,��һλ��Ƶ,�ڶ�λץ��,����λ����,����λ�Խ�
	int		nDevType;				//�豸������		MDVR��MOBILE��
	int		nDevSubType;			//�豸������		��ͨGPS��ͨ����Ŀ��Ҫ����Ϊ0��
	char	cMainDevFlag;			//���豸��ʶ,��0��ʾ���豸
	char	cProtocol;				//Э������
	char	cAudioCodec;			//��Ƶ���������ͣ�����Խ�ʱ��ʹ�ô˲���
	char	cDiskType;				//��������
	char	cFactoryType;			//���Ҷ����豸����	��WKPЭ����ʹ��	
	char	cFactoryDevType;		//δ��
	unsigned char ucMapValid;		//���õ�λ���Ƿ���Ч
	unsigned char ucMapType;		//��ͼ����
	int nOnline;					//Device Online Status
	int		nJingDu;				//����	4�ֽ� ��������	9999999 = 9.999999 
	int		nWeiDu;					//γ��	4�ֽ� ��������	9999999 = 9.999999
	union
	{
		GPSMDVRInfo_S gDVRInfo;
		GPSMobileDevInfo_S gMobileDevInfo;
		GPSDVSInfo_S DVSInfo;
	};
	char  szRemarks[52];	
	char  cProtocolVersion;			//Э��汾
	char  cExtendedProtocol;		//��չЭ��,0:��, 1:�ձ�
	char  cLoginType;
	char  cUseState;	//�豸ʹ��״̬
	short sChnUseStatus;  //ʹ��״̬ 0 ʹ�� 1 ����  ��λ
	short sPTZFunction;  //��̨����  0 ���� 1����   ��λ��
}GPSVehiDevRelation_S, *LPGPSVehiDevRelation_S;

typedef struct _tagGPSAddrInfoEx
{
	char szLanIP[64];
	char szDeviceIP1[32];		//afu  2013-06-16	���Ӷ����ַ����
	char szDeviceIP2[32];
	char szClientIP1[32];
	char szClientIP2[32];
	unsigned short usDevicePort;
	unsigned short usClientPort;
//	unsigned short usReserve[2];
	unsigned short usSvrVersion;	//�������汾 ˵��:v6��֮ǰ�İ汾Ϊ0,v7Ϊ7,�ο�LOGIN_SERVER_VERSION_V7���� hw2014-12-04 
	unsigned short usReserve;
}GPSAddrInfoEx_S;

typedef struct _tagGPSAddrInfo
{
	char szLanIP[64];			//���ֶο��ܰ������ip��ַ,��'\0'�ָ�,�ڶ���ip��ʾClientIP3
	char szDeviceIP1[32];		//afu  2013-06-16	���Ӷ����ַ����
	char szDeviceIP2[32];
	char szClientIP1[32];
	char szClientIP2[32];
	unsigned short usDevicePort;
	unsigned short usClientPort;
	//	unsigned short usReserve[2];
	unsigned short usSvrVersion;	//�������汾 ˵��:v6��֮ǰ�İ汾Ϊ0,v7Ϊ7,�ο�LOGIN_SERVER_VERSION_V7���� hw2014-12-04 
	unsigned short usReserve;
}GPSAddrInfo_S;

typedef struct _tagGPSServerInfo
{
	int nID;
	char szIDNO[32];
	char szName[32];
	long nGroup;
	GPSAddrInfo_S	Addr;
}GPSServerInfo_S, *LPGPSServerInfo_S;

typedef struct _tagGPSServerInfoEx
{
	GPSServerInfo_S svrInfo;
	char szClientOtherPort[128];	//�����˿�
	int	nOfflineTimeout;			//���߳�ʱʱ��
	char szReserve[28];				//�����ֶ�
}GPSServerInfoEx_S, *LPGPSServerInfoEx_S;

typedef struct _tagGPSServerAddr
{
	int nSvrID;
	GPSAddrInfo_S Addr;
}GPSServerAddr_S, *LPGPSServerAddr_S;

typedef struct _tagGPSMEDIAFile
{
	char	szFile[225]; 	/*��·�����ļ���*/  // 2015-03-14  256��Ϊ252������uiAlarmType;1���ļ������ж�����͵ı���
							// 2015-04-08  252��Ϊ244������nChnMaskͨ������
							// 2015-4-30	244��Ϊ240�� �����ļ�ƫ����
							// 2015-8-17	240��Ϊ239�� ����¼���ʶ
							// 2016-3-16	239��Ϊ238�� ��������ʶ
							// 2017-3-06	238��Ϊ232�� ����1078Э�����������Դ����,��������,�洢����,������־
							// 2017-4-25	232��Ϊ228�� ���ӱ�����־2,��ǰ������Ϣ����
							// 2019-3-22	228��Ϊ225�� �����Ƿ�֧�ֶ�·Զ�̻طź�Զ�̻ط�ͨ���ı�־
	char 	bMulPlay;			//�Ƿ�֧�ֶ�·ͬʱ�ط�
	unsigned short usMulChn;	//���Զ�·�طŵ�ͨ������λ��ʾ
	int nAlarmFlag1;
	int nAlarmFlag2;		
	char cResourceType;		//0������Ƶ�� 1����Ƶ�� 2����Ƶ
	char cStreamType;		//0���������� 1��������
	char	bStream;		//�Ƿ�Ϊ��ʽ�ļ�����Ϊ��ʽ�ļ�ʱ���ͻ��˻�ʹ�ûطŵķ�ʽ�����ļ�����
	char	bRecording;		//�Ƿ�����¼����ļ���0��ʾû�У�1��ʾ����¼��
	unsigned int nFileOffset;	//�ļ�ƫ����
	unsigned char ucYear;	// 14��ʾ  14��
	unsigned char ucMonth;
	unsigned char ucDay;	
	unsigned char cStoreType;		//1�����洢���� 2���ֱ��洢��
	int nChnMask;			//ͨ������
	int nAlarmInfo;			//���ļ�Ϊ����ʱ��Ч
	unsigned int uiBegintime;
	unsigned int uiEndtime;
	char	szDevID[GPS_DEV_ID_LEN];			//�豸ID
	int		nChn;
	unsigned int nFileLen;
	int		nFileType;
	int		nLocation;		//λ�ã��豸�ϵ�¼���ļ������Ǵ洢�����ϵ�¼���ļ�
	int		nSvrID;			//�洢������ID����Ϊ�洢�������ϵ��ļ�ʱ��Ч
}GPSMEDIAFile_S, *LPGPSMEDIAFile_S;

typedef struct _tagGPSMEDIAFileEx
{
	int nID;
	GPSMEDIAFile_S FileInfo;
	char szLabel[256];
}GPSMEDIAFileEx_S, *LPGPSMEDIAFileEx_S;;


typedef struct _tagGPSDEVUpgradeFile
{
	char szVersion[32];
	int	nDevType;
	int nFileLength;
}GPSDEVUpgradeFile_S, *LPGPSDEVUpgradeFile_S;

typedef struct _tagGPSFile2SvrMD5
{
	char szFileName[128];
	int	nFileLength;
	char szMd5[64];
	int nFileType;
	char cReserve[32];
}GPSFile2SvrMD5_S, *LPGPSFile2SvrMD5_S;

//�����ļ����Ͷ���
#define GPS_OLF_TYPE_PICTURE	    1	//ͼƬ�ļ�
#define GPS_OLF_TYPE_UPGRADE	    2	//�����ļ�
#define GPS_OLF_TYPE_DEV_CONF	    3	//�豸��������
#define GPS_OLF_TYPE_WIFI_LOCATION	4	//wifiΧ������

#define GPS_DEV_FILE_TASK_STATUS_CREATE		0	//δִ��
#define GPS_DEV_FILE_TASK_STATUS_ING		1	//������
#define GPS_DEV_FILE_TASK_STATUS_SUCCESS	2	//�ɹ�
#define GPS_DEV_FILE_TASK_STATUS_FAIL		3	//ʧ��

typedef struct _tagGPSFile2SvrMD5Ex
{
	char szFileName[64];	//�ļ�����
	int	nFileLength;		//�ļ�����
	char szMd5[40];			//�ļ�MD5ֵ
	int nFileType;			//�ļ����� 1 - �����ļ� 
	char nProtocol;			//Э������ 0��ʾ����
	char nFactoryType;		//�������� 0��ʾ����
	char nDevType;			//�豸���� 0��ʾ����
	char nDevSubType;		//�豸������ 0��ʾ����
	char szParam[116];		//�ļ�������Ϣ,���������|�ָ�(�����ļ�����:�汾��,�汾����)
}GPSFile2SvrMD5Ex_S, *LPGPSFile2SvrMD5Ex_S;

//���α�������
typedef struct _tagGPSAlarmShield
{
	int		nAlarmType;			//��������		
}GPSAlarmShield_S, *LPGPSAlarmShield_S;

//��ͼ��ǵ�����
typedef struct _tagGPSMarkerInfo
{
	int nID;				//���ݿ�ID����
	int nMarkerID;			//GPSMapMarker_S�ṹ���nID
	unsigned char nType;	//�豸����
	unsigned char nDevNum;	//��Ŀ(��nTypeΪ�����ʱ��nNumΪ���������Ŀ)
	unsigned char nMapType;	//��ͼ���ͣ����� mapapi.h �ڵĶ���
	char	szReserve[25];	//����
}GPSMarkerInfo_S, *LPGPSMarkerInfo_S;

//��ͼ���
typedef struct _tagGPSMapMarker
{
	int		nID;
	int		nMarkerType;		//������ͣ���״����(������)
	int		nType;				//��������ͷ������԰��
	int		nCreator;			//�����˱�ǵ��û�
	BOOL	bShare;				//�Ƿ�������������˾�����û������Կ����˱����Ϣ
	char	szName[32];			//�������
	char	szJingDu[256];		//�����ַ���,�ɰ��������������״���;���
	char	szWeiDu[256];		//γ���ַ���,�;����ַ���һһ��Ӧ
	char	szColor[10];		//��ɫ
	char	szRemark[64];		//��ע
	unsigned short	nExtinguisherNum;	//���������
	unsigned short 	nMapType;		//��ͼ����	MAP_YPE_GOOGLE(��ͼ���ͣ� ��gps��ͼ���Ͳ�ͬ)
	unsigned char nUpdate;			//0����1�����Ѵ��ڵļ�¼
	char	cImageSuffix[4];		//ͼƬ��׺�������4���ֽڣ�
	unsigned short nHighRadius;		//�뾶��λ,�����ϰ汾
	char	szReserver[21];			//2016-07-19 ��23���õ�21
}GPSMapMarker_S, *LPGPSMapMarker_S;

typedef struct _tagGPSMapLine
{
	GPSMapMarker_S	Marker;		//����������mapMarker����һ��
	char	szJingDu[110000];	//�������9999���켣�㣨ÿ���켣�����11���ַ�  113.134234��
	char	szWeiDu[110000];	//�������9999���켣��
}GPSMapLine_S, *LPGPSMapLine_S;

//��չ��������,�ͻ���ʹ��,��֤��·������Ϊͬһ����
typedef struct _tagGPSMapMarkerEx
{
	GPSMapMarker_S	Marker;		//����
	char*			pJingDu;	//����
	char*			pWeiDu;		//γ��
}GPSMapMarkerEx_S, *LPGPSMapMarkerEx_S;
#define GetMarkerExJingDu(pMarker) ((pMarker)->pJingDu ? (pMarker)->pJingDu : (pMarker)->Marker.szJingDu)
#define GetMarkerExWeiDu(pMarker) ((pMarker)->pJingDu ? (pMarker)->pWeiDu : (pMarker)->Marker.szWeiDu)

//����Χ��
typedef struct _tagGPSMapFence
{
	int		nID;					//Χ�����
	char	szDevIDNO[40];			//�������
	int		nMarkerID;				//��ͼ��Ǳ��
	int		nAccessAlarm;			//�������򱨾���0��������1�����ڱ�����2�����ⱨ����
	int		nSpeedAlarm;			//�ٶȱ�����0��������1�����ڱ�����2�����ⱨ����
	int		nSpeedHigh;				//����ٶȣ���λ����  100 = 10.0���
	int		nSpeedLow;				//����ٶ�
	int		nParkAlarm;				//ͣ��������0��������1�����ڱ�����2�����ⱨ����
	int		nParkTime;				//ͣ��������ʱ�����60�룩��λ��
	int		nDoorAlarm;				//���ű���
	int		nBeginTime;				//��ʼʱ�䡢������ʼʱ��
	int		nEndTime;				//����ʱ�䡢��������ʱ��
	int		nSpeedHighWarn;			//����Ԥ���ٶ�
	int		nSpeedLowWarn;			//����Ԥ���ٶ�
	char	szSpeedHighTts[128];	//����TTS
	char	szSpeedHighWarnTts[128];//����Ԥ��TTS
	char	szSpeedLowTts[128];		//����TTS
	char	szSpeedLowWarnTts[128];	//����Ԥ��TTS
}GPSMapFence_S, *LPGPSMapFence_S;

//Χ��
typedef struct _tagGPSMapFenceInfo
{
	GPSMapFence_S mapFence;
	GPSMapMarker_S mapMarker;
}GPSMapFenceInfo_S, *LPGPSMapFenceInfo_S;

//��·
typedef struct _tagGPSMapLineInfo
{
	GPSMapFence_S mapFence;
	GPSMapLine_S mapLine;
}GPSMapLineInfo_S, *LPGPSMapLineInfo_S;

//�ͻ��������õ�����Ϣ
typedef struct _tagGPSUPFileInfo
{
	char	szModuleName[32];
	char	szVersion[128];
	char 	szPath[128];
	char	szSHA1[128];
	int		nFileLength;
	char	szReserve[32];	//����
}GPSUPFileInfo_S, *LPGPSUPFileInfo_S;
typedef struct _tagGPSUPFileInfoW
{
	wchar_t	szModuleName[32];
	wchar_t	szVersion[128];
	wchar_t szPath[128];
	wchar_t	szSHA1[128];
	int		nFileLength;
	wchar_t	szReserve[32];	//����
}GPSUPFileInfoW_S, *LPGPSUPFileInfoW_S;
#ifdef _UNICODE
#define GPSUPFileInfoT_S	GPSUPFileInfoW_S
#else
#define GPSUPFileInfoT_S	GPSUPFileInfo_S
#endif // _UNICODE

typedef struct _tagGPSUPVersion
{
	char	szVersion[32];
	char	szDate[32];
	char	szSHA1[128];
	char	szKeyModule[32];
	char	szReserve[32];	//����
}GPSUPVersion_S, *LPGPSUPVersion_S;
typedef struct _tagGPSUPVersionW
{
	wchar_t	szVersion[32];
	wchar_t	szDate[32];
	wchar_t	szSHA1[128];
	wchar_t	szKeyModule[32];
	wchar_t	szReserve[32];	//����
}GPSUPVersionW_S, *LPGPSUPVersionW_S;
#ifdef _UNICODE
#define GPSUPVersionT_S	GPSUPVersionW_S
#else
#define GPSUPVersionT_S	GPSUPVersion_S
#endif // _UNICODE

//�ͻ��˵�¼ʱ���ӷ������л�ȡ�ͻ���APP��Ϣ
typedef struct _tagGPSAppInfo
{
	int		nAppVersion;				//�ͻ��˰汾	6.1.1.1	=  6 * 1000000 + 1 * 10000 + 1 * 100 + 1	ÿ���汾�����������
	int		nWebPort;					//WEB�������˿�
	char	szHost[128];				//��ַ����  192.168.1.100������˲���Ϊ����ֱ��ʹ���û���������ip
	char	szWebApp[32];				//�����豸��ַ1
	char	szVerUrl[128];				//�汾��������		/product/gViewer/upgrade.html
										//˵�����ʵ�ַΪ  http://szHost:nWebPort/szWebApp/szVerUrl	���� http://�û�������ַ:nWebPort/szVerUrl
	char	cVersionChange;				//0:6.15.x.x֮ǰ�İ汾,1:6.15.x.x�汾,��������,�Ժ����Ϸ�����������,ͨ�����ô˲���������������İ汾hw2013/11/21
	char	cVersionChangeEx;			//hw2014/8/13 cVersionChange�汾�ͻ����ж�������,��������һ���汾,�Ժ�cVersionChange���ٸı�,�ô��ֶ�
	short	sUsrVersion;				//�û��������汾
	int		nAppVersionEx;				//�µİ汾��
	UINT	nAppMainVer;				//��ҵ�汾����������Ҫ�ǽ��治ͬ��ͨ������ű������ȥ, ͨ�ð汾��0��
	UINT	nAppFunVer;					//���ܶ��ư汾���ͻ����ڲ�ʹ�ð汾��־��ͨ���˰汾���ֲ�ͬ�Ĺ���, ͨ�ð汾��0��
	UINT	nAppFunSunVer;				//���ܶ����Ӱ汾, ͨ�ð汾��0
	char	bHttps;						//�������Ƿ�ΪHTTPS
	char	szReserve[7];				//��������	30->8  hw 2015/3/27 
}GPSAppInfo_S;

//�û���ͼ������Ϣ
typedef struct _tagUserMapConfig
{
	int nMapType;		//��ͼ����
	int	nJingDu;		//����	4�ֽ� ��������	9999999 = 9.999999 
	int nWeiDu;			//γ��	4�ֽ� ��������	9999999 = 9.999999
	int nZoom;			//���ż���
	char szReserve[128];
}UserMapConfig_S, *LPUserMapConfig_S;

//������������Ϣ
typedef struct _tagSvrConfig
{
	unsigned long lSvrConfig;
}SvrConfig_S, *LPSvrConfig_S;

//�û���Ϣ
typedef struct _tagClientUserInfo
{
	char szCompanyLogoFile[MAX_PATH];		//��˾logo�ļ�·��
	SYSTEMTIME timeCompanyLogoUpdate;		//��˾logo����ʱ��
	char szUserLogoFile[MAX_PATH];			//�û�logo�ļ�·��
	SYSTEMTIME timeUserLogoUpdate;			//�û�logo����ʱ��
}ClientUserInfo_S, *LPClientUserInfo_S;

//�ͻ��˹���
typedef struct _tagClientFunction
{
	unsigned char nMDVRValid;				//MDVR
	unsigned char nDVSValid;				//DVS
	unsigned char nMoblieValid;				//Moblie
	unsigned char nWifiSvrValid;			//�Զ����ط�����
	unsigned char nTarckBackValid;			//�켣�ط�
	unsigned char nMapValid;				//��ͼ	
	unsigned char nPTZValid;				//��̨
	unsigned char nColorValid;				//ɫ��
	unsigned char nTalkbackValid;			//�Խ�
	unsigned char nAudioMonitorValid;		//����
	unsigned char nBroadcastValid;			//�㲥
	unsigned char nReportValid;				//�����ѯ
	unsigned char nBusMgr;					//У������
	unsigned char nDevStatus;				//�豸״̬
	char szReserve[13];						//����14 05-07 14->13
	unsigned char cChildUser : 1;			//���û�����
	unsigned char cCheckPost : 1;			//�ֶ���ڹ���
	unsigned char cGSensor : 1;				//G-sensor
	unsigned char cReserve : 5;				//Ԥ��
}ClientFunction_S, *LPClientFunction_S;
static_assert(sizeof(ClientFunction_S) == 28, "sizeof ClientFunction_S !- 28");

// �û��������Ͷ���
#define USER_PARAM_TYPE_AUTO_CLOSE_VIDEO        1   //�ر���Ƶ p0:ʱ��(��),Ϊ0���Զ��ر� p1:��ʱ����ʽ,0�Զ��ر�,1��ʾ�ر� p2:��ʾ�ر�ʱ��ʾʱ��(��) 
#define USER_PARAM_TYPE_CLOSE_VIDEO_NO_OPER     2   //�޲����ر���Ƶ(�޲���) ����ͬ��                                                                    
#define USER_PARAM_TYPE_AUTO_CLOSE_TALK_MONITOR 3   //�رնԽ��ͼ���(�Զ�) ����ͬ��                                                                      
#define USER_PARAM_TYPE_AUTO_CLOSE_CLIENT       4   //�رտͻ���(�Զ�) ����ͬ��                                                                          
#define USER_PARAM_TYPE_CLOSE_CLIENT_NO_OPER    5   //�رտͻ���(�޲���) ����ͬ��                                                                        
#define USER_PARAM_TYPE_CLOSE_TCP_LINK          6   //�ر�TCP���� ����ͬ��  
typedef struct _tagGPSUserParam_S  
{  
	short nSize;        //�ṹ���С  
	int nUserID;        //�û�ID  
	int nType;          //����  
	int nParam[4];      //����(����)  
	char szParam[256];  //����(�ַ���)
}GPSUserParam_S;

typedef struct _tagDevFixGPS
{
	char szDevIDNO[32];
	unsigned char ucMapValid;			//���õ�λ���Ƿ���Ч
	unsigned char ucMapType;			//��ͼ����
	int	nJingDu;						//����	4�ֽ� ��������	9999999 = 9.999999 
	int nWeiDu;							//γ��	4�ֽ� ��������	9999999 = 9.999999
}DevFixGPS_S, *LPDevFixGPS_S;

//����ֵ��Ӧ����
typedef struct _tagOilResistance
{
	char szDevIDNO[32];
	int nTimeCount;				//��λʱ��(��)
	int nChangeOil;				//�����仯ֵ(L)
	char szResistance[512];		//����ֵ
	char szOil[512];			//����	
}OilResistance_S, *LPOilResistance_S;


#define GPS_SNAPSHOT_PLAN_TIME_COUNT		2		//ץ��ʱ�����Ŀ
#define GPS_SNAPSHOT_PLAN_DAY_COUNT			7		//ץ�ļƻ�����

#define GPS_SNAPSHOT_MODE_LOOP				1		//1��ʾͨ��ѭ��ץ��(ץ��ͨ��1��,���ʱ�����ץ��ͨ��2)
#define GPS_SNAPSHOT_MODE_ALL				2		//2��ʾ��������ץ�ģ�ͬʱץ������ͨ��
//ʱ��
typedef struct _tagGPSSnapshotDay						//ץ��ÿ�ռƻ�
{	
	int	nBegin[GPS_SNAPSHOT_PLAN_TIME_COUNT];		//����Ϊ��λ(ʱ*3600+��*60+��)
	int nEnd[GPS_SNAPSHOT_PLAN_TIME_COUNT];			//ͬ��
}GPSSnapshotDay_S, *LPGPSSnapshotDay_S;
//ץ�ļƻ�
typedef struct _tagGPSSnapshotPlan						//ץ�ļƻ�
{	
	GPSSnapshotDay_S	Day[GPS_SNAPSHOT_PLAN_DAY_COUNT]; //0-����,1-��һ,...
	int nSpan;										//ץ�ļ�� ��λ��
	int	nSnapshotMode;								//1��ʾͨ��ѭ��ץ��(ץ��ͨ��1��,���ʱ�����ץ��ͨ��2)��2��ʾ��������ץ��
	int nChannel;									//ץ�ĵ�ͨ���ţ�0λ-��ʾͨ��0��1λ-��ʾͨ��1����������
}GPSSnapshotPlan_S, *LPGPSSnapshotPlan_S;

//�豸ץ�ļƻ�
typedef struct _tagGPSDevSnapshotPlan
{
	char szDevIDNO[32];								//�豸IDNO
	GPSSnapshotPlan_S Plan;							//�ƻ�
}GPSDevSnapshotPlan_S, *LPGPSDevSnapshotPlan_S;

//��������
const int HANLEWAY_TYPE_PROCESSING = -1;	//������
const int HANLEWAY_TYPE_OVERTIME = 0;		//��ʱδ����
const int HANLEWAY_TYPE_MMS = 1;			//���Ͳ���
const int HANLEWAY_TYPE_IGNORE = 2;			//������
const int HADLEWAY_TYPE_ABNORMAL = 3;		//�Ѵ���,�쳣���� hw2016-11-8
typedef struct _tagDevHandleAlarm
{
	char guid[40];			//����guid
	char szAccount[40];		//��½�˻�
	char szHandleInfo[256];	//������
	int nHandleWay;
	char szDevIDNO[32];

	//afu  ����Դ�����ı������͵������Ϣ ԭ��szParam[92]��ΪszParam[80]		//20170307
	GPSTime_S Time;				//����ʱ��
	GPSTime_S srcTime;			//Դ����ʱ��
	short AlarmType;			//��������
	short AlarmStartType;

	short AlarmInfo;			//������Ϣ
	char szParam[78];		//����80
}DevHandleAlarm_S, *LPDevHandleAlarm_S;

//������ѯ
const int QUERY_ALARMINO_ALL = - 1;
typedef struct _tagAlarmQueryParam
{
	int nArmType;		//��������
	int nArmInfo;		//������Ϣ(Ϊ-1����Ըò���)
}AlarmQueryParam_S, *LPAlarmQueryParam_S;


typedef struct _tagAlarmQueryParamMore
{
	int nArmType;		//��������(Ϊ-1����Ըò���)
	int nArmInfo;		//������Ϣ(Ϊ-1����Ըò���)
	int nHandleStaus;	//����״̬(Ϊ-1����Ըò��� 0-δ����, 1����);
	int nParam[4];		//��������(Ϊ-1����Ըò���)
}AlarmQueryParamMore_S, *LPAlarmQueryParamMore_S;

//�����ļ���Ϣ
typedef struct _tagGPSOflFileInfo
{
	int nID;
	GPSFile2SvrMD5Ex_S FileInfo;
	int nSvrID;					//�洢��������ID
	SYSTEMTIME dtUploaded;		//�ļ��ϴ�ʱ��
}GPSOflFileInfo_S, *LPGPSOflFileInfo_S;

//�豸��������
typedef struct _tagGPSDevOflTask
{
	int nID;				//���ݿ�����
	char szDevIDNO[40];		//�豸ID
	int nFileType;			//�ļ����ͣ�1��ʾ�����ļ�
	int nFileID;			//�ļ�ID
	SYSTEMTIME dtCreate;	//���񴴽�ʱ��
	char szReserve[32];		//��������
}GPSDevOflTask_S, *LPGPSDevOflTask_S;

//¼������
#define AUTODOWN_DOWN_TYPE_ALL				1		//1�������У�2����¼��3����ͼƬ
#define AUTODOWN_DOWN_TYPE_RECORD			2		
#define AUTODOWN_DOWN_TYPE_JPEG				3		
#define AUTODOWN_DOWN_TYPE_RECORD_ALARM		4		
#define AUTODOWN_DOWN_TYPE_JPEG_ALARM		5
//�豸���ؼƻ�
#define TASK_STATUS_ALL			-1
#define TASK_STATUS_NO_FINISH	0
#define TASK_STATUS_SUCCESS		1
#define TASK_STATUS_FAIL		2
typedef struct _tagGPSDevDloadTask
{
	int nID;				//���ݿ�����
	char szIDNO[64];		//�豸��Ż��߳��ƺ�
	int  nChannle;			//ͨ����(����ͨ���Ż���ȫ��ͨ����)
	int  nType;				//����(1-���� 2-¼�� 3-ͼƬ 4-����¼�� 5-����ͼƬ);
	SYSTEMTIME BegTime;		//��ʼʱ��
	SYSTEMTIME EndTime;		//��ʼʱ��
	int	nStatus;			//״̬
	char szLable[256];		//��ǩ
	char szRemark[256];		//��ע
	int  nAlarmInfo;		//4-����¼�� 5-����ͼƬʱ�����ص��ļ�����	
							//REC_IOALARM = 0,	// IO ����	REC_SPEED_H = 1,	// ���ٱ���	REC_SPEED_L = 2,	// ���ٱ���		REC_GSENSOR = 3,	// GSensor 
							//REC_TEMP = 4,      // �¶ȱ���		REC_MD = 5,	   // �ƶ����		REC_UPSACT = 6,	 // UPS ����
	char szReserve[60];		//��������
}GPSDevDloadTask_S, *LPGPSDevDloadTask_S;



//809���ȷ����Ϣ
typedef struct _tagAck809Platform
{
	char szDevIDNO[36];			//������IDNO
	int	 nSvrID;				//������ID
	unsigned int uiInfoID;		//��ϢID	��Ϊ��������ID����ʾ��������ID
	char szinfoContent[432];	//��Ϣ����
	char szResponderName[20];	//Ӧ��������
	char szResponderTel[24];	//Ӧ������ϵ�绰
	char guid[36];				//guid, Ψһ��־
	unsigned int uiType;		//1��ʾ��ڣ�2��ʾ��������Ӧ�𣬱�������ʱ��szSvrIDNO��ʾ�豸���
	unsigned int uiResult;		//������������0�����У�1������أ�2������3��������
	BYTE  nObjType;				// ��ڶ�������;
	char szObjectID[15];		//Ӫ��֤��
	int  nAccountID;			//�û�ID
	unsigned int uiCenterID;	//���Ľ�����
	GPSTime_S GPSTime;			//����ʱ��
	unsigned int uiSrcSN;		//ԭʼ���
	//char szReserve[4];
}Ack809Platform_S, *LPAck809Platform_S;

//809���ҵ��
typedef struct _tagGPSJT809Business
{
	int	nType;				//����
	char szDevIDNO[GPS_DEV_ID_LEN];	//�豸���
	SYSTEMTIME begTime;		//��ʼʱ��
	SYSTEMTIME endTime;		//����ʱ��
	char szReserve[512];	//��������
}GPSJT809Business_S, *LPGPSJT809Business_S;

//������̬��Ϣ����ҵ��
#define JT809_BUSINESS_TYPE_HISTORY_LOCATION			1			//�¼�ƽ̨ ---��  �ϼ�ƽ̨		�Զ�����������ʷλ��		�豸��ţ���ʼʱ��ͽ���ʱ��
#define JT809_BUSINESS_TYPE_MONITOR_START_UP			2			//�¼�ƽ̨ ---��  �ϼ�ƽ̨		���뽻��������λ��Ϣ		���������ϼ�ƽ̨������Ϣʱʹ��		�豸��ţ���ʼʱ��ͽ���ʱ��
#define JT809_BUSINESS_TYPE_MONITOR_END				3				//�¼�ƽ̨ ---��  �ϼ�ƽ̨		ȡ�����뽻��������λ��Ϣ	���ƺ�
#define JT809_BUSINESS_TYPE_HISGNSSDATA				4				//�¼�ƽ̨ ---��  �ϼ�ƽ̨		����������λ��Ϣ����		�豸��ţ���ʼʱ��ͽ���ʱ��	

//�ݻ�
#define JT809_BUSINESS_TYPE_ADPT_TODO_INF			5				//�¼�ƽ̨ ---��  �ϼ�ƽ̨		�����ϱ�����������Ϣ		�豸��ţ�����ID��������	(0x00�������У�0x01���Ѵ�����ϣ�0x02����������0x03����������)

#define JT809_BUSINESS_TYPE_MAIN_LINK_CONNECT		6				//��¼����·�������ϼ�ƽ̨����ͨ����·�������͵�¼��
#define JT809_BUSINESS_TYPE_MAIN_LINK_DISCONN		7				//ע������·�������ϼ�ƽ̨����ע���������Ͽ�����
#define JT809_BUSINESS_TYPE_LINK_STATUS				8				//�鿴���ϼ����ƽ̨������״̬
#define JT809_BUSINESS_TYPE_UP_SINGLE_REGISTER		9				//�ϴ���������ע����Ϣ
#define JT809_BUSINESS_TYPE_UP_ALL_REGISTER			10				//�ϴ����г���ע����Ϣ


//������ʻ״̬
typedef struct _tagGPSVehiDriveStatus
{
	char szVehiIDNO[32];		//���ƺ�
	char szDirverName[64];		//����
	char szCardNO[32];			//���֤
	char szLicense[64];			//��ҵ�ʸ�֤����
	char szOrgName[256];		//��֤��������
	char szWaybill[512];		//�˵���Ϣ
	char szReserve[128];		//��������
}GPSVehiDriveStatus_S, *LPGPSVehiDriveStatus;


const int REAMIND_TYPE_TIMESTAMP = 0;				//��Ӧ�ṹ��SYSTEMTIME
const int REAMIND_TYPE_VEHI_INSURANCE = 1;			//��Ӧ�ṹ��GPSVehiInsuranceInfo_S
const int REAMIND_TYPE_VEHI_TRANSPORTATION = 2;		//��Ӧ�ṹ��GPSVehiTransportationInfo_S
const int REAMIND_TYPE_VEHI_LICENSE = 3;			//��Ӧ�ṹ��GPSVehiLicenseInfo_S
const int REAMIND_TYPE_DIRVER = 4;					//��Ӧ�ṹ��GPSDriverInfo_S


// ��չ����:�����ڷ�������
const int REAMIND_TYPE_VEHI_INSURANCE_EX = 101;		//��ʽ=SYSTEMTIME + N * GPSVehiInsuranceInfoEx_S
const int REAMIND_TYPE_VEHI_TRANSPORTATION_EX = 102;//��ʽ=SYSTEMTIME + N * GPSVehiTransportationInfoEx_S
const int REAMIND_TYPE_VEHI_LICENSE_EX = 103;		//��ʽ=SYSTEMTIME + N * GPSVehiLicenseInfoEx_S
const int REAMIND_TYPE_DIRVER_EX = 104;				//��ʽ=SYSTEMTIME + N * GPSDriverInfoEx_S


//��������
typedef struct _tagGPSVehiInsuranceInfo
{
	int nVehiID;				//����ID
	char szCompany[64];			//���չ�˾
	char szTyp[64];				//��������
	char szNumber[64];			//����
	int	 nAmount;				//���ս�λ0.01Ԫ
	char szClaimStatus[64];		//����״̬
	SYSTEMTIME tmStart;			//��ʼʱ��
	SYSTEMTIME tmEnd;			//����ʱ��
	int nRemindDay;				//������������
}GPSVehiInsuranceInfo_S, *LPGPSVehiInsuranceInfo_S;

typedef struct _tagGPSVehiInsuranceInfoEx_S
{
	unsigned short usSize;		//���ṹ���С
	unsigned short usDataLen;	//��������ݳ���
	int nID;					//���ݿ�ID
	int nDelete;				//ɾ�����,���˱�־��Чʱ,��ʾ��ID��ɾ��
	int nVehiID;				//����ID
	GPSTime_S BegTime;			//��ʼʱ��
	GPSTime_S EndTime;			//����ʱ��
	int nRemindDay;				//������������
	int nPrice;					//�۸�
	int nDiscount;				//�ۿ�   ʵ�ʽ��=�۸�*�ۿ�/100
	unsigned char ucCompanyLen;	//���չ�˾(����)
	unsigned char ucAgentLen;	//������(����)
	unsigned char ucTelephoneLen; //��ϵ�绰(����)
	unsigned char ucTypeLen;	//��������(����)
	unsigned char ucIDNOLen;	//���յ���(����)
	unsigned char ucConditionLen;//�������(����)
	unsigned char ucRemarkLen;	//��ע(����)
	unsigned char ucResvered[5];//Ԥ��(5���ֽ�)
}GPSVehiInsuranceInfoEx_S, *LPGPSVehiInsuranceInfoEx_S;

//��������֤
typedef struct _tagGPSVehiTransportationInfo
{
	int nVehiID;				//����ID
	char szBusinessLicense[64];	//��Ӫ���֤��
	char szBusinessScope[64];	//��Ӫ��Χ
	SYSTEMTIME tmStart;			//��ʼʱ��
	SYSTEMTIME tmEnd;			//����ʱ��
	int nRemindDay;				//������������
}GPSVehiTransportationInfo_S, *LPGPSVehiTransportationInfo_S;

typedef struct _tagGPSVehiTransportationInfoEx_S
{
	unsigned short usSize;		//���ṹ���С
	unsigned short usDataLen;	//��������ݳ���
	int nID;					//���ݿ�ID
	int nDelete;				//ɾ�����,���˱�־��Чʱ,��ʾ��ID��ɾ��
	int nVehiID;				//����ID
	GPSTime_S BegTime;			//��ʼʱ��
	GPSTime_S EndTime;			//����ʱ��
	int nRemindDay;				//������������
	unsigned char ucLicenseLen;	//��Ӫ���֤��(����)
	unsigned char ucScopeLen;	//��Ӫ��Χ(����)
	unsigned char ucRemarkLen;	//��ע(����)
	unsigned char ucResvered[5];//Ԥ��(5���ֽ�)
}GPSVehiTransportationInfoEx_S, *LPGPSVehiTransportationInfoEx_S;

//������ʻ֤
typedef struct _tagGPSVehiLicenseInfo
{
	int nVehiID;				//����ID
	char szIDCode[64];			//ʶ�����
	char szEngineCode[64];		//����������
	char szLicense[64];			//��ʻ֤
	char szUseNature[64];		//ʹ������
	char szBrandModel[64];		//Ʒ���ͺ�
	SYSTEMTIME tmStart;			//��ʼʱ��
	SYSTEMTIME tmEnd;			//����ʱ��
	int nRemindDay;				//������������
}GPSVehiLicenseInfo_S, *LPGPSVehiLicenseInfo_S;

typedef struct _tagGPSVehiLicenseInfoEx_S
{
	unsigned short usSize;		//���ṹ���С
	unsigned short usDataLen;	//��������ݳ���
	int nID;					//���ݿ�ID
	int nDelete;				//ɾ�����,���˱�־��Чʱ,��ʾ��ID��ɾ��
	int nVehiID;				//����ID
	GPSTime_S BegTime;			//��ʼʱ��
	GPSTime_S EndTime;			//����ʱ��
	int nRemindDay;				//������������
	unsigned char ucEngineCodeLen; //����������
	unsigned char ucLicenseLen;	//��ʻ֤
	unsigned char ucUseNatureLen; //ʹ������
	unsigned char ucBrandModelLen; //Ʒ���ͺ�
	unsigned char ucRemarkLen;	//��ע
	unsigned char ucResvered[3];//Ԥ��(3���ֽ�)
}GPSVehiLicenseInfoEx_S, *LPGPSVehiLicenseInfoEx_S;


//�����������
const int VEHI_CHECK_TYPE_LOCATION = 1;
const int VEHI_CHECK_TYPE_TRACK = 2;
const int VEHI_CHECK_TYPE_REALPALY = 3;
const int VEHI_CHECK_TYPE_DEALALARM = 4;
const int VEHI_CHECK_TYPE_OTHER = 5;

typedef struct _tagGPSVehiFtpTaskData
{
	int nID;						//���ݿ�ID
	int nVehiID;					//����ID
	char szDevIDNO[32];				//�豸���
	unsigned short usSequence;		//��ˮ�� 
	unsigned short usReserve;		//�����ֶ�
	char szFilePath[MAX_PATH];		//�ϴ�·��
	int nChnMask;					//�߼�ͨ����
	SYSTEMTIME BegTime;				//��ʼʱ��
	SYSTEMTIME EndTime;				//����ʱ��
	int nAlarmFlag1;				//������־λ1
	int nAlarmFlag2;				//������־λ2
	char cResourceType;				//0������Ƶ�� 1����Ƶ�� 2����Ƶ, 3.����Ƶ������Ƶ
	char cStreamType;				//-1:����������������,0��������,1��������
	char cStoreType;				//0:���洢�������ֱ��洢��, 1�����洢���� 2���ֱ��洢��
	char cNetworkMask;				//����ִ������ bit0:WFIF,bit1:LAN,bit2:3G/4
	int nUserID;					//�û�ID
	int nDownStatus;				//����״̬  0:��ͣ״̬ 1:�������� 2:ȡ�� 3:ʧ�� 4:�ɹ� ,
	SYSTEMTIME TaskTime;			//����ʼʱ��
	char szReserve[32];
}GPSVehiFtpTaskData_S, *LPGPSVehiFtpTaskData_S;

//FTP������Ŀ
typedef struct _tagGPSFtpTaskDataCount
{
	int nCount;
	char szReserve[8];
}GPSFtpTaskDataCount_S, *LPGPSFtpTaskDataCount_S;


//¼����Ҳ���
typedef struct _tagGPSRecFileSearchParam
{
	int nChannel;				//ͨ��
	int nYearS;					//��
	int nMonthS;				//��
	int nDayS;					//��
	int nBegTime;				//��ʼʱ��
	int nYearE;					//��
	int nMonthE;				//��
	int nDayE;					//��	
	int nEndTime;				//����ʱ��
	short nRecType;				//¼������
	short nFileAttr;			//�ļ����ԣ�ͼƬ�ļ�����Ϊ¼���ļ�	GPS_FILE_ATTRIBUTE_RECORD(WKPЭ��)
	int nLoc;					//�ļ�λ��
	int nAlarmType;				//��������(WKPЭ��, ���������洢��)
	int nAlarmFlag1;			//������־1		//1078
	int nAlarmFlag2;			//������־2		//1078
	char cResourceType;			//0������Ƶ�� 1����Ƶ�� 2����Ƶ 3;��Ƶ��������Ƶ
	char cStreamType;			//-1:����������������,0��������,1��������
	char cStoreType;			//0:���洢�������ֱ��洢��, 1�����洢���� 2���ֱ��洢��
	char cReserve1;
	char cReserve[32];
}GPSRecFileSearchParam_S, *LPGPSRecFileSearchParam_S;


const int PLAY_BACK_MODE_NORAML = 0;		//����
const int PLAY_BACK_MODE_FAST = 1;			//���
const int PLAY_BACK_MODE_REWIND = 2;		//����
const int PLAY_BACK_MODE_I_FARAM = 3;		//�ؼ�֡����
const int PLAY_BACK_MODE_SIGALE_FRAM = 4;	//��֡����

//¼��طŲ���
typedef struct _tagGPSRecPlaybackParam
{
	GPSFile_S File[16];
	int nPlayChannel[16];
	int nFileNum;
	int nBegMinSecond;
	int nEndMinSecond;
	int nMode;					//1078  �ط�ģʽ (��Ϊ3��ΪI֡����)
	int nTimes;					//1078	�طű���
	char cMultiPlay;			//��·�ط�(�ͻ���ʹ��)
	char cReserve[31];			//�����ֶ�
								//32->31 [2019-3-27 ydl]

}GPSRecPlaybackParam_S, *LPGPSRecPlaybackParam_S;


// �ɱ䳤��,���ȱ仯ʱӦ�����ֽڶ���
// ������������Ϣ
typedef struct _tagGPSVehiOtherVariable_S
{
	int nVehiID;					//����ID
	int nSpeedLimit;				//����ֵ
	char szLinesOperation[64];		//��Ӫ��·	//���˴�72�ֽ�
}GPSVehiOtherVariable_S, *LPGPSVehiOtherVariable_S;

// int nInstallFlag;				//�Ƿ�װ����,0:ADAS 1:DSM 2:TPMS 3:BSD
// char szBrand[4][128];			//��������
// char szModel[4][128];			//����Ʒ��

// �����Ĺ���ʱ����Ϣ
typedef struct _tagGPSVehiWorkTimeVariable_S
{
	int nVehiID;					//����ID
	int nMonthWorkTime;				//���¹���ʱ��	//8�ֽ�
}GPSVehiWorkTimeVariable_S, *LPGPSVehiWorkTimeVariable_S;

typedef struct _tagGPSVehiOtherVariableNew_S
{
	int nVehiID;					//����ID
	int nSpeedLimit;				//����ֵ
	int nInstallFlag;				//�Ƿ�װ����
	int nVehicleType;				//��������
}GPSVehiOtherVariableNew_S, *LPGPSVehiOtherVariableNew_S;

typedef struct _tagGPSLongStrHead_S 
{
	int nSize;						//�ṹ���С
	int nFlag;						//���ݱ�׼,�ο�GPS_LONG_STR_FLAG	
	int nID;
	int nLen;
}GPSLongStrHead_S ;

//ƽ̨��Ϣ
typedef struct _tagPlatformInfo
{
	int nID;
	char szIP[32];					//��ӪIP
	int nPort;						//�˿�
	unsigned int uiCenterID;		//����ID
	unsigned int uiUserID;			//ƽ̨�˺�
	char szPassword[32];			//ƽ̨����
	unsigned int uiM1;				//���ܲ���M1
	unsigned int uiIA1;				//���ܲ���IA1
	unsigned int uiIC1;				//���ܲ���IC1
	BOOL bCheckIP;					//��¼ʱ����IP��0Ϊ��У��,1ΪУ��
	char szVideoPlateFormCode[32];	//��ҵ��Ƶƽ̨Ψһ����
	char szAuthorizeCode1[68];		//������������ƽ̨ʹ�õ�ʱЧ����
	char szAuthorizeCode2[68];		//��Խ��������ƽ̨ʹ�õ�ʱЧ����
	int  nStatus;				//��Ӫ״̬,0Ϊֹͣ��Ӫ,1Ϊ������Ӫ
}PlatformInfo_S, *LPPlatformInfo_S;

//��˾��Ϣ
typedef struct _tagCompanyInfoEx
{
	CompanyInfo_S CInfo;			//��˾��Ϣ
	char szCode[32];				//��˾����
	int nMarkerID;					//��������ID,��Ӧmap_marker ID�ֶ�
	PlatformInfo_S PInfo;			//ƽ̨��Ϣ
}CompanyInfoEx_S, *LPCompanyInfoEx_S;


//809����״̬
typedef struct _tagConnectStatus809
{
	char szPluginName[64];			//�������		��:libgpstran_jt809V2

	int nServerIndex;				//������

	char szHost[64];				//�ϼ�ƽ̨��IP��ַ
	int nPort;						//�ϼ�ƽ̨�Ķ˿�
	unsigned int uiCenterID;		//ƽ̨������

	int nEnableStatus;				//����״̬
	int nMainConnectStatus;			//����·����״̬ 0:�Ͽ�  1:������
	int nSubConnectStatus;			//����·����״̬ 0:�Ͽ�  1:������

	char cReserve[360];				//Ԥ��
}ConnectStatus809_S, *LPConnectStatus809_S;
// 512�ֽ�
const int ConnectStatus809_LEN = sizeof(ConnectStatus809_S);


#pragma pack()

#endif