#pragma once
#include "afxcmn.h"


// CDlgPanePtz �Ի���

class CDlgPanePtz : public CDialog
{
	DECLARE_DYNAMIC(CDlgPanePtz)

public:
	CDlgPanePtz(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgPanePtz();

// �Ի�������
	enum { IDD = IDD_DLG_PTZ };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()

	void OnBnClickedPtz(UINT nID);
	void PtzControl(int nCommand, int nParam = 0);
	BOOL CheckPoint();
	int GetPoint();

public:
	CSliderCtrl m_Slider;
	virtual BOOL OnInitDialog();
	int m_nPoint;
};
