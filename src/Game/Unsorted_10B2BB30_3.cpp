// Game/Unsorted_10B2BB30_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B2BC90_Unknown.h"

class Class_10A52EE0
{
public:
    Class_10B2BC90_Unknown* GetItem(int A);
};

class Class_10B2BC90 : public Class_10A52EE0
{
public:
    FVector GetSlotLocation(int Index);

    char Unknown00[0x128];
    int m_Slots[4];
};

// FUNCTION: 0x10B2BC90 ?GetSlotLocation@Class_10B2BC90@@QAE?AVFVector@@H@Z
FVector Class_10B2BC90::GetSlotLocation(int Index)
{
    Class_10B2BC90_Unknown* Obj = GetItem(m_Slots[Index]);
    if (Obj)
        return *Obj->Virtual8();
    return FVector(0, 0, 0);
}
