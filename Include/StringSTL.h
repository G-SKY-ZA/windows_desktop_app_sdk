/********************************************************************
	
��Ȩ���� (c) 2011-2099, Howard's Studio

V 1.0

����:	Howard <howe703@126.com>

����:	CStringSTL�࣬��һ��string�İ�װ��
		����MFC��CString��װ��һЩ�ӿ�

��ʷ:	1��2011-07-12 ����
		2��2011-07-21 ����GetData�ӿ�
		3������TrimLeft( const char* )��TrimeRight( const char*) �ӿ�

����:	1��CStringSTL str = "ABC";
		   printf("%s %d", str, 1 );
		   ��ʾ�Ľ�����£�
		   ABC -858993460
		   ��str������ʾ�ĸ�ʽ����������
		   Ҫ�� printf("%s %d", str.GetData(), 1 ) ����ʽ

*********************************************************************/

#ifndef HOWARD_STRINGSTL_H 
#define HOWARD_STRINGSTL_H


#pragma warning(disable:4786) 
#pragma warning(disable:4275) 

#include <string>

class CStringSTL  
{
public:	
	CStringSTL(const CStringSTL& string1 );
	CStringSTL(const std::string string1 );
	CStringSTL(const char *lpsz );
	CStringSTL(const char ch );
	CStringSTL();
	~CStringSTL();
	const char* GetData() const;
	int Delete( int nIndex, int nCount = 1 );
	int Insert( int nIndex, const char * lpsz );
	int Insert( int nIndex, char ch );
	int Remove( char ch );
	void MakeReverse( );
	int Find( char ch ) const;
	int Find( const char * lpszSub ) const;
	int Find( char ch, int nStart ) const;
	int Find( const char * lpsz, int nStart ) const;
	int ReverseFind( char ch ) const;
	int FindOneOf( const char * lpsz ) const;
	int Format(const char* lpszFormat, ... );
	int GetLength() const;
	CStringSTL Left(int nCount ) const;
	CStringSTL Right(int nCount) const;
	CStringSTL Mid(int nFirst) const;
	CStringSTL Mid( int nFirst, int nCount) const;	

	void MakeUpper();
	void MakeLower();

	bool IsEmpty( ) const;
	void Empty( );

	char GetAt( int nIndex ) const;	
	void SetAt( int nIndex, char ch );

	int Compare( const char * lpsz ) const;
	int Compare( const CStringSTL& string1 ) const;
	int CompareNoCase( const char * lpsz ) const;
	int CompareNoCase( const CStringSTL& string1 ) const;
	
	void TrimLeft();
	void TrimLeft( char chTarget );
	void TrimLeft( const char* lpsz );
	void TrimRight();
	void TrimRight( char chTarget );
	void TrimRight( const char* lpsz );
	
	void Replace( char chOld, char chNew );
	void Replace(const char* lpszOld, const char* lpszNew );
	char * GetBuffer( int nMinBufLength );
	void ReleaseBuffer( int nNewLength = -1 );

	char operator []( int nIndex ) const;
	operator const char* () const ;

	CStringSTL& operator = ( const std::string& str);
	CStringSTL& operator = ( char ch );
	CStringSTL& operator = ( const char * lpsz );
	CStringSTL& operator = ( const CStringSTL& str);
	
	const CStringSTL& operator += ( const char* lpsz);
	const CStringSTL& operator += ( char ch);
	const CStringSTL& operator += ( const CStringSTL& string1 );

	friend CStringSTL operator + ( const CStringSTL& string1, const CStringSTL& string2);
	friend CStringSTL operator + ( const CStringSTL& string1, char ch );
	friend CStringSTL operator + ( char ch, const CStringSTL& string1  );
	friend CStringSTL operator + ( const CStringSTL& string1, const char* lpsz );
	friend CStringSTL operator + ( const char* lpsz, const CStringSTL& string1 );

protected:
	//CStringSTL str = "ABC";
	//printf("%s %d", str, 1 );��str�����ʽ����ʾ���������󣬸������·�ʽ����
	//printf("%s %d", str.GetData(), 1 );
	char* m_pData; 
	std::string m_str;
};

// Compare helpers
bool  operator == (const CStringSTL& str1,	const CStringSTL& str2);
bool  operator == (const CStringSTL& str1,	const char* lpsz );
bool  operator == (const char* lpsz,		const CStringSTL& str2 );
bool  operator != (const CStringSTL& str1,	const CStringSTL& str2);
bool  operator != (const CStringSTL& str1,  const char* lpsz );
bool  operator != (const char* lpsz,		const CStringSTL& str2);
bool  operator <  (const CStringSTL& str1,	const CStringSTL& str2);
bool  operator <  (const CStringSTL& str1,	const char* lpsz );
bool  operator <  (const char* lpsz,		const CStringSTL& str2);
bool  operator >  (const CStringSTL& str1,	const CStringSTL& str2);
bool  operator >  (const CStringSTL& str1,	const char* lpsz );
bool  operator >  (const char* lpsz,		const CStringSTL& str2);
bool  operator <= (const CStringSTL& str1,	const CStringSTL& str2);
bool  operator <= (const CStringSTL& str1,	const char* lpsz );
bool  operator <= (const char* lpsz,		const CStringSTL& str2);
bool  operator >= (const CStringSTL& str1,	const CStringSTL& str2);
bool  operator >= (const CStringSTL& str1,	const char* lpsz );
bool  operator >= (const char* lpsz,		const CStringSTL& str2);

#endif // HOWARD_STRINGSTL_H
