#ifndef _TTX_DVR_ALARM_DEF_H_
#define _TTX_DVR_ALARM_DEF_H_

/******************************************************************************
  Author        : afu
  Created       : 2012/11/30
  Last Modified :
  Description   : ������Ϣ���壬ÿ��������һ����ʼ�¼���һ�������¼����
  History       :
	  1.	Date        : 2012/11/30
		Author      : leeafu
		Modification: Created file
******************************************************************************/

#define TTX_ALARM_TYPE_USEDEFINE				1		//�Զ��屨��AlarmInfoΪ����Դ��0λ��ʾio1����1λ��ʾio2���Դ�����
#define TTX_ALARM_TYPE_URGENCY_BUTTON			2		//������ť����AlarmInfoΪ��ť���
#define TTX_ALARM_TYPE_SHAKE					3		//�񶯱���AlarmInfo�����ٶȱ�����bit0��X����,bit1��Y����,bit2��Z����bit3����ײ,bit4���෭��
#define TTX_ALARM_TYPE_VIDEO_LOST				4		//����ͷ���źű���alarmInfoΪͨ���ţ���λ��ʾ����0λ��ʾͨ��1
#define TTX_ALARM_TYPE_VIDEO_MASK				5		//����ͷ�ڵ�����alarmInfoΪͨ���ţ���λ��ʾ����0λ��ʾͨ��1
#define TTX_ALARM_TYPE_DOOR_OPEN_LAWLESS		6		//�Ƿ����ű���
#define TTX_ALARM_TYPE_WRONG_PWD				7		//����������󱨾�
#define TTX_ALARM_TYPE_FIRE_LOWLESS				8		//�Ƿ���𱨾�
#define TTX_ALARM_TYPE_TEMPERATOR				9		//�¶ȱ���, AlarmInfo��������ţ�0��ʾ������1��1��ʾ������2��, param[0]�¶����ͣ�0��ʾ�����£�1��ʾ�����£�, param[1]��ǰ�¶�10000=100�� 
#define TTX_ALARM_TYPE_DISK_ERROR				10		//Ӳ�̴��󱨾�, alarmInfoΪӲ������(TTX_DISK_TYPE_SD��) param[1]Ϊ������ţ�1��ʾ����1��2��ʾ����2
#define TTX_ALARM_TYPE_OVERSPEED				11		//���ٱ���,  param[0]��ǰ�ٶ�9900=99����, param[1]�ٶ����ֵ, param[2]�ٶ����ֵ, param[3]����ʱ��, alarmInfo: 1����,2����,3��������,4��������
#define TTX_ALARM_TYPE_BEYOND_BOUNDS			12		//Խ�籨��
#define TTX_ALARM_TYPE_DOOR_ABNORMAL			13		////�쳣���س��ű�����alarmInfoΪ�ű�־
#define TTX_ALARM_TYPE_PARK_TOO_LONG			14		//ͣ��ʱ�����������alarmInfoΪͣ��ʱ����param[0]Ϊ�趨��ʱ����(��λ��)
#define TTX_ALARM_TYPE_MOTION					15		//�ƶ���ⱨ������λ��ʾ����0λ��ʾͨ��1
#define TTX_ALARM_TYPE_ACC_ON					16		//ACC��������
#define TTX_ALARM_TYPE_DEV_ONLINE				17		//�豸����
#define TTX_ALARM_TYPE_GPS_SIGNAL_LOSS          18      //GPSѶ�Ŷ�ʧ��ʼ
#define TTX_ALARM_TYPE_IO_1                     19      //IO_1����
//#define TTX_ALARM_TYPE_IO_2                     20      //IO_2����
//#define TTX_ALARM_TYPE_IO_3                     21      //IO_3����
//#define TTX_ALARM_TYPE_IO_4                     22      //IO_4����
//#define TTX_ALARM_TYPE_IO_5                     23      //IO_5����
//#define TTX_ALARM_TYPE_IO_6                     24      //IO_6����
//#define TTX_ALARM_TYPE_IO_7                     25		//IO_7����
//#define TTX_ALARM_TYPE_IO_8                     26      //IO_8����

//27-34 Ϊ����Χ������
#define TTX_ALARM_TYPE_IN_FENCE				27	 //��������(	 param[0]-λ������ param[1]-���������·ID
#define TTX_ALARM_TYPE_OUT_FENCE	 		28	//������ param[0]-λ������ param[1]-���������·ID
//param[0]��ʱ��ʹ��
//param[1]��Ӧ���������    //aid: (area id)����id ������������Ҫ������id���ظ�������

//����4�����������Գ�����Ŀ
#define TTX_ALARM_TYPE_FIRE                     35      //��
#define TTX_ALARM_TYPE_PANIC                    36      //�پ�
#define TTX_ALARM_TYPE_TASK_FINISHED			37		//�����������
#define TTX_ALARM_TYPE_IMAGE_UPLOAD				38		//ͼƬ�ϴ����

//39-40ΪӲ��1, Ӳ��2������

//#define TTX_ALARM_TYPE_IO_9                     41      //IO_9����
//#define TTX_ALARM_TYPE_IO_10                    42      //IO_10����
//#define TTX_ALARM_TYPE_IO_11                    43      //IO_11����
//#define TTX_ALARM_TYPE_IO_12                    44      //IO_12����

//45ΪGPS��Ч

#define TTX_ALARM_TYPE_REFUEL					46		//����	AlarmInfoΪ���͵�����(9999=99.99��)��Param[0]Ϊ����ǰ�ͺ�
#define TTX_ALARM_TYPE_STILL_FUEL				47		//͵��	AlarmInfoΪ͵�͵�����(9999=99.99��)��Param[0]Ϊ͵��ǰ�ͺ�

#define TTX_ALARM_TYPE_TRANSPARENT				48		//����͸������
#define TTX_ALARM_TYPE_FATIGUE					49		//ƣ�ͼ�ʻ	AlarmInfo��ʾ��������	0 , û�У� 1  һ������ 2 ��������, 3 ��������, 4 ��ע�ȱ���

#define TTX_ALARM_TYPE_END_USEDEFINE			51		//�Զ��屨��
#define TTX_ALARM_TYPE_END_URGENCY_BUTTON		52		//������ť����
#define TTX_ALARM_TYPE_END_SHAKE				53		//�񶯱���
#define TTX_ALARM_TYPE_END_VIDEO_LOST			54		//����ͷ���źű���
#define TTX_ALARM_TYPE_END_VIDEO_MASK			55		//����ͷ�ڵ�����
#define TTX_ALARM_TYPE_END_DOOR_OPEN_LAWLESS	56		//�Ƿ����ű���
#define TTX_ALARM_TYPE_END_WRONG_PWD			57		//����������󱨾�
#define TTX_ALARM_TYPE_END_FIRE_LOWLESS			58		//�Ƿ���𱨾�
#define TTX_ALARM_TYPE_END_TEMPERATOR			59		//�¶ȱ���
#define TTX_ALARM_TYPE_END_DISK_ERROR			60		//Ӳ�̴��󱨾�
#define TTX_ALARM_TYPE_END_OVERSPEED			61		//���ٱ���
#define TTX_ALARM_TYPE_END_BEYOND_BOUNDS		62		//Խ�籨��
#define TTX_ALARM_TYPE_END_DOOR_ABNORMAL		63		//�쳣���س��ű���
#define TTX_ALARM_TYPE_END_PARK_TOO_LONG		64		//ͣ��ʱ���������
#define TTX_ALARM_TYPE_END_MOTION				65		//�ƶ���ⱨ��
#define TTX_ALARM_TYPE_ACC_OFF					66		//ACC�رձ���
#define TTX_ALARM_TYPE_DEV_DISONLINE			67		//�豸����
#define TTX_ALARM_TYPE_END_GPS_SIGNAL_LOSS      68      //GPSѶ�Ŷ�ʧ����
//#define TTX_ALARM_TYPE_END_IO_1                 69      //IO_1����
//#define TTX_ALARM_TYPE_END_IO_2                 70      //IO_2����
//#define TTX_ALARM_TYPE_END_IO_3                 71      //IO_3����
//#define TTX_ALARM_TYPE_END_IO_4                 72      //IO_4����
//#define TTX_ALARM_TYPE_END_IO_5                 73      //IO_5����
//#define TTX_ALARM_TYPE_END_IO_6                 74      //IO_6����
//#define TTX_ALARM_TYPE_END_IO_7                 75      //IO_7����
//#define TTX_ALARM_TYPE_END_IO_8                 76      //IO_8����

//77-84 Ϊ����Χ������
#define TTX_ALARM_TYPE_END_IN_FENCE	             	77      //�������򱨾�     param[0]-λ������ param[1]-���������·ID
#define TTX_ALARM_TYPE_END_OUT_FENCE	        78      //�����򱨾�   param[0]-λ������ param[1]-���������·ID

//#define TTX_ALARM_TYPE_END_IO_9                 91      //IO_9����
//#define TTX_ALARM_TYPE_END_IO_10                92      //IO_10����
//#define TTX_ALARM_TYPE_END_IO_11                93      //IO_11����
//#define TTX_ALARM_TYPE_END_IO_12                94      //IO_12����

#define TTX_ALARM_TYPE_END_FATIGUE				99		//ƣ�ͼ�ʻ	AlarmInfo��ʾ��������	0 , û�У� 1  һ������ 2 ��������, 3 ��������, 4 ��ע�ȱ���

//���ļ���Ҫ�ϴ�
#define TTX_ALARM_TYPE_UPLOAD_FILE              109     //¼���ļ���Ҫ�ϴ�AlarmInfo����1��ʾJPGͼƬ��2��ʾ¼���ļ�,  szDescΪ�ļ�����·��
														//param[0] = �ļ����ȣ�param[1] = �ļ�����(������߱���)��param[2] = �ļ�ʱ��, param[3] = ͨ��
														//param[4] = ��Ӧ�ı�������alarmtype��param[5]��Ӧ��alarmInfo
														//szReserve = �ļ���ʼʱ�䣬��: 2013-06-13 100001
														//��ΪJPGͼƬʱ���ļ�ʱ����Ч
#define TTX_ALARM_TYPE_CUSTOM					113		//�Զ��屨��, AlarmInfo��ʾ����
														// param[0]��ʾ����1��param[1]��ʾ����2��param[2]��ʾ����3, param[3]��ʾ����4, 
														//szDesc��ʾ���ݣ�Ϊ�ַ�����ʽ���м䲻�������'\0'���Ϊ256���ֽ�
#define TTX_ALARM_TYPE_UPLOAD_COMPLETE          114		//֪ͨ�ļ��������, param[0]��ʾ�ļ�ID��param[1]��ʾ�ļ�����


#define TTX_ALARM_TYPE_USP_CUT		 			155		//UPS ���߱���
#define TTX_ALARM_TYPE_END_USP_CUT				156
#define TTX_ALARM_TYPE_HDD_HIGH_TEMPERATURE		157		//Ӳ�̳��±���, alarmInfoΪӲ�̺�0��ʾ1,param[0]��ʾӲ������TTX_DISK_TYPE_SD, param[1]��ǰ�¶�100=100��
#define TTX_ALARM_TYPE_END_HDD_HIGH_TEMPERATURE	158
#define TTX_ALARM_TYPE_BEFORE_BOARD_OPENED		159		//ǰ��屻�˿�
#define TTX_ALARM_TYPE_END_BEFORE_BOARD_OPENED	160		
#define TTX_ALARM_TYPE_TURN_OFF					161		//�ػ��ϱ�	,	alarmInfoΪԭ��: 1ACC ��Ч�ػ�,2��ʱ�ػ�,3�������, 4����쳣�ػ�,5����ػ�,6Ӳ�����򿪹ػ�
#define TTX_ALARM_TYPE_DISK_SPACE_WARNING		162		//Ӳ�̿ռ侯��,alarmInfoΪӲ�̺�,param[0]��ʾӲ������TTX_DISK_TYPE_SD, param[1]�ܿռ�, param[2]ʣ��ռ�,  16000��ʾ�ռ�Ϊ16000MB
#define TTX_ALARM_TYPE_END_DISK_SPACE_WARNING	163		//Ӳ�̿ռ侯��,alarmInfoΪӲ�̺�,param[0]��ʾӲ������TTX_DISK_TYPE_SD, param[1]�ܿռ�, param[2]ʣ��ռ�,  16000��ʾ�ռ�Ϊ16000MB
#define TTX_ALARM_TYPE_SIMCARD_LOST				164		//SIMCARD��ʧ����
#define TTX_ALARM_TYPE_END_SIMCARD_LOST			165		//SIMCARD��ʧ����
#define TTX_ALARM_TYPE_TPMS				166		//	̥ѹ����, alarmInfo  TPMS�������ͣ�1��ʾ��ص�ѹ���棬2-̥ѹ���ߣ�3-̥ѹ���� 4-©�� 5-�¶��쳣��ֻ�й��ߣ���,
												//			param[0] ��ǰ�¶� ��: 200 = 20��
												//			param[1] ��ǰ̥ѹ ��: 25 = 2.5P
												//			param[2] ��ǰ��ѹ ��: 102=10.2V
												//			param[3] ��������ţ�01��ʾTPMS��1��02��ʾTPMS��2��03��ʾTPMS��3��04��ʾTPMS��4��11��ʾTPMS��1��12��ʾTPMS��2��13��ʾTPMS��3��14��ʾTPMS��4��

#define TTX_ALARM_TYPE_END_TPMS					167		//TPMS����

#define TTX_ALARM_TYPE_DEVICE_UNLOCKED			182		//�豸����
#define TTX_ALARM_TYPE_DEVICE_LOCKED			183		//�豸����

#define TTX_ALARM_TYPE_SWITCH_VIEW				301		//�л���Ƶ��alarminfo��ʾͨ���ţ�param[0]: 0��ʾ��ԭ��1��ʾ���


#define CUSTOM_ALARM_TYPE_PLATE					1	//����ʶ��
#define CUSTOM_ALARM_TYPE_PRESON				2	//����ʶ��

//�Զ��屨��, AlarmInfo��ʾ����
//update by roson 2018-03-21 ��������3521A�ϵĲ������
#define CUSTOM_ALARM_TYPE_PEOPLE									47//����ͳ��
#define CUSTOM_ALARM_TYPE_DEVICE_LOCKED	 							50//�豸����
#define CUSTOM_ALARM_TYPE_DEVICE_UNLOCKED							51//�豸����
#define CUSTOM_ALARM_TYPE_OXYGEN_DENSITY_LOW						52//����Ũ�ȵͱ�����ʼ
#define CUSTOM_ALARM_TYPE_END_OXYGEN_DENSITY_LOW					53//����Ũ�ȵͱ�������
//�����ϱ�  //�Զ��屨��, AlarmInfo��ʾ����
#define TTX_ALARM_CUSTOM_DEV_REPORED_TEXT 							99

//Gsensor���� 
#define TTX_ALARM_CUSTOM_ALARM_GSENSOR_STATUS_START					177  //param[0] ״̬  1=���� 2=ֹͣ 3=���� 4=���� 5=��ת��
#define TTX_ALARM_CUSTOM_ALARM_GSENSOR_STATUS_END					178  //param[0] ״̬  1=���� 2=ֹͣ 3=���� 4=���� 5=��ת��

/******************adas��dms����//�Զ��屨��, AlarmInfo��ʾ����*********************/

//ADAS �Զ��屨������  TTX_ALARM_TYPE_CUSTOM
//ƣ��һ��
#define TTX_ALARM_CUSTOM_ADAS_ALARM_FATIGUE_ONE_LEVEL_START			101
#define TTX_ALARM_CUSTOM_ADAS_ALARM_FATIGUE_ONE_LEVEL_END			102

//ƣ�Ͷ���
#define TTX_ALARM_CUSTOM_ADAS_ALARM_FATIGUE_TWO_LEVEL_START			103
#define TTX_ALARM_CUSTOM_ADAS_ALARM_FATIGUE_TWO_LEVEL_END			104

//�뿪��ʻ���ߣ�������Σ�
#define TTX_ALARM_CUSTOM_ADAS_ALARM_LEAVE_DRIVING_SIGHT_START		105
#define TTX_ALARM_CUSTOM_ADAS_ALARM_LEAVE_DRIVING_SIGHT_END			106

//���Ƿ
#define TTX_ALARM_CUSTOM_ADAS_ALARM_YAWN_START						107
#define TTX_ALARM_CUSTOM_ADAS_ALARM_YAWN_END						108

//��绰
#define TTX_ALARM_CUSTOM_ADAS_ALARM_CALL_START						109
#define TTX_ALARM_CUSTOM_ADAS_ALARM_CALL_END						110

//��ϵ��ȫ��
#define TTX_ALARM_CUSTOM_ADAS_ALARM_NOT_WEAR_SEAT_BELT_START		111
#define TTX_ALARM_CUSTOM_ADAS_ALARM_NOT_WEAR_SEAT_BELT_END			112

//����
#define TTX_ALARM_CUSTOM_ADAS_ALARM_SMOKIng_START					113
#define TTX_ALARM_CUSTOM_ADAS_ALARM_SMOKIng_END						114

//�ڵ�����ͷ
#define TTX_ALARM_CUSTOM_ADAS_ALARM_BLOCK_CAMERA_START				115
#define TTX_ALARM_CUSTOM_ADAS_ALARM_BLOCK_CAMERA_END				116

//�豸����
#define TTX_ALARM_CUSTOM_ADAS_ALARM_DEV_FAILURE_START				117
#define TTX_ALARM_CUSTOM_ADAS_ALARM_DEV_FAILURE_END					118

//����ƫ��
#define TTX_ALARM_CUSTOM_ADAS_ALARM_LANE_OFFSET_START				119
#define TTX_ALARM_CUSTOM_ADAS_ALARM_LANE_OFFSET_END					120

//ǰ������
#define TTX_ALARM_CUSTOM_ADAS_ALARM_CLOSE_CAR_START					121
#define TTX_ALARM_CUSTOM_ADAS_ALARM_CLOSE_CAR_END					122

//ǰ����ײΣ��
#define TTX_ALARM_CUSTOM_ADAS_ALARM_DANGER_COLLISION_CAR_START		123
#define TTX_ALARM_CUSTOM_ADAS_ALARM_DANGER_COLLISION_CAR_END		124
//��������
#define TTX_ALARM_CUSTOM_ADAS_ALARM_VEHICLE_ROLL_START				125
#define TTX_ALARM_CUSTOM_ADAS_ALARM_VEHICLE_ROLL_END				126

//��ɲ��
#define TTX_ALARM_CUSTOM_ADAS_ALARM_BRAKING_START					127
#define TTX_ALARM_CUSTOM_ADAS_ALARM_BRAKING_END						128

//���
#define TTX_ALARM_CUSTOM_ADAS_ALARM_OUT_WORK_START           		129
#define TTX_ALARM_CUSTOM_ADAS_ALARM_OUT_WORK_END	     			130

//������
#define TTX_ALARM_CUSTOM_ADAS_ALARM_RAPID_ACCELERATION_START		131
#define TTX_ALARM_CUSTOM_ADAS_ALARM_RAPID_ACCELERATION_END			132

//������
#define TTX_ALARM_CUSTOM_ADAS_ALARM_RAPID_DECELERATION_START		133
#define TTX_ALARM_CUSTOM_ADAS_ALARM_RAPID_DECELERATION_END			134

//����ת��
#define TTX_ALARM_CUSTOM_ADAS_ALARM_RAPID_TURNLEFT_START			135
#define TTX_ALARM_CUSTOM_ADAS_ALARM_RAPID_TURNLEFT_END				136

//����ת��
#define TTX_ALARM_CUSTOM_ADAS_ALARM_RAPID_TURNRIGHT_START			137
#define TTX_ALARM_CUSTOM_ADAS_ALARM_RAPID_TURNRIGHT_END				138

//��ͷ
#define TTX_ALARM_CUSTOM_ADAS_ALARM_HEAD_DOWN_START					139
#define TTX_ALARM_CUSTOM_ADAS_ALARM_HEAD_DOWN_END					140

//����Ԥ��
#define TTX_ALARM_CUSTOM_ADAS_ALARM_OVERSPEED_WARNING_START			141
#define TTX_ALARM_CUSTOM_ADAS_ALARM_OVERSPEED_WARNING_END			142

//���򱨾�
#define TTX_ALARM_CUSTOM_ADAS_ALARM_FACE_WARNIN_START				143
#define TTX_ALARM_CUSTOM_ADAS_ALARM_FACE_WARNIN_END					144

//����ʶ�𱨾�
#define TTX_ALARM_CUSTOM_ADAS_ALARM_FACE_RECOGNITION				145

//GSENSOR����krt(��ע ���gSensor�طű�ʶ������)
#define TTX_ALARM_CUSTOM_GSENSOR_ALARM_START						146
#define TTX_ALARM_CUSTOM_GSENSOR_ALARM_END							147

//���̻������ϱ���krt
#define TTX_ALARM_CUSTOM_HARD_DISK_ERROR_ALARM_START				148 //param[0] ��ǰ���ϴ��� 1=����1 ,2=����2
#define TTX_ALARM_CUSTOM_HARD_DISK_ERROR_ALARM_END					149////param[0] ��ǰ���ϴ��� 1=����1 ,2=����2

//�����ɹ�����
#define TTX_ALARM_CUSTOM_UPGRADE_SUCCESS_ALARM						150


//��ʽ���ɹ�����
#define TTX_ALARM_CUSTOM_FORMAT_SUCCESS_ALARM						151  // param[0] ��ǰ��ʽ���ɹ����� 1=����1 ,2=����2

//��ʻԱ���ƥ��ɹ�
#define TTX_ALARM_CUSTOM_DRIVER_MATCH_SUCCESS_ALARM					152
//��ʻԱ��ݲ�ƥ��
#define TTX_ALARM_CUSTOM_DRIVER_MATCH_FAIL_ALARM					153



//�ձ걨��
//ǰ��������ײһ��Ԥ��
#define TTX_SB_ALARM_CUSTOM_TRAFFIC_COLLISION_WARINING_ONE_LEVEL_START			158
#define TTX_SB_ALARM_CUSTOM_TRAFFIC_COLLISION_WARINING_ONE_LEVEL_END			159

//ǰ��������ײ����Ԥ��
#define TTX_SB_ALARM_CUSTOM_TRAFFIC_COLLISION_WARINING_TWO_LEVEL_START			160
#define TTX_SB_ALARM_CUSTOM_TRAFFIC_COLLISION_WARINING_TWO_LEVEL_END			161
//ǰ����ײһ��Ԥ��
#define TTX_SB_ALARM_CUSTOM_ADAS_ALARM_DANGER_COLLISION_CAR_ONE_LEVEL_START		162
#define TTX_SB_ALARM_CUSTOM_ADAS_ALARM_DANGER_COLLISION_CAR_ONE_LEVEL_END		163

//ǰ����ײ����Ԥ��
#define TTX_SB_ALARM_CUSTOM_ADAS_ALARM_DANGER_COLLISION_CAR_TWO_LEVEL_START		164
#define TTX_SB_ALARM_CUSTOM_ADAS_ALARM_DANGER_COLLISION_CAR_TWO_LEVEL_END		165

//����һ������
#define TTX_SB_ALARM_CUSTOM_ADAS_ALARM_DISTRACTION_ONE_LEVEL_START				166
#define TTX_SB_ALARM_CUSTOM_ADAS_ALARM_DISTRACTION_ONE_LEVEL_END				167

//�����������
#define TTX_SB_ALARM_CUSTOM_ADAS_ALARM_DISTRACTION_TWO_LEVEL_START				168
#define TTX_SB_ALARM_CUSTOM_ADAS_ALARM_DISTRACTION_TWO_LEVEL_END				169

//Ƶ�����
#define TTX_ALARM_CUSTOM_ADAS_ALARM_FREQUENTLY_LANE_CHANGE_START				170
#define TTX_ALARM_CUSTOM_ADAS_ALARM_FREQUENTLY_LANE_CHANGE_END					171

//��·��ʶ����
#define TTX_ALARM_CUSTOM_ADAS_ALARM_ROAD_SIGN_OVERRUN_START						172
#define TTX_ALARM_CUSTOM_ADAS_ALARM_ROAD_SIGN_OVERRUN_END						173


//��ˮ
#define TTX_ALARM_CUSTOM_ADAS_ALARM_DRINK_WATER_START							174
#define TTX_ALARM_CUSTOM_ADAS_ALARM_DRINK_WATER_END								175

//������ʻԱ
#define TTX_ALARM_CUSTOM_ALARM_CHANGE_DRIVER									176

//Gsensor���� //�Զ��屨��, AlarmInfo��ʾ����
#define TTX_ALARM_CUSTOM_ALARM_GSENSOR_STATUS_START								177  //param[0] ״̬  1=���� 2=ֹͣ 3=���� 4=���� 5=��ת��
#define TTX_ALARM_CUSTOM_ALARM_GSENSOR_STATUS_END								178  //param[0] ״̬  1=���� 2=ֹͣ 3=���� 4=���� 5=��ת��

//���۾�ʾ
#define TTX_ALARM_CUSTOM_ALARM_CLOSE_EYES_START									180
#define TTX_ALARM_CUSTOM_ALARM_CLOSE_EYES_END									181

//����ƫ�뱨��1��		//Param[0]:��·��־ʶ������,Param[1](��16λ):ǰ������,Param[1](��16λ):ǰ��/���˾���,Param[2]:ƫ������
#define TTX_SB_ALARM_CUSTOM_LANE_OFFSET_ONE_LEVEL_START							182
#define TTX_SB_ALARM_CUSTOM_LANE_OFFSET_ONE_LEVEL_END							183
//����ƫ�뱨��2��
#define TTX_SB_ALARM_CUSTOM_LANE_OFFSET_TWO_LEVEL_START							184
#define TTX_SB_ALARM_CUSTOM_LANE_OFFSET_TWO_LEVEL_END							185

//�����������1��
#define TTX_SB_ALARM_CUSTOM_CAR_DISTANCE_ONE_LEVEL_START						186
#define TTX_SB_ALARM_CUSTOM_CAR_DISTANCE_ONE_LEVEL_END							187

//�����������2��  //Param[0]:��·��־ʶ������
#define TTX_SB_ALARM_CUSTOM_CAR_DISTANCE_TWO_LEVEL_START						188
#define TTX_SB_ALARM_CUSTOM_CAR_DISTANCE_TWO_LEVEL_END							189

//Ƶ����� 1�� //Param[0]:��·��־ʶ������
#define TTX_SB_ALARM_CUSTOM_FREQUENT_LANE_CHANGE_ONE_LEVEL_START				190
#define TTX_SB_ALARM_CUSTOM_FREQUENT_LANE_CHANGE_ONE_LEVEL_END					191

//Ƶ����� 2��
#define TTX_SB_ALARM_CUSTOM_FREQUENT_LANE_CHANGE_TWO_LEVEL_START				192
#define TTX_SB_ALARM_CUSTOM_FREQUENT_LANE_CHANGE_TWO_LEVEL_END					193

//��·��ʶ���ޱ��� 1�� //Param[0]:��·��־ʶ������,Param[1]:��·��־ʶ������
#define TTX_SB_ALARM_CUSTOM_ROAD_MARKING_OVER_LIMIT_ONE_LEVEL_START				194
#define TTX_SB_ALARM_CUSTOM_ROAD_MARKING_OVER_LIMIT_ONE_LEVEL_END				195

//��·��ʶ���ޱ��� 2��
#define TTX_SB_ALARM_CUSTOM_ROAD_MARKING_OVER_LIMIT_TWO_LEVEL_START				196
#define TTX_SB_ALARM_CUSTOM_ROAD_MARKING_OVER_LIMIT_TWO_LEVEL_END				197

//�ϰ��ﱨ�� 1�� //Param[0]:��·��־ʶ������
#define TTX_SB_ALARM_CUSTOM_OBSTACLE_ONE_LEVEL_START							198
#define TTX_SB_ALARM_CUSTOM_OBSTACLE_ONE_LEVEL_END								199

//�ϰ��ﱨ�� 2��
#define TTX_SB_ALARM_CUSTOM_OBSTACLE_TWO_LEVEL_START							200
#define TTX_SB_ALARM_CUSTOM_OBSTACLE_TWO_LEVEL_END								201

//��·��־ʶ���¼� 1�� //Param[0]:��·��־ʶ������,Param[1]:��·��־ʶ������
#define TTX_SB_ALARM_CUSTOM_ROAD_SIGN_RECOGNITION_ONE_LEVEL_START				202
#define TTX_SB_ALARM_CUSTOM_ROAD_SIGN_RECOGNITION_ONE_LEVEL_END					203

//��·��־ʶ���¼� 2��
#define TTX_SB_ALARM_CUSTOM_ROAD_SIGN_RECOGNITION_TWO_LEVEL_START				204
#define TTX_SB_ALARM_CUSTOM_ROAD_SIGN_RECOGNITION_TWO_LEVEL_END					205

//����ץ���¼� 1�� //Param[0]:��·��־ʶ������
#define TTX_SB_ALARM_CUSTOM_ACTIVE_CAPTURE_ONE_LEVEL_START						206
#define TTX_SB_ALARM_CUSTOM_ACTIVE_CAPTURE_ONE_LEVEL_END						207

//����ץ���¼� 2��
#define TTX_SB_ALARM_CUSTOM_ACTIVE_CAPTURE_TWO_LEVEL_START						208
#define TTX_SB_ALARM_CUSTOM_ACTIVE_CAPTURE_TWO_LEVEL_END						209

//��ʻԱ�쳣���� 1��
#define TTX_SB_ALARM_CUSTOM_DRIVER_ABNORMAL_ONE_LEVEL_START						210
#define TTX_SB_ALARM_CUSTOM_DRIVER_ABNORMAL_ONE_LEVEL_END						211

//��ʻԱ�쳣���� 2��
#define TTX_SB_ALARM_CUSTOM_DRIVER_ABNORMAL_TWO_LEVEL_START						212
#define TTX_SB_ALARM_CUSTOM_DRIVER_ABNORMAL_TWO_LEVEL_END						213


//ƣ�ͼ�ʻ���� 1�� //param[0]:ƣ�ͳ̶� 0-10
#define TTX_SB_ALARM_CUSTOM_FATIGUE_DRIVING_ONE_LEVEL_START						214
#define TTX_SB_ALARM_CUSTOM_FATIGUE_DRIVING_ONE_LEVEL_END						215
//ƣ�ͼ�ʻ���� 2�� //param[0]:ƣ�ͳ̶� 0-10
#define TTX_SB_ALARM_CUSTOM_FATIGUE_DRIVING_TWO_LEVEL_START						216
#define TTX_SB_ALARM_CUSTOM_FATIGUE_DRIVING_TWO_LEVEL_END						217

//�Ӵ�绰���� 1�� //
#define TTX_SB_ALARM_CUSTOM_ANSWER_THE_CALL_ONE_LEVEL_START						218
#define TTX_SB_ALARM_CUSTOM_ANSWER_THE_CALL_ONE_LEVEL_END						219

//�Ӵ�绰���� 2�� //
#define TTX_SB_ALARM_CUSTOM_ANSWER_THE_CALL_TWO_LEVEL_START						220
#define TTX_SB_ALARM_CUSTOM_ANSWER_THE_CALL_TWO_LEVEL_END						221

//���̱��� 1�� //222 //223
#define TTX_SB_ALARM_CUSTOM_SMOKING_ONE_LEVEL_START								222 
#define TTX_SB_ALARM_CUSTOM_SMOKING_ONE_LEVEL_END								223

//���̱��� 2�� //
#define TTX_SB_ALARM_CUSTOM_SMOKING_TWO_LEVEL_START								224
#define TTX_SB_ALARM_CUSTOM_SMOKING_TWO_LEVEL_END								225

//�Զ�ץ���¼� 1�� //
#define TTX_SB_ALARM_CUSTOM_AUTO_CAPTURE_ONE_LEVEL_START						226



//��ʻԱ����¼� 1�� //
#define TTX_SB_ALARM_CUSTOM_DRIVER_CHANGE_ONE_LEVEL_START						230


//��ʻԱ����¼� 2�� //
#define TTX_SB_ALARM_CUSTOM_DRIVER_CHANGE_TWO_LEVEL_START						232
//#define TTX_SB_ALARM_CUSTOM_DRIVER_CHANGE_TWO_LEVEL_END							233

//̥ѹ����(�ձ�) AlarmInfo:bit0��̥ѹ����ʱ�ϱ��� bit1��̥ѹ���߱��� bit2��̥ѹ���ͱ��� 
			//bit3��̥�¹��߱��� bit4���������쳣���� bit5��̥ѹ��ƽ�ⱨ�� bit6����©������
			//bit7����ص����ͱ��� bit8~bit15���Զ��� 
			//Param[0]:̥ѹ(��λ Kpa)
			//Param[1](��16λ):̥��(��λ ��),Param[1](��16λ):��ص���(��λ %)
			//Param[2]:��������ţ�01��ʾTPMS��1��02��ʾTPMS��2��03��ʾTPMS��3��04��ʾTPMS��4��11��ʾTPMS��1��12��ʾTPMS��2��13��ʾTPMS��3��14��ʾTPMS��4?
#define TTX_SB_ALARM_CUSTOM_TPMS_START											234
#define TTX_SB_ALARM_CUSTOM_TPMS_END											235


//�󷽽ӽ�����
#define TTX_SB_ALARM_CUSTOM_REAR_PROXIMITY_START								236
#define TTX_SB_ALARM_CUSTOM_REAR_PROXIMITY_END									237

//���󷽽ӽ�����
#define TTX_SB_ALARM_CUSTOM_LEFT_CLOSE_START									238
#define TTX_SB_ALARM_CUSTOM_LEFT_CLOSE_END										239

//�Ҳ�󷽽ӽ�����
#define TTX_SB_ALARM_CUSTOM_RIGHT_CLOSE_START									240
#define TTX_SB_ALARM_CUSTOM_RIGHT_CLOSE_END										241

//��ʻԱʶ���¼� AlarmInfo:0:ʶ��ʧ�� 1:ʶ��ɹ� 2:�޷�ʶ�� 3:�ȶ�ʧ��
//#define TTX_SB_ALARM_CUSTOM_DRIVER_IDENTIFICATION_START							242

//�Զ�ץ���¼� 2�� //
#define TTX_SB_ALARM_CUSTOM_AUTO_CAPTURE_TWO_LEVEL_START						244
//#define TTX_SB_ALARM_CUSTOM_AUTO_CAPTURE_TWO_LEVEL_END							229

//��ʻԱʶ���¼�--ʶ��ɹ�
#define TTX_SB_ALARM_CUSTOM_DRIVER_IDENTIFICATION_SUCCESS						246
//��ʻԱʶ���¼�--ʶ��ʧ��
#define TTX_SB_ALARM_CUSTOM_DRIVER_IDENTIFICATION_FAIL							247
//��ʻԱʶ���¼�--�޷�ʶ��
#define TTX_SB_ALARM_CUSTOM_DRIVER_Unable_IDENTIFICATION						248
//��ʻԱʶ���¼�--�ȶ�ʧ��
#define TTX_SB_ALARM_CUSTOM_DRIVER_CONTRAST_FAIL								249


//G-sensor����
#define TTX_ALARM_CUSTOM_GSENSOR_START											261
#define TTX_ALARM_CUSTOM_GSENSOR_START_END										262

//G-sensorֹͣ
#define TTX_ALARM_CUSTOM_GSENSOR_STOP											263
#define TTX_ALARM_CUSTOM_GSENSOR_STOP_END										264

//G-Sensor����
#define TTX_ALARM_CUSTOM_GSENSOR_COLLISION										265
#define TTX_ALARM_CUSTOM_GSENSOR_COLLISION_END									266

//˾��ˢ��
#define TTX_ALARM_CUSTOM_TYPE_DRIVER_SWIPE_CAR									279  //����1(Param[0]): 1��ʾ��¼��0��ʾ��ǩ //����(szDesc):˾��ID
	
//G-sensor�෭
#define TTX_ALARM_CUSTOM_GSENSOR_ROLLOVER										267
#define TTX_ALARM_CUSTOM_GSENSOR_ROLLOVER_END									268

//��ת��
#define TTX_ALARM_CUSTOM_GSENSOR_TRUN											269
#define TTX_ALARM_CUSTOM_GSENSOR_TURN_END										270

//����������Զ��屨��
#define TTX_ALARM_CUSTOM_INOUT_AREA												351		//param2Ϊ����id��param3Ϊ���ͣ�0Ϊ���룬1Ϊ�뿪��
#define TTX_ALARM_CUSTOM_END_INOUT_AREA											352	 	//param2Ϊ����id��param3Ϊ���ͣ�0Ϊ���룬1Ϊ�뿪��


//��ˮ���� 1�� //354 //355
#define TTX_SB_ALARM_CUSTOM_DRINK_ONE_LEVEL_START								354 
#define TTX_SB_ALARM_CUSTOM_DRINK_ONE_LEVEL_END									355

//��ˮ���� 2�� //
#define TTX_SB_ALARM_CUSTOM_DRINK_TWO_LEVEL_START								356
#define TTX_SB_ALARM_CUSTOM_DRINK_TWO_LEVEL_END									357

//����ת�����ϱ������豸״̬�仯ʱ���ϱ�������ƽ̨����������ͳ��
//ͣת�������ϱ�
#define TTX_ALARM_TYPE_FORWARD_START 											381		//��ת��ʼ
#define TTX_ALARM_TYPE_FORWARD_END												382		//��ת����
#define TTX_ALARM_TYPE_REVERSE_START											383		//��ת��ʼ
#define TTX_ALARM_TYPE_REVERSE_END												384		//��ת����


#pragma pack(4)

typedef struct _tagTTXAlarmInfo
{
	unsigned int AlarmType;			//��������
	unsigned int AlarmInfo;			//������Ϣ
	int		Param[8];			//��������
	char	szDesc[256];		//��������
	char	szReserve[64];		//�����ֶ�
}TTXAlarmInfo_S, *LPTTXAlarmInfo_S;

#pragma pack()

#endif

