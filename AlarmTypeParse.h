#pragma once


class CDevBase;


void FormatMobileAlarm2String(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc);

void FormatAlarm2String(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc, CDevBase* pDevice);
// �����Զ��屨��
void FormatCustomAlarm2String(GPSAlarmInfo_S& ArmInfo, CString& strType, CString& strDesc, CDevBase* pDevice);
CString	FormatSecond(int nSecond);
