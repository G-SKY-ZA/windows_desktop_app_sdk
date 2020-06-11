// PathManager.h: interface for the CPathManager class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PATHMANAGER_H__4B5D2FC7_B7FA_470D_B9CB_8EB41323DBA5__INCLUDED_)
#define AFX_PATHMANAGER_H__4B5D2FC7_B7FA_470D_B9CB_8EB41323DBA5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CPathManager  : public CStaticObject<CPathManager>
{
public:
	CPathManager();
	virtual ~CPathManager();

	CString GetImgPath();
	CString GetCommImgPath();
	CString GetLogPath();
	void DrawWndPopoTitle(HDC hDC, CRect rcClient, int nIsTitle);
	void DrawDlgPopupBase(HDC hDC, CRect rcClient);
	BOOL IsFlatDesign();
	DWORD GetDlgTitleTextColor();
	DWORD	GetRGBDlgPopupBaseBK() { return m_dwRGBDlgPopupBaseBK; }
	DWORD	GetRGBDlgPopupBaseCtrlBK() { return m_dwRGBDlgPopupBaseCtrlBK; }
	DWORD	GetRGBDlgPopupBaseCtrlText() { return m_dwRGBDlgPopupBaseCtrlText; }
	HBRUSH	GetRGBDlgPopupBaseBKHBrush() { return m_dwRGBDlgPopupBaseBKHBrush; }
	HBRUSH	GetRGBDlgPopupBaseCtrlBKHBrush() { return m_dwRGBDlgPopupBaseCtrlBKHBrush; }
	HBRUSH	GetRGBDlgPopupBaseCtrlTextHBrush() { return m_dwRGBDlgPopupBaseCtrlTextHBrush; }
	
	DWORD GetRGBBtnNormalText() { return m_dwRGBBtnNormalText; }
	DWORD GetRGBBtnOverText() { return m_dwRGBBtnOverText; }
	
	DWORD GetRGBCheckState() { return m_dwRGBCheckState; }
	DWORD GetRGBTextColor() { return m_dwRGBTextColor; }
	
	DWORD GetRGBGroupText() { return m_dwRGBGroupText; }
	DWORD GetRGBBorder() { return m_dwRGBBorder; }
	DWORD GetRGBGroupBK() { return m_dwRGBGroupBK; }
	DWORD GetBroderStyle() { return m_dwBroderStyle; }

	BOOL GetButtonZoomSize() { return m_dwDPIButtonSizeZoom; }
 
	//�����ڷֶ�ʱ,��౳��ɫ
	DWORD GetRGBDlgLeftBK() { return m_dwRGBDlgLeft; }


private:
	void InitUIPath();
	int	GetUIStyle();
	void InitUIRGB();
	void InitDefaultUI();
	void InitBlueUI();
	int GetUIColor(LPCTSTR lpszKey, int nColor);
	// ��ȡ����ֵ
	int GetUIColorEx(LPCTSTR lpszKey, int nValue);
	void SplitStringToIntEx(CString str, const TCHAR* strSeps, DWORD* pData);

private:
	CString m_strImgPath;
	CString m_strCommImgPath;
	CString m_strLogPath;
	int m_nUIStyle;
	
	//�������ڱ���
	DWORD m_dwRGBWndPopoTitle[3];
	DWORD m_dwRGBWndPopoBottom[2];

	//�������ڱ߿���ɫ
	DWORD m_dwRGBDlgPopupBase;
	//�������ڱ�����ɫ
	DWORD m_dwRGBDlgPopupBaseBK;
	HBRUSH m_dwRGBDlgPopupBaseBKHBrush;
	//�������ڿؼ�������ɫ(��ҪΪCStatic)
	DWORD m_dwRGBDlgPopupBaseCtrlBK;
	HBRUSH m_dwRGBDlgPopupBaseCtrlBKHBrush;
	//�������ڿؼ��ı���ɫ(��ҪΪCStatic)
	DWORD m_dwRGBDlgPopupBaseCtrlText;
	HBRUSH m_dwRGBDlgPopupBaseCtrlTextHBrush;

	//��౳��ɫ
	DWORD m_dwRGBDlgLeft;

	//�Ƿ��ƽ���
	int m_nFlatDesign;

	//listctrl��ɫ
	DWORD m_dwRGBListItemBK[2];
	DWORD m_dwRGBListHeadCtrlBK[2];
	DWORD m_dwRGBListItemBKFocus[2];

	// ��ť�ı���ɫ
	DWORD m_dwRGBBtnNormalText;
	DWORD m_dwRGBBtnOverText;

	// GUICheckBox
	DWORD m_dwRGBCheckState;
	DWORD m_dwRGBTextColor;

	// Group Static
	DWORD m_dwRGBGroupText;
	DWORD m_dwRGBBorder;
	DWORD m_dwRGBGroupBK;
	DWORD m_dwBroderStyle;

	// DPI 
	DWORD m_dwDPIButtonSizeZoom;


};

#endif // !defined(AFX_PATHMANAGER_H__4B5D2FC7_B7FA_470D_B9CB_8EB41323DBA5__INCLUDED_)
