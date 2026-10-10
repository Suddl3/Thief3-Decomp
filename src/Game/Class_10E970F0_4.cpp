// Game/Class_10E970F0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10E970F0_Unknown5C
{
public:
    virtual void Virtual0(DWORD A);
};

class Class_10E970F0_Unknown60
{
public:
    virtual void Virtual0(DWORD A);
};

class Class_10E970F0 : public UObject
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
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void FUN_10be9c30(DWORD A);

    char Unknown2C[0x14];
    int Unknown40;
    char Unknown44[0x10];
    int Unknown54;
    char Unknown58[4];
    Class_10E970F0_Unknown5C** Unknown5C;
    Class_10E970F0_Unknown60* Unknown60;
    char Unknown64[0x10];
    int Unknown74;
};

// FUNCTION: 0x10BE9C30 ?FUN_10be9c30@Class_10E970F0@@UAEXK@Z
void Class_10E970F0::FUN_10be9c30(DWORD A)
{
    UObject::ProcessState(*(FLOAT*)&A);
    if (Unknown40 == A)
        Unknown40 = 0;
    if (Unknown74 == A)
        Unknown74 = 0;
    for (int i = 0; i < Unknown54; i++)
        Unknown5C[i]->Virtual0(A);
    if (Unknown60)
        Unknown60->Virtual0(A);
}
