#pragma once


#define PRIVI_USERMGR_USER						11 //�û�����
#define PRIVI_USERMGR_ROLE						12 //��ɫ����
//������������Ȩ��
#define PRIVI_VEHIMGR_VEHICLE					21 //������������
#define PRIVI_VEHIMGR_GROUP						22 //��������
#define PRIVI_VEHIMGR_DOWN_PLAN					23 //�������ؼƻ�
#define PRIVI_VEHIMGR_FENCE						24 //Χ����������
#define PRIVI_VEHIMGR_MOBILE					25 // �ն˹���
//��������
#define PRIVI_REPORT_NORMAL						31	//���ñ���
#define PRIVI_REPORT_NORMAL_LICHENG_SUMMARY		311 //��̻��ܱ�
#define PRIVI_REPORT_NORMAL_LICHENG_DETAIL		312 //�����ϸ��
#define PRIVI_REPORT_NORMAL_TRACK_DETAIL		313 //��ʻ�켣��ϸ��

#define PRIVI_REPORT_ALARM						32	//��������
#define PRIVI_REPORT_ALARM_SUMMARY				321 //�������ܱ�
#define PRIVI_REPORT_ALARM_GPSSINAL_DETAIL		322 //GPS��Ϣ��ʧ����
#define PRIVI_REPORT_ALARM_URGENCY_BUTTON		323 //������ť������ϸ��
#define PRIVI_REPORT_ALARM_DOOR_OPEN_LAWLESS_DETAIL 324 //�Ƿ�������ϸ��
#define PRIVI_REPORT_ALARM_DISK_ERROR_DETAIL	325 //Ӳ�̴�����ϸ��
#define PRIVI_REPORT_ALARM_MOTION_DETAIL		326 //�ƶ���ⱨ����ϸ��
#define PRIVI_REPORT_ALARM_SHAKE_DETAIL			327 //G-Sensor������ϸ��

#define PRIVI_REPORT_SPEED						33 //�ٶȱ���
#define PRIVI_REPORT_SPEED_ALARM_SUMMARY		331 //���ٻ��ܱ�
#define PRIVI_REPORT_SPEED_ALARM_DETAIL			332 //������ϸ��
#define PRIVI_REPORT_SPEED_DETAIL				333 //��ʻ�ٶȷ���

#define PRIVI_REPORT_LOGIN						34 //�����߱���
#define PRIVI_REPORT_LOGIN_SUMMARY				341 //�����߻��ܱ�
#define PRIVI_REPORT_LOGIN_DETAIL				342 //��������ϸ��
#define PRIVI_REPORT_LOGIN_RATE					343 //�����ʻ��ܱ�

#define PRIVI_REPORT_IOIN						35 //IO���뱨������
#define PRIVI_REPORT_IOIN_SUMMARY				351 //IO���뱨�����ܱ�
#define PRIVI_REPORT_IOIN_DETAIL				352 //IO���뱨����ϸ��

#define PRIVI_REPORT_OIL						36 //��������
#define PRIVI_REPORT_OIL_TRACK_DETAIL			361 //������̬��ϸ��
#define PRIVI_REPORT_OIL_EXCEPTION_DETAIL		362//�����쳣��ϸ��

#define PRIVI_REPORT_PARK						37 //ͣ������
#define PRIVI_REPORT_PARK_SUMMARY				371 //ͣ�����ܱ�
#define PRIVI_REPORT_PARK_DETAIL				372//ͣ����ϸ��
#define PRIVI_REPORT_PARK_ACCON_SUMMARY			373 //ͣ��δϨ����ܱ�
#define PRIVI_REPORT_PARK_ACCON_DETAIL			374//ͣ��δϨ����ϸ��

#define PRIVI_REPORT_FENCE						38 //Χ������
#define PRIVI_REPORT_FENCE_ALARM_DETAIL			381 //Χ��������ϸ��
#define PRIVI_REPORT_FENCE_ACCESS_DETAIL		382 //�������򱨱�
#define PRIVI_REPORT_FENCE_PARK_DETAIL			383 //����ͣ������

#define PRIVI_REPORT_EXTEND						39 //��չ���ܱ���
#define PRIVI_REPORT_EXTEND_ALARM_DETAIL		391 //������ϸ��
#define PRIVI_REPORT_EXTEND_DISPATCH_DETAIL		392 //������ϸ��


#define PRIVI_REPORT_STORAGE                    43	//�洢���ʱ���
#define PRIVI_REPORT_EQUIPMENT                  44	//�豸��������

//PC �ͻ���
#define PRIVI_MAP_MY_MAP_MANAGE		611		//�ҵĵ�ͼ����
#define PRIVI_MAP_SHARE_MAP			612		//������ҵ��ͼ
#define PRIVI_MAP_MONITOR			613		//��ͼ���

#define PRIVI_VIDEO					621		//��Ƶ
#define PRIVI_VIDEO_SOUND			622		//����
#define PRIVI_VIDEO_TALK			623		//�Խ�
#define PRIVI_VIDEO_MONITOR			624		//����
#define PRIVI_VIDEO_DEV_CAPTURE		625		//ǰ��ץ��
#define PRIVI_VIDEO_PTZ				626		//��̨
#define PRIVI_VIDEO_RECORD			627		//¼��
#define PRIVI_VIDEO_PTZ_LIGHT		628		//PTZ�ƹ�

#define PRIVI_TRACK_BACK			631		//�켣�ط�
#define PRIVI_RECORD_BACK			641		//¼��ط�

//�豸����
#define PRIVI_DEVICE_PARAMETER		651		//�豸����
#define PRIVI_DEVICE_INFOR			652		//�豸��Ϣ
#define PRIVI_DEVICE_UPDATE			653		//����
#define PRIVI_DEVICE_3G_FLOW		654		//3G����
#define PRIVI_DEVICE_MOVE			655		//�ƶ��������
#define PRIVI_DEVICE_OTHER			656		//��������(TTS,�������ָ��������ã�GPS�����)
#define PRIVI_DEVICE_WIFI			657		//WIFI��������,WIFI��������


//ϵͳ����
#define PRIVI_SYSTEM_SET			663		//ϵͳ����
#define PRIVI_SYSTEM_RECORD_SET		664		//¼������

//�����ѯ
#define PRIVI_LOG_QUERY_ALARM		671		//������־��ѯ
#define PRIVI_LOG_QUERY_USER		672		//�û���־��ѯ
#define PRIVI_AUDIT_VEHICLE			673		//������������
#define PRIVI_AUDIT_LINE_DEV		674		//��·�ն�����

// ��������
#define PRIVI_SYSTEM_ALARM_LINK		661		//��������
#define PRIVI_SYSTEM_ALARM_SHIELD	662		//�������� ���⴦��,�д˱�־λ��ʾ��Ȩ��
#define PRIVI_SYSTEM_ALARM_HANDLE	680		//�������� ���⴦��,�д˱�־λ��ʾ��Ȩ��

// ЭͬС��
#define PRIVI_PTT_SWITCH			700	//����
#define PRIVI_PTT_PULL				701	//ǿ��
#define PRIVI_PTT_DEMOLITIONS		702	//ǿ��
#define PRIVI_PTT_GROUP_CALL		703	//Ⱥ��
#define PRIVI_PTT_TEMP_CALL			704	//��ʱ����(����)
#define PRIVI_PTT_GROUP_MANAGER		707	//ЭͬС�����

#define PRIVE_CHANGE_VEHICLE		36	//�ն���Ϣ�޸�


//�û�Ȩ��
typedef struct _tagUserPrivilege
{
	UINT nUserType;					//0-��ҵ�����û� 1-���û�
	char szPrivilege[1024];			//�û�Ȩ���ö��ŷֿ�
}UserPrivilege_S, *LPUserPrivilege_S;

typedef struct _tagClientConfigUserPrivilege_S
{
	UserPrivilege_S UserPrivilege;
}ClientConfigUserPrivilege_S, *LPClientConfigUserPrivilege_S;

//��������(����Ȩ��δ������),�ͻ���ʹ��
#define PRIVI_SHIELD_DEV_STATUS		500		//�豸״̬��Ϣ
#define PRIVE_SHIELD_ALARM_LIST		501		//������Ϣ�б��
#define PRIVE_SHIELD_COLOR			502		//ɫ��
#define PRIVE_SHIELD_COSTSTOTAL		503		//ͳ�ƹ���
#define PRIVE_SHIELD_OTHER_APPS		504		//����Ӧ�ð�ť
#define PRIVE_SHIELD_OIL_SET_MENU	505		//�������������ò˵�
#define PRIVE_SHIELD_BOTTOMBAR		506		//�ײ�״̬��
#define PRIVE_SHIELD_DEVTOTAL		507		//�����м��豸ͳ������
#define PRIVE_SHIELD_MULTI_PIC		508		//��ͼƬ��ʾ����
#define PRIVE_SHIELD_SPEED			509		//��ʾ�ٶ�
#define PRIVE_SHIELD_LICHENG		510		//��ʾ���