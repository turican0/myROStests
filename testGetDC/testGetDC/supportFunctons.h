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
    void* lpParam);

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
HWND CreateWindowA(const char* lpClassName, const char* lpWindowName, UINT dwStyle, int x, int y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, void* lpParam);
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

typedef USHORT RTL_ATOM, * PRTL_ATOM;

#define NB_HOOKS 10

typedef struct _DESKTOPINFO
{
    PVOID pvDesktopBase;
    PVOID pvDesktopLimit;
    struct _WND* spwnd;
    DWORD fsHooks;
    LIST_ENTRY aphkStart[NB_HOOKS];

    HWND hTaskManWindow;
    HWND hProgmanWindow;
    HWND hShellWindow;
    struct _WND* spwndShell;
    struct _WND* spwndBkGnd;

    struct _PROCESSINFO* ppiShellProcess;

    union
    {
        UINT Dummy;
        struct
        {
            UINT LastInputWasKbd : 1;
        };
    };

    //WCHAR szDesktopName[1];
} DESKTOPINFO, * PDESKTOPINFO;

typedef struct _THRDESKHEAD
{
    HANDLE h;
    DWORD cLockObj;
    struct _THREADINFO* pti;
    struct _DESKTOP* rpdesk;
    PVOID pSelf;
} THRDESKHEAD, * PTHRDESKHEAD;

typedef struct _HEAD
{
    HANDLE h;
    DWORD cLockObj;
} HEAD, * PHEAD;

typedef struct _PROCDESKHEAD
{
    HEAD a;
    DWORD_PTR hTaskWow;
    struct _DESKTOP* rpdesk;
    PVOID pSelf;
} PROCDESKHEAD, * PPROCDESKHEAD;

typedef enum _GETCPD
{
    UserGetCPDA2U = 0x01, /* " Unicode " */
    UserGetCPDU2A = 0X02, /* " Ansi " */
    UserGetCPDClass = 0X10,
    UserGetCPDWindow = 0X20,
    UserGetCPDDialog = 0X40,
    UserGetCPDWndtoCls = 0X80
} GETCPD, * PGETCPD;

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

typedef struct _DESKTOP
{
    /* Must be the first member */
    DWORD dwSessionId;

    PDESKTOPINFO pDeskInfo;
    LIST_ENTRY ListEntry;
    /* Pointer to the associated window station. */
    struct _WINSTATION_OBJECT* rpwinstaParent;
    DWORD dwDTFlags;
    DWORD_PTR dwDesktopId;
    //PMENU spmenuSys;
    //PMENU spmenuDialogSys;
    //PMENU spmenuHScroll;
    //PMENU spmenuVScroll;
    PWND spwndForeground;
    PWND spwndTray;
    PWND spwndMessage;
    PWND spwndTooltip;
    PVOID hsectionDesktop;
    //PWIN32HEAP pheapDesktop;
    ULONG_PTR ulHeapSize;
    LIST_ENTRY PtiList;

    /* One console input thread per desktop, maintained by CONSRV */
    DWORD dwConsoleThreadId;

    /* Use for tracking mouse moves. */
    PWND spwndTrack;
    DWORD htEx;
    RECT rcMouseHover;
    DWORD dwMouseHoverTime;

    /* ReactOS */
    /* Pointer to the active queue. */
    struct _USER_MESSAGE_QUEUE* ActiveMessageQueue;
    /* Handle of the desktop window. */
    HWND DesktopWindow;
    /* Thread blocking input */
    PVOID BlockInputThread;
    LIST_ENTRY ShellHookWindows;
} DESKTOP, * PDESKTOP;

typedef struct _THROBJHEAD
{
    HANDLE h;
    DWORD cLockObj;
    struct _THREADINFO* pti;
} THROBJHEAD, * PTHROBJHEAD;

typedef long FLONG;

typedef UNICODE_STRING* PUNICODE_STRING;

typedef struct _THREADINFO* PTHREADINFO;

typedef int WORD;

#ifdef __cplusplus
typedef struct _THREADINFO
{
#else
typedef struct _THREADINFO
{
    //W32THREAD;
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
    PUNICODE_STRING     pstrAppName;
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
    //HDESK               hdesk;
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
    //POINT               ptLast;
    /* Input context-related */
    struct _WND* spwndDefaultIme;
    struct tagIMC* spDefaultImc;
    //HKL                 hklPrev;

    INT                 cEnterCount;
    /* Queue of messages posted to the queue. */
    LIST_ENTRY          PostedMessagesListHead; // mlPost
    WORD                fsChangeBitsRemoved;
    //WCHAR               wchInjected;
    UINT                cWindows;
    UINT                cVisWindows;
#ifndef __cplusplus 
    LIST_ENTRY          aphkStart[NB_HOOKS];
    //CLIENTTHREADINFO    cti;  // Used only when no Desktop or pcti NULL.

    /* ReactOS */

    /* Thread Queue state tracking */
    // Send list QS_SENDMESSAGE
    // Post list QS_POSTMESSAGE|QS_HOTKEY|QS_PAINT|QS_TIMER|QS_KEY
    // Hard list QS_MOUSE|QS_KEY only
    // Accounting of queue bit sets, the rest are flags. QS_TIMER QS_PAINT counts are handled in thread information.
    //DWORD nCntsQBits[QSIDCOUNTS]; // QS_KEY QS_MOUSEMOVE QS_MOUSEBUTTON QS_POSTMESSAGE QS_SENDMESSAGE QS_HOTKEY

    LIST_ENTRY WindowListHead;
    LIST_ENTRY W32CallbackListHead;
    //SINGLE_LIST_ENTRY  ReferencesList;
    ULONG cExclusiveLocks;
#if DBG
    USHORT acExclusiveLockCount[GDIObjTypeTotal + 1];
#endif
#endif // __cplusplus
} THREADINFO;

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
#define WARN(msg) do { { printf("%s\n", msg); } } while (0)

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

#define C_ASSERT(condition) \
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

#define DECLSPEC_HOTPATCH

typedef const char* LPCSTR;
typedef void* LPVOID;

typedef struct tagMDICREATESTRUCTA {
    LPCSTR szClass;
    LPCSTR szTitle;
    HANDLE hOwner;
    int x;
    int y;
    int cx;
    int cy;
    DWORD style;
    LPARAM lParam;
} MDICREATESTRUCTA, * LPMDICREATESTRUCTA;

BOOL RegisterDefaultClasses;

void RegisterSystemControls() {};

//#define ValidateHwnd(hwnd) ValidateHandle((hwnd), TYPE_WINDOW)

typedef struct _USER_HANDLE_ENTRY
{
    void* ptr; /* pointer to object */
    union
    {
        PVOID pi;
        struct _THREADINFO* pti; /* pointer to Win32ThreadInfo */
        struct _PROCESSINFO* ppi; /* pointer to W32ProcessInfo */
    };
    unsigned char type; /* object type (0 if free) */
    unsigned char flags;
    unsigned short generation; /* generation counter */
} USER_HANDLE_ENTRY, * PUSER_HANDLE_ENTRY;

typedef struct _USER_HANDLE_TABLE
{
    PUSER_HANDLE_ENTRY handles;
    PUSER_HANDLE_ENTRY freelist;
    int nb_handles;
    int allocated_handles;
} USER_HANDLE_TABLE, * PUSER_HANDLE_TABLE;

typedef int PINT;
typedef int PFN_FNID;
typedef int PFNCLIENT;
typedef int PFNCLIENTWORKER;
typedef int MBSTRING;
typedef char CHAR;
#define FNID_NUM 10
#define FNID_NUMSERVERPROC 10
#define ICLS_NOTUSED 10
#define MAX_MB_STRINGS 10


typedef struct _WNDMSG
{
    DWORD maxMsgs;
    PINT abMsgs;
} WNDMSG, * PWNDMSG;

typedef struct tagSERVERINFO
{
    DWORD dwSRVIFlags;
    ULONG_PTR cHandleEntries;
    PFN_FNID mpFnidPfn[FNID_NUM];
    WNDPROC aStoCidPfn[FNID_NUMSERVERPROC];
    USHORT mpFnid_serverCBWndProc[FNID_NUM];
    PFNCLIENT apfnClientA;
    PFNCLIENT apfnClientW;
    PFNCLIENTWORKER apfnClientWorker;
    ULONG cbHandleTable;
    ATOM atomSysClass[ICLS_NOTUSED + 1];
    DWORD dwDefaultHeapBase;
    DWORD dwDefaultHeapSize;
    UINT uiShellMsg;
    MBSTRING MBStrings[MAX_MB_STRINGS];
    ATOM atomIconSmProp;
    ATOM atomIconProp;
    ATOM atomContextHelpIdProp;
    ATOM atomFrostedWindowProp;
    CHAR acOemToAnsi[256];
    CHAR acAnsiToOem[256];
    DWORD dwInstalledEventHooks;
    //PERUSERSERVERINFO;
} SERVERINFO, * PSERVERINFO;

typedef struct _SHAREDINFO
{
    PSERVERINFO psi;         /* Global Server Info */
    PVOID aheList;           /* Handle Entry List */
    PVOID pDispInfo;         /* Global PDISPLAYINFO pointer */
    ULONG_PTR ulSharedDelta; /* Shared USER mapped section delta */
    WNDMSG awmControl[FNID_NUM];
    WNDMSG DefWindowMsgs;
    WNDMSG DefWindowSpecMsgs;
} SHAREDINFO, * PSHAREDINFO;

SHAREDINFO gSharedInfo = { NULL };

#define LOWORD(l)   (l & 0xffff)
#define HIWORD(l)   (l >> 16)

#define FIRST_USER_HANDLE 0x0020

#define HANDLEENTRY_DESTROY 1
#define HANDLEENTRY_INDESTROY 2

static PVOID FASTCALL DesktopPtrToUser(PVOID ptr)
{
    /*PCLIENTINFO pci = GetWin32ClientInfo();
    PDESKTOPINFO pdi = pci->pDeskInfo;

    ASSERT(ptr != NULL);
    ASSERT(pdi != NULL);
    if (pdi->pvDesktopBase <= ptr && ptr < pdi->pvDesktopLimit)
        return (PVOID)((ULONG_PTR)ptr - pci->ulClientDelta);
    else
        return (PVOID)NtUserCallOneParam((DWORD_PTR)ptr, ONEPARAM_ROUTINE_GETDESKTOPMAPPING);
        */
    return ptr;
}

LPVOID FASTCALL ValidateHandleNoErr(HANDLE hObject, UINT uType)
{
    UINT index;
    PUSER_HANDLE_TABLE ht;
    PUSER_HANDLE_ENTRY he;
    WORD generation;
    LPVOID ptr;

    /*if (!NtUserValidateHandleSecure(hObject))
    {
        WARN("Not a handle\n");
        return NULL;
    }*/

    ht = (PUSER_HANDLE_TABLE)gSharedInfo.aheList; /* handle table */
    ASSERT(ht);
    /* ReactOS-Specific! */
    ASSERT(gSharedInfo.ulSharedDelta != 0);
    he = (PUSER_HANDLE_ENTRY)((ULONG_PTR)ht->handles - gSharedInfo.ulSharedDelta);

    index = (LOWORD((int)hObject) - FIRST_USER_HANDLE) >> 1;
    if ((INT)index < 0 || ht->nb_handles <= index || he[index].type != uType)
        return NULL;

    if (he[index].flags & HANDLEENTRY_DESTROY)
        return NULL;

    generation = HIWORD((int)hObject);
    if (generation != he[index].generation && generation && generation != 0xFFFF)
        return NULL;

    ptr = he[index].ptr;
    if (ptr)
        ptr = DesktopPtrToUser((PVOID)ptr);

    return ptr;
}

LPVOID FASTCALL ValidateHandle(HANDLE hObject, UINT uType)
{
    LPVOID pvObj = ValidateHandleNoErr(hObject, uType);
    if (pvObj)
        return pvObj;

    /*if (uType == TYPE_WINDOW)
        SetLastError(ERROR_INVALID_WINDOW_HANDLE);
    else
        SetLastError(ERROR_INVALID_HANDLE);*/
    return NULL;
}

#define FNID_FIRST                  0x029A
#define FNID_SCROLLBAR              0x029A
#define FNID_ICONTITLE              0x029B
#define FNID_MENU                   0x029C
#define FNID_DESKTOP                0x029D
#define FNID_DEFWINDOWPROC          0x029E
#define FNID_MESSAGEWND             0x029F
#define FNID_SWITCH                 0x02A0
#define FNID_BUTTON                 0x02A1
#define FNID_COMBOBOX               0x02A2
#define FNID_COMBOLBOX              0x02A3
#define FNID_DIALOG                 0x02A4
#define FNID_EDIT                   0x02A5
#define FNID_LISTBOX                0x02A6
#define FNID_MDICLIENT              0x02A7
#define FNID_STATIC                 0x02A8
#define FNID_IME                    0x02A9
#define FNID_GHOST                  0x02AA
#define FNID_CALLWNDPROC            0x02AB
#define FNID_CALLWNDPROCRET         0x02AC
#define FNID_HKINLPCWPEXSTRUCT      0x02AD
#define FNID_HKINLPCWPRETEXSTRUCT   0x02AE
#define FNID_MB_DLGPROC             0x02AF
#define FNID_MDIACTIVATEDLGPROC     0x02B0
#define FNID_SENDMESSAGE            0x02B1
#define FNID_SENDMESSAGEFF          0x02B2
/* Kernel has option to use TimeOut or normal msg send, based on type of msg. */
#define FNID_SENDMESSAGEWTOOPTION   0x02B3
#define FNID_SENDMESSAGECALLPROC    0x02B4
#define FNID_BROADCASTSYSTEMMESSAGE 0x02B5
#define FNID_TOOLTIPS               0x02B6
#define FNID_SENDNOTIFYMESSAGE      0x02B7
#define FNID_SENDMESSAGECALLBACK    0x02B8

#define MDIS_ALLCHILDSTYLES	1

#define MFT_BITMAP 4
#define MFT_MENUBARBREAK 32
#define MFT_MENUBREAK 64
#define MFT_OWNERDRAW 256
#define MFT_RADIOCHECK 512
#define MFT_RIGHTJUSTIFY 0x4000
#define MFT_SEPARATOR 0x800
#define MFT_RIGHTORDER 0x2000L
#define MFT_STRING 0
#define MFS_CHECKED 8
#define MFS_DEFAULT 4096
#define MFS_DISABLED 3
#define MFS_ENABLED 0
#define MFS_GRAYED 3
#define MFS_HILITE 128
#define MFS_UNCHECKED 0
#define MFS_UNHILITE 0
#define MNS_NOCHECK 0x80000000
#define MNS_MODELESS 0x40000000
#define MNS_DRAGDROP 0x20000000
#define MNS_AUTODISMISS 0x10000000
#define MNS_NOTIFYBYPOS 0x08000000
#define MNS_CHECKORBMP 0x04000000
#define GW_HWNDNEXT 2
#define GW_HWNDPREV 3
#define GW_CHILD 5
#define GW_HWNDFIRST 0
#define GW_HWNDLAST 1
#define GW_OWNER 4
#define GW_ENABLEDPOPUP 6
#define SW_HIDE 0
#define SW_NORMAL 1
#define SW_SHOWNORMAL 1
#define SW_SHOWMINIMIZED 2
#define SW_MAXIMIZE 3
#define SW_SHOWMAXIMIZED 3
#define SW_SHOWNOACTIVATE 4
#define SW_SHOW 5
#define SW_MINIMIZE 6
#define SW_SHOWMINNOACTIVE 7
#define SW_SHOWNA 8
#define SW_RESTORE 9
#define SW_SHOWDEFAULT 10
#define SW_FORCEMINIMIZE 11
#define SW_MAX 11
#define MB_USERICON 128
#define MB_ICONASTERISK 64
#define MB_ICONEXCLAMATION 0x30
#define MB_ICONWARNING 0x30
#define MB_ICONERROR 16
#define MB_ICONHAND 16
#define MB_ICONQUESTION 32
#define MB_OK 0
#define MB_ABORTRETRYIGNORE 2
#define MB_APPLMODAL 0
#define MB_DEFAULT_DESKTOP_ONLY 0x20000
#define MB_HELP 0x4000
#define MB_RIGHT 0x80000
#define MB_RTLREADING 0x100000
#define MB_TOPMOST 0x40000
#define MB_DEFBUTTON1 0
#define MB_DEFBUTTON2 256
#define MB_DEFBUTTON3 512
#define MB_DEFBUTTON4 0x300
#define MB_ICONINFORMATION 64
#define MB_ICONSTOP 16
#define MB_OKCANCEL 1
#define MB_RETRYCANCEL 5

#define WM_NULL 0
#define WM_CREATE 1
#define WM_DESTROY 2
#define WM_MOVE 3
#define WM_SIZE 5
#define WM_ACTIVATE 6
#define WM_SETFOCUS 7
#define WM_KILLFOCUS 8
#define WM_ENABLE 10
#define WM_SETREDRAW 11
#define WM_SETTEXT 12
#define WM_GETTEXT 13
#define WM_GETTEXTLENGTH 14
#define WM_PAINT 15
#define WM_CLOSE 16
#define WM_QUERYENDSESSION 17
#define WM_QUIT 18
#define WM_QUERYOPEN 19
#define WM_ERASEBKGND 20
#define WM_SYSCOLORCHANGE 21
#define WM_ENDSESSION 22
#define WM_SHOWWINDOW 24
#define WM_SETTINGCHANGE 26
#define WM_WININICHANGE 26
#define WM_DEVMODECHANGE 27
#define WM_ACTIVATEAPP 28
#define WM_FONTCHANGE 29
#define WM_TIMECHANGE 30
#define WM_CANCELMODE 31
#define WM_SETCURSOR 32
#define WM_MOUSEACTIVATE 33
#define WM_CHILDACTIVATE 34
#define WM_QUEUESYNC 35
#define WM_GETMINMAXINFO 36
#define WM_PAINTICON 38
#define WM_ICONERASEBKGND 39
#define WM_NEXTDLGCTL 40
#define WM_SPOOLERSTATUS 42
#define WM_DRAWITEM 43
#define WM_MEASUREITEM 44
#define WM_DELETEITEM 45
#define WM_VKEYTOITEM 46
#define WM_CHARTOITEM 47
#define WM_SETFONT 48
#define WM_GETFONT 49
#define WM_SETHOTKEY 50
#define WM_GETHOTKEY 51
#define WM_QUERYDRAGICON 55
#define WM_COMPAREITEM 57

#define CW_USEDEFAULT16 0x8000

#define NUCWE_ANSI       0x00000001

#define GetWindowLongPtrW GetWindowLongW

#define GWL_EXSTYLE (-20)
#define GWL_STYLE (-16)
#define GWL_WNDPROC (-4)
#define GWLP_WNDPROC (-4)
#define GWL_HINSTANCE (-6)
#define GWLP_HINSTANCE (-6)
#define GWL_HWNDPARENT (-8)
#define GWLP_HWNDPARENT (-8)
#define GWL_ID (-12)
#define GWLP_ID (-12)
#define GWL_USERDATA (-21)
#define GWLP_USERDATA (-21)

#define GA_PARENT 1
#define GA_ROOT 2
#define GA_ROOTOWNER 3
typedef char* PCHAR;

PWND FASTCALL
IntGetParent(PWND Wnd)
{
    if (Wnd->style & WS_POPUP)
    {
        return Wnd->spwndOwner;
    }
    else if (Wnd->style & WS_CHILD)
    {
        return Wnd->spwndParent;
    }

    return NULL;
}

#define IntIsDesktopWindow(WndObj) \
  (WndObj->spwndParent == NULL)

PWND FASTCALL UserGetAncestor(PWND Wnd, UINT Type)
{
    PWND WndAncestor, Parent;

    if (UserHMGetHandle(Wnd) == IntGetDesktopWindow())
    {
        return NULL;
    }

    switch (Type)
    {
    case GA_PARENT:
    {
        WndAncestor = Wnd->spwndParent;
        break;
    }

    case GA_ROOT:
    {
        WndAncestor = Wnd;
        Parent = NULL;

        for (;;)
        {
            if (!(Parent = WndAncestor->spwndParent))
            {
                break;
            }
            if (IntIsDesktopWindow(Parent))
            {
                break;
            }

            WndAncestor = Parent;
        }
        break;
    }

    case GA_ROOTOWNER:
    {
        WndAncestor = Wnd;

        for (;;)
        {
            Parent = IntGetParent(WndAncestor);

            if (!Parent)
            {
                break;
            }

            WndAncestor = Parent;
        }
        break;
    }

    default:
    {
        return NULL;
    }
    }

    return WndAncestor;
}

HWND APIENTRY
NtUserGetAncestor(HWND hWnd, UINT Type)
{
    PWND Window, Ancestor;
    HWND Ret = NULL;

    TRACE("Enter NtUserGetAncestor\n");
    UserEnterExclusive();

    Window = UserGetWindowObject(hWnd);
    if (Window)
    {
        Ancestor = UserGetAncestor(Window, Type);
        /* fixme: can UserGetAncestor ever return NULL for a valid window? */

        Ret = (Ancestor ? UserHMGetHandle(Ancestor) : NULL);
    }

    TRACE("Leave NtUserGetAncestor, ret=%p\n", Ret);
    UserLeave();
    return Ret;
}

typedef struct _CLIENTINFO
{
    ULONG_PTR CI_flags;
    ULONG_PTR cSpins;
    DWORD dwExpWinVer;
    DWORD dwCompatFlags;
    DWORD dwCompatFlags2;
    DWORD dwTIFlags; /* ThreadInfo TIF_Xxx flags for User space. */
    PDESKTOPINFO pDeskInfo;
    ULONG_PTR ulClientDelta;
    //PHOOK phkCurrent;
    ULONG fsHooks;
    //CALLBACKWND CallbackWnd;
    DWORD dwHookCurrent;
    INT cInDDEMLCallback;
    //PCLIENTTHREADINFO pClientThreadInfo;
    ULONG_PTR dwHookData;
    DWORD dwKeyCache;
    //BYTE afKeyState[8];
    DWORD dwAsyncKeyCache;
    //BYTE afAsyncKeyState[8];
    //BYTE afAsyncKeyStateRecentDow[8];
    //HKL hKL;
    USHORT CodePage;
    UCHAR achDbcsCF[2];
    //MSG msgDbcsCB;
    //LPDWORD lpdwRegisteredClasses;
    ULONG Win32ClientInfo3[26];
    /* It's just a pointer reference not to be used w the structure in user space. */
    struct _PROCESSINFO* ppi;
} CLIENTINFO, * PCLIENTINFO;

//#define GetWin32ClientInfo() ((PCLIENTINFO)(NtCurrentTeb()->Win32ClientInfo))
#define GetWin32ClientInfo() ((PCLIENTINFO)(NULL))

static __inline PDESKTOPINFO
GetThreadDesktopInfo(VOID)
{
    PTHREADINFO ti;
    PDESKTOPINFO di = NULL;

    ti = (PTHREADINFO)GetW32ThreadInfo();
    if (ti != NULL)
        di = GetWin32ClientInfo()->pDeskInfo;

    return di;
}

PWND
FASTCALL
GetThreadDesktopWnd(VOID)
{
    PWND Wnd = GetThreadDesktopInfo()->spwnd;
    if (Wnd != NULL)
        Wnd = (PWND)DesktopPtrToUser((PVOID)Wnd);
    return Wnd;
}

HWND WINAPI
GetDesktopWindow(VOID)
{
    PWND Wnd;
    HWND Ret = NULL;

    //_SEH2_TRY
    {
        Wnd = GetThreadDesktopWnd();
        if (Wnd != NULL)
            Ret = UserHMGetHandle(Wnd);
    }
        //_SEH2_EXCEPT(EXCEPTION_EXECUTE_HANDLER)
    {
        /* Do nothing */
    }
    //_SEH2_END;

    return Ret;
}

BOOL
FASTCALL
TestWindowProcess(PWND Wnd)
{
    return TRUE;
    /*if (Wnd->head.pti == (PTHREADINFO)NtCurrentTeb()->Win32ThreadInfo)
        return TRUE;
    else
        return (NtUserQueryWindow(Wnd->head.h, QUERY_WINDOW_UNIQUE_PROCESS_ID) ==
            (DWORD_PTR)NtCurrentTeb()->ClientId.UniqueProcess);*/
}

#define WNDS_HASMENU                 0X00000001
#define WNDS_HASVERTICALSCROOLLBAR   0X00000002
#define WNDS_HASHORIZONTALSCROLLBAR  0X00000004
#define WNDS_HASCAPTION              0X00000008
#define WNDS_SENDSIZEMOVEMSGS        0X00000010
#define WNDS_MSGBOX                  0X00000020
#define WNDS_ACTIVEFRAME             0X00000040
#define WNDS_HASSPB                  0X00000080
#define WNDS_NONCPAINT               0X00000100
#define WNDS_SENDERASEBACKGROUND     0X00000200
#define WNDS_ERASEBACKGROUND         0X00000400
#define WNDS_SENDNCPAINT             0X00000800
#define WNDS_INTERNALPAINT           0X00001000
#define WNDS_UPDATEDIRTY             0X00002000
#define WNDS_HIDDENPOPUP             0X00004000
#define WNDS_FORCEMENUDRAW           0X00008000
#define WNDS_DIALOGWINDOW            0X00010000
#define WNDS_HASCREATESTRUCTNAME     0X00020000
#define WNDS_SERVERSIDEWINDOWPROC    0x00040000 /* Call proc inside win32k. */
#define WNDS_ANSIWINDOWPROC          0x00080000
#define WNDS_BEINGACTIVATED          0x00100000
#define WNDS_HASPALETTE              0x00200000
#define WNDS_PAINTNOTPROCESSED       0x00400000
#define WNDS_SYNCPAINTPENDING        0x00800000
#define WNDS_RECEIVEDQUERYSUSPENDMSG 0x01000000
#define WNDS_RECEIVEDSUSPENDMSG      0x02000000
#define WNDS_TOGGLETOPMOST           0x04000000
#define WNDS_REDRAWIFHUNG            0x08000000
#define WNDS_REDRAWFRAMEIFHUNG       0x10000000
#define WNDS_ANSICREATOR             0x20000000
#define WNDS_MAXIMIZESTOMONITOR      0x40000000
#define WNDS_DESTROYED               0x80000000

//#define GETPFNSERVER(fnid) gpsi->aStoCidPfn[fnid - FNID_FIRST]
#define GETPFNSERVER(fnid) NULL

/*
#define GETPFNCLIENTA(fnid) \
 (WNDPROC)(*(((ULONG_PTR *)&gpsi->apfnClientA) + (fnid - FNID_FIRST)))
#define GETPFNCLIENTW(fnid) \
 (WNDPROC)(*(((ULONG_PTR *)&gpsi->apfnClientW) + (fnid - FNID_FIRST)))
*/
#define GETPFNCLIENTA(fnid) NULL
#define GETPFNCLIENTW(fnid) NULL

#define NTKERNELAPI

NTKERNELAPI PVOID NTAPI PsGetCurrentThreadWin32Thread(VOID) {
    return NULL;
};

PCALLPROCDATA
FASTCALL
UserSearchForCallProc(
    PCALLPROCDATA pcpd,
    WNDPROC WndProc,
    GETCPD Type)
{
    while (pcpd && (pcpd->pfnClientPrevious != WndProc || pcpd->wType != Type))
    {
        pcpd = pcpd->spcpdNext;
    }
    return pcpd;
}

PCALLPROCDATA
CreateCallProc(IN PDESKTOP Desktop,
    IN WNDPROC WndProc,
    IN BOOL Unicode,
    IN PPROCESSINFO pi)
{
    PCALLPROCDATA NewCallProc;
    HANDLE Handle;

    /*
    // We can send any thread pointer to the object manager here,
    // What's important is the process info
    NewCallProc = (PCALLPROCDATA)UserCreateObject(gHandleTable,
        Desktop,
        pi->ptiList,
        &Handle,
        TYPE_CALLPROC,
        sizeof(CALLPROCDATA));
    if (NewCallProc != NULL)
    {
        NewCallProc->pfnClientPrevious = WndProc;
        NewCallProc->wType |= Unicode ? UserGetCPDA2U : UserGetCPDU2A;
        NewCallProc->spcpdNext = NULL;

        // Release the extra reference (UserCreateObject added 2 references)
        UserDereferenceObject(NewCallProc);
    }
    */
    NewCallProc = NULL;

    return NewCallProc;
}

void InterlockedExchangePointer(PVOID* a, PCALLPROCDATA b) {};

WNDPROC
GetCallProcHandle(IN PCALLPROCDATA CallProc)
{
    /* FIXME: Check for 64 bit architectures... */
    //return (WNDPROC)((ULONG_PTR)UserHMGetHandle(CallProc) | 0xFFFF0000);
    return NULL;
}

ULONG_PTR
FASTCALL
UserGetCPD(
    PVOID pvClsWnd,
    GETCPD Flags,
    ULONG_PTR ProcIn)
{
    PCLS pCls;
    PWND pWnd;
    PDESKTOP pDesk;
    PCALLPROCDATA CallProc = NULL;
    PTHREADINFO pti;

    pti = (PTHREADINFO)PsGetCurrentThreadWin32Thread();

    if (Flags & (UserGetCPDWindow | UserGetCPDDialog) ||
        Flags & UserGetCPDWndtoCls)
    {
        pWnd = (PWND)pvClsWnd;
        pCls = pWnd->pcls;
    }
    else
        pCls = (PCLS)pvClsWnd;

    // Search Class call proc data list.
    if (pCls->spcpdFirst)
        CallProc = UserSearchForCallProc(pCls->spcpdFirst, (WNDPROC)ProcIn, Flags);

    // No luck, create a new one for the requested proc.
    if (!CallProc)
    {
        if (!pCls->rpdeskParent)
        {
            TRACE("Null DESKTOP Atom %u\n", pCls->atomClassName);
            pDesk = pti->rpdesk;
        }
        else
            pDesk = pCls->rpdeskParent;
        CallProc = CreateCallProc(pDesk,
            (WNDPROC)ProcIn,
            !!(Flags & UserGetCPDA2U),
            pti->ppi);
        if (CallProc)
        {
            CallProc->spcpdNext = pCls->spcpdFirst;
            (void)InterlockedExchangePointer((PVOID*)&pCls->spcpdFirst,
                CallProc);
            CallProc->wType = Flags;
        }
    }
    return (ULONG_PTR)(CallProc ? GetCallProcHandle(CallProc) : NULL);
}

APIENTRY
int NtUserGetCPD(
    HWND hWnd,
    GETCPD Flags,
    ULONG_PTR ProcIn)
{
    PWND Wnd;
    ULONG_PTR Result = 0;

    UserEnterExclusive();
    if (!(Wnd = UserGetWindowObject(hWnd)))
    {
        goto Cleanup;
    }

    // Processing Window only from User space.
    if ((Flags & ~(UserGetCPDU2A | UserGetCPDA2U)) != UserGetCPDClass)
        Result = UserGetCPD((PVOID)Wnd, Flags, ProcIn);

Cleanup:
    UserLeave();
    return Result;
}

WNDPROC FASTCALL
IntGetWndProc(PWND pWnd, BOOL Ansi)
{
    INT i;
    WNDPROC gcpd, Ret = 0;
    PCLS Class = (PCLS)DesktopPtrToUser((PVOID)pWnd->pcls);

    if (!Class) return Ret;

    if (pWnd->state & WNDS_SERVERSIDEWINDOWPROC)
    {
        for (i = FNID_FIRST; i <= FNID_SWITCH; i++)
        {
            if (GETPFNSERVER(i) == pWnd->lpfnWndProc)
            {
                if (Ansi)
                    Ret = GETPFNCLIENTA(i);
                else
                    Ret = GETPFNCLIENTW(i);
            }
        }
        return Ret;
    }
    // Wine Class tests:
    /*  Edit controls are special - they return a wndproc handle when
        GetWindowLongPtr is called with a different A/W.
        On the other hand there is no W->A->W conversion so this control
        is treated specially.
     */
    if (Class->fnid == FNID_EDIT)
        Ret = pWnd->lpfnWndProc;
    else
    {
        // Set return proc.
        Ret = pWnd->lpfnWndProc;

        if (Class->fnid <= FNID_GHOST && Class->fnid >= FNID_BUTTON)
        {
            if (Ansi)
            {
                if (GETPFNCLIENTW(Class->fnid) == pWnd->lpfnWndProc)
                    Ret = GETPFNCLIENTA(Class->fnid);
            }
            else
            {
                if (GETPFNCLIENTA(Class->fnid) == pWnd->lpfnWndProc)
                    Ret = GETPFNCLIENTW(Class->fnid);
            }
        }
        // Return on the change.
        if (Ret != pWnd->lpfnWndProc)
            return Ret;
    }

    if (Ansi == !!(pWnd->state & WNDS_ANSIWINDOWPROC))
        return Ret;

    gcpd = (WNDPROC)NtUserGetCPD(UserHMGetHandle(pWnd),
        (GETCPD)((Ansi ? UserGetCPDA2U : UserGetCPDU2A) | UserGetCPDWindow),
        (ULONG_PTR)Ret);

    return (gcpd ? gcpd : Ret);
}

HWND WINAPI
GetWindow(HWND hWnd,
    UINT uCmd)
{
    PWND Wnd, FoundWnd;
    HWND Ret = NULL;

    //Wnd = ValidateHwnd(hWnd);
    Wnd = (PWND)ValidateHandle(hWnd, 0);
    if (!Wnd)
        return NULL;

    //_SEH2_TRY
    {
        FoundWnd = NULL;
        switch (uCmd)
        {
        case GW_OWNER:
            if (Wnd->spwndOwner != NULL)
                FoundWnd = (PWND)DesktopPtrToUser((PVOID)Wnd->spwndOwner);
            break;

        case GW_HWNDFIRST:
            if (Wnd->spwndParent != NULL)
            {
                FoundWnd = (PWND)DesktopPtrToUser((PVOID)Wnd->spwndParent);
                if (FoundWnd->spwndChild != NULL)
                    FoundWnd = (PWND)DesktopPtrToUser((PVOID)FoundWnd->spwndChild);
            }
            break;
        case GW_HWNDNEXT:
            if (Wnd->spwndNext != NULL)
                FoundWnd = (PWND)DesktopPtrToUser((PVOID)Wnd->spwndNext);
            break;

        case GW_HWNDPREV:
            if (Wnd->spwndPrev != NULL)
                FoundWnd = (PWND)DesktopPtrToUser((PVOID)Wnd->spwndPrev);
            break;

        case GW_CHILD:
            if (Wnd->spwndChild != NULL)
                FoundWnd = (PWND)DesktopPtrToUser((PVOID)Wnd->spwndChild);
            break;

        case GW_HWNDLAST:
            FoundWnd = Wnd;
            while (FoundWnd->spwndNext != NULL)
                FoundWnd = (PWND)DesktopPtrToUser((PVOID)FoundWnd->spwndNext);
            break;

        default:
            Wnd = NULL;
            break;
        }

        if (FoundWnd != NULL)
            Ret = UserHMGetHandle(FoundWnd);
    }
    //_SEH2_EXCEPT(EXCEPTION_EXECUTE_HANDLER)
    {
        /* Do nothing */
    }
    //_SEH2_END;

    return Ret;
}

LONG_PTR IntGetWindowLong(HWND hwnd, INT offset, UINT size, BOOL unicode)
{
    LONG_PTR retvalue = 0;
    WND* wndPtr;

    if (offset == GWLP_HWNDPARENT)
    {
        HWND parent = NtUserGetAncestor(hwnd, GA_PARENT);
        if (parent == GetDesktopWindow()) parent = GetWindow(hwnd, GW_OWNER);
        return (ULONG_PTR)parent;
    }

    if (!(wndPtr = (WND*)ValidateHandle(hwnd, 0)))
    {
        //SetLastError(ERROR_INVALID_WINDOW_HANDLE);
        return 0;
    }

    if (offset >= 0 && wndPtr->fnid != FNID_DESKTOP)
    {
        if (offset > (int)(wndPtr->cbwndExtra - size))
        {
            WARN("Invalid offset %d\n", offset);
            //SetLastError(ERROR_INVALID_INDEX);
            return 0;
        }
        retvalue = *((LONG_PTR*)((PCHAR)(wndPtr + 1) + offset));

        /* WINE: special case for dialog window procedure */
        //if ((offset == DWLP_DLGPROC) && (size == sizeof(LONG_PTR)) && (wndPtr->flags & WIN_ISDIALOG))
        //    retvalue = (LONG_PTR)IntGetWndProc( (WNDPROC)retvalue, unicode );
        return retvalue;
    }

    switch (offset)
    {
    case GWLP_USERDATA:  retvalue = wndPtr->dwUserData; break;
    case GWL_STYLE:      retvalue = wndPtr->style; break;
    case GWL_EXSTYLE:    retvalue = wndPtr->ExStyle; break;
    case GWLP_ID:        retvalue = wndPtr->IDMenu; break;
    case GWLP_HINSTANCE: retvalue = (ULONG_PTR)wndPtr->hModule; break;
#if 0
        /* -1 is an undocumented case which returns WW* */
        /* source: http://www.geoffchappell.com/studies/windows/win32/user32/structs/wnd/index.htm*/
    case -1:             retvalue = (ULONG_PTR)&wndPtr->ww; break;
#else
        /* We don't have a WW but WND already contains the same fields in the right order, */
        /* so we can return a pointer to its first field */
    case -1:             retvalue = (ULONG_PTR)&wndPtr->state; break;
#endif
    case GWLP_WNDPROC:
    {
        if (!TestWindowProcess(wndPtr))
        {
            //SetLastError(ERROR_ACCESS_DENIED);
            retvalue = 0;
            ERR("Outside Access and Denied!\n");
            break;
        }
        retvalue = (ULONG_PTR)IntGetWndProc(wndPtr, !unicode);
        break;
    }
    default:
        WARN("Unknown offset %d\n", offset);
        //SetLastError(ERROR_INVALID_INDEX);
        break;
    }
    return retvalue;

}

LONG
WINAPI
GetWindowLongW(HWND hWnd, int nIndex)
{
    return IntGetWindowLong(hWnd, nIndex, sizeof(LONG), TRUE);
}

#define GWL_STYLE (-16)

BOOL WINAPI
IsZoomed(HWND hWnd)
{
    return (GetWindowLongPtrW(hWnd, GWL_STYLE) & WS_MAXIMIZE) != 0;
}

static inline void* UlongToHandle(const long h)
{
    return((void*)(UINT_PTR)h);
}

typedef struct _LARGE_STRING
{
    ULONG Length;
    ULONG MaximumLength : 31;
    ULONG bAnsi : 1;
    PVOID Buffer;
} LARGE_STRING, * PLARGE_STRING;

/*
UNICODE_STRING initUNICODE_STRING() {
    UNICODE_STRING result;
    //result.Length = (uint16_t)(wcslen(text) * sizeof(wchar_t));
    //result.MaximumLength = (uint16_t)((wcslen(text) + 1) * sizeof(wchar_t));
    //result.Buffer = (PWSTR)text;
    return result;
}

LARGE_STRING initLARGE_STRING(wchar_t* text) {
    LARGE_STRING result;
    result.Length = (uint16_t)(wcslen(text) * sizeof(wchar_t));
    result.MaximumLength = (uint16_t)((wcslen(text) + 1) * sizeof(wchar_t));
    result.bAnsi = 1;
    result.Buffer = (PVOID)text;
    return result;
}*/

typedef struct _WNDCLASSEXA {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
    HICON hIconSm;
} WNDCLASSEXA, * LPWNDCLASSEXA, * PWNDCLASSEXA;

HWND WINAPI
User32CreateWindowEx(DWORD dwExStyle,
    LPCSTR lpClassName,
    LPCSTR lpWindowName,
    DWORD dwStyle,
    int x,
    int y,
    int nWidth,
    int nHeight,
    HWND hWndParent,
    HMENU hMenu,
    HINSTANCE hInstance,
    LPVOID lpParam,
    DWORD dwFlags)
{
    //LARGE_STRING WindowName = initLARGE_STRING((wchar_t*)L"WinName");
    LARGE_STRING lstrClassName, * plstrClassName;
    LARGE_STRING lstrClassVersion, * plstrClassVersion;
    //UNICODE_STRING ClassName = initUNICODE_STRING();
    //UNICODE_STRING ClassVersion = initUNICODE_STRING();
    //WNDCLASSEXA wceA;
    //WNDCLASSEXW wceW;
    //HMODULE hLibModule = NULL;
    DWORD dwLastError;
    BOOL Unicode, ClassFound = FALSE;
    HWND Handle = NULL;
    //LPCWSTR lpszClsVersion;
    //LPCWSTR lpLibFileName = NULL;
    HANDLE pCtx = NULL;
    DWORD dwFlagsVer;

#if 0
    DbgPrint("[window] User32CreateWindowEx style %d, exstyle %d, parent %d\n", dwStyle, dwExStyle, hWndParent);
#endif
    
    //dwFlagsVer = RtlGetExpWinVer(hInstance ? hInstance : GetModuleHandleW(NULL));
    //TRACE("Module Version %x\n", dwFlagsVer);

    if (!RegisterDefaultClasses)
    {
        TRACE("RegisterSystemControls\n");
        RegisterSystemControls();
    }

    Unicode = !(dwFlags & NUCWE_ANSI);

    //if (IS_ATOM(lpClassName))
    {
        //plstrClassName = (PVOID)lpClassName;
    }
    //else
    {
        if (Unicode)
        {
            //RtlInitUnicodeString(&ClassName, (PCWSTR)lpClassName);
        }
        else
        {
            //if (!RtlCreateUnicodeStringFromAsciiz(&ClassName, (PCSZ)lpClassName))
            {
                //SetLastError(ERROR_OUTOFMEMORY);
                return NULL;
            }
        }

        /* Copy it to a LARGE_STRING */
        //lstrClassName.Buffer = ClassName.Buffer;
        //lstrClassName.Length = ClassName.Length;
        //lstrClassName.MaximumLength = ClassName.MaximumLength;
        //plstrClassName = &lstrClassName;
    }

    /* Initialize a LARGE_STRING */
    //RtlInitLargeString(&WindowName, lpWindowName, Unicode);

    // HACK: The current implementation expects the Window name to be UNICODE
    if (!Unicode)
    {
        NTSTATUS Status;
        //PSTR AnsiBuffer = WindowName.Buffer;
        //ULONG AnsiLength = WindowName.Length;

        //WindowName.Length = 0;
        //WindowName.MaximumLength = AnsiLength * sizeof(WCHAR);
        /*WindowName.Buffer = RtlAllocateHeap(RtlGetProcessHeap(),
            0,
            WindowName.MaximumLength);*/
        //if (!WindowName.Buffer)
        {
            //SetLastError(ERROR_OUTOFMEMORY);
            //goto cleanup;
        }

        /*Status = RtlMultiByteToUnicodeN(WindowName.Buffer,
            WindowName.MaximumLength,
            &WindowName.Length,
            AnsiBuffer,
            AnsiLength);*/
        //if (!NT_SUCCESS(Status))
        {
            //goto cleanup;
        }
    }

    if (!hMenu && (dwStyle & (WS_OVERLAPPEDWINDOW | WS_POPUP)))
    {
        if (Unicode)
        {
            //wceW.cbSize = sizeof(wceW);
            //if (GetClassInfoExW(hInstance, (LPCWSTR)lpClassName, &wceW) && wceW.lpszMenuName)
            {
                //hMenu = LoadMenuW(hInstance, wceW.lpszMenuName);
            }
        }
        else
        {
            //wceA.cbSize = sizeof(wceA);
            //if (GetClassInfoExA(hInstance, lpClassName, &wceA) && wceA.lpszMenuName)
            {
                //hMenu = LoadMenuA(hInstance, wceA.lpszMenuName);
            }
        }
    }

    //if (!Unicode) dwExStyle |= WS_EX_SETANSICREATOR;

    //lpszClsVersion = ClassNameToVersion(lpClassName, NULL, &lpLibFileName, &pCtx, !Unicode);
    //if (!lpszClsVersion)
    {
        //plstrClassVersion = plstrClassName;
    }
    //else
    {
        //RtlInitUnicodeString(&ClassVersion, lpszClsVersion);
        //lstrClassVersion.Buffer = ClassVersion.Buffer;
        //lstrClassVersion.Length = ClassVersion.Length;
        //lstrClassVersion.MaximumLength = ClassVersion.MaximumLength;
        //plstrClassVersion = &lstrClassVersion;
    }

    for (;;)
    {
        /*Handle = NtUserCreateWindowEx(dwExStyle,
            plstrClassName,
            plstrClassVersion,
            &WindowName,
            dwStyle,
            x,
            y,
            nWidth,
            nHeight,
            hWndParent,
            hMenu,
            hInstance,
            lpParam,
            dwFlagsVer,
            pCtx);*/
        if (Handle) break;
        //if (!lpLibFileName) break;
        if (!ClassFound)
        {
            /*dwLastError = GetLastError();
            if (dwLastError == ERROR_CANNOT_FIND_WND_CLASS)
            {
                ClassFound = VersionRegisterClass(ClassName.Buffer, lpLibFileName, pCtx, &hLibModule);
                if (ClassFound) continue;
            }*/
        }
        //if (hLibModule)
        {
            //dwLastError = GetLastError();
            //FreeLibrary(hLibModule);
            //SetLastError(dwLastError);
            //hLibModule = NULL;
        }
        break;
    }

#if 0
    DbgPrint("[window] NtUserCreateWindowEx() == %d\n", Handle);
#endif

cleanup:
    /*if (!Unicode)
    {
        if (!IS_ATOM(lpClassName))
            RtlFreeUnicodeString(&ClassName);

        RtlFreeLargeString(&WindowName);
    }*/

    return Handle;
}

HWND
WINAPI
DECLSPEC_HOTPATCH
CreateWindowExA(DWORD dwExStyle,
    LPCSTR lpClassName,
    LPCSTR lpWindowName,
    DWORD dwStyle,
    int x,
    int y,
    int nWidth,
    int nHeight,
    HWND hWndParent,
    HMENU hMenu,
    HINSTANCE hInstance,
    LPVOID lpParam)
{
    MDICREATESTRUCTA mdi;
    HWND hwnd = NULL;

    if (!RegisterDefaultClasses)
    {
        TRACE("CreateWindowExA RegisterSystemControls\n");
        RegisterSystemControls();
    }

    typedef struct _POINT
    {
        int x, y;
    }
    POINT;

    if (dwExStyle & WS_EX_MDICHILD)
    {
        POINT mPos[2];
        UINT id = 0;
        HWND top_child;
        PWND pWndParent;

        //pWndParent = ValidateHwnd(hWndParent);
        pWndParent = (PWND)ValidateHandle(hwnd, 0);

        if (!pWndParent) return NULL;

        if (pWndParent->fnid != FNID_MDICLIENT) // wine uses WIN_ISMDICLIENT
        {
            WARN("WS_EX_MDICHILD, but parent %p is not MDIClient\n", hWndParent);
            goto skip_mdi;
        }

        /* lpParams of WM_[NC]CREATE is different for MDI children.
        * MDICREATESTRUCT members have the originally passed values.
        */
        mdi.szClass = lpClassName;
        mdi.szTitle = lpWindowName;
        mdi.hOwner = hInstance;
        mdi.x = x;
        mdi.y = y;
        mdi.cx = nWidth;
        mdi.cy = nHeight;
        mdi.style = dwStyle;
        mdi.lParam = (LPARAM)lpParam;

        lpParam = (LPVOID)&mdi;

        if (pWndParent->style & MDIS_ALLCHILDSTYLES)
        {
            if (dwStyle & WS_POPUP)
            {
                WARN("WS_POPUP with MDIS_ALLCHILDSTYLES is not allowed\n");
                return(0);
            }
            dwStyle |= (WS_CHILD | WS_CLIPSIBLINGS);
        }
        else
        {
            dwStyle &= ~WS_POPUP;
            dwStyle |= (WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CAPTION |
                WS_SYSMENU | WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX);
        }

        top_child = GetWindow(hWndParent, GW_CHILD);

        if (top_child)
        {
            /* Restore current maximized child */
            if ((dwStyle & WS_VISIBLE) && IsZoomed(top_child))
            {
                TRACE("Restoring current maximized child %p\n", top_child);
                //SendMessageW(top_child, WM_SETREDRAW, FALSE, 0);
                //ShowWindow(top_child, SW_RESTORE);
                //SendMessageW(top_child, WM_SETREDRAW, TRUE, 0);
            }
        }

        //MDI_CalcDefaultChildPos(hWndParent, -1, mPos, 0, &id);

        if (!(dwStyle & WS_POPUP)) hMenu = UlongToHandle(id);

        if (dwStyle & (WS_CHILD | WS_POPUP))
        {
            if (x == CW_USEDEFAULT || x == CW_USEDEFAULT16)
            {
                x = mPos[0].x;
                y = mPos[0].y;
            }
            if (nWidth == CW_USEDEFAULT || nWidth == CW_USEDEFAULT16 || !nWidth)
                nWidth = mPos[1].x;
            if (nHeight == CW_USEDEFAULT || nHeight == CW_USEDEFAULT16 || !nHeight)
                nHeight = mPos[1].y;
        }
    }

skip_mdi:
    hwnd = User32CreateWindowEx(dwExStyle,
        lpClassName,
        lpWindowName,
        dwStyle,
        x,
        y,
        nWidth,
        nHeight,
        hWndParent,
        hMenu,
        hInstance,
        lpParam,
        NUCWE_ANSI);
    return hwnd;
}


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
    void* lpParam)
{
    return CreateWindowExA(0,lpClassName, lpWindowName, dwStyle, x, y, nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam);
};

#define MAX_BUFFER_LEN 512
#define MAX_ATOM_LEN 512

typedef __wchar_t WCHAR;

typedef const WCHAR* LPCWSTR;
typedef __wchar_t WCHAR;
typedef unsigned char UCHAR;
typedef char* LPSTR;
typedef const char* LPCSTR;
typedef WCHAR* LPWSTR;
typedef const WCHAR* LPCWSTR;

typedef struct _WNDCLASSEXW {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
    HICON hIconSm;
} WNDCLASSEXW, * LPWNDCLASSEXW, * PWNDCLASSEXW;

#define 	RtlCopyMemory(Destination, Source, Length)   memcpy(Destination, Source, Length)

#define IS_INTRESOURCE(i) (((ULONG_PTR)(i) >> 16) == 0)

#define CP_ACP 0
#define MultiByteToWideChar __MultiByteToWideChar
#define WideCharToMultiByte __WideCharToMultiByte
INT __MultiByteToWideChar(UINT page, DWORD flags, LPCSTR src, INT srclen, LPWSTR dst, INT dstlen);
INT __WideCharToMultiByte(UINT page, DWORD flags, LPCWSTR src, INT srclen, LPSTR dst, INT dstlen, LPCSTR defchar, BOOL* used);

#define IS_ATOM(x) \
  (((ULONG_PTR)(x) > 0x0) && ((ULONG_PTR)(x) < 0x10000))

#define CSF_SERVERSIDEPROC  0x0001
#define CSF_ANSIPROC        0x0002
#define CSF_WOWDEFERDESTROY 0x0004
#define CSF_SYSTEMCLASS     0x0008
#define CSF_WOWCLASS        0x0010
#define CSF_WOWEXTRA        0x0020
#define CSF_CACHEDSMICON    0x0040
#define CSF_WIN40COMPAT     0x0080

typedef DWORD* LPDWORD;

typedef struct _CLSMENUNAME
{
    LPSTR pszClientAnsiMenuName;
    LPWSTR pwszClientUnicodeMenuName;
    PUNICODE_STRING pusMenuName;
} CLSMENUNAME, * PCLSMENUNAME;

typedef struct _STRING
{
    USHORT Length;
    USHORT MaximumLength;
    PCHAR Buffer;
} STRING, * PSTRING;

typedef STRING ANSI_STRING;

HINSTANCE User32Instance;

typedef HINSTANCE HMODULE;

long moduleIndex = 1;

#define GET_MODULE_HANDLE_EX_FLAG_PIN 0x1
#define GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT 0x2
#define GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS 0x4

#define STATUS_INVALID_PARAMETER_1              ((NTSTATUS)0xC00000EF)
#define STATUS_INVALID_PARAMETER_2              ((NTSTATUS)0xC00000F0)
#define STATUS_INVALID_PARAMETER_3              ((NTSTATUS)0xC00000F1)
#define STATUS_INVALID_PARAMETER_4              ((NTSTATUS)0xC00000F2)
#define STATUS_INVALID_PARAMETER_5              ((NTSTATUS)0xC00000F3)
#define STATUS_INVALID_PARAMETER_6              ((NTSTATUS)0xC00000F4)
#define STATUS_INVALID_PARAMETER_7              ((NTSTATUS)0xC00000F5)
#define STATUS_INVALID_PARAMETER_8              ((NTSTATUS)0xC00000F6)
#define STATUS_INVALID_PARAMETER_9              ((NTSTATUS)0xC00000F7)
#define STATUS_INVALID_PARAMETER_10             ((NTSTATUS)0xC00000F8)
#define STATUS_INVALID_PARAMETER_11             ((NTSTATUS)0xC00000F9)
#define STATUS_INVALID_PARAMETER_12             ((NTSTATUS)0xC00000FA)

#define BASEP_GET_MODULE_HANDLE_EX_PARAMETER_VALIDATION_ERROR    1
#define BASEP_GET_MODULE_HANDLE_EX_PARAMETER_VALIDATION_SUCCESS  2
#define BASEP_GET_MODULE_HANDLE_EX_PARAMETER_VALIDATION_CONTINUE 3

DWORD
WINAPI
BasepGetModuleHandleExParameterValidation(DWORD dwFlags,
    LPCWSTR lpwModuleName,
    HMODULE* phModule)
{
    /* Set phModule to 0 if it's not a NULL pointer */
    if (phModule) *phModule = 0;

    /* Check for invalid flags combination */
    if (dwFlags & ~(GET_MODULE_HANDLE_EX_FLAG_PIN |
        GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT |
        GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS) ||
        ((dwFlags & GET_MODULE_HANDLE_EX_FLAG_PIN) &&
            (dwFlags & GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT)) ||
        (!lpwModuleName && (dwFlags & GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS))
        )
    {
        //BaseSetLastNTError(STATUS_INVALID_PARAMETER_1);
        return BASEP_GET_MODULE_HANDLE_EX_PARAMETER_VALIDATION_ERROR;
    }

    /* Check 2nd parameter */
    if (!phModule)
    {
        //BaseSetLastNTError(STATUS_INVALID_PARAMETER_2);
        return BASEP_GET_MODULE_HANDLE_EX_PARAMETER_VALIDATION_ERROR;
    }

    /* Return what we have according to the module name */
    if (lpwModuleName)
    {
        return BASEP_GET_MODULE_HANDLE_EX_PARAMETER_VALIDATION_CONTINUE;
    }

    /* No name given, so put ImageBaseAddress there */
    *phModule = (HMODULE)(moduleIndex++);//NtCurrentPeb()->ImageBaseAddress;

    return BASEP_GET_MODULE_HANDLE_EX_PARAMETER_VALIDATION_SUCCESS;
}

BOOLEAN
WINAPI
BasepGetModuleHandleExW(BOOLEAN NoLock, DWORD dwPublicFlags, LPCWSTR lpwModuleName, HMODULE* phModule)
{
    ULONG_PTR Cookie;
    NTSTATUS Status = STATUS_SUCCESS, Status2;
    HANDLE hModule = NULL;
    UNICODE_STRING ModuleNameU;
    DWORD dwValid;
    BOOLEAN Redirected = FALSE; // FIXME

    /* Validate parameters */
    dwValid = BasepGetModuleHandleExParameterValidation(dwPublicFlags, lpwModuleName, phModule);
    //ASSERT(dwValid == BASEP_GET_MODULE_HANDLE_EX_PARAMETER_VALIDATION_CONTINUE);

    /* Acquire lock if necessary */
    if (!NoLock)
    {
        Status = LdrLockLoaderLock(0, NULL, &Cookie);
        if (!NT_SUCCESS(Status))
        {
            /* Fail */
            BaseSetLastNTError(Status);
            if (phModule) *phModule = NULL;
            return NT_SUCCESS(Status);
        }
    }

    if (!(dwPublicFlags & GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS))
    {
        /* Create a unicode string out of module name */
        RtlInitUnicodeString(&ModuleNameU, lpwModuleName);

        // FIXME: Do some redirected DLL stuff?
        if (Redirected)
        {
            UNIMPLEMENTED;
        }

        if (!hModule)
        {
            hModule = GetModuleHandleForUnicodeString(&ModuleNameU);
            if (!hModule)
            {
                /* Last error is already set, so just return failure by setting status */
                Status = STATUS_DLL_NOT_FOUND;
                goto quickie;
            }
        }
    }
    else
    {
        /* Perform Pc to file header to get module instance */
        hModule = (HMODULE)RtlPcToFileHeader((PVOID)lpwModuleName,
            (PVOID*)&hModule);

        /* Check if it succeeded */
        if (!hModule)
        {
            /* Set "dll not found" status and quit */
            Status = STATUS_DLL_NOT_FOUND;
            goto quickie;
        }
    }

    /* Check if changing reference is not forbidden */
    if (!(dwPublicFlags & GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT))
    {
        /* Add reference to this DLL */
        Status = LdrAddRefDll((dwPublicFlags & GET_MODULE_HANDLE_EX_FLAG_PIN) ? LDR_ADDREF_DLL_PIN : 0,
            hModule);
    }

quickie:
    /* Set last error in case of failure */
    if (!NT_SUCCESS(Status))
        BaseSetLastNTError(Status);

    /* Unlock loader lock if it was acquired */
    if (!NoLock)
    {
        Status2 = LdrUnlockLoaderLock(0, Cookie);
        ASSERT(NT_SUCCESS(Status2));
    }

    /* Set the module handle to the caller */
    if (phModule) *phModule = hModule;

    /* Return TRUE on success and FALSE otherwise */
    return NT_SUCCESS(Status);
}

HMODULE
WINAPI
GetModuleHandleW(LPCWSTR lpModuleName)
{
    HMODULE hModule;
    BOOLEAN Success;

    /* If current module is requested - return it right away */
    if (!lpModuleName)
        //return ((HMODULE)NtCurrentPeb()->ImageBaseAddress);
        return (HMODULE)(moduleIndex++);

    /* Use common helper routine */
    Success = BasepGetModuleHandleExW(TRUE,
        GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        lpModuleName,
        &hModule);

    /* If it wasn't successful - return NULL */
    if (!Success) hModule = NULL;

    /* Return the handle */
    return hModule;
}

ATOM WINAPI
RegisterClassExWOWW(WNDCLASSEXW* lpwcx,
    LPDWORD pdwWowData,
    WORD fnID,
    DWORD dwFlags,
    BOOL ChkRegCls)
{
    ATOM Atom;
    WNDCLASSEXW WndClass;
    UNICODE_STRING ClassName;
    UNICODE_STRING ClassVersion;
    UNICODE_STRING MenuName = { 0 };
    CLSMENUNAME clsMenuName;
    ANSI_STRING AnsiMenuName;
    LPCWSTR lpszClsVersion;

    if (lpwcx == NULL || lpwcx->cbSize != sizeof(*lpwcx) ||
        lpwcx->cbClsExtra < 0 || lpwcx->cbWndExtra < 0 ||
        lpwcx->lpszClassName == NULL)
    {
        TRACE("RegisterClassExWOWW Invalid Parameter Error!\n");
        //SetLastError(ERROR_INVALID_PARAMETER);
        return 0;
    }

    if (ChkRegCls)
    {
        if (!RegisterDefaultClasses) RegisterSystemControls();
    }
    /*
     * On real Windows this looks more like:
     *    if (lpwcx->hInstance == User32Instance &&
     *        *(PULONG)((ULONG_PTR)NtCurrentTeb() + 0x6D4) & 0x400)
     * But since I have no idea what the magic field in the
     * TEB structure means, I rather decided to omit that.
     * -- Filip Navara

        GetWin32ClientInfo()->dwExpWinVer & (WINVER == 0x400)
     */
    if (lpwcx->hInstance == User32Instance)
    {
        TRACE("RegisterClassExWOWW User32Instance!\n");
        //SetLastError(ERROR_INVALID_PARAMETER);
        return 0;
    }
    /* Yes, this is correct. We should modify the passed structure. */
    if (lpwcx->hInstance == NULL)
        ((WNDCLASSEXW*)lpwcx)->hInstance = GetModuleHandleW(NULL);

    RtlCopyMemory(&WndClass, lpwcx, sizeof(*lpwcx));

    RtlInitEmptyAnsiString(&AnsiMenuName, NULL, 0);
    if (!IS_INTRESOURCE(WndClass.lpszMenuName))
    {
        if (WndClass.lpszMenuName[0])
        {
            RtlInitUnicodeString(&MenuName, WndClass.lpszMenuName);
            RtlUnicodeStringToAnsiString(&AnsiMenuName, &MenuName, TRUE);
        }
    }
    else
    {
        MenuName.Buffer = (LPWSTR)WndClass.lpszMenuName;
        AnsiMenuName.Buffer = (PCHAR)WndClass.lpszMenuName;
    }

    if (WndClass.lpszClassName && !IS_ATOM(WndClass.lpszClassName))
    {
        RtlInitUnicodeString(&ClassName, WndClass.lpszClassName);
    }
    else
    {
        ClassName.Length = ClassName.MaximumLength = 0;
        ClassName.Buffer = (LPWSTR)WndClass.lpszClassName;
    }

    ClassVersion = ClassName;
    if (fnID == 0)
    {
        lpszClsVersion = ClassNameToVersion(lpwcx->lpszClassName, NULL, NULL, NULL, FALSE);
        if (lpszClsVersion)
        {
            RtlInitUnicodeString(&ClassVersion, lpszClsVersion);
        }
    }

    clsMenuName.pszClientAnsiMenuName = AnsiMenuName.Buffer;
    clsMenuName.pwszClientUnicodeMenuName = MenuName.Buffer;
    clsMenuName.pusMenuName = &MenuName;

    Atom = NtUserRegisterClassExWOW(&WndClass,
        &ClassName,
        &ClassVersion,
        &clsMenuName,
        fnID,
        dwFlags,
        pdwWowData);

    TRACE("atom=%04x wndproc=%p hinst=%p bg=%p style=%08x clsExt=%d winExt=%d class=%p\n",
        Atom, lpwcx->lpfnWndProc, lpwcx->hInstance, lpwcx->hbrBackground,
        lpwcx->style, lpwcx->cbClsExtra, lpwcx->cbWndExtra, WndClass);

    return Atom;
}

ATOM WINAPI
RegisterClassExA(CONST WNDCLASSEXA* lpwcx)
{
    ATOM Atom;
    WNDCLASSEXW WndClass;
    WCHAR mname[MAX_BUFFER_LEN];
    WCHAR cname[MAX_BUFFER_LEN];

    C_ASSERT(sizeof(WndClass) == sizeof(*lpwcx));

    RtlCopyMemory(&WndClass, lpwcx, sizeof(*lpwcx));

    if (WndClass.lpszMenuName && !IS_INTRESOURCE(WndClass.lpszMenuName))
    {
        if (WndClass.lpszMenuName[0])
        {
            if (!MultiByteToWideChar(CP_ACP, 0, lpwcx->lpszMenuName, -1, mname, MAX_ATOM_LEN + 1))
                return 0;

            WndClass.lpszMenuName = mname;
        }
    }

    if (WndClass.lpszClassName && !IS_ATOM(WndClass.lpszClassName))
    {
        if (!MultiByteToWideChar(CP_ACP, 0, lpwcx->lpszClassName, -1, cname, MAX_ATOM_LEN + 1))
            return 0;

        WndClass.lpszClassName = cname;
    }

    Atom = RegisterClassExWOWW(&WndClass,
        NULL,
        0,
        CSF_ANSIPROC,
        TRUE);

    TRACE("A atom=%04x wndproc=%p hinst=%p bg=%p style=%08x clsExt=%d winExt=%d class=%p\n",
        Atom, lpwcx->lpfnWndProc, lpwcx->hInstance, lpwcx->hbrBackground,
        lpwcx->style, lpwcx->cbClsExtra, lpwcx->cbWndExtra, WndClass);

    return Atom;
}

ATOM WINAPI
RegisterClassA(CONST WNDCLASSA* lpWndClass)
{
    WNDCLASSEXA Class;

    if (lpWndClass == NULL)
        return 0;

    /* These MUST be copied manually, since on 64 bit architectures the
       alignment of the members is different between the 2 structs! */
    Class.style = lpWndClass->style;
    Class.lpfnWndProc = lpWndClass->lpfnWndProc;
    Class.cbClsExtra = lpWndClass->cbClsExtra;
    Class.cbWndExtra = lpWndClass->cbWndExtra;
    Class.hInstance = lpWndClass->hInstance;
    Class.hIcon = lpWndClass->hIcon;
    Class.hCursor = lpWndClass->hCursor;
    Class.hbrBackground = lpWndClass->hbrBackground;
    Class.lpszMenuName = lpWndClass->lpszMenuName;
    Class.lpszClassName = lpWndClass->lpszClassName;

    Class.cbSize = sizeof(Class);
    Class.hIconSm = NULL;

    return RegisterClassExA(&Class);
}




