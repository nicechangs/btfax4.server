
// FOD.h : PROJECT_NAME 응용 프로그램에 대한 주 헤더 파일입니다.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH에 대해 이 파일을 포함하기 전에 'stdafx.h'를 포함합니다."
#endif

#include "resource.h"		// 주 기호입니다.


// CFODApp:
// 이 클래스의 구현에 대해서는 FOD.cpp을 참조하십시오.
//

class CFODApp : public CWinApp
{
// method
public:
	CFODApp();
	bool IsStart();
	bool Service_Init();
	bool Service_Start();
	void Service_Stop();

// override.
public:
	virtual BOOL InitInstance();

// implement
	DECLARE_MESSAGE_MAP()

// field
private:
	bool m_bServiceRun;
};

extern CFODApp theApp;