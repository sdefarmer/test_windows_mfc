
// testmfcdocviewapp.h : testmfcdocviewapp Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CtestmfcdocviewappApp:
// �йش����ʵ�֣������ testmfcdocviewapp.cpp
//

class CtestmfcdocviewappApp : public CWinAppEx
{
public:
	CtestmfcdocviewappApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CtestmfcdocviewappApp theApp;
