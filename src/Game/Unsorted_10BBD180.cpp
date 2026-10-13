// Game/Unsorted_10BBD180.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cString.h"

extern const char DAT_10e47660[];

cString __stdcall FUN_10bbc9a0();

class Class_10A174E0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(FName Name, int A, int B, int C);
};

Class_10A174E0* GetStats();

// FUNCTION: 0x10BBD210 ?FUN_10bbd210@@YGXH@Z
void __stdcall FUN_10bbd210(int Arg)
{
    cString Name = FUN_10bbc9a0();
    Class_10A174E0* Stats = GetStats();
    const char* Text = Name.Unknown00 ? Name.Unknown00 : DAT_10e47660;
    Stats->Virtual4(Text, Arg, 0, -1);
}
