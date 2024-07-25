#include <windows.h>
#include <string>

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
    wcex.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
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

    MyRegisterClass(hInstance);

    if (!InitInstance(hInstance, nCmdShow)) {
        return FALSE;
    }

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
