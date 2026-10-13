// Game/Unsorted_10B10C40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"
#include "Game/cString.h"

class Class_10B11190 {
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(int p1);
};

Class_10905A90_Member* GetAllocator();

cString FUN_1090a660(const char* Text, ...);

class Class_10B11100
{
public:
    cString FUN_10b11100();

    unsigned int Unknown00;
    unsigned int Unknown04;
    unsigned int Unknown08;
    unsigned int Unknown0C;
};

// FUNCTION: 0x10B11100 ?FUN_10b11100@Class_10B11100@@QAE?AVcString@@XZ
cString Class_10B11100::FUN_10b11100()
{
    return cString(FUN_1090a660("%08X%08X%08X%08X", Unknown00, Unknown04, Unknown08, Unknown0C));
}

// FUNCTION: 0x10B11190 ?FUN_10b11190@@YAXPAVClass_10B11190@@@Z
void FUN_10b11190(Class_10B11190* P)
{
    if (P)
        P->Virtual6(1);
}
