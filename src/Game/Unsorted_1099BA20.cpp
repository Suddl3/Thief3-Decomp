// Game/Unsorted_1099BA20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"

extern const char DAT_10e475cc[];

extern int DAT_10f7b5bc;

int FUN_10b0f240(const char* Name);

void FUN_10b0f310();

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

// FUNCTION: 0x1099BBE0 ?GetStaticClassULinkDataObject@@YAHXZ
int GetStaticClassULinkDataObject()
{
    if (DAT_10f7b5bc == 0)
    {
        DAT_10f7b5bc = FUN_10b0f240(DAT_10e475cc);
        FUN_10b0f310();
    }
    return DAT_10f7b5bc;
}

// FUNCTION: 0x1099BC10 ?ConstructAStimulusModifierObject@@YAXPAX@Z
void ConstructAStimulusModifierObject(void* Memory)
{
    new ((EInternal*)Memory) AStimulusModifierObject();
}

// FUNCTION: 0x1099BC20 ?ConstructASwooshEffectObject@@YAXPAX@Z
void ConstructASwooshEffectObject(void* Memory)
{
    new ((EInternal*)Memory) ASwooshEffectObject();
}

// FUNCTION: 0x1099BC30 ?ConstructAVulnerabilityObject@@YAXPAX@Z
void ConstructAVulnerabilityObject(void* Memory)
{
    new ((EInternal*)Memory) AVulnerabilityObject();
}
