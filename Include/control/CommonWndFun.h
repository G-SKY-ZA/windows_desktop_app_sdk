#ifndef _COMMON_FUN_WND_H_
#define _COMMON_FUN_WND_H_


#define IDC_POPUP_DLG_BTN_CLOSE		2000
#define IDC_POPUP_DLG_BTN_MIN		2001
#define IDC_PVVIDEO_WND_PLAY_BTN	2002
#define IDC_POPUP_DLG_BTN_SET		2003	//���ð�ť

#define POPUP_DLG_TOP_INERVAL			4
#define POPUP_DLG_BUTTOM_INERVAL		12
#define POPUP_DLG_LEFT_INERVAL			5
#define POPUP_DLG_RIGHT_INERVAL			5
#define POPUP_DLG_BTN_CLOSE_WIDTH		20
#define POPUP_DLG_BTN_CLOSE_HIGHT		22

#define POPUP_DLG_LOGO_WIDTH			25
#define POPUP_DLG_LOGO_HIGHT			20
#define POPUP_DLG_TITLE_HIGHT			30
#define POPUP_DLG_BUTTOM_HIGHT			40

#define POPUP_DLG_BK_COLOR			RGB(255, 255, 255)
#define POPUP_DLG_TITLE_COLOR		RGB(200, 200, 200)
#define POPUP_DLG_BUTTOM_COLOR		RGB(200, 200, 200)
#define POPUP_DLG_FRAME_COLOR		RGB(0, 0, 0)
#define POPUP_DLG_TEXT_COLOR		RGB(60, 60, 60)


//��Բ��
void DrawRoundRectRgn(CWnd* pWnd);
//����ɫ����
void DrawWndBK(HDC hDC, CRect& rcClient, COLORREF ColorBK=RGB(232, 235, 241));
void DrawWndBK(HDC hDC, CWnd* pWnd, COLORREF ColorBK=RGB(232, 235, 241));
//�����䱳��
void DrawGradientBK(HDC hDC, const CRect& rtZone, COLORREF ColorStart, COLORREF ColorEnd);
// ���߿�
void DrawWndFrameRect(CWnd* pWnd, HDC hDC, COLORREF ColorPen=RGB(180,180,180));
//����
void DrawLine(HDC hDc, const CPoint& PointStart, const CPoint& PonitEnd, COLORREF ColorPen=RGB(0,0,0));
// ����ѡ��
void DrawCheckState(HDC hDC, const CRect& rtArea, COLORREF ColorBK = RGB(0, 0, 0));

//���ж����ť���Ի���ײ�
void MoveMultiBtnCenter(const HWND hWnd, UINT nSize, ...);
//void MoveBtnToButtomCenter(CWnd** ppWnd, UINT nSize, const HWND hWnd, int nButtomHightInerval=POPUP_DLG_BUTTOM_INERVAL);
//�ƶ���ť��ָ��λ��
void MoveBtn(int nLeft, int nTop, CButton& Btn);

//��ʵ��Բ
void DrawSolidCircle(HDC hDC, const CRect& rc, COLORREF ColorPen=RGB(0,255,0));

// ��Radio���Ŀؼ�,�������ı�,������ں���������
//void DrawRadioButton(HDC hDC, CWnd* pRadioBtn, const CString& strText);


// ��CComboBox�ؼ���������
void InsertCComboBoxData( CComboBox& cmb, int nIndex, LPCTSTR lpszStr, int nData );
void InsertCComboBoxData( CComboBox& cmb, LPCTSTR lpszStr, int nData );
// ͨ���Ƚ�ITEMDATAѡ����Ӧ��item,����ѡ�������
int SearchCmbData(CComboBox& cmb, int nItemData, BOOL bSel);

// ��CEdit�ؼ����渽���ı�,������:Ԥ����ļ�ǰ�����ַ���
void EditCtrlAddText( CEdit* pEdit, LPCTSTR lpszText, LPCTSTR lpszAddHead/* = _T("\r\n")*/ );

// ���ý��㵽CEdit,һ����������ʱ����,����ؼ��ı���ȫѡ
void SetFocusEdit( CEdit* pEdit );

// ����CListCtrl�ؼ��б�ѡ�������
int GetListSelectCount( CListCtrl& lst );
// ��������ĳ�еĿ��
void ResizeListCtrl(CListCtrl& lst, int nIndex);
// ��ȡ��ǰѡ��ĵ�һ������
int GetCurListSelectedItem(CListCtrl& lst);


// ��ȡĳ���ؼ��е��ı��ڵ�ǰ�����µĳߴ�
CSize GetControlSize( CWnd* pWnd );


// ���������������е�λ��
int GetHitTest(const CRect& rtArea, const CPoint& pt, const CSize& sizeBorder = CSize());

// �ж�ĳ���ַ����Ƿ�ΪС����ʽ
BOOL StringIsFloat(LPCTSTR lpszString);
// �ж�ĳ���ַ����Ƿ�Ϊ������ʽ
BOOL StringIsInt(LPCTSTR lpszString);


// ϵͳdpi,��ʼ��ϵͳ��ǰdpi
void InitSystemDPI();
// ��ȡϵͳdpi,Ĭ��:96 150%:144
int GetSystemDPI();
// ����dpi�仯,��Ӧ�Ŵ�ֵ
int DPIConvert(int nOldData);
// ����dpi�仯,��Ӧ�Ŵ�ֵ��һ��
int DPIConvertHalf(int nOldData);

// ʹ�ؼ����ڿ��(�߶�,��С)��ͬ,����һ�Ǳ�׼ֵ
void ControlSameWidth(CWnd* pWnd, CWnd* pChangeWnd);
void ControlSameWidthMutli(CWnd* pWnd, CWnd** ppChangeWnd, int nCount);
void ControlSameHeight(CWnd* pWnd, CWnd* pChangeWnd);
void ControlSameHeightMutli(CWnd* pWnd, CWnd** ppChangeWnd, int nCount);
void ControlSameSize(CWnd* pWnd, CWnd* pChangeWnd, BOOL bChangeWidth, BOOL bChangeHeight);
void ControlSameSizeMutli(CWnd* pWnd, CWnd** ppChangeWnd, int nCount, BOOL bChangeWidth, BOOL bChangeHeight);




template <class T>
void CustomCreateDlg( T** pDlg, CWnd* pParent, int nCmdShow = SW_HIDE, BOOL bCenter = FALSE )
{
	CustomCreateDlg(*pDlg, pParent, nCmdShow, bCenter);
}
template <class T>
void CustomCreateDlg( T*& pDlg, CWnd* pParent, int nCmdShow = SW_HIDE, BOOL bCenter = FALSE )
{
	if (pDlg == NULL)
	{
		pDlg = new T;
		if (pDlg)
		{
			pDlg->Create(T::IDD, pParent);
			if (pDlg->GetSafeHwnd())
			{
				pDlg->ShowWindow(nCmdShow);
				if (bCenter)
				{
					pDlg->CenterWindow();
				}
			}
			else
			{
				SAFE_DELETE_OBJECT(pDlg);
			}
		}
	}
}
template <class T>
void ShowDlg(T* pDlg, bool bCenter = true)
{
	if (pDlg)
	{
		if (!pDlg->IsWindowVisible())
		{
			if (bCenter)
			{
				pDlg->CenterWindow();
			}
		}
		pDlg->ShowWindow(SW_SHOW);
		pDlg->SetForegroundWindow();
	}
}

template <class T>
void DestroyDlg(T** pDlg)
{
	DestroyDlg(*pDlg);
}

template <class T>
void DestroyDlg(T*& pDlg)
{
	if (pDlg)
	{
		pDlg->DestroyWindow();
		ASSERT(NULL == pDlg->GetSafeHwnd());
		SAFE_DELETE_OBJECT(pDlg);
	}
}




#endif