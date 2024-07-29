#define TRUE 1
#define FALSE 0
#define NULL 0

#define FASTCALL __fastcall
#define VOID void
#define OPTIONAL
typedef int DCE_TYPE;

#define IDC_ARROW ((const char*)32512)
#define WHITE_BRUSH 0
#define WS_OVERLAPPEDWINDOW 0x00CF0000L
#define CW_USEDEFAULT ((int)0x80000000)
#define DCX_WINDOW 0x00000001
#define DCX_INTERSECTRGN 0x00000080
#define DCX_PARENTCLIP 0x00000020
#define DCX_CACHE 0x00000002
#define SIMPLEREGION 2
#define RGN_OR 2
#define CS_OWNDC 0x0020
#define CS_CLASSDC 0x0040
#define GCL_STYLE (-26)
#define WM_USER 0x0400

#define STM_GETICON 369
#define STM_GETIMAGE 371
#define STM_SETICON 368
#define STM_SETIMAGE 370
#define STN_CLICKED 0
#define STN_DBLCLK 1
#define STN_DISABLE 3
#define STN_ENABLE 2
#define DM_GETDEFID WM_USER
#define DM_SETDEFID (WM_USER+1)
#define DM_REPOSITION (WM_USER+2)
#define PSM_PAGEINFO (WM_USER+100)
#define PSM_SHEETINFO (WM_USER+101)
#define PSI_SETACTIVE 1
#define PSI_KILLACTIVE 2
#define PSI_APPLY 3
#define PSI_RESET 4
#define PSI_HASHELP 5
#define PSI_HELP 6
#define PSI_CHANGED 1
#define PSI_GUISTART 2
#define PSI_REBOOT 3
#define PSI_GETSIBLINGS 4
#define DCX_WINDOW 1
#define DCX_CACHE 2
#define DCX_PARENTCLIP 32
#define DCX_CLIPSIBLINGS 16
#define DCX_CLIPCHILDREN 8
#define DCX_NORESETATTRS 4
#define DCX_INTERSECTUPDATE 0x200
#define DCX_LOCKWINDOWUPDATE 0x400
#define DCX_EXCLUDERGN 64
#define DCX_INTERSECTRGN 128
#define DCX_VALIDATE 0x200000
#define DCX_EXCLUDEUPDATE   0x100
#define GMDI_GOINTOPOPUPS 2
#define GMDI_USEDISABLED 1
#define FKF_AVAILABLE 2
#define FKF_CLICKON 64
#define FKF_FILTERKEYSON 1
#define FKF_HOTKEYACTIVE 4
#define FKF_HOTKEYSOUND 16
#define FKF_CONFIRMHOTKEY 8
#define FKF_INDICATOR 32
#define HCF_HIGHCONTRASTON 1
#define HCF_AVAILABLE 2
#define HCF_HOTKEYACTIVE 4
#define HCF_CONFIRMHOTKEY 8
#define HCF_HOTKEYSOUND 16
#define HCF_INDICATOR 32
#define HCF_HOTKEYAVAILABLE 64

#define DCX_WINDOW 0x00000001
#define DCX_CLIPCHILDREN 0x00000020
#define DCX_CLIPSIBLINGS 0x00000010

// Dummy konstanty
#define PagedPool 0
#define USERTAG_DCE 0
#define DCE_WINDOW_DC 1
#define DCE_CLASS_DC 2
#define DCE_CACHE_DC 3
#define DCX_CACHE 0x00200000
#define DCX_DCEEMPTY 0x00000001
#define DCX_DCEBUSY 0x00000002
#define WS_CLIPCHILDREN 0x02000000
#define WS_CLIPSIBLINGS 0x04000000
#define GDI_OBJ_HMGR_NONE 0
#define TRACE printf
#define OPTIONAL
#define FASTCALL __fastcall

#define APIENTRY

#define DCX_USESTYLE     0x00010000
#define DCX_KEEPCLIPRGN  0x00040000
#define DCX_KEEPLAYOUT   0x40000000
#define DCX_PROCESSOWNED 0x80000000

#define 	DCHC_INVALIDVISRGN   0x0001
#define 	DCHC_DELETEDC   0x0002
#define 	DCHF_INVALIDATEVISRGN   0x0001
#define 	DCHF_VALIDATEVISRGN   0x0002
#define 	DCX_DCEEMPTY   0x00000800
#define 	DCX_DCEBUSY   0x00001000
#define 	DCX_DCEDIRTY   0x00002000
#define 	DCX_LAYEREDWIN   0x00004000
#define 	DCX_DCPOWNED   0x00008000
#define 	DCX_NOCLIPCHILDREN   0x00080000
#define 	DCX_NORECOMPUTE   0x00100000
#define 	DCX_INDESTROY   0x00400000

#define CS_BYTEALIGNCLIENT 4096
#define CS_BYTEALIGNWINDOW 8192
#define CS_KEYCVTWINDOW 4
#define CS_NOKEYCVT 256 // Class Name to Version
#define CS_CLASSDC 64
#define CS_DBLCLKS 8
#define CS_GLOBALCLASS 16384
#define CS_HREDRAW 2
#define CS_NOCLOSE 512
#define CS_OWNDC 32
#define CS_PARENTDC 128
#define CS_SAVEBITS 2048
#define CS_VREDRAW 1
#define CS_IME 0x10000
#define CS_DROPSHADOW 0x20000

#define WOC_RGN_CLIENT_DELTA              0x00000001
#define WOC_RGN_CLIENT                    0x00000002
#define WOC_RGN_SURFACE_DELTA             0x00000004
#define WOC_RGN_SURFACE                   0x00000008
#define WOC_CHANGED                       0x00000010
#define WOC_DELETE                        0x00000020
#define WOC_DRAWN                         0x00000040
#define WOC_SPRITE_OVERLAP                0x00000080
#define WOC_SPRITE_NO_OVERLAP             0x00000100

#define RGN_AND 1
#define RGN_COPY    5
#define RGN_DIFF    4
#define RGN_OR  2
#define RGN_XOR 3

#define WS_OVERLAPPED   0x00000000L
#define WS_POPUP        0x80000000L
#define WS_CHILD        0x40000000L
#define WS_CLIPSIBLINGS 0x04000000L
#define WS_CLIPCHILDREN 0x02000000L
#define WS_VISIBLE      0x10000000L
#define WS_DISABLED     0x08000000L
#define WS_MINIMIZE     0x20000000L
#define WS_MAXIMIZE     0x01000000L
#define WS_CAPTION      0x00C00000L
#define WS_BORDER       0x00800000L
#define WS_DLGFRAME     0x00400000L
#define WS_VSCROLL      0x00200000L
#define WS_HSCROLL      0x00100000L
#define WS_SYSMENU      0x00080000L
#define WS_THICKFRAME   0x00040000L
#define WS_MINIMIZEBOX  0x00020000L
#define WS_MAXIMIZEBOX  0x00010000L
#define WS_GROUP        0x00020000L
#define WS_TABSTOP      0x00010000L

#define WS_EX_ACCEPTFILES 16
#define WS_EX_APPWINDOW 0x40000
#define WS_EX_CLIENTEDGE 512
#define WS_EX_COMPOSITED 0x2000000 /* XP */
#define WS_EX_CONTEXTHELP 0x400
#define WS_EX_CONTROLPARENT 0x10000
#define WS_EX_DLGMODALFRAME 1
#define WS_EX_LAYERED 0x80000   /* w2k */
#define WS_EX_LAYOUTRTL 0x400000 /* w98, w2k */
#define WS_EX_LEFT  0
#define WS_EX_LEFTSCROLLBAR 0x4000
#define WS_EX_LTRREADING    0
#define WS_EX_MDICHILD  64
#define WS_EX_NOACTIVATE 0x8000000 /* w2k */
#define WS_EX_NOINHERITLAYOUT 0x100000 /* w2k */
#define WS_EX_NOPARENTNOTIFY    4
#define WS_EX_OVERLAPPEDWINDOW  0x300
#define WS_EX_PALETTEWINDOW 0x188
#define WS_EX_RIGHT 0x1000
#define WS_EX_RIGHTSCROLLBAR    0
#define WS_EX_RTLREADING    0x2000
#define WS_EX_STATICEDGE    0x20000
#define WS_EX_TOOLWINDOW    128
#define WS_EX_TOPMOST   8
#define WS_EX_TRANSPARENT   32
#define WS_EX_WINDOWEDGE    256

#define 	W32PF_CONSOLEAPPLICATION   0x00000001
#define 	W32PF_FORCEOFFFEEDBACK   0x00000002
#define 	W32PF_STARTGLASS   0x00000004
#define 	W32PF_WOW   0x00000008
#define 	W32PF_READSCREENACCESSGRANTED   0x00000010
#define 	W32PF_INITIALIZED   0x00000020
#define 	W32PF_APPSTARTING   0x00000040
#define 	W32PF_WOW64   0x00000080
#define 	W32PF_ALLOWFOREGROUNDACTIVATE   0x00000100
#define 	W32PF_OWNDCCLEANUP   0x00000200
#define 	W32PF_SHOWSTARTGLASSCALLED   0x00000400
#define 	W32PF_FORCEBACKGROUNDPRIORITY   0x00000800
#define 	W32PF_TERMINATED   0x00001000
#define 	W32PF_CLASSESREGISTERED   0x00002000
#define 	W32PF_THREADCONNECTED   0x00004000
#define 	W32PF_PROCESSCONNECTED   0x00008000
#define 	W32PF_SETFOREGROUNDALLOWED   0x00008000
#define 	W32PF_WAKEWOWEXEC   0x00010000
#define 	W32PF_WAITFORINPUTIDLE   0x00020000
#define 	W32PF_IOWINSTA   0x00040000
#define 	W32PF_CONSOLEFOREGROUND   0x00080000
#define 	W32PF_OLELOADED   0x00100000
#define 	W32PF_SCREENSAVER   0x00200000
#define 	W32PF_IDLESCREENSAVER   0x00400000
#define 	W32PF_DISABLEIME   0x00800000
#define 	W32PF_ICONTITLEREGISTERED   0x10000000
#define 	W32PF_DPIAWARE   0x20000000
#define 	W32PF_NOWINDOWGHOSTING   (0x01000000)
#define 	W32PF_MANUALGUICHECK   (0x02000000)
#define 	W32PF_CREATEDWINORDC   (0x04000000)
#define 	W32PF_APIHOOKLOADED   (0x08000000)

#define LAYOUT_LTR 0
#define LAYOUT_RTL 1 // Right to left
#define LAYOUT_BTT 2 // Bottom to top
#define LAYOUT_VBH 4 // Vertical before horizontal
#define LAYOUT_ORIENTATIONMASK (LAYOUT_RTL | LAYOUT_BTT | LAYOUT_VBH)
#define LAYOUT_BITMAPORIENTATIONPRESERVED 8

#define HRGN_NULL    ((HRGN)0) /* NULL empty region */
#define HRGN_WINDOW  ((HRGN)1) /* region from window rcWindow */
#define HRGN_MONITOR ((HRGN)2) /* region from monitor region. */

#define 	GDI_OBJ_HMGR_PUBLIC   0 /* Public owner, Open access? */
#define 	GDI_OBJ_HMGR_POWNED   0x80000002 /* Set to current owner. */
#define 	GDI_OBJ_HMGR_NONE   0x80000012 /* No owner, Open access? */
#define 	GDI_OBJ_HMGR_RESTRICTED   0x80000022 /* Restricted? */

#define BOOLEAN int

typedef void* HANDLE;

typedef void* PREGION;
typedef void* HWND;

#if defined(_LP64) || defined(_WIN64)
typedef int64_t LONG_PTR, * PLONG_PTR, INT_PTR, * PINT_PTR;
typedef uint64_t ULONG_PTR, DWORD_PTR, * PULONG_PTR, UINT_PTR, * PUINT_PTR;
#else
typedef long LONG_PTR, * PLONG_PTR, INT_PTR, * PINT_PTR;
typedef unsigned long ULONG, ULONG_PTR, DWORD_PTR, * PULONG_PTR, UINT_PTR, * PUINT_PTR;
#endif

#define CONTAINING_RECORD(address, type, field)  ((type *)(((ULONG_PTR)address) - (ULONG_PTR)(&(((type *)0)->field))))

#ifndef CALLBACK
#define CALLBACK __stdcall
#endif

typedef void* HWND;
typedef unsigned int UINT;
typedef unsigned long WPARAM;
typedef long LPARAM;
typedef long LRESULT;
typedef const char* PSTR;
typedef unsigned int UINT;
typedef unsigned short ATOM;
typedef void* HINSTANCE;
typedef void* HICON;
typedef void* HCURSOR;
typedef void* HBRUSH;
typedef long LRESULT;
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef const char* PSTR;
typedef const char* PSZ;
typedef unsigned int UINT;
typedef unsigned short ATOM;
typedef void* HINSTANCE;
typedef void* HICON;
typedef void* HCURSOR;
typedef void* HBRUSH;
typedef void* HWND;
typedef void* HMENU;
typedef void* HDC;
typedef void* HRGN;
typedef long LRESULT;
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef int BOOL;

typedef int INT;
typedef long NTSTATUS;

typedef unsigned short *PWSTR;
typedef unsigned short USHORT;

// Definice struktury WNDCLASSA
typedef struct _WNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    const char* lpszMenuName;
    const char* lpszClassName;
} WNDCLASSA, * PWNDCLASSA;

HINSTANCE GetModuleHandleA(const char* lpModuleName) { return 0; };
HCURSOR LoadCursorA(HINSTANCE hInstance, const char* lpCursorName) { return 0; };
HBRUSH GetStockObject(int i) { return 0; };
ATOM RegisterClassA(const WNDCLASSA* lpWndClass) { return 0; };

// Definice typù používaných ve funkcích
typedef const char* PSTR;
typedef const char* PSZ;
typedef unsigned int UINT;
typedef unsigned short ATOM;
typedef void* HINSTANCE;
typedef void* HICON;
typedef void* HCURSOR;
typedef void* HBRUSH;
typedef void* HWND;
typedef void* HMENU;
typedef long LRESULT;
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

// Definice makra CALLBACK
#ifndef CALLBACK
#define CALLBACK __stdcall
#endif

HWND CreateWindowA(const char* lpClassName,
    const char* lpWindowName,
    UINT dwStyle,
    int x,
    int y,
    int nWidth,
    int nHeight,
    HWND hWndParent,
    HMENU hMenu,
    HINSTANCE hInstance,
    void* lpParam) {
    return 0;
};

// Makra pro IDC_ARROW, WHITE_BRUSH, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT
#define IDC_ARROW ((const char*)32512)
#define WHITE_BRUSH 0
#define WS_OVERLAPPEDWINDOW 0x00CF0000L
#define CW_USEDEFAULT ((int)0x80000000)

#ifndef CALLBACK
#define CALLBACK __stdcall
#endif

HINSTANCE GetModuleHandleA(const char* lpModuleName);
HCURSOR LoadCursorA(HINSTANCE hInstance, const char* lpCursorName);
HBRUSH GetStockObject(int i);
ATOM RegisterClassA(const WNDCLASSA* lpWndClass);
HWND CreateWindowA(const char* lpClassName,
    const char* lpWindowName,
    UINT dwStyle,
    int x,
    int y,
    int nWidth,
    int nHeight,
    HWND hWndParent,
    HMENU hMenu,
    HINSTANCE hInstance,
    void* lpParam);
HDC GetDCEx(HWND hWnd, HRGN hrgnClip, UINT flags) { return 0; };
HRGN CreateRectRgn(int left, int top, int right, int bottom) { return 0; };
int ReleaseDC(HWND hWnd, HDC hDC) { return 0; };
int CombineRgn(HRGN hrgnDst, HRGN hrgnSrc1, HRGN hrgnSrc2, int fnCombineMode) { return 0; };
BOOL DestroyWindow(HWND hWnd) { return 0; };
BOOL UnregisterClass(const char* lpClassName, HINSTANCE hInstance) { return 0; };

// Makra pro IDC_ARROW, WHITE_BRUSH, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, DCX_WINDOW, DCX_INTERSECTRGN, DCX_PARENTCLIP, DCX_CACHE
#define IDC_ARROW ((const char*)32512)
#define WHITE_BRUSH 0
#define WS_OVERLAPPEDWINDOW 0x00CF0000L
#define CW_USEDEFAULT ((int)0x80000000)
#define DCX_WINDOW 0x00000001
#define DCX_INTERSECTRGN 0x00000080
#define DCX_PARENTCLIP 0x00000020
#define DCX_CACHE 0x00000002
#define SIMPLEREGION 2

#define CODE_SEG(segment)

typedef const char* PSTR;
typedef const char* PSZ;
typedef unsigned int UINT;
typedef unsigned short ATOM;
typedef void* HINSTANCE;
typedef void* HICON;
typedef void* HCURSOR;
typedef void* HBRUSH;
typedef void* HWND;
typedef void* HMENU;
typedef void* HDC;
typedef void* HRGN;
typedef long LRESULT;
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef int BOOL;
typedef unsigned long WPARAM;
typedef long LPARAM;
typedef unsigned long DWORD;
typedef long LONG_PTR;
typedef long LONG;

// Definice makra CALLBACK
#ifndef CALLBACK
#define CALLBACK __stdcall
#endif

LONG_PTR SetClassLongPtrA(HWND hWnd, int nIndex, LONG_PTR dwNewLong) { return 0; };
LONG_PTR GetClassLongPtrA(HWND hWnd, int nIndex) { return 0; };
LRESULT SendMessage(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) { return 0; };

// Makro pro ok
#define ok(expr, msg) do { if (!(expr)) { printf("%s\n", msg); } } while (0)

typedef struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    PWSTR Buffer;
} UNICODE_STRING;

typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY* Flink;
    struct _LIST_ENTRY* Blink;
} LIST_ENTRY, * PLIST_ENTRY;

#define RTL_CONSTANT_STRING(s) { sizeof(s) - sizeof((s)[0]), sizeof(s), s }
#define NTAPI __stdcall
#define FASTCALL __fastcall
#define VOID void
#define STATUS_SUCCESS 0x00000000L
#define VIDEO_DRIVER_INIT_FAILURE 0x00000000L
#define USER_VERSION 0x00000000L

#define DCX_CLIPSIBLINGS 0x00000010
#define DCX_CLIPCHILDREN 0x00000020
#define DCX_NORESETATTRS 0x00000040
#define DCX_LOCKWINDOWUPDATE 0x00000400
#define DCX_LAYEREDWIN 0x00080000
#define DCX_CACHE 0x00200000
#define DCX_WINDOW 0x00000001
#define DCX_PARENTCLIP 0x00000020

#define RTL_CONSTANT_STRING(s) { (USHORT)(sizeof(s) - sizeof((s)[0])), (USHORT)sizeof(s), (PWSTR)(s) }

typedef struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
} RECT, * PRECT, * NPRECT, * LPRECT;

typedef const RECT* LPCRECT;

typedef struct _RECTL {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
} RECTL, * PRECTL, * LPRECTL;

typedef struct _W32PROCESS
{
    //PEPROCESS     peProcess;
    DWORD         RefCount;
    ULONG         W32PF_flags;
    //PKEVENT       InputIdleEvent;
    DWORD         StartCursorHideTime;
    struct _W32PROCESS* NextStart;
    //PVOID         pDCAttrList;
    //PVOID         pBrushAttrList;
    DWORD         W32Pid;
    LONG          GDIHandleCount;
    LONG          UserHandleCount;
    //PEX_PUSH_LOCK GDIPushLock;  /* Locking Process during access to structure. */
    //RTL_AVL_TABLE GDIEngUserMemAllocTable;  /* Process AVL Table. */
    LIST_ENTRY    GDIDcAttrFreeList;
    LIST_ENTRY    GDIBrushAttrFreeList;
} W32PROCESS, * PW32PROCESS, *PVOID, *PPROCESSINFO;

typedef const RECTL* LPCRECTL;
//typedef void *PVOID;

typedef struct _CLS
{
    struct _CLS* pclsNext;
    //RTL_ATOM atomClassName;
    ATOM atomNVClassName;
    DWORD fnid;
    struct _DESKTOP* rpdeskParent;
    PVOID pdce;
    DWORD CSF_flags;
    PSTR  lpszClientAnsiMenuName; /* For client use */
    PWSTR lpszClientUnicodeMenuName; /* "   "      " */
    //PCALLPROCDATA spcpdFirst;
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

typedef struct _HEAD
{
    HANDLE h;
    DWORD cLockObj;
} HEAD, * PHEAD;

typedef struct _THROBJHEAD
{
    HANDLE h;
    DWORD cLockObj;
    struct _THREADINFO* pti;
} THROBJHEAD, * PTHROBJHEAD;

typedef struct _THRDESKHEAD
{
    HANDLE h;
    DWORD cLockObj;
    struct _THREADINFO* pti;
    struct _DESKTOP* rpdesk;
    PVOID pSelf;
} THRDESKHEAD, * PTHRDESKHEAD;

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
    RECTL rcWindow;
    RECTL rcClient;
    WNDPROC lpfnWndProc;
    /* Pointer to the window class. */
    PCLS pcls;
    HRGN hrgnUpdate;
    /* Property list head.*/
    LIST_ENTRY PropListHead;
    ULONG PropListItems;
    /* Scrollbar info */
    //PSBINFO pSBInfo;
    /* system menu handle. */
    HMENU SystemMenu;
    //PMENU spmenuSys;
    /* Window menu handle or window id */
    UINT_PTR IDMenu; // Use spmenu
    //PMENU spmenu;
    HRGN hrgnClip;
    HRGN hrgnNewFrame;
    /* Window name. */
    //LARGE_UNICODE_STRING strName;
    /* Size of the extra data associated with the window. */
    ULONG cbwndExtra;
    struct _WND* spwndLastActive;
    //HIMC hImc; // Input context associated with this window.
    LONG_PTR dwUserData;
    PVOID pActCtx;
    //PD3DMATRIX pTransForm;
    struct _WND* spwndClipboardListener;
    DWORD ExStyle2;

    /* ReactOS */
    struct
    {
        RECT NormalRect;
        //POINT IconPos;
        //POINT MaxPos;
        UINT flags; /* WPF_ flags. */
    } InternalPos;

    UINT Unicode : 1; /* !(WNDS_ANSICREATOR|WNDS_ANSIWINDOWPROC) ? */
    UINT InternalPosInitialized : 1;
    UINT HideFocus : 1; /* WS_EX_UISTATEFOCUSRECTHIDDEN ? */
    UINT HideAccel : 1; /* WS_EX_UISTATEKBACCELHIDDEN ? */

    /* Scrollbar info */
    //PSBINFOEX pSBInfoex; // convert to PSBINFO
    /* Entry in the list of thread windows. */
    LIST_ENTRY ThreadListEntry;

    PVOID DialogPointer;
} WND, * PWND;

typedef int PTHREADINFO;

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
    PTHREADINFO  ptiOwner; // Ukazatel na vlákno vlastníka
    PPROCESSINFO ppiOwner; // Ukazatel na proces vlastníka
    struct _MONITOR* pMonitor;
} DCE, * PDCE;

PVOID
NTAPI
PsGetCurrentProcessWin32Process(VOID)
{
    return NULL;// PsGetCurrentProcess()->Win32Process;
}

typedef enum _DCFLAGS
{
    DC_DISPLAY = 0x0001,
    DC_DIRECT = 0x0002,
    DC_CANCELED = 0x0004,
    DC_PERMANANT = 0x0008,
    DC_DIRTY_RAO = 0x0010,
    DC_ACCUM_WMGR = 0x0020,
    DC_ACCUM_APP = 0x0040,
    DC_RESET = 0x0080,
    DC_SYNCHRONIZEACCESS = 0x0100,
    DC_EPSPRINTINGESCAPE = 0x0200,
    DC_TEMPINFODC = 0x0400,
    DC_FULLSCREEN = 0x0800,
    DC_IN_CLONEPDEV = 0x1000,
    DC_REDIRECTION = 0x2000,
    DC_SHAREACCESS = 0x4000,
#if DBG
    DC_PREPARED = 0x8000
#endif
} DCFLAGS;

typedef struct _POINTL {
    LONG x;
    LONG y;
} POINTL, * PPOINTL;

#define _Notnull_

typedef struct _DCLEVEL
{
    //HPALETTE          hpal;
    struct _PALETTE* ppal;
    PVOID             pColorSpace; /* COLORSPACE* */
    LONG              lIcmMode;
    LONG              lSaveDepth;
    DWORD             unk1_00000000;
    //HGDIOBJ           hdcSave;
    POINTL            ptlBrushOrigin;
    //PBRUSH            pbrFill;
    //PBRUSH            pbrLine;
    _Notnull_ struct _LFONT* plfnt; /* LFONT* (TEXTOBJ*) */
    //HGDIOBJ           hPath; /* HPATH */
    //FLONG             flPath;
    //LINEATTRS         laPath; /* 0x20 bytes */
    PREGION           prgnClip;
    PREGION           prgnMeta;
    //COLORADJUSTMENT   ca;
    //FLONG             flFontState;
    //UNIVERSAL_FONT_ID ufi;
    //UNIVERSAL_FONT_ID ufiLoc[4]; /* Local List. */
    //UNIVERSAL_FONT_ID* pUFI;
    ULONG             uNumUFIs;
    BOOL              ufiSet;
    //FLONG             fl;
    //FLONG             flBrush;
    //MATRIX            mxWorldToDevice;
    //MATRIX            mxDeviceToWorld;
    //MATRIX            mxWorldToPage;
    //FLOATOBJ          efM11PtoD;
    //FLOATOBJ          efM22PtoD;
    //FLOATOBJ          efDxPtoD;
    //FLOATOBJ          efDyPtoD;
    //FLOATOBJ          efM11_TWIPS;
    //FLOATOBJ          efM22_TWIPS;
    //FLOATOBJ          efPr11;
    //FLOATOBJ          efPr22;
    //PSURFACE          pSurface;
    //SIZE              sizl;
} DCLEVEL, * PDCLEVEL;

typedef struct _BASEOBJECT {
    int a;
    int hHmgr;
} BASEOBJECT;

typedef struct _DC
{
    /* Header for all gdi objects in the handle table.
       Do not (re)move this. */
    BASEOBJECT  BaseObject;

    //DHPDEV      dhpdev;   /* <- PDEVOBJ.hPDev DHPDEV for device. */
    //DCTYPE      dctype;
    INT         fs;
    //PPDEVOBJ    ppdev;
    PVOID       hsem;   /* PERESOURCE aka HSEMAPHORE */
    //FLONG       flGraphicsCaps;
    //FLONG       flGraphicsCaps2;
    //_Notnull_ PDC_ATTR    pdcattr;
    DCLEVEL     dclevel;
    //DC_ATTR     dcattr;
    HDC         hdcNext;
    HDC         hdcPrev;
    RECTL       erclClip;
    POINTL      ptlDCOrig;
    RECTL       erclWindow;
    RECTL       erclBounds;
    RECTL       erclBoundsApp;
    PREGION     prgnAPI;
    //_Notnull_ PREGION     prgnVis; /* Visible region (must never be 0) */
    PREGION     prgnRao;
    //POINTL      ptlFillOrigin;
    //EBRUSHOBJ   eboFill;
    //EBRUSHOBJ   eboLine;
    //EBRUSHOBJ   eboText;
    //EBRUSHOBJ   eboBackground;
    //HFONT       hlfntCur;
    //FLONG       flSimulationFlags;
    LONG        lEscapement;
    PVOID       prfnt;    /* RFONT* */
    //XCLIPOBJ    co;       /* CLIPOBJ */
    PVOID       pPFFList; /* PPFF* */
    PVOID       pClrxFormLnk;
    INT         ipfdDevMax;
    ULONG       ulCopyCount;
    PVOID       pSurfInfo;
    //POINTL      ptlDoBanding;
} DC, *PDC;
// typedef struct _DC *PDC;

typedef struct _WNDOBJ {
    //CLIPOBJ  coClient;
    PVOID  pvConsumer;
    RECTL  rclClient;
    //SURFOBJ* psoOwner;
} WNDOBJ, * PWNDOBJ;

typedef struct _CLIPOBJ {
    ULONG  iUniq;
    RECTL  rclBounds;
    //BYTE  iDComplexity;
    //BYTE  iFComplexity;
    //BYTE  iMode;
    //BYTE  fjOptions;
} CLIPOBJ;

typedef struct _RWNDOBJ {
    PVOID   pvConsumer;
    RECTL   rclClient;
    //SURFOBJ* psoOwner;
} RWNDOBJ;

#ifdef __cplusplus
typedef struct _XCLIPOBJ : _CLIPOBJ, _RWNDOBJ
{
#else
typedef struct _XCLIPOBJ
{
    CLIPOBJ;
    RWNDOBJ;
#endif
    struct _REGION* pClipRgn;    /* prgnRao_ or (prgnVis_ if (prgnRao_ == z)) */
    //
    RECTL   rclClipRgn;
    //PVOID   pscanClipRgn; /* Ptr to regions rect buffer based on iDirection. */
    RECTL* Rects;
    DWORD   cScan;
    DWORD   reserved;
    ULONG   EnumPos;
    LONG    lscnSize;
    ULONG   EnumMax;
    ULONG   iDirection;
    ULONG   iType;
    DWORD   reserved1;
    LONG    lUpDown;
    DWORD   reserved2;
    BOOL    bAll;
    //
    DWORD   RectCount;   /* count/mode based on # of rect in regions scan. */
    PVOID   pDDA;        /* Pointer to a large drawing structure. */
} XCLIPOBJ, * PXCLIPOBJ;

#ifdef __cplusplus
typedef struct _EWNDOBJ : _XCLIPOBJ
{
#else
typedef struct _EWNDOBJ
{
    XCLIPOBJ;
#endif
    /* Extended WNDOBJ part */
    HWND              Hwnd;
    //WNDOBJCHANGEPROC  ChangeProc;
    //FLONG             Flags;
    int               PixelFormat;
} EWNDOBJ, * PEWNDOBJ;

ATOM AtomWndObj;        // Window Object atom.

typedef void* HPALETTE;

typedef unsigned long ULONG;

#define IN
#define DECLSPEC_NORETURN

VOID NTAPI KeBugCheckWithTf(
    ULONG BugCheckCode,
    ULONG_PTR BugCheckParameter1,
    ULONG_PTR BugCheckParameter2,
    ULONG_PTR BugCheckParameter3,
    ULONG_PTR BugCheckParameter4,
    PVOID AdditionalData) {};

DECLSPEC_NORETURN
VOID
NTAPI
KeBugCheckEx(IN ULONG BugCheckCode,
    IN ULONG_PTR BugCheckParameter1,
    IN ULONG_PTR BugCheckParameter2,
    IN ULONG_PTR BugCheckParameter3,
    IN ULONG_PTR BugCheckParameter4)
{
    /* Call the internal API */
    KeBugCheckWithTf(BugCheckCode,
        BugCheckParameter1,
        BugCheckParameter2,
        BugCheckParameter3,
        BugCheckParameter4,
        NULL);
}

void InsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY Entry) {
    PLIST_ENTRY _EX_Flink;
    PLIST_ENTRY _EX_ListHead;
    _EX_ListHead = (ListHead);
    _EX_Flink = _EX_ListHead->Flink;
    (Entry)->Flink = _EX_Flink;
    (Entry)->Blink = _EX_ListHead;
    _EX_Flink->Blink = (Entry);
    _EX_ListHead->Flink = (Entry);
    }

static __inline
VOID
InitializeListHead(
    IN PLIST_ENTRY ListHead
)
{
    ListHead->Flink = ListHead->Blink = ListHead;
}

BOOL co_AddGuiApp(PPROCESSINFO W32Data)
{
    return FALSE;
}

void RemoveGuiApp(PPROCESSINFO W32Data)
{
}

BOOL FASTCALL
co_IntGraphicsCheck(BOOL Create)
{
    PPROCESSINFO W32Data;

    W32Data = PsGetCurrentProcessWin32Process();
    if (Create)
    {
        if (!(W32Data->W32PF_flags & W32PF_CREATEDWINORDC) && !(W32Data->W32PF_flags & W32PF_MANUALGUICHECK))
        {
            return co_AddGuiApp(W32Data);
        }
    }
    else
    {
        if ((W32Data->W32PF_flags & W32PF_CREATEDWINORDC) && !(W32Data->W32PF_flags & W32PF_MANUALGUICHECK))
        {
            RemoveGuiApp(W32Data);
        }
    }

    return TRUE;
}

typedef UNICODE_STRING* PUNICODE_STRING;

#define CONST

typedef struct _devicemodeW {
    //WCHAR   dmDeviceName[CCHDEVICENAME];
    //WORD   dmSpecVersion;
    //WORD   dmDriverVersion;
    //WORD   dmSize;
    //WORD   dmDriverExtra;
    DWORD  dmFields;
    /*_ANONYMOUS_UNION union {
        _ANONYMOUS_STRUCT struct {
            short dmOrientation;
            short dmPaperSize;
            short dmPaperLength;
            short dmPaperWidth;
            short dmScale;
            short dmCopies;
            short dmDefaultSource;
            short dmPrintQuality;
        } DUMMYSTRUCTNAME1;
        struct {
            POINTL dmPosition;
            DWORD  dmDisplayOrientation;
            DWORD  dmDisplayFixedOutput;
        } DUMMYSTRUCTNAME2;
    } DUMMYUNIONNAME1;*/
    short  dmColor;
    short  dmDuplex;
    short  dmYResolution;
    short  dmTTOption;
    short  dmCollate;
    //WCHAR  dmFormName[CCHFORMNAME];
    //WORD   dmLogPixels;
    DWORD  dmBitsPerPel;
    DWORD  dmPelsWidth;
    DWORD  dmPelsHeight;
    /*_ANONYMOUS_UNION union {
        DWORD  dmDisplayFlags;
        DWORD  dmNup;
    } DUMMYUNIONNAME2;*/
    DWORD  dmDisplayFrequency;
#if(WINVER >= 0x0400)
    DWORD  dmICMMethod;
    DWORD  dmICMIntent;
    DWORD  dmMediaType;
    DWORD  dmDitherType;
    DWORD  dmReserved1;
    DWORD  dmReserved2;
#if (WINVER >= 0x0500) || (_WIN32_WINNT >= 0x0400)
    DWORD  dmPanningWidth;
    DWORD  dmPanningHeight;
#endif
#endif /* WINVER >= 0x0400 */
} DEVMODEW, * LPDEVMODEW, * PDEVMODEW, * NPDEVMODEW;

HDC FASTCALL
IntGdiCreateDC(
    PUNICODE_STRING Driver,
    PUNICODE_STRING pustrDevice,
    PVOID pUMdhpdev,
    CONST PDEVMODEW pdmInit,
    BOOL CreateAsIC)
{
    HDC hdc=NULL;

    /*hdc = GreOpenDCW(pustrDevice,
        pdmInit,
        NULL,
        CreateAsIC ? DCTYPE_INFO :
        (Driver ? DCTYPE_DIRECT : DCTYPE_DIRECT),
        TRUE,
        NULL,
        NULL,
        pUMdhpdev);*/

    return hdc;
}

PREGION FASTCALL
VIS_ComputeVisibleRegion(
    PWND Wnd,
    BOOLEAN ClientArea,
    BOOLEAN ClipChildren,
    BOOLEAN ClipSiblings)
{
    return NULL;
}

PREGION FASTCALL IntSysCreateRectpRgn(INT a, INT b, INT c, INT d) {
    return NULL;
};

typedef int POOL_TYPE;
typedef int SIZE_T;

PVOID
NTAPI
ExAllocatePoolWithTag(IN POOL_TYPE PoolType,
    IN SIZE_T NumberOfBytes,
    IN ULONG Tag)
{
    return 0;
}

VOID
NTAPI
ExFreePoolWithTag(IN PVOID P,
    IN ULONG TagToFree)
{
}

#define UserHMGetHandle(obj) ((obj)->head.h)
#define UserHMSetHandle(obj, handle) ((obj)->head.h = (handle))

#define InsertTailList(ListHead,Entry) {\
    PLIST_ENTRY _EX_Blink;\
    PLIST_ENTRY _EX_ListHead;\
    _EX_ListHead = (ListHead);\
    _EX_Blink = _EX_ListHead->Blink;\
    (Entry)->Flink = _EX_ListHead;\
    (Entry)->Blink = _EX_Blink;\
    _EX_Blink->Flink = (Entry);\
    _EX_ListHead->Blink = (Entry);\
    }

VOID FASTCALL DCU_SetDcUndeletable(HDC a) {};

#define WINAPI
#define _In_
#define _In_opt_

struct _THREADINFO* GetW32ThreadInfo() { return NULL;};
BOOL NTAPI GreSetDCOwner(HDC hdc, ULONG ulOwner) { return FALSE; };
BOOL WINAPI GreSetDCOrg(_In_  HDC a, _In_ LONG b, _In_ LONG c, _In_opt_ PRECTL d) { return FALSE; };

typedef int HGDIOBJ;

BOOL NTAPI GreDeleteObject(HGDIOBJ hObject) { return FALSE; };

typedef int WORD;

WORD APIENTRY IntGdiSetHookFlags(HDC hDC, WORD Flags) { return 0; };

PWND FASTCALL UserGetWindowObject(HWND hWnd) { return NULL; };

HWND FASTCALL IntGetDesktopWindow(VOID) { return NULL; };

#define IntSysCreateRectpRgnIndirect(prc) \
  IntSysCreateRectpRgn((prc)->left, (prc)->top, (prc)->right, (prc)->bottom)

PREGION FASTCALL REGION_LockRgn( _In_ HRGN hrgn) { return NULL; };

INT FASTCALL IntGdiCombineRgn(PREGION a, PREGION b, PREGION c, INT d) { return 0; };

VOID FASTCALL REGION_UnlockRgn(_In_ PREGION prgn) {};

VOID FASTCALL REGION_Delete(PREGION a) {};

#define __kernel_entry
#define W32KAPI

__kernel_entry W32KAPI BOOL APIENTRY NtGdiSelectClipPath(_In_ HDC hdc, _In_ INT iMode) { return FALSE; };

VOID FASTCALL GdiSelectVisRgn(HDC hdc, PREGION prgn) {};

typedef long FLONG;

VOID FASTCALL IntEngWindowChanged(_In_ struct _WND* Window, _In_ FLONG flChanged) {};

BOOL FASTCALL IntGdiCleanDC(HDC hDC) { return FALSE; };

typedef long PKTHREAD;
void KeEnterCriticalRegionThread(PKTHREAD _Thread)
{
    /*
    // Sanity checks
    ASSERT((_Thread) == KeGetCurrentThread());
    ASSERT(((_Thread)->KernelApcDisable <= 0) &&
           ((_Thread)->KernelApcDisable != -32768));
 
    // Disable Kernel APCs
    (_Thread)->KernelApcDisable--;
    */
}

#define NTSYSAPI

NTSYSAPI
PKTHREAD
NTAPI
KeGetCurrentThread(VOID) { return NULL; };

void KeEnterCriticalRegion()
{
    PKTHREAD _Thread = KeGetCurrentThread();
    KeEnterCriticalRegionThread(_Thread);
}

void KeLeaveCriticalRegionThread(PKTHREAD _Thread)
{
    /*
    // Sanity checks
    ASSERT((_Thread) == KeGetCurrentThread());
    ASSERT((_Thread)->KernelApcDisable < 0);
 
    // Enable Kernel APCs
    (_Thread)->KernelApcDisable++;
 
    // Check if Kernel APCs are now enabled
    if (!((_Thread)->KernelApcDisable))
    {
        // Check if we need to request an APC Delivery
        if (!(IsListEmpty(&(_Thread)->ApcState.ApcListHead[KernelMode])) &&
            !((_Thread)->SpecialApcDisable))
        {
            // Check for the right environment
            KiCheckForKernelApcDelivery();
        }
    }
    */
}

void KeLeaveCriticalRegion()
{
    PKTHREAD _Thread = KeGetCurrentThread();
    KeLeaveCriticalRegionThread(_Thread);
}

BOOL NTAPI GreIsHandleValid(HGDIOBJ hobj) { return FALSE; };

#define ERR(msg) do { { printf("%s\n", msg); } } while (0)

#define RemoveHeadList(ListHead) \
    (ListHead)->Flink;\
    {RemoveEntryList((ListHead)->Flink)}

#define RemoveEntryList(Entry) {\
    PLIST_ENTRY _EX_Blink;\
    PLIST_ENTRY _EX_Flink;\
    _EX_Flink = (Entry)->Flink;\
    _EX_Blink = (Entry)->Blink;\
    _EX_Blink->Flink = _EX_Flink;\
    _EX_Flink->Blink = _EX_Blink;\
    }

__kernel_entry W32KAPI HRGN APIENTRY NtGdiCreateRectRgn(_In_ INT xLeft, _In_ INT yTop, _In_ INT xRight, _In_ INT yBottom) { return NULL; };

__kernel_entry W32KAPI DWORD APIENTRY NtGdiSetLayout( _In_ HDC hdc, _In_ LONG wox, _In_ DWORD dwLayout) { return 0; };

#define ASSERT(condition) \
    do { \
        if (!(condition)) { \
            printf("Assertion failed: %s, file %s, line %d\n", #condition, __FILE__, __LINE__); \
            abort(); \
        } \
    } while (0)

ULONG NTAPI GreGetObjectOwner(HGDIOBJ hobj) { return 0; };

BOOL FASTCALL IntGdiDeleteDC(HDC a, BOOL b) { return FALSE; };

typedef enum GDIObjType
{
    GDIObjType_DEF_TYPE = 0x00,
    GDIObjType_DC_TYPE = 0x01,
    GDIObjType_UNUSED1_TYPE = 0x02,
    GDIObjType_UNUSED2_TYPE = 0x03,
    GDIObjType_RGN_TYPE = 0x04,
    GDIObjType_SURF_TYPE = 0x05,
    GDIObjType_CLIENTOBJ_TYPE = 0x06,
    GDIObjType_PATH_TYPE = 0x07,
    GDIObjType_PAL_TYPE = 0x08,
    GDIObjType_ICMLCS_TYPE = 0x09,
    GDIObjType_LFONT_TYPE = 0x0a,
    GDIObjType_RFONT_TYPE = 0x0b,
    GDIObjType_PFE_TYPE = 0x0c,
    GDIObjType_PFT_TYPE = 0x0d,
    GDIObjType_ICMCXF_TYPE = 0x0e,
    GDIObjType_SPRITE_TYPE = 0x0f,
    GDIObjType_BRUSH_TYPE = 0x10,
    GDIObjType_UMPD_TYPE = 0x11,
    GDIObjType_UNUSED4_TYPE = 0x12,
    GDIObjType_SPACE_TYPE = 0x13,
    GDIObjType_UNUSED5_TYPE = 0x14,
    GDIObjType_META_TYPE = 0x15,
    GDIObjType_EFSTATE_TYPE = 0x16,
    GDIObjType_BMFD_TYPE = 0x17,
    GDIObjType_VTFD_TYPE = 0x18,
    GDIObjType_TTFD_TYPE = 0x19,
    GDIObjType_RC_TYPE = 0x1a,
    GDIObjType_TEMP_TYPE = 0x1b,
    GDIObjType_DRVOBJ_TYPE = 0x1c,
    GDIObjType_DCIOBJ_TYPE = 0x1d,
    GDIObjType_SPOOL_TYPE = 0x1e,
    GDIObjType_MAX_TYPE = 0x1e,
    GDIObjTypeTotal = 0x1f,
} GDIOBJTYPE, * PGDIOBJTYPE;

typedef enum GDILoObjType
{
    GDILoObjType_LO_BRUSH_TYPE = 0x100000,
    GDILoObjType_LO_DC_TYPE = 0x10000,
    GDILoObjType_LO_BITMAP_TYPE = 0x50000,
    GDILoObjType_LO_PALETTE_TYPE = 0x80000,
    GDILoObjType_LO_FONT_TYPE = 0xa0000,
    GDILoObjType_LO_REGION_TYPE = 0x40000,
    GDILoObjType_LO_ICMLCS_TYPE = 0x90000,
    GDILoObjType_LO_CLIENTOBJ_TYPE = 0x60000,
    GDILoObjType_LO_UMPD_TYPE = 0x110000,
    GDILoObjType_LO_META_TYPE = 0x150000,
    GDILoObjType_LO_ALTDC_TYPE = 0x210000,
    GDILoObjType_LO_PEN_TYPE = 0x300000,
    GDILoObjType_LO_EXTPEN_TYPE = 0x500000,
    GDILoObjType_LO_DIBSECTION_TYPE = 0x250000,
    GDILoObjType_LO_METAFILE16_TYPE = 0x260000,
    GDILoObjType_LO_METAFILE_TYPE = 0x460000,
    GDILoObjType_LO_METADC16_TYPE = 0x660000
} GDILOOBJTYPE, * PGDILOOBJTYPE;

#define FORCEINLINE
typedef BASEOBJECT *POBJ;
typedef unsigned char UCHAR;

typedef GDIOBJTYPE * PGDIOBJ;

PGDIOBJ NTAPI GDIOBJ_LockObject(HGDIOBJ hobj, UCHAR objt) { return NULL; }

#define GDI_HANDLE_INDEX_MASK (GDI_HANDLE_COUNT - 1)
#define GDI_HANDLE_TYPE_MASK  0x007f0000
#define GDI_HANDLE_BASETYPE_MASK 0x001f0000
#define GDI_HANDLE_STOCK_MASK 0x00800000
#define GDI_HANDLE_REUSE_MASK 0xff000000
#define GDI_HANDLE_REUSECNT_SHIFT 24
#define GDI_HANDLE_UPPER_MASK 0x0000ffff

#define GDI_HANDLE_GET_TYPE(h)     \
    (((ULONG_PTR)(h)) & GDI_HANDLE_TYPE_MASK)

FORCEINLINE
PDC
DC_LockDc(HDC hdc)
{
    PDC pdc;

    pdc = (PDC)GDIOBJ_LockObject((HGDIOBJ)hdc, GDIObjType_DC_TYPE);
    if (pdc)
    {
        ASSERT((GDI_HANDLE_GET_TYPE(pdc->BaseObject.hHmgr) == GDILoObjType_LO_DC_TYPE) ||
            (GDI_HANDLE_GET_TYPE(pdc->BaseObject.hHmgr) == GDILoObjType_LO_ALTDC_TYPE));
        ASSERT(pdc->dclevel.plfnt != NULL);
        ASSERT(GDI_HANDLE_GET_TYPE(((POBJ)pdc->dclevel.plfnt)->hHmgr) == GDILoObjType_LO_FONT_TYPE);
    }

    return pdc;
}

BOOL FASTCALL IntIsChildWindow(PWND Parent, PWND Child) { return FALSE; };

#define _Inout_

BOOL FASTCALL REGION_bOffsetRgn( _Inout_ PREGION prgn, _In_ INT cx, _In_ INT cy) { return FALSE; };

__kernel_entry W32KAPI INT APIENTRY NtGdiOffsetClipRgn(_In_ HDC hdc, _In_ INT x, _In_ INT y) { return 0; }

__kernel_entry W32KAPI INT APIENTRY NtGdiOffsetRgn( _In_ HRGN hrgn, _In_ INT cx, _In_ INT cy) { return 0; }

FORCEINLINE
VOID
DC_UnlockDc(PDC pdc)
{
    ASSERT(pdc->dclevel.plfnt != NULL);
    ASSERT(GDI_HANDLE_GET_TYPE(((POBJ)pdc->dclevel.plfnt)->hHmgr) == GDILoObjType_LO_FONT_TYPE);

    //GDIOBJ_vUnlockObject(&pdc->BaseObject);
}

HANDLE FASTCALL UserGetProp(_In_ PWND Window, _In_ ATOM Atom, _In_ BOOLEAN SystemProp) { return NULL; };

// Win: EnterCrit
VOID FASTCALL UserEnterExclusive(VOID)
{
    //ASSERT_NOGDILOCKS();
    //KeEnterCriticalRegion();
    //ExAcquireResourceExclusiveLite(&UserLock, TRUE);
    //gptiCurrent = PsGetCurrentThreadWin32Thread();
}

VOID FASTCALL UserLeave(VOID) {};

HPALETTE NTAPI GdiSelectPalette( _In_ HDC hDC, _In_ HPALETTE hpal, _In_ BOOL ForceBackground) { return FALSE; };






