#pragma once
#include "afxwin.h"


// CDlgAueCoordinateSetup �Ի���

class CDlgAueCoordinateSetup : public CDialog
{
	DECLARE_DYNAMIC(CDlgAueCoordinateSetup)

public:
	CDlgAueCoordinateSetup(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgAueCoordinateSetup();

// �Ի�������
	enum { IDD = IDD_DLG_AUE_COORDINATE_SETUP };
	CComboBox m_cmbMapType;
	CButton m_btnOK;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();
	virtual void OnCancel();

	afx_msg void OnBnClickedBtnOk();
	DECLARE_MESSAGE_MAP()

	void LoadLanguage();
	BOOL CheckParam();

	void FillSetReq(char* pBuf, int& nSize);
public:
};
