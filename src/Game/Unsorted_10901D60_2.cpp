// Game/Unsorted_10901D60_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109022E0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10905E60.h"
#include "Game/Class_10905E90.h"
#include "Game/Class_10905F10.h"

extern const char DAT_10e47660[];

Class_10905A90_Member* GetAllocator();

extern "C" __declspec(dllimport) int __stdcall CloseHandle(void* Object);

// FUNCTION: 0x109022E0 ?FUN_109022e0@Class_109022E0@@QAEPBDXZ
const char* Class_109022E0::FUN_109022e0()
{
    return Unknown00 ? Unknown00 : DAT_10e47660;
}

// FUNCTION: 0x10905A90 ?FUN_10905a90@@YAXXZ
void FUN_10905a90()
{
    GetAllocator()->F1();
}

// FUNCTION: 0x10905E60 ?Close@Class_10905E60@@QAEXXZ
void Class_10905E60::Close()
{
    if (Handle != (void*)-1)
    {
        CloseHandle(Handle);
        Handle = (void*)-1;
    }
}

// FUNCTION: 0x10905E90 ?FUN_10905e90@Class_10905E90@@QAEPAV1@H@Z
Class_10905E90* Class_10905E90::FUN_10905e90(int p1)
{
    Unknown10c = -1;
    Unknown110 = 0;
    return this;
}

// FUNCTION: 0x10905F10 ?Close@Class_10905F10@@QAEXXZ
void Class_10905F10::Close()
{
    if (Handle != (void*)-1)
    {
        CloseHandle(Handle);
        Handle = (void*)-1;
    }
    Handle = (void*)-1;
}
