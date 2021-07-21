// Tutorial2.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "Stdafx.h"
#include "SystemClass.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    SystemClass* System = new SystemClass;
    if (!System)
    {
        return -1;
    }

    if (System->Initialize())
    {
        System->Run();
    }

    System->Shutdown();
    delete System;
    System = nullptr;

    return 0;
}
