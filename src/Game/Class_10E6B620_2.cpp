// Game/Class_10E6B620_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10E6B620.h"
#include "Engine/EngineClasses.h"

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
