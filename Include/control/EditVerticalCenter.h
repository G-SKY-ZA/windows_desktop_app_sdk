#pragma once


// �˱༭��
// 1.�ı���ֱ����������ʾ,�����ö�����ʾ����
// 2.������δ��������ʱ��ʾ��Ϣ

class CEditVerticalCenter : public CEdit
{

public:
	CEditVerticalCenter();
	virtual ~CEditVerticalCenter();

protected:
	DECLARE_MESSAGE_MAP()
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnPaint();

public:
	void SetDefText(LPCTSTR lpszDefText) { m_strDefText = lpszDefText; }
	void SetDefTextColor(COLORREF color) { m_ColorDefText = color; }
	
	void SetIgnoreFocus(BOOL bIgnore) { m_bIgnoreFocus = bIgnore; }
private:
	COLORREF	m_ColorDefText;	//Ĭ���ı���������ɫ
	CString		m_strDefText;	//�༭��������ʱ��ʾ���ı�

	BOOL		m_bIgnoreFocus;//���Խ���,Ĭ�ϻ�ý��㲻��ʾĬ���ı�
};