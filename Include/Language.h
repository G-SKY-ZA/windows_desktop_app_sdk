// Language.h: interface for the CLanguage class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LANGUAGE_H__7BD99134_5302_423A_BE03_FEE100F15376__INCLUDED_)
#define AFX_LANGUAGE_H__7BD99134_5302_423A_BE03_FEE100F15376__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
/*****************************************************************************

** �ļ���: Language.h

** Copyright (c) 2006 

** ������: yfli

** ��  ��: 2008-04-15

** �޸���:

** ��  ��:

** ��  ��:	��Դ�����࣬�������ļ��м�����Դ

**

** ��  ��: v1.0

*****************************************************************************/

#pragma warning(disable:4786)
#include <map>

#define LOADSTRINGEX(ID)	(CLanguage::GetInstance()->LoadResource(ID))

class CLanguage  
{
private:
	static CLanguage*		g_pLanguage;
	
public:
	static CLanguage* GetInstance();
	static void DelInstance();
	
public:
	CLanguage();
	virtual ~CLanguage();
	CLanguage(const CLanguage& Lang);
	CLanguage& operator = (const CLanguage& Lang);

private:
	typedef std::map<int, CString >	mapRes;		// ��Դ������Ϣ
	typedef	mapRes::iterator		mapResIter;


public:
	//---------------------------------------------------------------------------------------------
	//˵�������ü��ص���Դ�ļ�
	//������[in]strResouce:��Դ���ļ���
	//���أ��ɹ�����TRUE��ʧ�ܷ���FASLE
	//---------------------------------------------------------------------------------------------
	BOOL	SetLanguage(const CString& strResource);

	//---------------------------------------------------------------------------------------------
	//˵����ȡ������Ҫ����Դ
	//������[in]ID:��Դ��ID
	//���أ��ɹ����������ص���Դ
	//---------------------------------------------------------------------------------------------
	CString	LoadResource(UINT nID);

	//---------------------------------------------------------------------------------------------
	//˵����ȡ������Ҫ����Դ
	//������[in]ID:��Դ��ID
	//		[out]strResource:��Դ�ַ�
	//���أ��ɹ�����TRUE��ʧ�ܷ���FASLE
	//---------------------------------------------------------------------------------------------
	BOOL	LoadResource(UINT nID, CString& strRes);

	//---------------------------------------------------------------------------------------------
	//˵����д�ַ���
	//������[in]strID:��Դ��ID
	//		[in]strRes:��Դ�ַ�
	//���أ��ɹ�����TRUE��ʧ�ܷ���FASLE
	//---------------------------------------------------------------------------------------------
	BOOL	WriteString(const CString& strID, const CString& strRes);

private:
//	CMutexLock	m_lock;
	CRITICAL_SECTION m_csRes;
	CString		m_strResFile;		//��Դ�ļ�
	mapRes		m_mapRes;			//
};

#endif // !defined(AFX_LANGUAGE_H__7BD99134_5302_423A_BE03_FEE100F15376__INCLUDED_)
