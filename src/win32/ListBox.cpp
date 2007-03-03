#include "win32/ListBox.h"

using namespace Framework;
using namespace Framework::Win32;

CListBox::CListBox(HWND hParent, RECT* pR, unsigned long nStyle, unsigned long nStyleEx)
{
	Create(nStyleEx, _T("LISTBOX"), _T(""), WS_VISIBLE | WS_CHILD | nStyle, pR, hParent, NULL);
	SetFont((HFONT)GetStockObject(ANSI_VAR_FONT));
}

void CListBox::AddString(const TCHAR* sValue)
{
	SendMessage(m_hWnd, LB_ADDSTRING, NULL, (LPARAM)sValue);
}

void CListBox::ResetContent()
{
	SendMessage(m_hWnd, LB_RESETCONTENT, NULL, NULL);
}
