#pragma once

#include <windows.h>
#include <objbase.h>

#include "UIlib.h"
using namespace DuiLib;

// 窗口实例及消息响应部分
class CFrameWindowWnd : public CWindowWnd, public INotifyUI
{
public:
	CFrameWindowWnd();
	LPCTSTR GetWindowClassName() const; 
	UINT GetClassStyle() const; 
	void OnFinalMessage(HWND /*hWnd*/); 
	void Notify(TNotifyUI& msg);
	
	LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);
	
public:
	CPaintManagerUI m_pm;
};
