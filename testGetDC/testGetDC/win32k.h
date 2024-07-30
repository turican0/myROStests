#ifndef WIN32K_H

#define WIN32K_H
#include "supportFunctons.h"

#ifdef __cplusplus
extern "C" {
#endif

	HDC NtUserGetDCEx(HWND hWnd OPTIONAL, HANDLE ClipRegion, ULONG Flags);
#ifdef __cplusplus
}
#endif

#endif
