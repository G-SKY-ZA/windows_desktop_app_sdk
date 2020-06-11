// DevStatus.h: interface for the CDevStatus class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DEVSTATUS_H__F2A970E0_C2E9_4FCF_852C_D8FD13E87792__INCLUDED_)
#define AFX_DEVSTATUS_H__F2A970E0_C2E9_4FCF_852C_D8FD13E87792__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CDevStatus  
{
public:
	CDevStatus();
	virtual ~CDevStatus();
	virtual BOOL UpdateVehiRunning(const GPSVehicleState_S* pRunning, BOOL bBigTime);
	virtual const GPSVehicleState_S*	GetVehiRunning();
	virtual BOOL NeverOnline();	//��δ�Ϲ���
	virtual BOOL IsVehiRunningValid();
	virtual BOOL IsUpdateVehiRunning();
	virtual void SetUpdateVehiRunning(BOOL bUpdateRunning);
	//	virtual BOOL GetLastValidGPS(int& nJindu, int& nWeidu);
	
	//��ȡ�豸��״̬
	int GetDevStatus();
	//��ȡ�豸ͨ����״̬
	int GetChannelStatus(int nChannel);

private:
	GPSVehicleState_S*	m_pVehiRunning;
	int m_nSurplusDay;		//ʣ��������������ʾǷ��
	BOOL m_bUpdateRunning;
	BOOL m_bFirstGPS;
};

#endif // !defined(AFX_DEVSTATUS_H__F2A970E0_C2E9_4FCF_852C_D8FD13E87792__INCLUDED_)
