#include <windows.h>
#include <string>
#include <tchar.h>

// Velikost bufferu pro text
const int BUFFER_SIZE = 1024;

// Globální proměnné
HINSTANCE hInst;
HWND hWnd;
SCROLLINFO si;
int yPos = 0;
TCHAR buffer[BUFFER_SIZE] = TEXT("Toto je testovací text. Můžete sem vložit jakýkoliv dlouhý text, který chcete rolovat.\n"
    "Další řádek textu pro testování rolování.\n"
    "Ještě jeden řádek textu pro zobrazení.\n");

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

ATOM MyRegisterClass(HINSTANCE hInstance) {
    WNDCLASSEX wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = 0/* | CS_HREDRAW | CS_VREDRAW */  /* | CS_OWNDC*/;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = TEXT("ScrollTextClass");
    wcex.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

    return RegisterClassEx(&wcex);
}

BOOL InitInstance(HINSTANCE hInstance, int nCmdShow) {
    hInst = hInstance;

    hWnd = CreateWindow(TEXT("ScrollTextClass"), TEXT("Scrolling Text Example"), WS_OVERLAPPEDWINDOW | WS_VSCROLL,
        CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, hInstance, NULL);

    if (!hWnd) {
        return FALSE;
    }

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    return TRUE;
}

void SetVerticalScrollBar(HWND hWnd) {
    si.cbSize = sizeof(si);
    si.fMask = SIF_RANGE | SIF_PAGE;
    si.nMin = 0;
    si.nMax = 100;  // Nastavte podle potřeby
    si.nPage = 10;  // Nastavte podle potřeby
    SetScrollInfo(hWnd, SB_VERT, &si, TRUE);
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
    PAINTSTRUCT ps;
    HDC hdc;
    RECT rect;
    TEXTMETRIC tm;
    int charHeight;

    switch (message) {
    case WM_CREATE:
        SetVerticalScrollBar(hWnd);
        break;

    case WM_SIZE:
        SetVerticalScrollBar(hWnd);
        break;

    case WM_VSCROLL:
        switch (LOWORD(wParam)) {
        case SB_LINEUP:
            yPos -= 1;
            break;
        case SB_LINEDOWN:
            yPos += 1;
            break;
        case SB_PAGEUP:
            yPos -= 10;
            break;
        case SB_PAGEDOWN:
            yPos += 10;
            break;
        case SB_THUMBTRACK:
            yPos = HIWORD(wParam);
            break;
        }

        // Ujistěte se, že yPos zůstane v povoleném rozsahu
        yPos = max(0, min(yPos, 100));

        si.fMask = SIF_POS;
        si.nPos = yPos;
        SetScrollInfo(hWnd, SB_VERT, &si, TRUE);

        InvalidateRect(hWnd, NULL, TRUE);
        break;

    case WM_PAINT:
        hdc = BeginPaint(hWnd, &ps);

        GetClientRect(hWnd, &rect);
        GetTextMetrics(hdc, &tm);
        charHeight = tm.tmHeight + tm.tmExternalLeading;

        // Posunout DC podle yPos
        SetWindowOrgEx(hdc, 0, yPos * charHeight, NULL);

        // Vykreslit text
        DrawText(hdc, buffer, -1, &rect, DT_LEFT);

        EndPaint(hWnd, &ps);
        break;

    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

int MyWinMain(HINSTANCE hInstance, int nCmdShow) {

    WNDCLASSEX wcex;
    HFONT hf1, hf2;

    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = 0/*CS_HREDRAW | CS_VREDRAW | */ /*CS_OWNDC*/;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = TEXT("ScrollTextClass");
    wcex.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

    RegisterClassEx(&wcex);

    hInst = hInstance;

    hWnd = CreateWindow(TEXT("ScrollTextClass"), TEXT("Scrolling Text Example"), WS_OVERLAPPEDWINDOW | WS_VSCROLL,
        CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, hInstance, NULL);

    if (!hWnd) {
        return FALSE;
    }

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    hf1 = CreateFont(30, 0, 0, 0, FW_BOLD, FALSE, FALSE, FALSE, ANSI_CHARSET,
        OUT_TT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY,
        DEFAULT_PITCH | FF_DONTCARE, L"Arial");
    hf2 = CreateFont(30, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, ANSI_CHARSET,
        OUT_TT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY,
        DEFAULT_PITCH | FF_DONTCARE, L"Courier New");

    HDC hdc1;
    HDC hdc2;
    hdc1 = GetDC(hWnd);
    printf("hdc1: %x\n", hdc1);
    ReleaseDC(hWnd, hdc1);

    hdc2 = GetDC(hWnd);
    printf("hdc2: %x\n", hdc2);
    ReleaseDC(hWnd, hdc1);

    hdc1 = GetDC(hWnd);
    hdc2 = GetDC(hWnd);
    printf("hdc1: %x\n", hdc1);
    printf("hdc2: %x\n", hdc2);
    ReleaseDC(hWnd, hdc1);
    ReleaseDC(hWnd, hdc1);

    /*HDC hdc1 = GetDC(hWnd);
    printf("hdc1: %x\n", hdc1);
    HFONT hfPrev1 = (HFONT)SelectObject(hdc1, hf1);
    UINT taPrev1 = SetTextAlign(hdc1, TA_UPDATECP);
    MoveToEx(hdc1, 0, 0, NULL);
    
    HDC hdc2 = GetDC(hWnd);
    printf("hdc2: %x\n", hdc2);
    HFONT hfPrev2 = (HFONT)SelectObject(hdc2, hf2);
    for (const wchar_t* psz = L"Hello"; *psz; psz++)
    {
        POINT pt;
        GetCurrentPositionEx(hdc1, &pt);
        TextOut(hdc2, pt.x, pt.y + 30, psz, 1);
        TextOut(hdc1, 0, 0, psz, 1);
    }
    SelectObject(hdc1, hfPrev1);
    SelectObject(hdc2, hfPrev2);
    SetTextAlign(hdc1, taPrev1);
    ReleaseDC(hWnd, hdc1);
    ReleaseDC(hWnd, hdc2);*/

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}

int main()
{
    MyWinMain(GetModuleHandle(NULL), SW_SHOW);
}
