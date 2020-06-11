#ifndef _TTX_DVR_TRANSPARENT_DEF_H_
#define _TTX_DVR_TRANSPARENT_DEF_H_

//̥ѹ����͸������
#define TTX_TRANSPARENT_TYPE_TPMS		101			//̥ѹ����͸�����壬̥ѹ���3���Ӵ���һ�ξͺ���

#pragma pack(4)

//̥ѹ����(20��̥ѹ)
typedef struct _tagTTXTirePressure
{
	unsigned char ucTireBattery;	//����0-5V��55=5.5V
	char ucTirePress;		//̥ѹ,  23 = 2.3PA��������Χһ����2.3 - 2.5
	short ucTireTemperure;	//�¶�200 ��ʾ20��	
}TTXTirePress_S;

typedef struct _tagTTXTireStatus
{
	unsigned char ucTireCount;	//̥ѹ�ĸ���
	unsigned char ucReserve[3];	
	TTXTirePress_S arrPress[20];	//
}TTXTireStatus_S;

#define TTX_TRANSPARENT_TYPE_CARINFO		0x00000092			//




//ˢ��͸��
typedef struct CarRecord
{
	char szCarID[32];		//����
	char cYear;				//2000�꿪ʼ
	char cMonth;
	char cDay;
	char cHour;
	char cMin;
	char cSec;
	char cPatch;			//0 - Ϊʵʱ, 1 - ����
	char reseved1;
	int	nJingDu;						//����	4�ֽ� ��������	9999999 = 9.999999 
	int	nWeiDu;							//γ��	4�ֽ� ��������	9999999 = 9.999999
	char reseved2[32];
}CarInfo_S, *LPCarInfo_S;

#define TTX_TRANSPARENT_TYPE_GSENSOR		0x00000093			//gSensor��Ϣ ������SensorHead_S+SensorInfo_S


typedef struct _tagTTXGSenSorHead_S
{
	int nType;			//1������0����
	int nSecond;		//����,��Χ0-86400,3600*hour+60*min+sec
	short nDataCount;	//����
	short nDataSize;	//��С
	//�����TTXGSenSorInfo_S������,nDataCount��
}TTXGSenSorHead_S;

typedef struct _tagTTXGSenSorInfo_S
{
	short AccelerateX;
	short AccelerateY;
	short AccelerateZ;
	short Uint;
}TTXGSenSorInfo_S;

//GSENSOR͸����������
#define TTX_TRANSPARENT_GSENSOR_ALARM_START	1
#define TTX_TRANSPARENT_GSENSOR_ALARM_END	2


typedef struct _tagTTXGSenSorALarmInfo_S
{
	int nAlarmType;
	char	szDesc[256];		//��������	
	char cReserve[64];	//�������� 
}TTXGSenSorAlarmInfo_S;


#define TTX_TRANSPARENT_TYPE_STATISICSPEOPLE		0x00000002

//����ͳ��͸��
const int MAX_POPLE_DEVCNT = 4;		//��ͳ�Ƶ����� 0-ǰ�� 1-���� 2-���� 3-����

typedef struct _tagStatisticsPeople
{
	int		nUpPeople[MAX_POPLE_DEVCNT];	//�ϳ�����, С��0��ʾ��Ч
	int		unDownPeople[MAX_POPLE_DEVCNT];	//�³�����, С��0��ʾ��Ч
	int		nJingDu;						//����	4�ֽ� ��������	9999999 = 9.999999 
	int		nWeiDu;							//γ��	4�ֽ� ��������	9999999 = 9.999999
	char	cPatch;							//0-ʵʱ 1-����
	unsigned char ucYear;		//��(2000+ucYear) ��Χ(0-64)
	unsigned char ucMonth;		//��(1-12)	��Χ(0-16)
	unsigned char ucDay;		//��(1-31)  ��Χ(0-32)
	unsigned char ucHour;		//ʱ(0-23)	��Χ(0-32)
	unsigned char ucMinute;		//��(0-59)  ��Χ(0-64)
	unsigned char ucSecond;		//��(0-59)  ��Χ(0-64)
	char	szReserver[25];					//����32->25
}StatisticsPeople_S, *LPStatisticsPeople_S;


#pragma pack()

#endif
