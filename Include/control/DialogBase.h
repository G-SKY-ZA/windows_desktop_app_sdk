#pragma once



// ����������ھ�̬�ؼ��ķ�� [2017-3-27 ydl]
class CDialogBase : public CDialog
{
public:
	CDialogBase(UINT nIDTemplate, CWnd * pParentWnd = NULL);
	~CDialogBase(void);

protected:
	DECLARE_MESSAGE_MAP()
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};