// Game/Unsorted_10A755B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AF7F80.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10A74DF0_Unknown00.h"

extern const char DAT_10e47660[];

// cString as its header declares it, with FUN_109e0480 (returns a new string by value) added.
class cString : public Class_1090A780
{
public:
    cString() {}
    cString(const char* In);
    cString(const cString& Other);
    cString(const Class_1090A780& Other) : Class_1090A780(Other) {}

    void FUN_10907870(int Length, int Flag);
    cString& operator=(const cString& Other);
    cString& FUN_1090a590(const char* In);
    cString FUN_109e0480();
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }
};

void FUN_10a4bae0(Class_10A74DF0_Unknown00** Out, cString* Text, int A, int B);

// FUNCTION: 0x10A755B0 ?FUN_10a755b0@@YGXPAVClass_10AF7F80@@H@Z
void __stdcall FUN_10a755b0(Class_10AF7F80* Name, int A)
{
    cString Text(Name->FUN_10af7f80());
    Text = Text.FUN_109e0480();
    {
        Class_10A74DF0_Unknown00* Out;
        FUN_10a4bae0(&Out, &Text, A, 0);
        if (Out)
            Out->Virtual2();
    }
}
