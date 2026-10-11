// Game/Unsorted_10AC05C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/Class_1096D780.h"
#include "Game/Class_10AAAEB0.h"
#include "Game/Class_10BFBD70.h"

class Class_10DA0870;

class Class_10CAFD00;

struct Struct_10B7C170;

struct Struct_10D9E5E0_Param;

// Class_10DA91B0 from include/Game/Class_10DA91B0.h, with the 0x18-byte object this function holds on its stack (no padding after it).
class Class_10DA91B0
{
public:
    Class_10DA91B0();
    ~Class_10DA91B0();

    void FUN_10da91d0();

    char Unknown00[0x18];
};

// Class_10D9B090 from include/Game/Class_10D9B090.h, with FUN_10d9d270 added.
class Class_10D9B090
{
public:
    void FUN_10d9e5e0(Struct_10D9E5E0_Param* A);
    void FUN_10d9e490(Struct_10D9E5E0_Param* A);
    void FUN_10d9d270(Class_10DA0870* A, Class_10DA91B0* B);
    int FUN_10d9d640(int A, int B, int C, Struct_10B7C170* Out, int D);
    void FUN_10d9b090();
    void FUN_10d9b100();
    void FUN_10d9b1e0();

    char Unknown00[4];
    Class_10CAFD00* Unknown04;
    char Pad08[0xb0];
    bool UnknownB8;
};

// Class_10E6F414 from include/Game/Class_10E6F414.h, with FUN_10ac0830 at slot 14.
class Class_10E6F414_Member;

class Class_10E6F414
{
public:
    virtual void Virtual0();
    virtual Class_10E6F414_Member* Virtual1(int A);
    virtual int FUN_10ac0560(int A, int B, int C, int D, int E, int F, int G, int H);
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
    virtual void FUN_10ac0830(Class_1096D780* A, AActor* B);
};

struct Struct_10AC0830_Entry
{
    int Unknown00;
    int Unknown04;
};

bool FUN_10a37210(Class_1096D780* A, const FVector* B);

Class_10D9B090* FUN_10d9dcb0();

// FUNCTION: 0x10AC0830 ?FUN_10ac0830@Class_10E6F414@@UAEXPAVClass_1096D780@@PAVAActor@@@Z
void Class_10E6F414::FUN_10ac0830(Class_1096D780* P1, AActor* P2)
{
    int Value = P2->m_physicsObjectPadding;
    Class_10DA0870* Target = P1->UnknownB0;
    if (Target && Value)
    {
        Class_10DA91B0 Lock;
        FUN_10d9dcb0()->FUN_10d9d270(Target, &Lock);
        Class_10BFBD70* Map = (Class_10BFBD70*)((Class_10AAAEB0*)&Lock)->FUN_10aaaeb0();
        if (Map->Count > 0)
            FUN_10d9dcb0()->FUN_10d9e5e0((Struct_10D9E5E0_Param*)Target);
        int Count = Map->Count;
        for (int i = 0; i < Count; i++)
        {
            Struct_10AC0830_Entry* Entry = (Struct_10AC0830_Entry*)Map->Data + i;
            int Key = Entry->Unknown00;
            if (Key == (int)Target)
                Key = Entry->Unknown04;
            if (Value != Key)
            {
                FUN_10a37210(P1, &P2->Location);
                FUN_10d9dcb0()->FUN_10d9e490((Struct_10D9E5E0_Param*)Target);
                return;
            }
        }
        if (Count > 0)
            FUN_10d9dcb0()->FUN_10d9e490((Struct_10D9E5E0_Param*)Target);
    }
}
