#ifndef _USR_LOG_DEF_H_
#define _USR_LOG_DEF_H_


#define	USRLOG_DEVICE_NULL						""	//���豸����
#define	USRLOG_USER_NULL						0	//�û�����Ϊ�ն���

//�û�������־����
#define	USRLOG_MAIN_TYPE_LOGIN					1	//�ͻ��˵�¼
#define	USRLOG_MAIN_TYPE_DEVICE_CTRL			2	//�豸����ָ��	
#define	USRLOG_MAIN_TYPE_MEDIA					3	//ý��ҵ��

//�ͻ��˵�¼
#define	USRLOG_LOGIN_SUB_TYPE_LOGIN				1	//�ͻ��˵�¼����¼��ַ���Ự��ţ���¼����(1�ͻ��ˣ�3iphone�ͻ��ˣ�2web�ͻ���)��
#define	USRLOG_LOGIN_SUB_TYPE_LOGOUT			2	//�ͻ����˳�
#define	USRLOG_LOGIN_SUB_TYPE_INTERUPT			3	//�ͻ����ж�
#define USRLOG_LOGIN_SUB_TYPE_TRANSFER			4	//�ͻ�����ת//��LoginSvrע��ʱ��LoginSvr����
#define USRLOG_LOGIN_SUB_TYPE_UNKOWN_USR		5	//δ֪�û�����������Ϣ	����¼��ַ���˺ţ����룩
#define USRLOG_LOGIN_SUB_TYPE_GET_SVR_FAILED	6	//�����������Ϣʧ��

//�豸����
#define	USRLOG_DEV_CTRL_SUB_TYPE_SEND_TEXT		1	//����TTXָ��
#define	USRLOG_DEV_CTRL_SUB_TYPE_SEND_SMS		2	//���Ͷ���Ϣ���豸
#define	USRLOG_DEV_CTRL_SUB_TYPE_SEND_CTRL		3	//���Ϳ���ָ����͡��ϵ磩
#define	USRLOG_DEV_CTRL_SUB_TYPE_SEND_PTZ		4	//��̨����
#define	USRLOG_DEV_CTRL_SUB_TYPE_READ_STATUS	5	//��ȡ����״̬
#define USRLOG_DEV_CTRL_SUB_TYP_SET_GPSINTERVAL	6	//����GPSʱ����
#define USRLOG_DEV_CTRL_SUB_TYPE_READ_MOTION	7	//��ȡ�ƶ�������
#define USRLOG_DEV_CTRL_SUB_TYPE_SET_MOTION		8	//�����ƶ�������
#define USRLOG_DEV_CTRL_SUB_TYPE_READ_NETFLOW_STATISTICS	9	//��ȡ����������Ϣ
#define USRLOG_DEV_CTRL_SUB_TYPE_SET_NETFLOW_PARAM			10	//����������������
#define USRLOG_DEV_CTRL_SUB_TYPE_CLEAR_NETFLOW_STATISTICS	11	//�����������ͳ��
#define USRLOG_DEV_CTRL_SUB_TYPE_ADJUST_NETFLOW_STATISTICS	12	//У����������ͳ��
#define USRLOG_DEV_CTRL_SUB_TYPE_SEND_DISPATCH_COMMAND		13	//�·�����ָ��
#define USRLOG_DEV_CTRL_SUB_TYPE_SEND_CFG_VIDEO_COMMAND		14	//������Ƶ����
#define USRLOG_DEV_CTRL_SUB_TYPE_GET_CFG_VIDEO_COMMAND		15	//��ȡ��Ƶ����
#define USRLOG_DEV_CTRL_SUB_TYPE_SEND_CFG_AUDIO_COMMAND		16	//������Ƶ����
#define USRLOG_DEV_CTRL_SUB_TYPE_GET_CFG_AUDIO_COMMAND		17	//��ȡ��Ƶ����
#define USRLOG_DEV_CTRL_SUB_TYPE_SEND_CFG_AUDIO_INPUT_COMMAND		18	//������Ƶ�������
#define USRLOG_DEV_CTRL_SUB_TYPE_GET_CFG_AUDIO_INPUT_COMMAND		19	//��ȡ��Ƶ�������
#define USRLOG_DEV_CTRL_SUB_TYPE_SEND_CFG_PTZ_COMMAND		20	//������̨����
#define USRLOG_DEV_CTRL_SUB_TYPE_GET_CFG_PTZ_COMMAND		21	//��ȡ��̨����
#define USRLOG_DEV_CTRL_SUB_TYPE_GET_PARAM					22	//��ȡ����
#define USRLOG_DEV_CTRL_SUB_TYPE_SET_PARAM					23	//���ò���
#define USRLOG_DEV_CTRL_SUB_TYPE_TRANSPARENT_CONFIG			24	//���ò���
#define	USRLOG_DEV_CTRL_SUB_TYPE_FREE_PRESET_GET			25	//��ȡ����Ԥ��λ
#define	USRLOG_DEV_CTRL_SUB_TYPE_GET_VIDEO_COLOR			26	//������Ƶ��ɫ
#define	USRLOG_DEV_CTRL_SUB_TYPE_SET_VIDEO_COLOR			27	//��ȡ��Ƶ��ɫ

//ý��ҵ������ý�������дý����־����ʼ��ֹͣʱ����¼��־��Ϣ��
#define	USRLOG_MEDIA_SUB_TYPE_VIDEO					1	//��ƵԤ����ͨ�������ͣ�
#define	USRLOG_MEDIA_SUB_TYPE_AUDIO					2	//��Ƶ������ͨ����
#define	USRLOG_MEDIA_SUB_TYPE_TACKBACK				3	//˫��Խ�
#define	USRLOG_MEDIA_SUB_TYPE_SNAPSHOT				4	//ͼƬץ��
#define	USRLOG_MEDIA_SUB_TYPE_REC_SEARCH			5	//¼��������ͨ�������ͣ�ʱ�䣩
#define	USRLOG_MEDIA_SUB_TYPE_REC_DOWN				6	//¼�����أ�¼���ļ���
#define	USRLOG_MEDIA_SUB_TYPE_DLOWN_DEV_PARAM		7	//��ȡ�豸����
#define	USRLOG_MEDIA_SUB_TYPE_UPLOAD_DEV_PARAM_FILE	8	//�ϴ��豸�����ļ�
#define	USRLOG_MEDIA_SUB_TYPE_UPLOAD_DEVICE_PARAM	9	//�ϴ��豸����
#define	USRLOG_MEDIA_SUB_TYPE_UPLOAD_DEV_UP_FILE	10	//�ϴ��豸�����ļ��������ļ��汾��
#define	USRLOG_MEDIA_SUB_TYPE_UPLOAD_UPGRADE_DEVICE	11	//�豸Զ������
#define	USRLOG_MEDIA_SUB_TYPE_PLAYBACK				12	//Զ�̻ط�
#define	USRLOG_MEDIA_SUB_TYPE_BROADCAST				13	//�㲥

#endif