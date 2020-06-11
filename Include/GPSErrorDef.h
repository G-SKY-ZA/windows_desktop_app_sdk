#ifndef _GPS_ERROR_DEF_H_
#define _GPS_ERROR_DEF_H_

#define GPS_OK							0
#define GPS_FALSE						1
#define GPS_ERR_NORIGHT					2	//�û���Ȩ��
#define GPS_ERR_PARAM					3	//��������
#define GPS_ERR_DB_ERR					4	//�������ݿ����
#define GPS_ERR_NO_EXIST				5	//��Ϣ������
#define GPS_ERR_UNKOWN					6	//δ֪����
#define GPS_ERR_NAME_EXIST				7	//�����Ѿ���ʹ��

//�豸��ش������	21-60
#define GPS_ERR_DEV_NO_EXIST			21	//�豸��Ϣ������
#define GPS_ERR_DEV_NO_RESP				22	//û���յ��豸�Ļ�����Ϣ
#define GPS_ERR_DEV_DIS_ONLINE			23	//�豸������
#define GPS_ERR_DEV_DUEING				24	//����Ϊ�����ͻ���ִ�жԽ�����
#define GPS_ERR_DEV_TRAN_MSVR_EMPTY		25	//�豸ý��ת��������Ϣ������
#define GPS_ERR_DEV_CNT_FAILED			26	//�豸�����ж�
#define GPS_ERR_DEV_STO_POS_EMPTY		27	//δ����洢·��
#define GPS_ERR_DEV_UP_UPGRADING		28	//��������
#define GPS_ERR_DEV_UP_FILE_WRONG		29	//�����ļ�����ȷ
#define GPS_ERR_DEV_UP_VER_LOW			30	//�����ļ��汾����
#define GPS_ERR_DEV_UP_VERIFY_FAILED	31	//�����ļ�У��ʧ��
#define GPS_ERR_DEV_CHN_NO_EXIST		32	//ͨ����Ϣ������
#define GPS_ERR_DEV_SNAP_JPG			33	//ץ��ͼƬʧ��
#define GPS_ERR_DEV_DISK_FULL			34	//Ӳ�̿ռ䲻��
#define GPS_ERR_DEV_UP_VER_SAME			35	//�����ļ��汾���豸�汾��ͬ����ִ����������
#define GPS_ERR_DEV_UP_FILE_ERR			36	//�����ļ������ڻ��𻵲��ɶ�
#define GPS_ERR_DEV_UP_FILE_CRC			37	//�����ļ�crcУ��ʧ��
#define GPS_ERR_DEV_UP_VER_FAILED		38	//���ܴӵ�ǰ�汾������Ŀ��汾
#define GPS_ERR_DEV_UP_FAILED			39	//����ʧ��
#define GPS_ERR_DEV_SESSION_LIMIT		40	//�Ự���ƣ����豸����ͬʱֻ������4���ͻ�����¼������
#define GPS_ERR_DEV_SESSION_EXIST		41	//�Ự�ظ�
#define GPS_ERR_DEV_SESSION_END			42	//�����Ự
#define GPS_ERR_DEV_USR_NO_EXIST		43	//�豸�û�������
#define GPS_ERR_DEV_USR_FULL			44	//�豸�û���������
#define GPS_ERR_DEV_NO_SUPPORT			45	//�豸��֧�ִ˹���

//�ļ���ش������	61-80		���������ص�
#define GPS_ERR_FILE_EXT_ERR			61	//�ļ���ʽ����
#define GPS_ERR_FILE_NO_EXIST			62	//�������ϲ����ڴ��ļ�
#define GPS_ERR_FILE_DOWN_OK			63	//�ļ���ȫ���������
#define GPS_ERR_FILE_DOWN_ING			64	//�ļ���������
#define GPS_ERR_FILE_EMPTY				65	//û��������¼���ļ�
#define GPS_ERR_FILE_USED				66	//�ļ����ڱ�ʹ��

//�û���ش������	81-100
#define GPS_ERR_USR_NO_EXIST			81	//�û�������
#define GPS_ERR_USR_PWD_ERROR			82	//�û��������
#define GPS_ERR_USR_ACCOUNT_ERROR		83	//�û�������
#define GPS_ERR_USR_PRIORITY_ERROR		84  //���ȼ����� ��1078�û����ȼ���

//��������ش������	101-120
#define GPS_ERR_SVR_CNT_FD				101	//����������ʧ��
#define GPS_ERR_SVR_DISK_FULL			102	//�������ռ䲻��
#define GPS_ERR_SVR_BUSY				103	//������æ
#define GPS_ERR_SVR_CREATE_FILE			104	//�����������ļ�ʧ��
#define	GPS_ERR_SVR_SMSMOD_NO_WORK		105	//����ģ�����û������
#define GPS_ERR_SVR_EMPTY				106	//��������Ϣ�����ڣ��޷�Ϊ�ͻ��ṩ����
#define GPS_ERR_SVR_DOWNING				107	//��������������
#define GPS_ERR_SVR_UPLOADING			108	//���ڽ�������
#define GPS_ERR_SVR_DISONLINE			109	//������������
#define GPS_ERR_SVR_DISCONNECT			110	//�����������ж�


#endif