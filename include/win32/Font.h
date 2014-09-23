#pragma once

#include "win32/Window.h"

namespace Framework
{
	namespace Win32
	{
		HFONT	CreateFont(const TCHAR*, unsigned int);
		SIZE	GetFontSize(HFONT);
	}
}
