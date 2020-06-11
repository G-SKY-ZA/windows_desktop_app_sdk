#pragma once


// CDlgAueAlcoholSetup �Ի���

class CDlgAueAlcoholSetup : public CDialog
{
	DECLARE_DYNAMIC(CDlgAueAlcoholSetup)

public:
	CDlgAueAlcoholSetup(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgAueAlcoholSetup();

// �Ի�������
	enum { IDD = IDD_DLG_AUE_ALCOHOL_SETUP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();
	virtual BOOL SetConfig();
	virtual BOOL GetConfig(BOOL& bGetRet);

	afx_msg void OnBnClickedBtnGetParam();
	afx_msg void OnBnClickedBtnSetParam();
	DECLARE_MESSAGE_MAP()

	void LoadLanguage();
	BOOL CheckParam();
	void EnableCtrl(BOOL bEnable);

	void FillGetReq(char* pBuf, int& nSize);
	void FillSetReq(char* pBuf, int& nSize);


	BOOL AnalyGetResp(const char* pBuf, int nSize);

public:
};
