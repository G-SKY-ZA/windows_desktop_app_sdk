#ifndef _GPS_PLUGIN_DATA_DEF_H_
#define _GPS_PLUGIN_DATA_DEF_H_

//·��ϵͳ�� hw2014/8/18
#define DJWL_TASK_STATUS_AUDIT_FINISH	0	//�������
#define DJWL_TASK_STATUS_SUC			1	//�������
#define DJWL_TASK_STATUS_FAIL			2	//����ʧ��
#define DJWL_TASK_STATUS_AUDIT_VEHICLE	3	//����������Ϣ(�������һ��)
#define DJWL_TASK_STATUS_CLOSE			4	//����ر�


#define DJWL_TASK_APPROVE	 0	 //����
#define DJWL_TASK_SUBMIT	-1	 //��ɻ�ʧ��
#define DJWL_TASK_MODIFY    -2   //�޸�

//������Ϣ��
typedef struct _tagGPSVehicleInfo
{
	int nID;					//���
	char szVehicleIDNO[40];		//���ƺ�
	char szDriverName[64];		//˾������
	char szDriverPhone[64];		//˾���绰
	char szDirverPicture[256];	//˾��ͼƬ
	char szVehicleType[128];	//��������
	char szCompany[128];		//������˾
	char szRemark[256];			//��ע
	char szReserve[256];		//����256
}GPSVehicleInfo_S, *LPGPSVehicleInfo_S;

//��·������Ϣ
typedef struct _tagLZLineBaseInfo
{
	char	szStartPoint[64];			//���
	char	szEndPoint[64];				//�յ�
	double	dTotalWeight;				//����������
	double	dTotalLength;				//�����ܳ�
	double	dTotalWidth;				//�����ܿ�
	double	dTotalHeight;				//�����ܸ�
	double	dAxisWeight;				//��������
}LZLineBaseInfo_S, *LPLZLineBaseInfo_S;

//�������������
typedef struct _tagGPSVehicleTask
{
	int nID;							//���
	char szVehicleIDNO[40];				//����IDNO
	char szMDVRIDNO[40];				//MDVR�豸IDNO
	char szPadIDNO[40];					//PAD�豸IDNO
	char szPadPsw[256];					//PAD��½����������
	char szCargoName[256];				//��������
// 	double dCargoLength;				//���ﳤ��
// 	double dCargoHeight;				//����߶�
// 	double dCargoWidth;					//������
// 	double dCargoWeight;				//��������
	LZLineBaseInfo_S LineInfo;			//��·�滮��Ϣ
	GPSTime_S PlanStartTime;			//����ƻ���ʼʱ��
	GPSTime_S PlanEndTime;				//����ƻ�����ʱ��
	GPSTime_S ActualEndTime;			//����ʵ�ʽ���ʱ��
	int nStatus;						//����״̬ 0-������� 1-������� 2-����ʧ�� 3-����������Ϣ(�������һ��)
	int nIsManualConfirmation;			//�˹�ȷ��, 0-ûȷ��,1-ȷ��
	char szReserve[252];				//����252
}GPSVehicleTask_S, *LPGPSVehicleTask_S;

//��·��ϸ��Ϣ
typedef struct _tagLZLineGPSInfo
{
	double	dLatitude;;					//����
	double	dLongitude;					//γ��
	int		nNodeID;					//�ڵ�ID
	int		nNodeType;					//�ڵ�����
	char	szNodePicture[MAX_PATH];	//�ڵ�ͼƬURL
	char	szRes[1024];
}LZLineGPSInfo_S, *LPLZLineGPSInfo_S;

// typedef struct _tagLZTaskFailTime
// {
// 	int nTimeMinute;					//ƫ��·��ʱ��,��λ����
// }LZTaskFailTime_S, *LPLZTaskFailTime_S;
// 
// typedef struct _tagLZTaskFailConfirm
// {
// 	int	nConfirm;						//0-�������� 1-����ʧ��
// 	char szRemark[512];					//ԭ��
// }LZTaskFailConfirm_S, *LPLZTaskFailConfirm_S;

//·��ϵͳ End

#pragma pack()

#endif