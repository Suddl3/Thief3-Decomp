// Game/Unsorted_10C0EEB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10FF66B0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"

int FUN_10af36e0(const char* A, const char* B);

extern Struct_10FF66B0 DAT_10ff66b0[];

extern const char DAT_10e47660[];

Class_10905A90_Member* GetAllocator();

class Class_10C0EEB0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10C0EEB0
{
public:
    ~Class_10C0EEB0();

    cString Unknown00;
    cString Unknown04;
    Class_10C0EEB0_Unknown08* Unknown08;
};

// FUNCTION: 0x10C0EEB0 ??1Class_10C0EEB0@@QAE@XZ
Class_10C0EEB0::~Class_10C0EEB0()
{
    if (Unknown08)
        Unknown08->Virtual2();
}

// FUNCTION: 0x10C0EF40 ?FUN_10c0ef40@@YAHPBD@Z
int FUN_10c0ef40(const char* Name)
{
    for (int i = 0; i < 124; i++)
    {
        const char* Text = DAT_10ff66b0[i].Unknown00 ? DAT_10ff66b0[i].Unknown00 : DAT_10e47660;
        if (!FUN_10af36e0(Name, Text))
            return i;
    }
    return -1;
}
