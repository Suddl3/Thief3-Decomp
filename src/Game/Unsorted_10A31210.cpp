// Game/Unsorted_10A31210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/cIntArray.h"

bool FUN_10d39910(const cString& A);

cString __cdecl FUN_10d39dd0(const cString& Name);

void __cdecl FUN_10d39b00(cString& Text, cIntArray* Items);

// FUNCTION: 0x10A31440 ?FUN_10a31440@@YGXPAVcString@@@Z
void __stdcall FUN_10a31440(cString* Name)
{
    cIntArray Arr;
    Arr.SetCount(1);
    Arr.Data[0] = 0x1d;
    int Index = Arr.Count;
    Arr.SetCount(Index + 1);
    Arr.Data[Index] = 8;
    Index = Arr.Count;
    Arr.SetCount(Index + 1);
    Arr.Data[Index] = 0xa;
    Index = Arr.Count;
    Arr.SetCount(Index + 1);
    Arr.Data[Index] = 4;
    Index = Arr.Count;
    Arr.SetCount(Index + 1);
    Arr.Data[Index] = 5;
    Index = Arr.Count;
    Arr.SetCount(Index + 1);
    Arr.Data[Index] = 6;
    Index = Arr.Count;
    Arr.SetCount(Index + 1);
    Arr.Data[Index] = 0x11;
    Index = Arr.Count;
    Arr.SetCount(Index + 1);
    Arr.Data[Index] = 0x10;
    Index = Arr.Count;
    Arr.SetCount(Index + 1);
    Arr.Data[Index] = 0x15;
    FUN_10d39b00(FUN_10d39dd0(*Name), &Arr);
}

// FUNCTION: 0x10A315F0 ?FUN_10a315f0@@YG_NABVcString@@AAV1@@Z
bool __stdcall FUN_10a315f0(const cString& A, cString& B)
{
    if (!FUN_10d39910(A))
    {
        B = A;
        return false;
    }
    return true;
}
