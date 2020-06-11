#pragma once
#include "afxwin.h"


// CDlgNetTypeAueWifi �Ի���

class CDlgAueWifiSetup : public CDialog
{
	DECLARE_DYNAMIC(CDlgAueWifiSetup)

public:
	CDlgAueWifiSetup(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgAueWifiSetup();

// �Ի�������
	enum { IDD = IDD_DLG_AUE_WIFI_SETUP };
	CComboBox m_cmbChannel;
	CComboBox m_cmbMode;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();
	virtual BOOL SetConfig();
	virtual BOOL GetConfig(BOOL& bGetRet);

	afx_msg void OnBnClickedBtnGetParam();
	afx_msg void OnBnClickedBtnSetParam();
	DECLARE_MESSAGE_MAP()

	void LoadLanguage();

	void FillGetReq(char* pBuf, int& nSize);
	void FillSetReq(char* pBuf, int& nSize);


	BOOL AnalyGetResp(const char* pBuf, int nSize);

	BOOL CheckParam();
	void EnableCtrl( BOOL bEnable );
public:
};
