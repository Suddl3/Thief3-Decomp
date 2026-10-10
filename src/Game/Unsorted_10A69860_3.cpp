// Game/Unsorted_10A69860_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class AActor : public UObject
{
public:
    BYTE Unknown2C[0x4C];           // 0x2C
    BITFIELD bDeleteMe:1;           // 0x78
};

class Object_10A6A0F0_B
{
public:
    int Unknown00;
    int Unknown04;
};

class Object_10A6A0F0_P
{
public:
    BYTE Unknown00;
};

class Object_10A6A0F0_C
{
public:
    int Unknown00;
    Object_10A6A0F0_P* Unknown04;
};

class Class_10E6B620
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
    virtual void FUN_10a6a0f0(AActor* A, Object_10A6A0F0_B* B, Object_10A6A0F0_C* C);

    void FUN_10a69ad0(AActor* A);
    void FUN_10a69c90(AActor* A, int B);
};

// FUNCTION: 0x10A6A0F0 ?FUN_10a6a0f0@Class_10E6B620@@UAEXPAVAActor@@PAVObject_10A6A0F0_B@@PAVObject_10A6A0F0_C@@@Z
void Class_10E6B620::FUN_10a6a0f0(AActor* A, Object_10A6A0F0_B* B, Object_10A6A0F0_C* C)
{
    if (B->Unknown04 == 0x20005af)
    {
        Object_10A6A0F0_P* P = C->Unknown04;
        FUN_10a69ad0(A);
        if (!A->bDeleteMe && !(A->ObjectFlags & 0x800000) && P)
            FUN_10a69c90(A, P->Unknown00);
    }
}
