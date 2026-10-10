// Game/Unsorted_10A8A6F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class UProperty;

class UByteProperty
{
    DECLARE_CLASS(UByteProperty, UProperty, 0x0, Core)
};

class Class_10B26930
{
public:
    void FUN_10b26930(int A);
};

class Class_10A8A790
{
public:
    void FUN_10a8a790(UObject* Src);

    char Unknown00[0x4];
    Class_10B26930* Unknown04;
};

// FUNCTION: 0x10A8A790 ?FUN_10a8a790@Class_10A8A790@@QAEXPAVUObject@@@Z
void Class_10A8A790::FUN_10a8a790(UObject* Src)
{
    if (Src)
    {
        if (Src->IsA(UByteProperty::StaticClass()))
            Unknown04->FUN_10b26930((int)Cast<UByteProperty>(Src));
    }
}
