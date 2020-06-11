#ifndef _AVSHOW_API_H_
#define _AVSHOW_API_H_

#ifdef LIBAVSHOW_EXPORTS
#define AVSHOW_API __declspec(dllexport)
#else
#define AVSHOW_API __declspec(dllimport)
#endif

#define APICALL WINAPI

#include <mmsystem.h>

// ��ʾģʽ�޸�Ϊ����ͷ�ת,ʹ�ñ�־λ [2016-12-21 ydl]
// �������תֻȡһ����־λ�ж�,�����ж�(����:ˮƽ->��ֱ,��ת:90->180->270)
#define AVSHOW_MIRROR_MODE_NORMAL			0			//��������
#define AVSHOW_MIRROR_MODE_LEFTRIGHT		1			//�������ҷ�ת(Ӧ����)
#define AVSHOW_MIRROR_MODE_TOPBOTTOM		2			//�������·�ת(Ӧ����)

#define AVSHOW_MIRROR_MODE_ROTATE180		0x2			//��ת180��
#define AVSHOW_MIRROR_MODE_ROTATE90			0x4			//��ת90��
#define AVSHOW_MIRROR_MODE_ROTATE270		0x8			//��ת270��
#define AVSHOW_MIRROR_MODE_ROTATE			0xF			//��ת

#define AVSHOW_MIRROR_MODE_FLIP_H			0x1			//ˮƽ����
#define AVSHOW_MIRROR_MODE_FLIP_V			0x10		//��ֱ����
#define AVSHOW_MIRROR_MODE_FLIP				0x11		//ˮƽ�ʹ�ֱ����

#define AVSHOW_MIRROR_MODE_RATIO			0x20		//ʵ�ʱ�����ʾ



#define AVSHOW_OSD_POS_TOP					0			//OSD������ʾ
#define AVSHOW_OSD_POS_BELOW				1			//OSD�ײ���ʾ

#define AVSHOW_OSD_COUNT					6			//���OSD��Ŀ


#define	AVSHOW_ZOOM_MAX						8			//ͼ��Ŵ�������
#define AVSHOW_ZOOM_MIN						1			//....	..	��С����

#define AVSHOW_ZOOM_MIN_EX					100			//ͼ��Ŵ���(��,��ȱ����Ŵ�),����100
#define	AVSHOW_ZOOM_MAX_EX					800		

#define AVSHOW_SPLITSCREEN_LEFT				0x1 //��ʾһ�����
#define AVSHOW_SPLITSCREEN_RIGHT			0x2 //��ʾһ���ұ�
#define AVSHOW_SPLITSCREEN_TOP				0x4 //��ʾһ���ϱ�
#define AVSHOW_SPLITSCREEN_BOTTOM			0x8 //��ʾһ���±�

//multiple
#define	AVSHOW_ZOOM_MULTIPLE				1000		//����Ŵ���
#define AVSHOW_MASAIC_ULTIOPLE				1000		//����������Ŵ���

// ����ɫ������,�ݽ�֧��D3Dģʽ [2017-5-8 ydl]
#define AVSHOW_DDCOLOR_BRIGHT_MIN			(-255) //������Сֵ(Ĭ��ֵ0)
#define AVSHOW_DDCOLOR_BRIGHT_MAX			(255)
#define AVSHOW_DDCOLOR_CONTRAST_MIN			(-255) //�Աȶ���Сֵ(Ĭ��ֵ0)
#define AVSHOW_DDCOLOR_CONTRAST_MAX			(255)
#define AVSHOW_DDCOLOR_SATURATION_MIN		(-255) //���Ͷ���Сֵ(Ĭ��ֵ0)
#define AVSHOW_DDCOLOR_SATURATION_MAX		(255)
#define AVSHOW_DDCOLOR_HUE_MIN				(0) //ɫ����Сֵ(Ĭ��ֵ0)
#define AVSHOW_DDCOLOR_HUE_MAX				(360)

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

	
AVSHOW_API int APICALL AVSHOW_Initialize();
AVSHOW_API int APICALL AVSHOW_UnInitialize();

//-----------------------------------------��Ƶ��ʾ����-------------------------------------//
//������ʾ����
AVSHOW_API int APICALL AVSHOW_DWOpenDraw(LONG_PTR* lpDrawHandle);
AVSHOW_API int APICALL AVSHOW_DWCloseDraw(LONG_PTR lDrawHandle);

//������ʾ�ص�
AVSHOW_API int APICALL AVSHOW_DWSetDisplayCB(LONG_PTR lDrawHandle, void* pUsr, void (CALLBACK* FUNDisplayCB)(int nIndex, HDC hDc
											 , int nWidth, int nHeight, __int64 nStamp
											 , int nWndWidth, int nWndHeight, int nMirrorMode, void* pUsr));
AVSHOW_API int APICALL AVSHOW_DWSetDecCB(LONG_PTR lDrawHandle, void* pUsr, void (CALLBACK* FUNDisplayCB)(BYTE* pBuf, long nSize, long nWidth, long nHeight, 
										long nStamp, int nDecodeType, void* pUsr));

//������ʾ����
AVSHOW_API int APICALL AVSHOW_DWSetHwnd(LONG_PTR lDrawHandle, HWND hWnd);
//������ʾ��������
AVSHOW_API int APICALL AVSHOW_DWSetHwndEx(LONG_PTR lDrawHandle, HWND hWnd, RECT* pstDisplayRect, BOOL bEnable);
//���ô������
AVSHOW_API int APICALL AVSHOW_DWSetIndex(LONG_PTR lDrawHandle, int nIndex);
//
AVSHOW_API int APICALL AVSHOW_DWInitDraw(LONG_PTR lDrawHandle, int nWidth, int nHeight, BOOL bPriorRGB16=FALSE);
//
AVSHOW_API int APICALL AVSHOW_DWFreeDraw(LONG_PTR lDrawHandle);
//������ʾ����λ��
AVSHOW_API int APICALL AVSHOW_DWAdjustedWnd(LONG_PTR lDrawHandle);
//��ʾYUV420����
AVSHOW_API int APICALL AVSHOW_DWDrawYUV420(LONG_PTR lDrawHandle, unsigned char* in_Y, int nYPitch, unsigned char* in_U, unsigned char* in_V, int nUVPitch
											, BOOL bZoomed, unsigned __int64 llStamp);  //Draw YUV to Window
//����OSD
AVSHOW_API int APICALL AVSHOW_DWSetOSDText(LONG_PTR lDrawHandle, int nOsdIndex, const char* szText, int nLeft, int nTop, int nPos, COLORREF clr);
//���ò������򣬽��оֲ���ʾ
AVSHOW_API int APICALL AVSHOW_DWSetPlayRect(LONG_PTR lDrawHandle, LPRECT lpRect);
//�ֲ��Ŵ���ʾ���Ŵ��� 0 - ������ʾ 1 - 1�� ��������
AVSHOW_API int APICALL AVSHOW_DWSetZoom(LONG_PTR lDrawHandle, int x, int y, int nZoom);
//���þ���ģʽ
AVSHOW_API int APICALL AVSHOW_DWSetMirrorMode(LONG_PTR lDrawHandle, int nMode);
//����ͼ��ɫ�ʲ���
AVSHOW_API int APICALL AVSHOW_SetColorParams (LONG_PTR lDrawHandle, long nBrightness, long nContrast, long nSaturation, long nHue, BOOL bDefault);
//��ȡͼ��ɫ�ʲ���
AVSHOW_API int APICALL AVSHOW_GetColorParams(LONG_PTR lDrawHandle, long* pBrightness, long* pContrast, long* pSaturation, long* pHue);
//���������ˣ������������ʾ����,����Ϊɾ��
AVSHOW_API int APICALL AVSHOW_DWSetMosaics(LONG_PTR lDrawHandle, RECT rcMosaics);
//�����Ҽ����������
AVSHOW_API int APICALL AVSHOW_DWSetRClickPt(LONG_PTR lDrawHandle, POINT ptRClick);
//��ӻ�ɾ������������UpdateMosaics
AVSHOW_API int APICALL AVSHOW_DWUpdateMosaics(LONG_PTR lDrawHandle, BOOL bMode);
//��¼ͼ��ƫ�Ƶ����,��������ʾ�Ƿ�ƫ��
AVSHOW_API int APICALL AVSHOW_DWSetOffsetStart(LONG_PTR lDrawHandle, BOOL bIsOffset, POINT ptStart);
//��¼ͼ��ƫ�Ƶ��յ�
AVSHOW_API int APICALL AVSHOW_DWSetOffsetEnd(LONG_PTR lDrawHandle, POINT ptEnd);
//��ָ������ģʽ�Ƿ�ǿ��ʹ��Ddraw
AVSHOW_API int APICALL AVSHOW_SetDdrawMode(BOOL bDdraw);
//��ȡ�Ƿ�֧��D3D
AVSHOW_API BOOL APICALL AVSHOW_IsSupport();
// ��ȡ�����Ƿ�ΪD3D��ʾ
AVSHOW_API BOOL APICALL AVSHOW_IsDrawD3D(LONG_PTR lDrawHandle);

// ��ʼ��Ӳ��������(����Ϊ:D3D Device)
AVSHOW_API int APICALL AVSHOW_InitDxva2Device(LONG_PTR lDrawHandle, void** ppD3dDevice);
// ��ʾӲ��������,�豸��Ч��,��Ҫ����
AVSHOW_API int APICALL AVSHOW_Dxva2RetrieveData(LONG_PTR lDrawHandle, void* pD3dDevice, void* pSurface);
//���ô��ڷ�����ʾ
AVSHOW_API BOOL APICALL AVSHOW_SplitScreen(LONG_PTR lDrawHandle, int nMode);


//-----------------------------------------��Ƶ����-------------------------------------//
AVSHOW_API int APICALL AVSHOW_WVOpenWave(LONG_PTR* lpWaveHandle);
AVSHOW_API int APICALL AVSHOW_WVCloseWave(LONG_PTR lWaveHandle);
//������Ƶ�������
AVSHOW_API int APICALL AVSHOW_WVSetWaveFormat(LONG_PTR lWaveHandle, const WAVEFORMATEX* wfxFormat, int nSize);
//���������Ƶ���ݻص�
AVSHOW_API int APICALL AVSHOW_WVSetWriteWaveCB(LONG_PTR lWaveHandle, void* pUsr, int (CALLBACK* FUNWriteWaveCB)(char* pData, int nSize, void* pUsr));
//��ʼ����
AVSHOW_API int APICALL AVSHOW_WVPlayWave(LONG_PTR lWaveHandle);
//ֹͣ����
AVSHOW_API int APICALL AVSHOW_WVStopWave(LONG_PTR lWaveHandle);
//ֹͣ����
AVSHOW_API int APICALL AVSHOW_WVPauseWave(LONG_PTR lWaveHandle, BOOL bPause);
//��������
AVSHOW_API int APICALL AVSHOW_WVSetVolume(LONG_PTR lWaveHandle, WORD wVolume);

//-----------------------------------------ͨ�ú���-------------------------------------//
AVSHOW_API int APICALL AVSHOW_yv12_to_rgb24_c(unsigned char *dst, int dst_stride,
					 const unsigned char *y_src,const unsigned char *u_src,const unsigned char * v_src, 
					 int y_stride, int uv_stride,
					 int width, int height);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _AVSHOW_API_H_ */

