// Game/Unsorted_10A8C4D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* A);
};

Class_10905A90_Member* FUN_10905aa0();

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

void FUN_10d3d360(void* A, int* B);

void FUN_10d3d3b0(void* A, int* B);

void FUN_10d3ddc0(void* A, int* B);

extern const char DAT_10e47660[];

class Class_10A8C610_Unknown60
{
public:
    char Unknown00[0x34];
    FName* Unknown34;
    int Unknown38;
};

class Class_10A8C610_Unknown04
{
public:
    char Unknown00[0x60];
    Class_10A8C610_Unknown60* Unknown60;
};

class Class_10E6C6FC
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual bool FUN_10a8c610(int A, void* Reader);

    Class_10A8C610_Unknown04* Unknown04;
    int Unknown08;
    FName Unknown0C;
};

// FUNCTION: 0x10A8C610 ?FUN_10a8c610@Class_10E6C6FC@@UAE_NHPAX@Z
bool Class_10E6C6FC::FUN_10a8c610(int A, void* Reader)
{
    if (A < 8)
    {
        short Index;
        FUN_10d3d360(Reader, (int*)&Index);
        Unknown08 = Index;
        if (Unknown04 && Unknown04->Unknown60)
        {
            if (Unknown08 < Unknown04->Unknown60->Unknown38)
            {
                Unknown0C = Unknown04->Unknown60->Unknown34[Unknown08];
            }
            else
            {
                Unknown0C.Value = 0;
            }
        }
        return true;
    }
    FUN_10d3d3b0(Reader, &Unknown08);
    Class_109081E0 Text;
    FUN_10d3ddc0(Reader, (int*)&Text);
    Unknown0C = FName(Text.Unknown00 ? Text.Unknown00 : DAT_10e47660, FNAME_Add);
    return true;
}
