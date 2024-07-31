// testLIST_ENTRY.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

#if defined(_M_MRX000) && !(defined(MIDL_PASS) || defined(RC_INVOKED)) && defined(ENABLE_RESTRICTED)
#define RESTRICTED_POINTER __restrict
#else
#define RESTRICTED_POINTER
#endif

typedef int BOOL;

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY* Flink;
    struct _LIST_ENTRY* Blink;
} LIST_ENTRY, * PLIST_ENTRY, * RESTRICTED_POINTER PRLIST_ENTRY;

typedef int HWND;

typedef struct _WND
{
    HWND hwnd;
    int index;
} WND, * PWND;

typedef struct _DCEPWND_TYPE
{
    LIST_ENTRY Entry;
    PWND pwnd;
} DCEPWND_TYPE, * PDCEPWND_TYPE;

typedef struct tagDCE
{
    LIST_ENTRY   List;
    //HDC          hDC;
    LIST_ENTRY pwndCurrectl;
    PWND pwndCurrect;
    ////PWND pwndCurrect;
    ////LIST_ENTRY pwndCurrectl;
    ////HWND         hwndCurrentx;
    ////PWND         pwndOrg;
    ////PWND         pwndClip;
    ////PWND         pwndRedirect;
    //HRGN         hrgnClip;
    //HRGN         hrgnClipPublic;
    //HRGN         hrgnSavedVis;
    //DWORD        DCXFlags;
    //PTHREADINFO  ptiOwner;
    //PPROCESSINFO ppiOwner;
    //struct _MONITOR* pMonitor;
} DCE, * PDCE;

void ERR(const char* format, ...) {
    printf(format);
}

typedef char CHAR;
typedef CHAR* PCHAR, * LPCH, * PCH;

#if defined(_WIN64) || defined(_M_X64) || defined(__x86_64__)
typedef uint64_t ULONG_PTR;
#else
typedef uint32_t ULONG_PTR;
#endif

#define USERTAG_DCE                      'cdsU'
#define PagedPool 1

#define CONTAINING_RECORD(address, type, field) ((type *)( \
                                                  (PCHAR)(address) - \
                                                  (ULONG_PTR)(&((type *)0)->field)))

typedef void* PVOID;
typedef unsigned long SIZE_T;

#ifndef FORCEINLINE
#if (_MSC_VER >= 1200)
#define FORCEINLINE __forceinline
#else
#define FORCEINLINE __inline
#endif
#endif

#ifndef VOID
#define VOID void
typedef char CHAR;
typedef short SHORT;
typedef long LONG;
#if !defined(MIDL_PASS)
typedef int INT;
#endif
#endif

typedef unsigned char BYTE;
typedef BYTE  BOOLEAN;

typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, * PSINGLE_LIST_ENTRY;

FORCEINLINE
VOID
InitializeListHead(
    _Out_ PLIST_ENTRY ListHead
)
{
    ListHead->Flink = ListHead->Blink = ListHead;
}

FORCEINLINE
VOID
InsertHeadList(
    _Inout_ PLIST_ENTRY ListHead,
    _Inout_ PLIST_ENTRY Entry
)
{
    PLIST_ENTRY OldFlink;
    OldFlink = ListHead->Flink;
    Entry->Flink = OldFlink;
    Entry->Blink = ListHead;
    OldFlink->Blink = Entry;
    ListHead->Flink = Entry;
}

FORCEINLINE
VOID
InsertTailList(
    _Inout_ PLIST_ENTRY ListHead,
    _Inout_ PLIST_ENTRY Entry
)
{
    PLIST_ENTRY OldBlink;
    OldBlink = ListHead->Blink;
    Entry->Flink = ListHead;
    Entry->Blink = OldBlink;
    OldBlink->Flink = Entry;
    ListHead->Blink = Entry;
}

_Must_inspect_result_
FORCEINLINE
BOOLEAN
IsListEmpty(
    _In_ const LIST_ENTRY* ListHead
)
{
    return (BOOLEAN)(ListHead->Flink == ListHead);
}

FORCEINLINE
PSINGLE_LIST_ENTRY
PopEntryList(
    _Inout_ PSINGLE_LIST_ENTRY ListHead
)
{
    PSINGLE_LIST_ENTRY FirstEntry;
    FirstEntry = ListHead->Next;
    if (FirstEntry != NULL) {
        ListHead->Next = FirstEntry->Next;
    }

    return FirstEntry;
}

FORCEINLINE
VOID
PushEntryList(
    _Inout_ PSINGLE_LIST_ENTRY ListHead,
    _Inout_ PSINGLE_LIST_ENTRY Entry
)
{
    Entry->Next = ListHead->Next;
    ListHead->Next = Entry;
}

FORCEINLINE
BOOLEAN
RemoveEntryList(
    _In_ PLIST_ENTRY Entry)
{
    PLIST_ENTRY OldFlink;
    PLIST_ENTRY OldBlink;

    OldFlink = Entry->Flink;
    OldBlink = Entry->Blink;
    OldFlink->Blink = OldBlink;
    OldBlink->Flink = OldFlink;
    return (BOOLEAN)(OldFlink == OldBlink);
}

FORCEINLINE
PLIST_ENTRY
RemoveHeadList(
    _Inout_ PLIST_ENTRY ListHead)
{
    PLIST_ENTRY Flink;
    PLIST_ENTRY Entry;

    Entry = ListHead->Flink;
    Flink = Entry->Flink;
    ListHead->Flink = Flink;
    Flink->Blink = ListHead;
    return Entry;
}

FORCEINLINE
PLIST_ENTRY
RemoveTailList(
    _Inout_ PLIST_ENTRY ListHead)
{
    PLIST_ENTRY Blink;
    PLIST_ENTRY Entry;

    Entry = ListHead->Blink;
    Blink = Entry->Blink;
    ListHead->Blink = Blink;
    Blink->Flink = ListHead;
    return Entry;
}

PDCEPWND_TYPE ExAllocatePoolWithTag(int PoolType, SIZE_T NumberOfBytes, ULONG_PTR Tag) {
    // PoolType se v tomto příkladu nepoužívá, ale můžete jej použít, pokud chcete
    PVOID allocatedMemory = malloc(NumberOfBytes);
    if (allocatedMemory == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    // Pro demonstraci přidáme do paměti tag (4 bajty)
    //memcpy(allocatedMemory, &Tag, sizeof(ULONG_PTR));
    return (PDCEPWND_TYPE)allocatedMemory;
}

// Funkce pro uvolnění paměti s tagem
void ExFreePoolWithTag(PVOID P, ULONG_PTR Tag) {
    if (P != NULL) {
        // Volitelně můžete ověřit tag, pokud je uložený v paměti
        //ULONG_PTR storedTag;
        //memcpy(&storedTag, P, sizeof(ULONG_PTR));
        /*if (storedTag == Tag) {
            printf("Tag matches, freeing memory\n");
        }
        else {
            printf("Tag does not match, potential error\n");
        }*/
        free(P);
    }
}

HWND UserHMGetHandle(PWND pwnd)
{
    return pwnd->hwnd;
};

void
StructDceDrawState(PDCE pDce)
{
    PLIST_ENTRY ListEntry;
    PWND pwnd = NULL;
    ListEntry = pDce->pwndCurrectl.Flink;
    while (ListEntry != &pDce->pwndCurrectl)
    {
        pwnd = CONTAINING_RECORD(ListEntry, DCEPWND_TYPE, Entry)->pwnd;
        ListEntry = ListEntry->Flink;
        //ERR("item - F3:%x\n", pwnd);
        if (pwnd)ERR("item - F3:%d\n", pwnd->hwnd);
    }
    if (pDce->pwndCurrectl.Flink != &pDce->pwndCurrectl)
    {
        pwnd = CONTAINING_RECORD(pDce->pwndCurrectl.Flink, DCEPWND_TYPE, Entry)->pwnd;
        if (pwnd)ERR("tail:%d\n", pwnd->hwnd);
    }
    if (pDce->pwndCurrectl.Blink != &pDce->pwndCurrectl)
    {
        //ERR("item - F3:%x\n", pwnd);
        pwnd = CONTAINING_RECORD(pDce->pwndCurrectl.Blink, DCEPWND_TYPE, Entry)->pwnd;
        if (pwnd)ERR("begin:%d\n", pwnd->hwnd);
    }
}

BOOL
StructDceExist(PDCE pDce, PWND pwnd)
{
    PLIST_ENTRY ListEntry;
    PWND listPwnd = NULL;
    ListEntry = pDce->pwndCurrectl.Flink;
    while (ListEntry != &pDce->pwndCurrectl)
    {
        listPwnd = CONTAINING_RECORD(ListEntry, DCEPWND_TYPE, Entry)->pwnd;
        ListEntry = ListEntry->Flink;
        if(listPwnd== pwnd)
            return TRUE;
    }
    return FALSE;
}

void
StructDceAddPwnd(PDCE pDce, PWND pwnd, int index)
{
    //pDce->pwndCurrect = pwnd;
    if (!pwnd)
        return;
    if (StructDceExist(pDce, pwnd))
        return;

    StructDceDrawState(pDce);

    ERR("StructDceAddPwnd - A %x %d\n", pwnd, index);
    PDCEPWND_TYPE DCEPWNDEntry;
    // ERR("StructDceAddPwnd - B\n");
    DCEPWNDEntry = ExAllocatePoolWithTag(PagedPool, sizeof(DCEPWND_TYPE), USERTAG_DCE);
    // ERR("StructDceAddPwnd - C\n");
    if (!DCEPWNDEntry)
    {
        // ERR("StructDceAddPwnd - D\n");
        return;
    }
    DCEPWNDEntry->pwnd = pwnd;
    // ERR("StructDceAddPwnd - E\n");
    InsertTailList(pDce->pwndCurrectl.Flink, &DCEPWNDEntry->Entry);//original code swith to this
    /* {
            PLIST_ENTRY OldBlink;
            //ERR("StructDceAddPwnd - F\n");
            OldBlink = (&pDce->pwndCurrectl)->Blink;
            //ERR("StructDceAddPwnd - G\n");
            (&DCEPWNDEntry->Entry)->Flink = (&pDce->pwndCurrectl);
            //ERR("StructDceAddPwnd - H\n");
            (&DCEPWNDEntry->Entry)->Blink = OldBlink;
            //ERR("StructDceAddPwnd - I\n");
            OldBlink->Flink = (&DCEPWNDEntry->Entry);
            //ERR("StructDceAddPwnd - J\n");
            (&pDce->pwndCurrectl)->Blink = (&DCEPWNDEntry->Entry);
            //ERR("StructDceAddPwnd - K\n");
        }*/

    ERR("StructDceAddPwnd - F\n");

    StructDceDrawState(pDce);
};

PWND
StructDceGetPwnd(PDCE pDce)
{
    StructDceDrawState(pDce);
    //return pDce->pwndCurrect;
    ERR("StructDceGetPwnd - A\n");
    return CONTAINING_RECORD(&pDce->pwndCurrectl, DCEPWND_TYPE, Entry)->pwnd;
};

HWND
StructDceGetHwnd(PDCE pDce)
{
    StructDceDrawState(pDce);
    //return (pDce->pwndCurrect ? UserHMGetHandle(pDce->pwndCurrect) : NULL);
    ERR("StructDceGetHwnd - A %x\n", pDce);
    PWND Wnd = CONTAINING_RECORD(&pDce->pwndCurrectl, DCEPWND_TYPE, Entry)->pwnd;
    ERR("StructDceGetHwnd - B %x\n", Wnd);
    //ERR("StructDceGetHwnd - B\n");
    return (Wnd ? UserHMGetHandle(Wnd) : NULL);
};

void
StructDceRemoveHwnd(PDCE pDce)
{
    StructDceDrawState(pDce);
    //pDce->pwndCurrect = NULL;
    ERR("StructDceRemoveHwnd - A\n");
    if (!IsListEmpty(&pDce->pwndCurrectl))
    {
        //ERR("StructDceRemoveHwnd - B\n");
        PLIST_ENTRY Entry = RemoveHeadList(&pDce->pwndCurrectl);
        //ERR("StructDceRemoveHwnd - C\n");
        PDCEPWND_TYPE DCEPWNDEntry = CONTAINING_RECORD(Entry, DCEPWND_TYPE, Entry);
        //ERR("StructDceRemoveHwnd - D\n");
        ExFreePoolWithTag(DCEPWNDEntry, USERTAG_DCE);
        //ERR("StructDceRemoveHwnd - E\n");
    }
    //StructDceDrawState(pDce);
};

void
StructDceClean(PDCE pDce)
{
    StructDceDrawState(pDce);
    //pDce->pwndCurrect = NULL;
    ERR("StructDceClean - A\n");
    while (!IsListEmpty(&pDce->pwndCurrectl))
    {
        //ERR("StructDceClean - B\n");
        //PLIST_ENTRY Entry = RemoveHeadList(&pDce->pwndCurrectl);//original code swith to this

        PLIST_ENTRY Flink;
        PLIST_ENTRY Entry2;
        //ERR("StructDceClean - B1\n");
        Entry2 = (&pDce->pwndCurrectl)->Flink;
        //ERR("StructDceClean - B2\n");
        Flink = Entry2->Flink;
        //ERR("StructDceClean - B3\n");
        (&pDce->pwndCurrectl)->Flink = Flink;
        //ERR("StructDceClean - B4\n");
        Flink->Blink = (&pDce->pwndCurrectl);
        //ERR("StructDceClean - B5\n");
        PLIST_ENTRY Entry = Entry2;



        //ERR("StructDceClean - C\n");
        PDCEPWND_TYPE DCEPWNDEntry = CONTAINING_RECORD(Entry, DCEPWND_TYPE, Entry);
        //ERR("StructDceClean - D\n");
        ExFreePoolWithTag(DCEPWNDEntry, USERTAG_DCE);
        //ERR("StructDceClean - E\n");
    }
    //StructDceDrawState(pDce);
};

void
StructDceInit(PDCE pDce)
{
    ERR("StructDceInit - A\n");
    //StructDceClean(pDce);
    //ERR("StructDceInit - B\n");
    InitializeListHead(&pDce->pwndCurrectl);
    //ERR("StructDceInit - C\n");
    //StructDceDrawState(pDce);
};

BOOL
StructDceCompareHwnd(PDCE pDce, PWND Wnd, int index)
{
    //HWND curHwnd = (pDce->pwndCurrect ? UserHMGetHandle(pDce->pwndCurrect) : NULL);
    ERR("StructDceCompareHwnd - A %d\n", index);
    PWND curWnd = CONTAINING_RECORD(&pDce->pwndCurrectl, DCEPWND_TYPE, Entry)->pwnd;
    ERR("StructDceCompareHwnd - B %x\n", Wnd);
    //HWND curHwnd = (Wnd ? UserHMGetHandle(Wnd) : NULL);
    //ERR("StructDceCompareHwnd - C\n");
    if (curWnd == Wnd)
        return TRUE;
    ERR("StructDceCompareHwnd - D\n");
    return FALSE;
};

int main()
{
    DCE Dce;
    StructDceInit(&Dce);
    WND Window;
    Window.hwnd = 20;
    WND Window2;
    Window2.hwnd = 40;
    WND Window3;
    Window3.hwnd = 60;
    StructDceDrawState(&Dce);
    StructDceAddPwnd(&Dce, &Window, 0);
    StructDceDrawState(&Dce);
    StructDceAddPwnd(&Dce, &Window2, 0);
    StructDceDrawState(&Dce);
    StructDceAddPwnd(&Dce, &Window3, 0);
    StructDceDrawState(&Dce);
    StructDceAddPwnd(&Dce, &Window3, 0);
    StructDceDrawState(&Dce);
    StructDceAddPwnd(&Dce, NULL, 0);
    StructDceDrawState(&Dce);
    std::cout << "Hello World!\n";
}
