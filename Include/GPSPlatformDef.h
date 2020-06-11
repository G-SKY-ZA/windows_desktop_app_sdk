#ifndef _GPS_PLATFORM_DEF_H_
#define _GPS_PLATFORM_DEF_H_

/******************************************************************************
  Author        : zjt
  Created       : 2018/06/11
  Last Modified :
  Description   : ����ƽ̨ͨ����Ϣ����
  History       :

******************************************************************************/

//����ƽ̨
const int GPS_CB_PF_GET_COMPANY_INFO = 1;
const int GPS_CB_PF_GET_VEHICLE_INFO = 2;

typedef struct _tagGPSPFCompanyInfo
{
	int nPlatformID;					//��˾ID
	char szIP[32];						//��ӪIP
	int nPort;							//�˿�
	unsigned int uiCenterID;			//����ID
	unsigned int uiUserID;				//ƽ̨�˺�
	char szPassword[32];				//ƽ̨����
	unsigned int uiM1;					//���ܲ���M1
	unsigned int uiIA1;					//���ܲ���IA1
	unsigned int uiIC1;					//���ܲ���IC1
	BOOL bCheckIP;						//��¼ʱ����IP��0Ϊ��У��,1ΪУ��
	char szVideoPlateFormCode[32];		//��ҵ��Ƶƽ̨Ψһ����
	char szAuthorizeCode1[68];			//������������ƽ̨ʹ�õ�ʱЧ����
	char szAuthorizeCode2[68];			//��Խ��������ƽ̨ʹ�õ�ʱЧ����
	int  nStatus;						//��Ӫ״̬,0Ϊֹͣ��Ӫ,1Ϊ������Ӫ
}GPSPFCompanyInfo, *LPGPSPFCompanyInfo;


typedef struct _tagGPSPFVehicleInfo
{
	char szVehiIDNO[32];
	unsigned char ucColor;		
	unsigned char ucResert[3];	
	int nCompanyID;
	char szDevIDNO[32];
}GPSPFVehicleInfo_S, *LPGPSPFVehicleInfo_S;


//����֪ͨ�ϲ�
const int GPS_CB_PF_NOTIFY_PLATFORM_CONNECT = 1;
const int GPS_CB_PF_NOTIFY_PLATFORM_DISCONNECT = 2;
const int GPS_CB_PF_NOTIFY_VEHICLE_REGISTER = 3;
const int GPS_CB_PF_NOTIFY_PLATFORM_MSG_ACK = 4;
const int GPS_CB_PF_NOTIFY_AUTHORIZE_INFO = 5;
const int GPS_CB_PF_NOTIFY_WARN_ACK = 6;

typedef struct _tagGPSPFPlaformConnect
{
	unsigned int uiCenterID;
	int nMCompanyID;
	int nRet;
}GPSPFPlatformConnect_S, *LPGPSPFPlatformConnect_S;

typedef struct _tagGPSPFPlatformDisconnect
{
	unsigned int uiCenterID;
	int nMCompanyID;
}GPSPFPlatformDisconnect_S, *LPGPSPFPlatformDisconnect_S;

typedef struct _tagGPSPFVehicleRegister
{
	int nMCompanyID;				//ƽ̨ID
	char szVehiIDNO[32];			//���ƺ�
	unsigned char ucColor;						//��ɫ
	char szPlatformID[15];			//ƽ̨Ψһ���롣
	char szProductID[16];			//�����ն˳���Ψһ���룬��������������ͳ��ұ����ɡ�
	char szTerminalModelType[32];	//�����ն��ͺţ�����20λʱ��"\0"�սᡣ
	char szTerminalID[16];			//�����ն˱�ţ���д��ĸ��������ɡ�
	char szTerminalSimCode[16];		//�����ն�SIM���绰���롣���벻��12λ������ǰ��������0��
}GPSPFVehicleRegister_S, *LPGPSPFVehicleRegister_S;

typedef struct _tagGPSPFPlatformMsgAck
{
	int nMCompanyID;
	unsigned short usType;				//��ҵ�����ͱ�ʶ
	unsigned short usObjType;			//��������
	char szObjID[16];					//����ID
	unsigned int uiInfoID;				//��ϢID
	char szInfo[512];					//��Ϣ����
}GPSPFPlatformMsgAck_S, *LPGPSPFPlatformMsgAck_S;

typedef struct _tagGPSPFAuthorizeInfo
{
	unsigned int uiCenterID;
	char szVideoPlateFormCode[32];	//��ҵ��Ƶƽ̨Ψһ����
	char szAuthorizeCode1[68];		//������������ƽ̨ʹ�õ�ʱЧ����
	char szAuthorizeCode2[68];		//��Խ��������ƽ̨ʹ�õ�ʱЧ����
}GPSPFAuthorizeInfo_S, *LPGPSPFAuthorizeInfo_S;


typedef struct _tagGPSPFWarnAck
{
	int nMCompanyID;
	int nSCompanyID;
	char szDevIDNO[32];
	unsigned int uiAlarmID;
	unsigned int uiResult;
}GPSPFWarnAck_S, *LPGPSPFWarnAck_S;


//���������·�ƽ̨��Ϣ
//���������·�ƽ̨��Ϣ
const int GPS_SEND_PF_TYPE_PLATFORM_MSG = 1;
const int GPS_SEND_PF_TYPE_DOWN_MSG = 2;

const int GPS_PLATFORM_MSG_TYPE_POST_QUERY = 1;		//���
const int GPS_PALTFORM_MSG_TYPE_MSG_INFO = 2;		//����
typedef struct _tagGPSPFPlatformMsgReq
{
	unsigned int uiCenterID;			//���Ľ�����
	unsigned short usType;				//��ҵ�����ͱ�ʶ
	unsigned short usObjType;			//��������
	char szObjID[16];					//����ID
	unsigned int uiInfoID;				//��ϢID
	char szInfo[512];					//��Ϣ����
	char szIP[32];						//IP
}GPSPFPlatformMsgReq_S, *LPGPSPFPlatformMsgReq;


const int GPS_DOWN_MSG_TYPE_EXG_DRIVER_INFO = 1;			//˾���ɼ�
const int GPS_DOWN_MSG_TYPE_EXG_EWAYBILL = 2;				//�����˵�
const int GPS_DOWN_MSG_TYPE_EXG_RETURN_STARTUP = 3;			//����������λ��Ϣ
const int GPS_DOWN_MSG_TYPE_EXG_RETURN_END = 4;				//����������λ��Ϣ
const int GPS_DOWN_MSG_TYPE_EXG_STATCI_INFO = 5;			//������̬��Ϣ
const int GPS_DOWN_MSG_TYPE_EXG_REAL_LOCATION = 6;			//ʵʱλ��
const int GPS_DOWN_MSG_TYPE_EXG_HISTORY_LOCATION = 7;		//��ʷλ��
const int GPS_DOWN_MSG_TYPE_WARN_URGE_TODO = 8;				//��������
const int GPS_DOWN_MSG_TYPE_WARN_INFORM_TIPS = 9;			//����Ԥ��
const int GPS_DOWN_MSG_TYPE_WARN_INFORM = 10;				//ʵʱ��������
const int GPS_DOWN_MSG_TYPE_DISCONNECT = 11;				//����·ע������
const int GPS_DOWN_MSG_TYPE_DISCONNECT_INFO = 12;			//����·�Ͽ�֪ͨ
const int GPS_DOWN_MSG_TYPE_CLOSELINK_INFO = 13;			//������·�Ͽ�֪ͨ

typedef struct _tagGPSPFDownMsgReq
{
	unsigned int uiCenterID;
	unsigned short usType;				
	unsigned short sReserve;			
	char szVehiIDNO[32];
	unsigned char ucColor;	
	char szDevIDNO[32];
	char cData[511];	
}GPSPFDownMsgReq_S, *LPGPSPFDownMsgReq_S;

//������̬��Ϣ
typedef struct _tagGPSPFDownMsgExgVehiInfo
{
	char szVehiType[16];
	char szTransType[32];
	char szVehiNationality[32];
	char szOwerID[32];
	char szOwerName[32];
	char szOwerTel[32];
}GPSPFDownExgVehiInfo_S, *LPGPSPFDownExgVehiInfo_S;

//������Ϣ
typedef struct _tagGPSPFDownMsgWarnUrgeTodo
{
	unsigned char ucSource;			//������Դ 0X01;�����ն�  0X02:��ҵ���ƽ̨ 0X03;�������ƽ̨ 0X04:����
	SYSTEMTIME WarnTime;			//����ʱ��
	int nWarnType;					//��������
	unsigned int uiSupervisorID;	//����ID
	SYSTEMTIME SupervisorEndTime;	//����ʱ��
	unsigned char ucLevle;			//���켶��
	char szSupervisor[32];			//������
	char szSupervisorTel[32];		//�����˵绰
	char szSupervisorEmail[64];		//�������ʼ�
}GPSPFDownMsgWarnUrgeTodo_S, *LPGPSPFDownMsgWarnUrgeTodo_S;

//������Ϣ
typedef struct _tagGPSPFDownMsgWarnInform
{
	unsigned char ucSource;		//������Դ 0X01;�����ն�  0X02:��ҵ���ƽ̨ 0X03;�������ƽ̨ 0X04:����
	int nWarnType;				//��������
	SYSTEMTIME WarnTime;		//����ʱ��
	char szWarnContent[256];	//��������
}GPSPFDownMsgWarnInform_S, *LPGPSPFDownMsgWarnInform_S;




#endif

