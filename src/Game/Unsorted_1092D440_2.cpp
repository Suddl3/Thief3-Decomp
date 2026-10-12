// Game/Unsorted_1092D440_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/IDirect3DDevice8.h"

extern "C" __declspec(dllimport) void* __stdcall SetCursor(void* Cursor);

extern "C" __declspec(dllimport) int __stdcall ShowCursor(int Show);

extern IDirect3DDevice8* GDirect3DDevice8;

void FUN_1092bdb0(void* X);

class Class_1092D420
{
public:
    bool Release();

    int Unknown00;
    int Unknown04;
    void* Unknown08;
    bool Unknown0C;
};

// FUNCTION: 0x1092D4B0 ?Release@Class_1092D420@@QAE_NXZ
bool Class_1092D420::Release()
{
    bool Result = false;
    if (Unknown08)
    {
        SetCursor(0);
        ShowCursor(0);
        if (GDirect3DDevice8 && Unknown08)
            GDirect3DDevice8->ShowCursor(0);
        Unknown0C = false;
        FUN_1092bdb0(Unknown08);
        Unknown08 = 0;
        Unknown00 = 0;
        Unknown04 = 0;
        Result = true;
    }
    return Result;
}
