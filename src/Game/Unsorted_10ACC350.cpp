// Game/Unsorted_10ACC350.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first
#include "Game/Class_1098E3D0.h"
#include "Game/Class_10971570.h"

class Class_10E70020
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7(int A);
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual int FUN_10acc350(int A, int B, float C);

    void FUN_10acc2d0(int A, float B);
};

// FUNCTION: 0x10ACC350 ?FUN_10acc350@Class_10E70020@@UAEHHHM@Z
int Class_10E70020::FUN_10acc350(int A, int B, float C)
{
    Class_1098E3D0* Obj = (Class_1098E3D0*)A;
    int Key;
    unsigned char Type;
    ((Class_10971570*)Obj)->FUN_10971570(0x20001fd, (bool*)&Type);
    switch (Type)
    {
    case 2:
        FUN_10acc2d0(A, C);
        break;
    case 4:
    {
        Obj->FUN_1098e330(0x100201, &Key);
        int Value = 1;
        Obj->FUN_1098e3d0(0x800271, &Value);
        Obj->FUN_1098e3d0(0x100272, &Key);
        Virtual7(A);
        break;
    }
    }
    return 0;
}
