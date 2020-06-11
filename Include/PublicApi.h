#ifndef _PUBLIC_FUNCTION_H_
#define _PUBLIC_FUNCTION_H_

#include <crtdbg.h>

#ifndef ASSERT
	#ifdef _DEBUG
	#define ASSERT(expr)	\
					do {    \
					if (!(expr) && \
					(1 == _CrtDbgReport(_CRT_ASSERT, __FILE__, __LINE__, NULL, #expr))) \
					__asm { int 3 }; \
					} while (0)
	#else
	#define ASSERT(expr)
	#endif
#endif

#define u8 unsigned char
#define u16 unsigned short
#define u32 unsigned int
#define put8(p, dat) ( (p)[0] = (u8)((dat)>>0)&0xff )
#define putle16(p, dat) ( (p)[0] = ((u16)(dat)>>0)&0xff, (p)[1] = ((u16)(dat)>>8)&0xff )
#define putle24(p, dat) ( (p)[0] = (u8)((u32)(dat)>>0)&0xff, (p)[1] = (u8)((u32)(dat)>>8)&0xff, (p)[2] = (u8)((u32)(dat)>>16)&0xff )
#define putle32(p, dat) ( (p)[0] = (u8)((u32)(dat)>>0)&0xff, (p)[1] = (u8)((u32)(dat)>>8)&0xff, (p)[2] = (u8)((u32)(dat)>>16)&0xff, (p)[3] = (u8)((u32)(dat)>>24)&0xff )
#define putbe16(p, dat) ( (p)[0] = ((u16)(dat)>>8)&0xff, (p)[1] = ((u16)(dat)>>0)&0xff )
#define putbe24(p, dat) ( (p)[0] = (u8)((u32)(dat)>>16)&0xff, (p)[1] = (u8)((u32)(dat)>>8)&0xff, (p)[2] = (u8)((u32)(dat)>>0)&0xff )
#define putbe32(p, dat) ( (p)[0] = (u8)((u32)(dat)>>24)&0xff, (p)[1] = (u8)((u32)(dat)>>16)&0xff, (p)[2] = (u8)((u32)(dat)>>8)&0xff, (p)[3] = (u8)((u32)(dat)>>0)&0xff )
	
#define get8(p) ( (p)[0] )
#define getle16(p) ( ((u8)(p)[0] << 0) | ((u8)(p)[1] << 8) )
#define getle24(p) ( ((u8)(p)[0] << 0) | ((u8)(p)[1] << 8) | ((u8)(p)[2] << 16) )
#define getle32(p) ( ((u8)(p)[0] << 0) | ((u8)(p)[1] << 8) | ((u8)(p)[2] << 16) | ((u8)(p)[3] << 24) )
#define getbe16(p) ( ((u8)(p)[0] << 8) | ((u8)(p)[1] << 0) )
#define getbe24(p) ( ((u8)(p)[0] << 16) | ((u8)(p)[1] << 8) | ((u8)(p)[2] << 0) )
#define getbe32(p) ( ((u8)(p)[0] << 24) | ((u8)(p)[1] << 16) | ((u8)(p)[2] << 8) | ((u8)(p)[3] << 0) )

#include "StringSTL.h"
#include <vector>

#pragma pack(1)

typedef struct _tagSTRINGMyArray
{
	char szVal[64];
}STRINGMyArray_S, *LPSTRINGMyArray_S;

typedef struct _tagSTRINGMyArrayW
{
	wchar_t wszVal[64];
}STRINGMyArrayW_S, *LPSTRINGMyArrayW_S;

typedef struct _tagTIMEMonth
{
	SYSTEMTIME beg;
	SYSTEMTIME end;
}TIMEMonth_S, *LPTIMEMonth_S;

#pragma pack()

// struct map_string_hash
// {
// 	static const size_t   bucket_size = 4;   // �²���������ǳ�ʼ��hash_map�Ĵ�С  
// 	static const size_t   min_buckets = 8; 
// 
// 	//BKDR hash algorithm���й��ַ���hash����������ȥ�������Ͽ���
// 	size_t operator()(const char* str) const
// 	{
// 		//return atoi(str);
// 		//return __stl_hash_string(str);
// 		int seed = 131;//31  131 1313 13131131313 etc//
// 		int hash = 0;
// 		while(*str)
// 		{
// 			hash = (hash * seed) + (*str);
// 			str ++;
// 		}
// 
// 		return size_t(hash); 
// 	}
// 
// 	bool operator()(const char* s1, const char* s2) const 
// 	{
// 		return strcmp(s1,s2) == 0 ? true : false;
// 	}
// };

struct map_string_cmp
{
	bool operator()( const char * s1, const char * s2 ) const
	{
		return strcmp( s1, s2 ) < 0;
	}
};

struct map_std_string_cmp
{
	bool operator()( const std::string& str1, const std::string& str2 ) const
	{
		return str1.compare(str2) < 0;
	}
};

// #ifdef _UNICODE
// 	typedef TCHAR wchar_t
// #else
// 	typedef TCHAR char
// #endif

/*****************************************************************************
//������غ���
******************************************************************************/

/**
 * @Description: ���ַ�����ʽ����16���Ƶ���ʽ
 * @Author: leeafu	2015-04-10
 */
void DEBUGFormatHex(TCHAR* pDestBuf, int nDestLen, const char* pBuffer, int nLength);

/**
 * @Description: �����־�� Studio��Output����
 * @param: fmt
 * @return: void 
 * @Author: leeafu	2012-04-15
 */
void DEBUGTraceOutput(LPCTSTR fmt, ...);

/*
 * ��ӡ16����
*/
void DEBUGTraceHexOutput(const char* pBuffer, int nLength);

/**
 * @Description: �����־������̨����
 * @param: fmt
 * @return: void 
 * @Author: leeafu	2012-04-15
 */
void DEBUGTraceConsole(LPCTSTR fmt, ...);

/*
 * ��ӡ16����
*/
void DEBUGTraceHexConsole(const char* pBuffer, int nLength);

/*****************************************************************************
//·����غ���
******************************************************************************/

/**
 * @Description: ��ȡ��������
 * @return: const char* ��������
 * @Author: leeafu	2013-04-25
 */
LPCTSTR	PATHGetAppName();

/**
 * @Description: ��ȡ����·��
 * @return: const char* ����·�� 
 * @Author: leeafu	2012-04-15
 */
LPCTSTR	PATHGetAppPath();

/**
 * @Description: ��ȡ����·��
 * @param: hModule ģ������Ϊ��ֵ��ʾ���ڳ���
 * @return: szPath ģ��Ŀ¼�����뱣֤����ΪMAX_PATH
 * @Author: leeafu	2013-08-19
 */
void PATHGetModulePath(HMODULE hModule, TCHAR* szPath);

/**
 * @Description: ��ȡ����Ŀ¼·��
 * @return: const char* ����Ŀ¼·��  
 * @Author: leeafu	2012-04-15
 */
LPCTSTR	PATHGetAppParentPath();

/**
 * @Description: ��ȡ�û������ļ���·��	C:Documents and Settings\�û���\Local Settings\Application Data
 * @param: szPath �û������ļ�·�������뱣֤szPath���ó���Ϊ  MAX_PATH
 * @return: void 
 * @Author: leeafu	2012-04-15
 */
void PATHGetAppDataPath(TCHAR* szPath);

/**
 * @Description: ��ȡģ�������ļ���·��	�����ļ���ģ��ͬ���� �磺network.dll�����ļ�Ϊ����Ŀ¼�µ�network.ini����network.dll���ܲ���ͬһ��Ŀ¼
 * @param: hModule ģ��
 * @param: szFile �����ļ������뱣֤�ļ�����ΪMAX_PATH
 * @return: void 
 * @Author: leeafu	2012-04-15
 */
void PATHGetDllCfgFile(HANDLE hModule, TCHAR* szFile);

/**
 * @Description: ��ȡģ�������ļ���·��	�����ļ���ģ��ͬ���� �磺network.dll�����ļ�Ϊ����Ŀ¼�µ�network.ini����network.dll��ͬһĿ¼��
 * @param: hModule ģ��
 * @param: szFile �����ļ������뱣֤�ļ�����ΪMAX_PATH
 * @return: void 
 * @Author: leeafu	2014-05-28
 */
void PATHGetModuleCfgFile(HMODULE hModule, TCHAR* szFile);

/**
 * @Description: ��ȡĬ��·��
 * @param: hModule ģ��
 * @param: cDisk �̷�
 * @param: szDefaut Ĭ��·��
 * @param: szPath ����Ĭ��·�������뱣֤�ļ�����ΪMAX_PATH
 * @return: void 
 * @Author: leeafu	2012-04-15
 */
void PATHGetDefaultPath(TCHAR cDisk, LPCTSTR szDefaut, TCHAR* szPath);

/**
 * @Description: ����Ŀ¼�����Ŀ¼�����ڻ�ѭ�����д���
 * @param: szDirectory Ŀ¼
 * @return: true��ʾ�ɹ���false��ʾʧ�� 
 * @Author: leeafu	2012-04-15
 */
bool PATHCreateDirectory(LPCTSTR szDirectory);

/**
 * @Description: ����Ŀ¼�����Ŀ¼�����ڻ�ѭ�����д���
 * @param: szDirectory Ŀ¼
 * @return: true��ʾ�ɹ���false��ʾʧ�� 
 * @Author: leeafu	2012-04-15
 */
bool PATHCreateDirectoryW(wchar_t* tszDirectory);

/**
 * @Description: ɾ��Ŀ¼���������Ŀ¼�����ѭ������ɾ������
 * @param: szDirectory Ŀ¼
 * @return: true��ʾ�ɹ���false��ʾʧ��  
 * @Author: leeafu	2012-10-03
 */
bool PATHDeleteDirectory(LPCTSTR szDirectory);

/**
 * @Description: ����Ŀ¼�����Ŀ¼�����ڻ�ѭ�����д���
 * @param: szDest Ŀ��Ŀ¼��������'/'��β
 * @param: szSrc ԴĿ¼��������'/'��β
 * @return: true��ʾ�ɹ���false��ʾʧ�� 
 * @Author: leeafu	2012-04-15
 */
bool PATHCopyFolder(LPCTSTR szDest, LPCTSTR szSrc);

/**
 * @Description: �ж�Ŀ¼�Ƿ����
 * @param: lpPath Ŀ¼, ��  c:\\abcd
 * @return: true��ʾ�ɹ���false��ʾʧ�� 
 * @Author: leeafu	2016-11-18
 */
BOOL PATHFolderExists(LPCTSTR lpPath);

/*****************************************************************************
//�ļ���غ���
******************************************************************************/
/**
 * @Description: �ж��ļ��Ƿ����
 * @param: szFile �ļ�
 * @return: true��ʾ���ڣ�false��ʾ������ 
 * @Author: leeafu	2012-04-15
 */
bool FILEIsFileExist(LPCTSTR szFile);

/**
 * @Description: ����һ�����ļ�
 * @param: szFile �ļ�
 * @return: true��ʾ�ɹ���false��ʾʧ��   
 * @Author: leeafu	2012-04-15
 */
bool FILENewFile(LPCTSTR szFile);

/**
 * @Description: ��ȡ����汾
 * @param: szVer �汾��Ϣ�����뱣֤szVer���ó���Ϊ  MAX_PATH
 * @return: true��ʾ�ɹ���false��ʾʧ��  
 * @Author: leeafu	2012-04-15
 */
bool FILEGetAppVersion(TCHAR* szVer);

/**
 * @Description: ��ȡ�ļ��汾
 * @param: szFile �ļ���Ϣ
 * @param: szVer �汾��Ϣ�����뱣֤szVer���ó���Ϊ  MAX_PATH
 * @return: true��ʾ�ɹ���false��ʾʧ��  
 * @Author: leeafu	2012-04-15
 */
bool FILEGetFileVersionEx(LPCTSTR szPath, TCHAR* szVer);

/**
 * @Description: ���ٴ������ļ�
 * @param: szFile �ļ���Ϣ
 * @param: nFileSize �ļ����ȣ��ֽ�
 * @return: true��ʾ�ɹ���false��ʾʧ��  
 * @Author: leeafu	2012-04-15
 */
bool FILEFastCreateFile(LPCTSTR szFile, long nFileSize);

/**
 * @Description: ȡ���ļ�����޸�ʱ��
 * @param: szFile �ļ�
 * @param: lpTime �ռ��С���ֽ�
 * @return: true��ʾ�ɹ���false��ʾʧ��  
 * @Author: leeafu	2012-04-15
 */
bool FILEGetFileModifyTime(LPCTSTR szFile, LPSYSTEMTIME lpTime);

/**
 * @Description: ���Ŀ¼�ռ䣬�������ָ����С����ִ��ɾ���ļ�����
 * @param: szPath Ŀ¼
 * @param: nMaxMBSize �ռ��С���ֽ�
 * @return: void
 * @Author: leeafu	2012-04-15
 */
void FILECheckPathFileSize(LPCTSTR szPath, int nMaxMBSize);

//��С�ļ��Ƚ϶�ʱ��bRemoveTimeout������Χʱ�����Խ�������־ȫ��ɾ��
void FILECheckPathFileSizeEx(LPCTSTR szPath, int nMaxMBSize, BOOL bRemoveTimeout);

/**
 * @Description: �ж��ļ��Ƿ����
 * @param: szFile �ļ�
 * @return: true��ʾ���ڣ�false��ʾ������ 
 * @Author: leeafu	2014-04-23
 */
long FILEGetFileLength(LPCTSTR szFile);

long FILEGetFileLengthW(wchar_t* wszFile);

/**
 * @Description: �ж��ļ���׺��
 * @param: szFile �ļ�
 * @param: szExt ��׺��
 * @return: true��ʾ���ڣ�false��ʾ������ 
 * @Author: leeafu	2015-09-27
 */
BOOL FILECheckExt(LPCTSTR szFile, LPCTSTR szExt);

/**
 * @Description: ����������д�뵽�ļ���
 */
BOOL FILESaveBufferToFile(const char* szFile, char* pData, int nDataLen);

/**
 * @Description: ���ļ��ж�ȡȫ�����ݵ�������
 */
BOOL FILEReadBufferFromFile(const char* szFile, char** ppData, int& nDataLen);

/*****************************************************************************
//������غ���
******************************************************************************/
/**
 * @Description: ���ҵ�ǰ���̵�ӳ��
 * @return: �ɹ�����true��ʧ�ܷ���false
 * @Author: leeafu	2012-04-15
 */
bool PROCESSFindProcessSnapshot();

/**
 * @Description: �����Ƿ��������У�ͨ������������ж�
 * @param: szMutexName ����������
 * @return: �ɹ����ؽ��̾��
 * @Author: leeafu	2012-04-15
 */
HANDLE PROCESSIsProcessRunning(LPCTSTR szMutexName);

/**
 * @Description: ͨ���������ƽ��в���
 * @param: lpAppName ���������磬abc.exe
 * @param: dwProcessID ���̺ţ�����ɹ����򷵻�
 * @return: �ɹ�����true��ʧ�ܷ���false
 * @Author: leeafu	2012-04-15
 */
bool PROCESSFindProcess(LPCTSTR lpAppName, DWORD& dwProcessID);

/**
 * @Description: ɱ������
 * @param: lpAppName ���������磬abc.exe
 * @return: �ɹ�����true��ʧ�ܷ���false
 * @Author: leeafu	2012-04-15
 */
bool PROCESSKillAppProcess(LPCTSTR lpAppName);

/**
 * @Description: ��������Ȩ��
 * @return: �ɹ�����true��ʧ�ܷ���false
 * @Author: leeafu	2012-04-15
 */
bool PROCESSEnablePriv();

/**
 * @Description: ɱ������
 * @param: dwProcessID ���̺�
 * @return: �ɹ�����true��ʧ�ܷ���false
 * @Author: leeafu	2012-04-15
 */
bool PROCESSKillProcess(DWORD dwProcessID);

/**
 * @Description: �����½���
 * @param: pszExeName ��������
 * @param: pszCommand ���̲���
 * @return: �ɹ�����true��ʧ�ܷ���false
 * @Author: leeafu	2012-04-15
 */
bool PROCESSCreateNewProcess(LPCTSTR pszExeName, LPTSTR pszCommand);

/**
 * @Description: ��������
 * @return: ��
 * @Author: leeafu	2012-04-15
 */
void PROCESSRebootProcess();

/**
 * @Description: ��ȡ����·��
 * @param: dwProcessID ����ID
 * @param: szExeFile ����·����szExeFile���ȱ�����ڵ���MAX_PATH�����ز���
 * @return: ��
 * @Author: leeafu	2012-06-08
 */
void PROCESSGetProcessFile(DWORD dwProcessID, char* szExeFile);

/**
 * @Description: ��ȡ��������ʱ��
 * @param: dwProcessID ����ID
 * @param: runTime ��������ʱ��
 * @return: �ɹ�����TRUE��ʧ�ܷ���FALSE
 * @Author: leeafu	2012-09-25
 */
BOOL PROCESSGetProcessTimes(DWORD dwProcessID, SYSTEMTIME& runTime);


/**
 * @Description: ���ݽ���ID��ȡ��������
 * @param: dwProcessID ����ID
 * @param: szServiceName ������
 * @param: nLength ����������
 * @return: �ɹ�����TRUE��ʧ�ܷ���FALSE
 * @Author: zjt	2016-10-08
 */
BOOL QueryServiceNameByThreadID(DWORD dwProcessID, TCHAR* szServiceName, int nLength);

/**
 * @Description: ���ݷ�������ȡ����ID
 * @param: szServiceName ������
 * @param: dwProcessID ����ID
 * @return: �ɹ�����TRUE��ʧ�ܷ���FALSE
 * @Author: zjt	2016-10-08
 */
BOOL QueryThreadIDByServiceName(LPCTSTR lpServiceName, DWORD& dwProcessID);

/*****************************************************************************
//�ַ���غ���
******************************************************************************/

/**
 * @Description: �ж��ַ����Ƿ�Ϊ����
 * @param: szStr �ַ���
 * @return: �ɹ�����true��ʧ�ܷ���false
 * @Author: leeafu	2012-04-15
 */
bool STRINGIsDigit(LPCTSTR szStr);

/**
 * @Description: ����GUID
 * @param: szGUID GUID�ַ����Ȱ���/0������ʱΪ37���ֽ�
 * @Author: leeafu	2012-04-15
 */
void STRINGGenerateGUID(TCHAR* szGUID);

/**
 * @Description: �ַ����ָ��
 * @param: szStr �ַ���
 * @param: cSplit �ָ��
 * @param: vecStr �����ַ�������
 * @Author: leeafu	2012-08-03
 */
void STRINGSplit(const char* szStr, char cSplit, std::vector<std::string>& vecStr);

void STRINGSplitW(const wchar_t* szStr, wchar_t cSplit, std::vector<std::wstring>& vecStr);

/**
 * @Description: �ַ����ָ����ֱ��ʹ��c�������������������Ч��
 * @Author: leeafu	2016-01-16
 */
void STRINGSplitArray(const char* szStr, char cSplit, STRINGMyArray_S* pArray, int nNum);
void STRINGSplitArrayW(const wchar_t* wszStr, wchar_t wSplit, STRINGMyArrayW_S* pArray, int nNum);

/**
 * @Description: �ַ��滻�������滻�����ַ�
 * @param: szStr �ַ���
 * @param: cOld Ҫ�滻���ַ�
 * @param: cNew �滻����ַ�
 * @Author: leeafu	2012-09-21
 */
void STRINGReplaceChar(TCHAR* szStr, TCHAR cOld, TCHAR cNew);

// @Author: leeafu	2016-03-24
//�ַ�����ת����16���Ƶ��ַ���
//�ϲ���Ҫ�ͷŷ��ص�����  SAFE_DELETE_ARRAY(ppStrHex), SAFE_DELETE_ARRAY(ppData)
void STRINGCharArr2Hex(const unsigned char* pData, int nDataLen, char** ppStrHex);
//16�����ַ���ת��������
void STRINGHex2CharArr(const std::string& strHex, unsigned char** ppData, int& nDataLen);

/**
 * @Description: 'FA' = 15*16 + 10  16����ת����char
 * @param: pBuf �ַ���
 * @Author: leeafu	2013-06-11
 */
unsigned char STRINGHex2Char(char* pBuf);

/**
 * @Description: ���ַ���ת���ɴ�д
 * @param: szStr ��Դ�ַ��������Ϊ��д
 * @return: ��
 * @Author: leeafu	2014-09-06
 */
void STRINGToUpper(char* szStr);

/**
 * @Description: ���ַ���ת����Сд
 * @param: szStr ��Դ�ַ��������ΪСд
 * @return: ��
 * @Author: leeafu	2014-09-06
 */
void STRINGToLower(char* szStr);

/*****************************************************************************
//ʱ����غ���
******************************************************************************/
/**
 * @Description: �ж�ʱ���Ƿ��Ѿ�����ָ����ʱ��
 * @param: dwTime ֮ǰ��ʱ��
 * @param: dwTimeout ��ʱ��ʱ�䣬����
 * @return: �ɹ�����true��ʧ�ܷ���false
 * @Author: leeafu	2012-04-15
 */
bool TIMEIsTimeOut(DWORD& dwTime, DWORD dwMinSecond);

/**
 * @Description: �ж�ʱ���Ƿ��Ѿ�����ָ����ʱ��
 * @param: dwTime ֮ǰ��ʱ��
 * @param: dwTimeout ��ʱ��ʱ�䣬����
 * @return: �ɹ�����true��ʧ�ܷ���false
 * @Author: leeafu	2012-04-15
 */
bool TIMEIsTimeOutEx(DWORD& dwBeginTime, DWORD dwEndTime, DWORD dwMinSecond);

/**
 * @Description: ȡ�õ�ǰʱ���ַ���
 * @return: �ɹ������ַ���
 * @Author: leeafu	2012-04-15
 */
CStringSTL TIMEGetCurrentTimeString();

/**
 * @Description: ��ʽ��ʱ�����崮��2011-04-12 23:34:34
 * @param: Time ʱ����Ϣ
 * @return: �ɹ������ַ���
 * @Author: leeafu	2012-04-15
 */
CStringSTL TIMEFormatTime2String(const SYSTEMTIME& Time);

/**
 * @Description: ��ʽ�������ڸ�ʽ��2012-04-12
 * @param: Time ʱ����Ϣ
 * @return: �ɹ������ַ���
 * @Author: leeafu	2012-04-15
 */
CStringSTL TIMEFormatTime2DateString(const SYSTEMTIME& Time);

/**
 * @Description: ʱ��Ƚ�
 * @return: ���tm1 > tm2 ����1�� = ����0��< ����-1
 * @Author: leeafu	2012-04-15
 */
int	TIMECompareTime(const SYSTEMTIME& tm1, const SYSTEMTIME& tm2);

/**
 * @Description: ������ת����long�뷽ʽ����1900��ʼ
 * @param: tm ʱ��
 * @return: ʱ����
 * @Author: leeafu	2012-04-15 hw 2014/1/17 1970-->1900 ��ʼ
 */
long TIMEFormatTime2Long(const SYSTEMTIME& tm);

/**
 * @Description: ʱ����ɾ����
 * @param: tm ʱ��
 * @param: nSecond �룬�������Ϊ������Ϊ����
 * @return: ʱ����
 * @Author: leeafu	2012-04-15
 */
SYSTEMTIME TIMEIncrease(const SYSTEMTIME& tm, int nSecond);

/**
 * @Description: �ж�����ʱ����������
 * @return: ����ʱ������
 * @Author: leeafu	2012-09-13
 */
int TIMECompare(const SYSTEMTIME& tm1, const SYSTEMTIME& tm2);

/**
 * @Description: time_tת����SYSTEMTIME
 * @return: SYSTEMTIME
 * @Author: hw	2013-09-14
 */
SYSTEMTIME TIMETimeToSystemTime(time_t t);

/**
 * @Description: SYSTEMTIMEת����time_t
 * @return: time_t
 * @Author: hw	2013-09-14
 */
time_t TIMESystemTime2Time(const SYSTEMTIME& st);

/*
* @Description: ȡ������ʱ���֮�����·���Ϣ
*/
void	TIMESplitMonth(const SYSTEMTIME& beg, const SYSTEMTIME& end, std::vector<TIMEMonth_S>& lstMonth);

/*****************************************************************************
//����ϵͳ��غ���
******************************************************************************/
//�ж�OS�İ汾
BOOL	OSCheckOsVersion(DWORD nMajorVer, DWORD nMinVer);
//�ж��Ƿ�ΪXPϵͳ
BOOL	OSIsWinXP();

/*****************************************************************************
//���������غ���
******************************************************************************/
//׷�ӻ��棬������治�����������
BOOL	BUFFAppend(const char* pAddBuf, int nAddLen, char** ppDestBuffer, int& nDestBufLen, int& nDestDataLen, int nNewLength = 50 * 1024);
//���仺�棬���سɹ�����ĳ��ȣ�ʧ�ܷ���0
//����ǰ�������ͷ�*ppBuffer��ȷ�� *ppBuffer����ʱ��Ҫ��ʼ��ΪNULL
int		BUFFAlloc(char** ppBuffer, int nBufLen);

/*****************************************************************************
//ͨ����غ���
******************************************************************************/

#endif /*	_PUBLIC_H_	*/