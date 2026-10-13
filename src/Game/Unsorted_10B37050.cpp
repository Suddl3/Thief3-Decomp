// Game/Unsorted_10B37050.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10AB37C0.h"
#include "Game/Class_10978090.h"
#include "Game/Class_10B175C0.h"

class WindowManager;

extern WindowManager* GWindowManager;

class Class_10B42BD0;

class Class_10B37140_Arg
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10AB37C0* Virtual4(int A);
};

cString FUN_109510c0(const cString& In);

void* GetWindowManager();

// FUNCTION: 0x10B37140 ?FUN_10b37140@@YGHHHPAVClass_10B37140_Arg@@@Z
int __stdcall FUN_10b37140(int A, int B, Class_10B37140_Arg* C)
{
    if (GWindowManager)
    {
        cString Text(*(cString*)C->Virtual4(0)->GetName());
        bool Flag = (int)((Class_10978090*)C->Virtual4(1))->FUN_10978090() == 1;
        cString Key = FUN_109510c0(Text);
        ((Class_10B175C0*)GetWindowManager())->FUN_10b175c0(&Key, Flag, 0, 0);
    }
    return 1;
}
