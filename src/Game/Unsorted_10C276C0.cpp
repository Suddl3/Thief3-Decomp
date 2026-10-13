// Game/Unsorted_10C276C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first.
#include "Game/cIntArray.h"
#include "Game/Class_10AA82C0.h"

class Class_10C27410_Unknown10;

class Class_10C27410
{
public:
    void UpdateFlags(cIntArray& A);

    char Unknown00[4];
    int m_Flags;
    int m_Count;
    char Unknown0C[4];
    Class_10C27410_Unknown10** m_Items;
};

class Class_10C276C0 : public Class_10C27410
{
public:
    void FUN_10c276c0();
    void FUN_10c27630(cIntArray& A);

    Class_10AA82C0* Unknown14;
};

// FUNCTION: 0x10C276C0 ?FUN_10c276c0@Class_10C276C0@@QAEXXZ
void Class_10C276C0::FUN_10c276c0()
{
    void* Ptr = Unknown14->FUN_10aa82c0();
    int Value = *(int*)Ptr;
    if (Value != 0)
    {
        cIntArray Items;
        FUN_10c27630(Items);
        UpdateFlags(Items);
    }
}
