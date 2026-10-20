// Game/Unsorted_10A75810.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10E6BBE8.h"

class Object_10A75810_B
{
public:
    int Unknown00;
    int Unknown04;
};

class Object_10A75810_P
{
public:
    int Unknown00;
};

class Object_10A75810_C
{
public:
    int Unknown00;
    Object_10A75810_P* Unknown04;
};

class UParticleEmitter;
// FUNCTION: 0x10A75810 ?FUN_10a75810@Class_10E6BBE8@@UAEXPAVAActor@@PAVObject_10A75810_B@@PAVObject_10A75810_C@@@Z
void Class_10E6BBE8::FUN_10a75810(AActor* A, Object_10A75810_B* B, Object_10A75810_C* C)
{
    if (B->Unknown04 == 0x80028A)
    {
        Object_10A75810_P* P = C->Unknown04;
        FUN_10a757e0((int)A);
        if (!A->bDeleteMe && !(A->ObjectFlags & 0x800000) && P && P->Unknown00)
            FUN_10a757b0((int)A);
    }
}

// FUNCTION: 0x10A75860 ??$Cast@VUSpriteEmitter@@@@YAPAVUSpriteEmitter@@PAVUObject@@@Z
template USpriteEmitter* Cast<USpriteEmitter>(UObject* Src);
