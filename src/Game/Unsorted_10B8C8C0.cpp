// Game/Unsorted_10B8C8C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10D9FEE0.h"

class Class_10B8C8C0_Unknown08
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
    virtual void Virtual11();
    virtual void Virtual12(unsigned int A);

    char Pad04[0x4];
    int Unknown08;
};

class Class_10B8C8C0_Unknown20
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
    virtual void Virtual11();
    virtual void Virtual12(unsigned int A);
};

class Class_10B8C8C0
{
public:
    void FUN_10b8c8c0(int A);

    int Unknown00;
    char Pad04[0x4];
    Class_10B8C8C0_Unknown08** Unknown08;
    char Pad0C[0xD];
    bool Unknown19;
    char Pad1A[0x2];
    Class_10D9FEE0* Unknown1C;
    Class_10B8C8C0_Unknown20* Unknown20;
};

extern int DAT_10e894bc;

class Class_10B8C920_Unknown08
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
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13(int A);

    char Pad04[0x4];
    int Unknown08;
};

class Class_10B8C920_Unknown20
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
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13(int A);
};

class Class_10B8C920
{
public:
    void FUN_10b8c920(int A);

    int Unknown00;
    char Pad04[0x4];
    Class_10B8C920_Unknown08** Unknown08;
    char Pad0C[0xD];
    bool Unknown19;
    char Pad1A[0x2];
    char Unknown1C[0x4];
    Class_10B8C920_Unknown20* Unknown20;
};

// FUNCTION: 0x10B8C8C0 ?FUN_10b8c8c0@Class_10B8C8C0@@QAEXH@Z
void Class_10B8C8C0::FUN_10b8c8c0(int A)
{
    if (!Unknown19)
    {
        for (int i = 0; i < Unknown00; i++)
        {
            Class_10B8C8C0_Unknown08* Elem = Unknown08[i];
            if (Elem && Elem->Unknown08 == 3)
                Elem->Virtual12(Unknown1C->FUN_10da0400());
        }
        Unknown20->Virtual12(Unknown1C->FUN_10da0400());
    }
}

// FUNCTION: 0x10B8C920 ?FUN_10b8c920@Class_10B8C920@@QAEXH@Z
void Class_10B8C920::FUN_10b8c920(int A)
{
    if (!Unknown19)
    {
        for (int i = 0; i < Unknown00; i++)
        {
            Class_10B8C920_Unknown08* Elem = Unknown08[i];
            if (Elem && Elem->Unknown08 == 3)
            {
                if (A == 9 || A == 10 || A == 3 || A == 1)
                    Elem->Virtual13(DAT_10e894bc);
                else
                    Elem->Virtual13(A);
            }
        }
        if (A == 9 || A == 10 || A == 3 || A == 1)
            Unknown20->Virtual13(DAT_10e894bc);
        else
            Unknown20->Virtual13(A);
    }
}
