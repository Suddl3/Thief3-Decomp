// Game/Unsorted_10B9EEB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9EEB0.h"
#include "Game/Class_10BA1660.h"
#include "Game/Class_10C7D570.h"
#include "Game/cIntArray.h"

extern __int64 DAT_10f05c70;

extern void* DAT_10e8c00c[];

class Class_10E8C00C
{
public:
    Class_10E8C00C* Construct(int A);

    void** Unknown00;
    int m_ChildCount;
    int Unknown08;
    int m_Children;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
};

class Object_10B9EEB0
{
public:
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

// FUNCTION: 0x10B9EEB0 ?FUN_10b9eeb0@Class_10B9EEB0@@QAEXPAX@Z
void Class_10B9EEB0::FUN_10b9eeb0(void* A)
{
    if (A && A == Unknown0C->Unknown08->FUN_10c7d570())
        return;
    FUN_10b9e2c0(A);
}

// FUNCTION: 0x10B9F250 ?IsBitClear@@YAHH@Z
int IsBitClear(int Bit)
{
    if ((DAT_10f05c70 & (1 << Bit)) == 0)
        return 1;
    return 0;
}

// FUNCTION: 0x10B9FA20 ?Add@cIntArray@@QAEHPAH@Z
int cIntArray::Add(int* Item)
{
    int Index = Unknown00;
    SetCount(Index + 1);
    Unknown08[Index] = *Item;
    return Index;
}

// FUNCTION: 0x10BA01F0 ?Construct@Class_10E8C00C@@QAEPAV1@H@Z
Class_10E8C00C* Class_10E8C00C::Construct(int A)
{
    Unknown00 = DAT_10e8c00c;
    m_ChildCount = 0;
    Unknown08 = 0;
    m_Children = 0;
    Unknown10 = A;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
    Unknown20 = 0;
    Unknown24 = 0;
    Unknown28 = 0;
    return this;
}

// FUNCTION: 0x10BA1660 ?Free@Class_10BA1660@@QAEXXZ
void Class_10BA1660::Free()
{
    Reset(0x40);
    ::operator delete(m_Buckets);
    m_Count = 0;
    m_BucketCount = 0;
    m_Buckets = 0;
    m_Collisions = 0;
}
