// Game/Unsorted_10A8C9E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

class Class_10E6C740_Member;

void FUN_10d3d3b0(void* Reader, int* Out);

void FUN_10d3ddc0(void* Reader, int* Out);

Class_10905A90_Member* FUN_10905aa0();

extern const char DAT_10e47660[];

// Class_109081E0 without its base, to check the destructor's inlining.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

// Class_10E6C740 from include/Game/Class_10E6C740.h, copied whole: slot 4 takes a string and slot 11 is this function.
class Class_10E6C740
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a8c950(int A, const Class_10E6C740* B);
    virtual void Virtual3();
    virtual void Virtual4(Class_109081E0* Text);
    virtual void Virtual5();
    virtual void FUN_10a8c990();
    virtual int FUN_10a8c9b0();
    virtual void Virtual8() = 0;
    virtual void Virtual9() = 0;
    virtual void Virtual10() = 0;
    virtual bool FUN_10a8c9e0(int A, void* Reader);
    virtual void FUN_10a8ca90(const Class_10E6C740* p1);

    Class_10E6C740_Member* Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10A8C9E0 ?FUN_10a8c9e0@Class_10E6C740@@UAE_NHPAX@Z
bool Class_10E6C740::FUN_10a8c9e0(int A, void* Reader)
{
    if (A < 8)
    {
        FUN_10d3d3b0(Reader, &Unknown08);
        return true;
    }
    Class_109081E0 Text;
    Unknown08 = -1;
    FUN_10d3ddc0(Reader, (int*)&Text);
    Virtual4(&Text);
    return true;
}
