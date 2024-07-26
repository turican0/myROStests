#include <windows.h>
#include <stdio.h>

void ServeSomeMessages(int messageTime, int messageCount)
{
    DWORD startTime;

    MSG msg = { 0 };
    startTime = GetTickCount();
    while (GetTickCount() - startTime < messageTime * messageCount)
    {
        if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
        else
        {
            Sleep(messageTime);
        }
    }
}

void DrawLine(HWND hwnd, int x1, int y1, int x2, int y2)
{
    HDC hdc = GetDC(hwnd);
    MoveToEx(hdc, x1, y1, NULL);
    LineTo(hdc, x2, y2);
    ReleaseDC(hwnd, hdc);
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    static int counter = 0;

    switch (uMsg)
    {
    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }

    return 0;
}

int  MyWinMain(HINSTANCE hInstance, int nCmdShow)
{
    WNDCLASS wc1 = { 0 };
    wc1.lpfnWndProc = WndProc;
    wc1.hInstance = hInstance;
    wc1.lpszClassName = L"ClassWithOwnDC";
    wc1.style = CS_OWNDC; // Window class with CS_OWNDC
    RegisterClass(&wc1);

    WNDCLASS wc2 = { 0 };
    wc2.lpfnWndProc = WndProc;
    wc2.hInstance = hInstance;
    wc2.lpszClassName = L"ClassWithoutOwnDC";
    wc2.style = 0; // Window class without CS_OWNDC
    RegisterClass(&wc2);

    HWND hwnd1 = CreateWindowEx(0,wc1.lpszClassName, L"Window With CS_OWNDC", WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 400, 300,
        NULL, NULL, hInstance, NULL);

    HWND hwnd2 = CreateWindowEx(0,wc2.lpszClassName, L"Window Without CS_OWNDC", WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 400, 300,
        NULL, NULL, hInstance, NULL);

    ShowWindow(hwnd1, nCmdShow);
    UpdateWindow(hwnd1);
    ShowWindow(hwnd2, nCmdShow);
    UpdateWindow(hwnd2);

    RECT updateRect;
    //if (GetUpdateRect(hwnd1, &updateRect, FALSE))
        GetUpdateRect(hwnd1, &updateRect, FALSE);
    /* {
        printf("Update Rect Info:\n");
        printf("  Left: %d\n", updateRect.left);
        printf("  Top: %d\n", updateRect.top);
        printf("  Right: %d\n", updateRect.right);
        printf("  Bottom: %d\n", updateRect.bottom);
        printf("  Width: %d\n", updateRect.right - updateRect.left);
        printf("  Height: %d\n", updateRect.bottom - updateRect.top);
    }*/

    updateRect.right = 200;
    updateRect.bottom = 200;
    InvalidateRect(hwnd1,&updateRect, FALSE);

    GetUpdateRect(hwnd1, &updateRect, FALSE);
    {
        printf("Update Rect Info:\n");
        printf("  Left: %d\n", updateRect.left);
        printf("  Top: %d\n", updateRect.top);
        printf("  Right: %d\n", updateRect.right);
        printf("  Bottom: %d\n", updateRect.bottom);
        printf("  Width: %d\n", updateRect.right - updateRect.left);
        printf("  Height: %d\n", updateRect.bottom - updateRect.top);
    }

    static int counter = 0;

    PAINTSTRUCT ps;
    HDC hdc;
    COLORREF currentColor;
    COLORREF previoudCurrentColor;

    hdc = GetDC(hwnd1);
    SetTextColor(hdc, RGB(0, 0, 255));
    ReleaseDC(hwnd1, hdc);

    hdc = GetDC(hwnd1);
    SetTextColor(hdc, RGB(0, 0, 255));
    ReleaseDC(hwnd1, hdc);
        hdc = GetDC(hwnd1);
        //printf("WM_PAINT - hdc%d: %p\n", ++counter, hdc);
        previoudCurrentColor = GetTextColor(hdc);
        SetTextColor(hdc, RGB(255, 0, 0));
        ReleaseDC(hwnd1, hdc);
        hdc = GetDC(hwnd1);
        //printf("WM_PAINT - hdc%d: %p\n", ++counter, hdc);
        currentColor = GetTextColor(hdc);
        if (previoudCurrentColor != currentColor)
        {
            printf("Color is different : RGB(%d, %d, %d) - ",
                GetRValue(currentColor),
                GetGValue(currentColor),
                GetBValue(currentColor));
            printf("RGB(%d, %d, %d)\n",
                GetRValue(previoudCurrentColor),
                GetGValue(previoudCurrentColor),
                GetBValue(previoudCurrentColor));
        }
        else
            printf("Color is same: RGB(%d, %d, %d)\n",
                GetRValue(currentColor),
                GetGValue(currentColor),
                GetBValue(currentColor));
        ReleaseDC(hwnd1, hdc);

        GetUpdateRect(hwnd1, &updateRect, FALSE);
        {
            printf("Update Rect Info:\n");
            printf("  Left: %d\n", updateRect.left);
            printf("  Top: %d\n", updateRect.top);
            printf("  Right: %d\n", updateRect.right);
            printf("  Bottom: %d\n", updateRect.bottom);
            printf("  Width: %d\n", updateRect.right - updateRect.left);
            printf("  Height: %d\n", updateRect.bottom - updateRect.top);
        }

        updateRect.right = 400;
        updateRect.bottom = 400;
        InvalidateRect(hwnd1, &updateRect, FALSE);

        GetUpdateRect(hwnd1, &updateRect, FALSE);
        {
            printf("Update Rect Info:\n");
            printf("  Left: %d\n", updateRect.left);
            printf("  Top: %d\n", updateRect.top);
            printf("  Right: %d\n", updateRect.right);
            printf("  Bottom: %d\n", updateRect.bottom);
            printf("  Width: %d\n", updateRect.right - updateRect.left);
            printf("  Height: %d\n", updateRect.bottom - updateRect.top);
        }

        hdc = GetDC(hwnd2);
        SetTextColor(hdc, RGB(0, 0, 255));
        ReleaseDC(hwnd2, hdc);
        hdc = GetDC(hwnd2);
        //printf("WM_PAINT - hdc%d: %p\n", ++counter, hdc);
        previoudCurrentColor = GetTextColor(hdc);
        SetTextColor(hdc, RGB(255, 0, 0));
        ReleaseDC(hwnd2, hdc);
        hdc = GetDC(hwnd2);
        //printf("WM_PAINT - hdc%d: %p\n", ++counter, hdc);
        currentColor = GetTextColor(hdc);
        if (previoudCurrentColor != currentColor)
        {
            printf("Color is different : RGB(%d, %d, %d) - ",
                GetRValue(currentColor),
                GetGValue(currentColor),
                GetBValue(currentColor));
            printf("RGB(%d, %d, %d)\n",
                GetRValue(previoudCurrentColor),
                GetGValue(previoudCurrentColor),
                GetBValue(previoudCurrentColor));
        }
        else
            printf("Color is same: RGB(%d, %d, %d)\n",
                GetRValue(currentColor),
                GetGValue(currentColor),
                GetBValue(currentColor));
        SetTextColor(hdc, RGB(0, 0, 255));
        ReleaseDC(hwnd2, hdc);

        GetUpdateRect(hwnd1, &updateRect, FALSE);
        {
            printf("Update Rect Info:\n");
            printf("  Left: %d\n", updateRect.left);
            printf("  Top: %d\n", updateRect.top);
            printf("  Right: %d\n", updateRect.right);
            printf("  Bottom: %d\n", updateRect.bottom);
            printf("  Width: %d\n", updateRect.right - updateRect.left);
            printf("  Height: %d\n", updateRect.bottom - updateRect.top);
        }

    /*
    hdc = BeginPaint(hwnd1, &ps);
    SetTextColor(hdc, RGB(0, 0, 255));
    EndPaint(hwnd1, &ps);*/

    /*hdc = BeginPaint(hwnd1, &ps);
    //printf("WM_PAINT - hdc%d: %p\n", ++counter, hdc);
    previoudCurrentColor = GetTextColor(hdc);
    SetTextColor(hdc, RGB(255, 0, 0));
    EndPaint(hwnd1, &ps);
    hdc = BeginPaint(hwnd1, &ps);    
    //printf("WM_PAINT - hdc%d: %p\n", ++counter, hdc);
    currentColor = GetTextColor(hdc);
    if (previoudCurrentColor != currentColor)
    {
        printf("Color is different : RGB(%d, %d, %d) - ",
            GetRValue(currentColor),
            GetGValue(currentColor),
            GetBValue(currentColor));
        printf("RGB(%d, %d, %d)\n",
            GetRValue(previoudCurrentColor),
            GetGValue(previoudCurrentColor),
            GetBValue(previoudCurrentColor));
    }
    else
        printf("Color is same: RGB(%d, %d, %d)\n",
            GetRValue(currentColor),
            GetGValue(currentColor),
            GetBValue(currentColor));
    EndPaint(hwnd1, &ps);

    hdc = BeginPaint(hwnd2, &ps);
    SetTextColor(hdc, RGB(0, 0, 255));
    EndPaint(hwnd2, &ps);
    hdc = BeginPaint(hwnd2, &ps);
    //printf("WM_PAINT - hdc%d: %p\n", ++counter, hdc);
    previoudCurrentColor = GetTextColor(hdc);
    SetTextColor(hdc, RGB(255, 0, 0));
    EndPaint(hwnd2, &ps);
    hdc = BeginPaint(hwnd2, &ps);    
    //printf("WM_PAINT - hdc%d: %p\n", ++counter, hdc);
    currentColor = GetTextColor(hdc);
    if (previoudCurrentColor != currentColor)
    {
        printf("Color is different : RGB(%d, %d, %d) - ",
            GetRValue(currentColor),
            GetGValue(currentColor),
            GetBValue(currentColor));
        printf("RGB(%d, %d, %d)\n",
            GetRValue(previoudCurrentColor),
            GetGValue(previoudCurrentColor),
            GetBValue(previoudCurrentColor));
    }
    else
        printf("Color is same: RGB(%d, %d, %d)\n",
            GetRValue(currentColor),
            GetGValue(currentColor),
            GetBValue(currentColor));
    SetTextColor(hdc, RGB(0, 0, 255));
    EndPaint(hwnd2, &ps);
    */

    //if (GetUpdateRect(hwnd1, &updateRect, FALSE))

    return 0;
}

int main()
{
    MyWinMain(GetModuleHandle(NULL), SW_SHOW);
}
