// Game/Class_10E894C8_14.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10D9FEE0.h"
#include "Game/Object_10B22790.h"
#include "Game/Class_10CAFD00.h"
#include "Game/Class_10D9FD70.h"

struct Struct_10D9E5E0_Param;

struct Struct_10B7C170;

class Class_10CAFD00;

struct Struct_10B93080_Out
{
    FVector Unknown00;
    FVector Unknown0C;
    unsigned char Unknown18;
    int Unknown1C;
    int Unknown20;
};

class Class_10B93080_Unknown04
{
public:
    int FUN_10b92ea0(int A, Struct_10B93080_Out* B);
};

class Class_10B93080_Unknown10
{
public:
    char Pad00[0x28];
    int Unknown28;
};

class Class_10B93080_Virtual6
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
};

// Copied whole from include/Game/Class_10D9B090.h with FUN_10d9dd60 added.
class Class_10D9B090
{
public:
    void FUN_10d9e5e0(Struct_10D9E5E0_Param* A);
    void FUN_10d9e490(Struct_10D9E5E0_Param* A);
    int FUN_10d9d640(int A, int B, int C, Struct_10B7C170* Out, int D);
    void FUN_10d9b090();
    void FUN_10d9b100();
    void FUN_10d9b1e0();
    void FUN_10d9dd60(int A);

    char Unknown00[4];
    Class_10CAFD00* Unknown04;
    char Pad08[0xb0];
    bool UnknownB8;
};

Class_10D9B090* FUN_10d9dcb0();

class Class_10E894C8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Class_10B93080_Virtual6* Virtual6();
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
    virtual void FUN_10b93080();

    Class_10B93080_Unknown04* Unknown04;
    char Pad08[0x8];
    Class_10B93080_Unknown10* Unknown10;
};

// FUNCTION: 0x10B93080 ?FUN_10b93080@Class_10E894C8@@UAEXXZ
void Class_10E894C8::FUN_10b93080()
{
    if (Unknown04)
    {
        Struct_10B93080_Out Out;
        if (Unknown04->FUN_10b92ea0(0x80704, &Out))
        {
            if (Out.Unknown18 & 2)
            {
                FUN_10d9dcb0()->FUN_10d9e490((Struct_10D9E5E0_Param*)this);
                if (Out.Unknown18 & 1)
                {
                    ((Class_10D9FEE0*)this)->FUN_10d9fee0(1, 1);
                    ((Class_10D9FEE0*)this)->FUN_10da0710(Out.Unknown00);
                    ((Class_10D9FEE0*)this)->FUN_10da01b0(Out.Unknown0C);
                }
                else
                {
                    ((Class_10D9FEE0*)this)->FUN_10d9fee0(0, 1);
                }
                if (Out.Unknown18 & 4)
                {
                    ((Class_10D9FEE0*)this)->FUN_10da0000(true);
                }
            }
            else
            {
                FUN_10d9dcb0()->FUN_10d9e5e0((Struct_10D9E5E0_Param*)this);
            }
            if (Out.Unknown1C != 0)
            {
                int Linked = ((Class_10AA82D0*)this)->GetLinkedObject();
                FUN_10d9dcb0()->FUN_10d9dd60(Linked);
                ((Object_10B22790*)this)->FUN_10cab310(Out.Unknown1C);
                Unknown10->Unknown28 = Out.Unknown20;
                if (((Class_10D9FD70*)this)->FUN_10d9fd70())
                {
                    Class_10D9B090* Obj = FUN_10d9dcb0();
                    if (Obj->Unknown04)
                    {
                        Obj->Unknown04->FUN_10cb0e40(Unknown10, 1);
                    }
                }
            }
        }
        if (Virtual6())
        {
            Virtual6()->Virtual9();
        }
    }
}
