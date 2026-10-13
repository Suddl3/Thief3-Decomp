// Game/Class_10E6BA00_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first
#include "Core/Core.h"
#include "Game/cActorManager.h"
#include "Game/Class_10971570.h"

class AActor : public UObject
{
public:
    BYTE Unknown2C[0x4C];           // 0x2C
    BITFIELD bDeleteMe:1;           // 0x78
};

class APawn : public AActor
{
public:
    void FUN_10a6ea30(int A, int B);
};

class Object_10A6FC90_B
{
public:
    int Unknown00;
    int Unknown04;
};

class Object_10A6FC90_P
{
public:
    int Unknown00;
};

class Object_10A6FC90_C
{
public:
    int Unknown00;
    Object_10A6FC90_P* Unknown04;
};

class Class_10E6BA00 : public cActorManager
{
public:
    virtual void HandleEvent(int Type, int A, int B, int C);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void FUN_10a6fc90(AActor* A, Object_10A6FC90_B* B, Object_10A6FC90_C* C);
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15(int A, int B, int C);

    void FUN_10a6e760(int A);
    void FUN_10a6fa00(AActor* A);
};

// FUNCTION: 0x10A6FC90 ?FUN_10a6fc90@Class_10E6BA00@@UAEXPAVAActor@@PAVObject_10A6FC90_B@@PAVObject_10A6FC90_C@@@Z
void Class_10E6BA00::FUN_10a6fc90(AActor* A, Object_10A6FC90_B* B, Object_10A6FC90_C* C)
{
    if (B->Unknown04 == 0x803a1)
    {
        Object_10A6FC90_P* P = C->Unknown04;
        FUN_10a6e760((int)A);
        if (!A->bDeleteMe && !(A->ObjectFlags & 0x800000) && P && !(P->Unknown00 & 1))
        {
            FUN_10a6fa00(A);
            bool Flag;
            int Result = ((Class_10971570*)A)->FUN_10971570(0x420002df, &Flag);
            if (Result == 0 || Flag != 2)
            {
                ((APawn*)A)->FUN_10a6ea30(0x420002df, 2);
            }
        }
    }
}
