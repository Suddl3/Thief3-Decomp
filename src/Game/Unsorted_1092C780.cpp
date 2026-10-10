// Game/Unsorted_1092C780.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1092D3D0.h"
#include "Game/IDirect3DDevice8.h"

extern "C" __declspec(dllimport) void* __stdcall SetCursor(void* Cursor);

extern "C" __declspec(dllimport) int __stdcall ShowCursor(int Show);

extern IDirect3DDevice8* GDirect3DDevice8;

// FUNCTION: 0x1092D3D0 ?FUN_1092d3d0@Class_1092D3D0@@QAEXXZ
void Class_1092D3D0::FUN_1092d3d0()
{
    SetCursor(0);
    ShowCursor(0);
    if (GDirect3DDevice8 && Unknown08)
        GDirect3DDevice8->ShowCursor(0);
    Unknown0C = false;
}
