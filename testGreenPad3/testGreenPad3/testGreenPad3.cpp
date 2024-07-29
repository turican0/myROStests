#include "windows.h"
#include "stdio.h"

#define DCX_USESTYLE 0x00010000

static
ATOM
RegisterClassHelper(
    LPCWSTR pszClassName,
    UINT style,
    WNDPROC pfnWndProc)
{
    WNDCLASSW cls;

    cls.style = style;
    cls.lpfnWndProc = pfnWndProc;
    cls.cbClsExtra = 0;
    cls.cbWndExtra = 0;
    cls.hInstance = GetModuleHandleA(0);
    cls.hIcon = 0;
    cls.hCursor = LoadCursorW(0, IDC_ARROW);
    cls.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    cls.lpszMenuName = NULL;
    cls.lpszClassName = pszClassName;

    return RegisterClassW(&cls);
}

static
HWND
CreateWindowHelper(
    LPCWSTR pszClassName,
    LPCWSTR pszTitle)
{
    return CreateWindowW(pszClassName,
        pszTitle,
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        100,
        100,
        NULL,
        NULL,
        0,
        NULL);
}

void ok(BOOL state, const char* format, ...)
{
    //if(!state)
        printf(format);
}

void TRACE(const char* format, ...)
{
    printf(format);
}

static
LRESULT
CALLBACK
WndProc(
    _In_ HWND hwnd,
    _In_ UINT uMsg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam)
{
    return TRUE;
}

typedef struct _HEAD
{
    HANDLE h;
    DWORD cLockObj;
} HEAD, * PHEAD;

/*
 * THREADINFO structure.
 * See also: https://reactos.org/wiki/Techwiki:Win32k/THREADINFO
 */
#ifdef __cplusplus
typedef struct _THREADINFO //: _W32THREAD
{
#else
typedef struct _THREADINFO
{
    W32THREAD;
#endif
    //PTL                 ptl;
    PPROCESSINFO        ppi;
    struct _USER_MESSAGE_QUEUE* MessageQueue;
    struct tagKL* KeyboardLayout;
    struct _CLIENTTHREADINFO* pcti;
    struct _DESKTOP* rpdesk;
    struct _DESKTOPINFO* pDeskInfo;
    struct _CLIENTINFO* pClientInfo;
    FLONG               TIF_flags;
    //PUNICODE_STRING     pstrAppName;
    struct _USER_SENT_MESSAGE* pusmSent;
    struct _USER_SENT_MESSAGE* pusmCurrent;
    /* Queue of messages sent to the queue. */
    LIST_ENTRY          SentMessagesListHead;    // psmsReceiveList
    /* Last message time and ID */
    LONG                timeLast;
    ULONG_PTR           idLast;
    /* True if a WM_QUIT message is pending. */
    BOOLEAN             QuitPosted;
    /* The quit exit code. */
    INT                 exitCode;
    HDESK               hdesk;
    UINT                cPaintsReady; /* Count of paints pending. */
    UINT                cTimersReady; /* Count of timers pending. */
    struct tagMENUSTATE* pMenuState;
    DWORD               dwExpWinVer;
    DWORD               dwCompatFlags;
    DWORD               dwCompatFlags2;
    struct _USER_MESSAGE_QUEUE* pqAttach;
    PTHREADINFO         ptiSibling;
    ULONG               fsHooks;
    struct tagHOOK* sphkCurrent;
    LPARAM              lParamHkCurrent;
    WPARAM              wParamHkCurrent;
    struct tagSBTRACK* pSBTrack;
    /* Set if there are new messages specified by WakeMask in any of the queues. */
    HANDLE              hEventQueueClient;
    /* Handle for the above event (in the context of the process owning the queue). */
    //PKEVENT             pEventQueueServer;
    LIST_ENTRY          PtiLink;
    INT                 iCursorLevel;
    /* Last message cursor position */
    POINT               ptLast;
    /* Input context-related */
    struct _WND* spwndDefaultIme;
    struct tagIMC* spDefaultImc;
    HKL                 hklPrev;

    INT                 cEnterCount;
    /* Queue of messages posted to the queue. */
    LIST_ENTRY          PostedMessagesListHead; // mlPost
    WORD                fsChangeBitsRemoved;
    WCHAR               wchInjected;
    UINT                cWindows;
    UINT                cVisWindows;
#ifndef __cplusplus /// FIXME!
    LIST_ENTRY          aphkStart[NB_HOOKS];
    CLIENTTHREADINFO    cti;  // Used only when no Desktop or pcti NULL.

    /* ReactOS */

    /* Thread Queue state tracking */
    // Send list QS_SENDMESSAGE
    // Post list QS_POSTMESSAGE|QS_HOTKEY|QS_PAINT|QS_TIMER|QS_KEY
    // Hard list QS_MOUSE|QS_KEY only
    // Accounting of queue bit sets, the rest are flags. QS_TIMER QS_PAINT counts are handled in thread information.
    DWORD nCntsQBits[QSIDCOUNTS]; // QS_KEY QS_MOUSEMOVE QS_MOUSEBUTTON QS_POSTMESSAGE QS_SENDMESSAGE QS_HOTKEY

    LIST_ENTRY WindowListHead;
    LIST_ENTRY W32CallbackListHead;
    SINGLE_LIST_ENTRY  ReferencesList;
    ULONG cExclusiveLocks;
#if DBG
    USHORT acExclusiveLockCount[GDIObjTypeTotal + 1];
#endif
#endif // __cplusplus
} THREADINFO;

typedef struct _THROBJHEAD
{
    HEAD a;
    struct _THREADINFO* pti;
} THROBJHEAD, * PTHROBJHEAD;

typedef struct _THRDESKHEAD
{
    THROBJHEAD a;
    struct _DESKTOP* rpdesk;
    PVOID pSelf;
} THRDESKHEAD, * PTHRDESKHEAD;

typedef unsigned short RTL_ATOM, * PRTL_ATOM;

typedef enum _GETCPD
{
    UserGetCPDA2U = 0x01, /* " Unicode " */
    UserGetCPDU2A = 0X02, /* " Ansi " */
    UserGetCPDClass = 0X10,
    UserGetCPDWindow = 0X20,
    UserGetCPDDialog = 0X40,
    UserGetCPDWndtoCls = 0X80
} GETCPD, * PGETCPD;

typedef struct _PROCDESKHEAD
{
    HEAD a;
    DWORD_PTR hTaskWow;
    struct _DESKTOP* rpdesk;
    PVOID pSelf;
} PROCDESKHEAD, * PPROCDESKHEAD;

typedef struct _CALLPROCDATA
{
    PROCDESKHEAD head;
    struct _CALLPROCDATA* spcpdNext;
    WNDPROC pfnClientPrevious;
    GETCPD wType;
} CALLPROCDATA, * PCALLPROCDATA;

typedef struct _CLS
{
    struct _CLS* pclsNext;
    RTL_ATOM atomClassName;
    ATOM atomNVClassName;
    DWORD fnid;
    struct _DESKTOP* rpdeskParent;
    PVOID pdce;
    DWORD CSF_flags;
    PSTR  lpszClientAnsiMenuName; /* For client use */
    PWSTR lpszClientUnicodeMenuName; /* "   "      " */
    PCALLPROCDATA spcpdFirst;
    struct _CLS* pclsBase;
    struct _CLS* pclsClone;
    ULONG cWndReferenceCount;
    UINT style;
    WNDPROC lpfnWndProc;
    INT cbclsExtra;
    INT cbwndExtra;
    HINSTANCE hModule;
    struct _CURICON_OBJECT* spicn;
    struct _CURICON_OBJECT* spcur;
    HBRUSH hbrBackground;
    PWSTR lpszMenuName; /* kernel use */
    PSTR lpszAnsiClassName; /* " */
    struct _CURICON_OBJECT* spicnSm;
    UINT Unicode : 1; // !CSF_ANSIPROC
    UINT Global : 1; // CS_GLOBALCLASS or CSF_SERVERSIDEPROC
    UINT MenuNameIsString : 1;
    UINT NotUsed : 29;
} CLS, * PCLS;

typedef struct tagSBDATA
{
    INT posMin;
    INT posMax;
    INT page;
    INT pos;
} SBDATA, * PSBDATA;

typedef struct _SBINFO
{
    DWORD  WSBflags;
    SBDATA Horz;
    SBDATA Vert;
} SBINFO, * PSBINFO;

typedef struct _LARGE_UNICODE_STRING
{
    ULONG Length;
    ULONG MaximumLength : 31;
    ULONG bAnsi : 1;
    PWSTR Buffer;
} LARGE_UNICODE_STRING, * PLARGE_UNICODE_STRING;

typedef struct _SBINFOEX
{
    SCROLLBARINFO ScrollBarInfo;
    SCROLLINFO ScrollInfo;
} SBINFOEX, * PSBINFOEX;

typedef struct _WND
{
    THRDESKHEAD head;
#if 0
    WW ww;
#else
    /* These fields should be moved in the WW at some point. */
    /* Plese do not change them to keep the same layout with WW. */
    DWORD state;
    DWORD state2;
    /* Extended style. */
    DWORD ExStyle;
    /* Style. */
    DWORD style;
    /* Handle of the module that created the window. */
    HINSTANCE hModule;
    DWORD fnid;
#endif
    struct _WND* spwndNext;
    struct _WND* spwndPrev;
    struct _WND* spwndParent;
    struct _WND* spwndChild;
    struct _WND* spwndOwner;
    RECT rcWindow;
    RECT rcClient;
    WNDPROC lpfnWndProc;
    /* Pointer to the window class. */
    PCLS pcls;
    HRGN hrgnUpdate;
    /* Property list head.*/
    LIST_ENTRY PropListHead;
    ULONG PropListItems;
    /* Scrollbar info */
    PSBINFO pSBInfo;
    /* system menu handle. */
    HMENU SystemMenu;
    //PMENU spmenuSys;
    /* Window menu handle or window id */
    UINT_PTR IDMenu; // Use spmenu
    //PMENU spmenu;
    HRGN hrgnClip;
    HRGN hrgnNewFrame;
    /* Window name. */
    LARGE_UNICODE_STRING strName;
    /* Size of the extra data associated with the window. */
    ULONG cbwndExtra;
    struct _WND* spwndLastActive;
    HIMC hImc; // Input context associated with this window.
    LONG_PTR dwUserData;
    PVOID pActCtx;
    //PD3DMATRIX pTransForm;
    struct _WND* spwndClipboardListener;
    DWORD ExStyle2;

    /* ReactOS */
    struct
    {
        RECT NormalRect;
        POINT IconPos;
        POINT MaxPos;
        UINT flags; /* WPF_ flags. */
    } InternalPos;

    UINT Unicode : 1; /* !(WNDS_ANSICREATOR|WNDS_ANSIWINDOWPROC) ? */
    UINT InternalPosInitialized : 1;
    UINT HideFocus : 1; /* WS_EX_UISTATEFOCUSRECTHIDDEN ? */
    UINT HideAccel : 1; /* WS_EX_UISTATEKBACCELHIDDEN ? */

    /* Scrollbar info */
    PSBINFOEX pSBInfoex; // convert to PSBINFO
    /* Entry in the list of thread windows. */
    LIST_ENTRY ThreadListEntry;

    PVOID DialogPointer;
} WND, * PWND;

typedef struct _PROCESSINFO* PPROCESSINFO;
typedef struct _THREADINFO* PTHREADINFO;

typedef struct tagDCE
{
    LIST_ENTRY   List;
    HDC          hDC;
    HWND         hwndCurrent;
    PWND         pwndOrg;
    PWND         pwndClip;
    PWND         pwndRedirect;
    HRGN         hrgnClip;
    HRGN         hrgnClipPublic;
    HRGN         hrgnSavedVis;
    DWORD        DCXFlags;
    PTHREADINFO  ptiOwner;
    PPROCESSINFO ppiOwner;
    struct _MONITOR* pMonitor;
} DCE, * PDCE;

#define DCX_DCEEMPTY        0x00000800
#define DCX_DCEBUSY         0x00001000
#define DCX_DCEDIRTY        0x00002000
#define DCX_LAYEREDWIN      0x00004000
#define DCX_DCPOWNED        0x00008000
#define DCX_NOCLIPCHILDREN  0x00080000
#define DCX_NORECOMPUTE     0x00100000
#define DCX_INDESTROY       0x00400000

HDC UserGetDCEx(PWND Wnd OPTIONAL, HANDLE ClipRegion, ULONG Flags)
{
    PWND Parent;
    ULONG DcxFlags;
    DCE* Dce = NULL;
    BOOL UpdateClipOrigin = FALSE;
    BOOL bUpdateVisRgn = TRUE;
    HDC hDC = NULL;
    PPROCESSINFO ppi;
    PLIST_ENTRY ListEntry;

    if (NULL == Wnd)
    {
        Flags &= ~DCX_USESTYLE;
        Flags |= DCX_CACHE;
    }

    if (Flags & DCX_PARENTCLIP) Flags |= DCX_CACHE;

    // When GetDC is called with hWnd nz, DCX_CACHE & _WINDOW are clear w _USESTYLE set.
    if (Flags & DCX_USESTYLE)
    {
        Flags &= ~(DCX_CLIPCHILDREN | DCX_CLIPSIBLINGS | DCX_PARENTCLIP);
        if (!(Flags & DCX_WINDOW)) // Not window rectangle
        {
            if (Wnd->pcls->style & CS_PARENTDC)
            {
                Flags |= DCX_PARENTCLIP;
            }

            if (!(Flags & DCX_CACHE) && // Not on the cheap wine list.
                !(Wnd->pcls->style & CS_OWNDC))
            {
                if (!(Wnd->pcls->style & CS_CLASSDC))
                    // The window is not POWNED or has any CLASS, so we are looking for cheap wine.
                    Flags |= DCX_CACHE;
                else
                {
                    if (Wnd->pcls->pdce) hDC = ((PDCE)Wnd->pcls->pdce)->hDC;
                    TRACE("We have CLASS!!\n");
                }
            }

            if (Wnd->style & WS_CLIPSIBLINGS)
            {
                Flags |= DCX_CLIPSIBLINGS;
            }

            if (Wnd->style & WS_CLIPCHILDREN &&
                !(Wnd->style & WS_MINIMIZE))
            {
                Flags |= DCX_CLIPCHILDREN;
            }
            /* If minized with icon in the set, we are forced to be cheap! */
            if (Wnd->style & WS_MINIMIZE && Wnd->pcls->spicn)
            {
                Flags |= DCX_CACHE;
            }
        }
        else
        {
            if (Wnd->style & WS_CLIPSIBLINGS) Flags |= DCX_CLIPSIBLINGS;
            Flags |= DCX_CACHE;
        }
    }

    if (Flags & DCX_WINDOW) Flags &= ~DCX_CLIPCHILDREN;

    if (Flags & DCX_NOCLIPCHILDREN)
    {
        Flags |= DCX_CACHE;
        Flags &= ~(DCX_PARENTCLIP | DCX_CLIPCHILDREN);
    }

    Parent = (Wnd ? Wnd->spwndParent : NULL);

    if (NULL == Wnd || !(Wnd->style & WS_CHILD) || NULL == Parent)
    {
        Flags &= ~DCX_PARENTCLIP;
        Flags |= DCX_CLIPSIBLINGS;
    }

    /* It seems parent clip is ignored when clipping siblings or children */
    if (Flags & (DCX_CLIPSIBLINGS | DCX_CLIPCHILDREN)) Flags &= ~DCX_PARENTCLIP;

    if (Flags & DCX_PARENTCLIP)
    {
        if ((Wnd->style & WS_VISIBLE) &&
            (Parent->style & WS_VISIBLE))
        {
            Flags &= ~DCX_CLIPCHILDREN;
            if (Parent->style & WS_CLIPSIBLINGS)
            {
                Flags |= DCX_CLIPSIBLINGS;
            }
        }
    }

    // Window nz, check to see if we still own this or it is just cheap wine tonight.
    if (!(Flags & DCX_CACHE))
    {
        if (Wnd->head.pti != GetW32ThreadInfo())
            Flags |= DCX_CACHE; // Ah~ Not Powned! Forced to be cheap~
    }

    DcxFlags = Flags & DCX_CACHECOMPAREMASK;

    if (Flags & DCX_CACHE)
    { // Scan the cheap wine list for our match.
        DCE* DceEmpty = NULL;
        DCE* DceUnused = NULL;
        KeEnterCriticalRegion();
        ListEntry = LEDce.Flink;
        while (ListEntry != &LEDce)
        {
            Dce = CONTAINING_RECORD(ListEntry, DCE, List);
            ListEntry = ListEntry->Flink;
            //
            // The way I understand this, you can have more than one DC per window.
            // Only one Owned if one was requested and saved and one Cached.
            //
            if ((Dce->DCXFlags & (DCX_CACHE | DCX_DCEBUSY)) == DCX_CACHE)
            {
                DceUnused = Dce;
                if (Dce->DCXFlags & DCX_DCEEMPTY)
                {
                    DceEmpty = Dce;
                }
                else if (Dce->hwndCurrent == (Wnd ? UserHMGetHandle(Wnd) : NULL) &&
                    ((Dce->DCXFlags & DCX_CACHECOMPAREMASK) == DcxFlags))
                {
                    UpdateClipOrigin = TRUE;
                    break;
                }
            }
            Dce = NULL; // Loop issue?
        }
        KeLeaveCriticalRegion();

        Dce = (DceEmpty == NULL) ? DceUnused : DceEmpty;

        if (Dce == NULL)
        {
            Dce = DceAllocDCE(NULL, DCE_CACHE_DC);
        }
        if (Dce == NULL) return NULL;

        Dce->hwndCurrent = (Wnd ? UserHMGetHandle(Wnd) : NULL);
        Dce->pwndOrg = Dce->pwndClip = Wnd;
    }
    else // If we are here, we are POWNED or having CLASS.
    {
        KeEnterCriticalRegion();
        ListEntry = LEDce.Flink;
        while (ListEntry != &LEDce)
        {
            Dce = CONTAINING_RECORD(ListEntry, DCE, List);
            ListEntry = ListEntry->Flink;

            // Skip Cache DCE entries.
            if (!(Dce->DCXFlags & DCX_CACHE))
            {
                // Check for Window handle than HDC match for CLASS.
                if (Dce->hwndCurrent == UserHMGetHandle(Wnd))
                {
                    bUpdateVisRgn = FALSE;
                    break;
                }
                else if (Dce->hDC == hDC) break;
            }
            Dce = NULL; // Loop issue?
        }
        KeLeaveCriticalRegion();

        if (Dce == NULL)
        {
            return(NULL);
        }

        if ((Flags & (DCX_INTERSECTRGN | DCX_EXCLUDERGN)) &&
            (Dce->DCXFlags & (DCX_INTERSECTRGN | DCX_EXCLUDERGN)))
        {
            DceDeleteClipRgn(Dce);
        }
    }
    // First time use hax, need to use DceAllocDCE during window display init.
    if (NULL == Dce)
    {
        return(NULL);
    }

    if (!GreIsHandleValid(Dce->hDC))
    {
        ERR("FIXME: Got DCE with invalid hDC! %p\n", Dce->hDC);
        Dce->hDC = DceCreateDisplayDC();
        /* FIXME: Handle error */
    }

    Dce->DCXFlags = Flags | DCX_DCEBUSY;

    /*
     * Bump it up! This prevents the random errors in wine dce tests and with
     * proper bits set in DCX_CACHECOMPAREMASK.
     * Reference:
     *   https://reactos.org/archives/public/ros-dev/2008-July/010498.html
     *   https://reactos.org/archives/public/ros-dev/2008-July/010499.html
     */
    RemoveEntryList(&Dce->List);
    InsertHeadList(&LEDce, &Dce->List);

    /* Introduced in rev 6691 and modified later. */
    if ((Flags & DCX_INTERSECTUPDATE) && !ClipRegion)
    {
        Flags |= DCX_INTERSECTRGN | DCX_KEEPCLIPRGN;
        Dce->DCXFlags |= DCX_INTERSECTRGN | DCX_KEEPCLIPRGN;
        ClipRegion = Wnd->hrgnUpdate;
        bUpdateVisRgn = TRUE;
    }

    if (ClipRegion == HRGN_WINDOW)
    {
        if (!(Flags & DCX_WINDOW))
        {
            Dce->hrgnClip = NtGdiCreateRectRgn(
                Wnd->rcClient.left,
                Wnd->rcClient.top,
                Wnd->rcClient.right,
                Wnd->rcClient.bottom);
        }
        else
        {
            Dce->hrgnClip = NtGdiCreateRectRgn(
                Wnd->rcWindow.left,
                Wnd->rcWindow.top,
                Wnd->rcWindow.right,
                Wnd->rcWindow.bottom);
        }
        Dce->DCXFlags &= ~DCX_KEEPCLIPRGN;
        bUpdateVisRgn = TRUE;
    }
    else if (ClipRegion != NULL)
    {
        if (Dce->hrgnClip != NULL)
        {
            ERR("Should not be called!!\n");
            GreDeleteObject(Dce->hrgnClip);
            Dce->hrgnClip = NULL;
        }
        Dce->hrgnClip = ClipRegion;
        bUpdateVisRgn = TRUE;
    }

    if (IntGdiSetHookFlags(Dce->hDC, DCHF_VALIDATEVISRGN)) bUpdateVisRgn = TRUE;

    DceSetDrawable(Wnd, Dce->hDC, Flags, UpdateClipOrigin);

    if (bUpdateVisRgn) DceUpdateVisRgn(Dce, Wnd, Flags);

    if (Dce->DCXFlags & DCX_CACHE)
    {
        TRACE("ENTER!!!!!! DCX_CACHE!!!!!!   hDC-> %p\n", Dce->hDC);
        // Need to set ownership so Sync dcattr will work.
        GreSetDCOwner(Dce->hDC, GDI_OBJ_HMGR_POWNED);
        Dce->ptiOwner = GetW32ThreadInfo(); // Set the temp owning
    }

    if (Wnd &&
        Wnd->ExStyle & WS_EX_LAYOUTRTL &&
        !(Flags & DCX_KEEPLAYOUT))
    {
        NtGdiSetLayout(Dce->hDC, -1, LAYOUT_RTL);
    }

    if (Dce->DCXFlags & DCX_PROCESSOWNED)
    {
        ppi = PsGetCurrentProcessWin32Process();
        ppi->W32PF_flags |= W32PF_OWNDCCLEANUP;
        Dce->ptiOwner = NULL;
        Dce->ppiOwner = ppi;
    }

    return(Dce->hDC);
}

void
Test_GetDCEx_CS_SwitchedStyle()
{
    static const LPCWSTR pszClassName = L"TestClass_CS_SwitchedStyle";
    ATOM atomClass;
    HWND hwnd1, hwnd2;
    HDC hdc1, hdc2, hdcClass;

    /* Create a class with CS_CLASSDC */
    atomClass = RegisterClassHelper(pszClassName, CS_CLASSDC, WndProc);
    ok(atomClass != 0, "Failed to register class\n");

    /* Create the 2 windows */
    hwnd1 = CreateWindowHelper(pszClassName, L"Test Window1");
    ok(hwnd1 != NULL, "Failed to create hwnd1\n");
    hwnd2 = CreateWindowHelper(pszClassName, L"Test Window2");
    ok(hwnd2 != NULL, "Failed to create hwnd2\n");

    /* Get the class DC from the Windows */
    hdc1 = MyGetDCEx(hwnd1, NULL, DCX_USESTYLE);
    hdc2 = GetDCEx(hwnd2, NULL, DCX_USESTYLE);
    hdcClass = hdc1;
    ok(hdc1 == hdc2, "Expected same DC\n");
    ok(ReleaseDC(hwnd2, hdc2) == TRUE, "ReleaseDC failed\n");

    /* Switch the class to CS_OWNDC */
    ok(SetClassLongPtrA(hwnd1, GCL_STYLE, CS_OWNDC) == CS_CLASSDC, "unexpected style\n");
    ok(GetClassLongPtrA(hwnd1, GCL_STYLE) == CS_OWNDC, "class style not set\n");

    /* Release the DC and try to get another one, this should fail now */
    ok(ReleaseDC(hwnd1, hdc1) == TRUE, "ReleaseDC failed\n");
    hdc1 = GetDCEx(hwnd1, NULL, DCX_USESTYLE);
    ok(hdc1 == NULL, "GetDCEx should fail\n");

    /* Destroy the 1st window, this should move it's own DC to the cache,
       but not the class DC, but they are the same, so... */
    DestroyWindow(hwnd1);

    /* Create another window, this time it should have it's own DC */
    hwnd1 = CreateWindowHelper(pszClassName, L"Test Window1");
    ok(hwnd1 != NULL, "Failed to create hwnd1\n");
    hdc1 = GetDCEx(hwnd1, NULL, DCX_USESTYLE);
    ok(hdc1 != NULL, "GetDXEx failed\n");
    ok(hdc1 != hdc2, "Should get different DC\n");

    /* Switch the class back to CS_CLASSDC */
    ok(SetClassLongPtrA(hwnd2, GCL_STYLE, CS_CLASSDC) == CS_OWNDC, "unexpected style\n");
    ok(GetClassLongPtrA(hwnd2, GCL_STYLE) == CS_CLASSDC, "class style not set\n");

    /* Get the 2nd window's DC, this should still be the class DC */
    hdc2 = GetDCEx(hwnd2, NULL, DCX_USESTYLE);
    ok(hdc2 != hdc1, "Expected different DC\n");
    ok(hdc2 == hdcClass, "Expected class DC\n");

    DestroyWindow(hwnd1);
    DestroyWindow(hwnd2);
    ok(UnregisterClass(pszClassName, GetModuleHandleA(0)) == TRUE,
        "UnregisterClass failed\n");
}

int main()
{
    Test_GetDCEx_CS_SwitchedStyle();
}

