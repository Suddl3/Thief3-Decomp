// Game/Unsorted_10B49DD0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B39530.h"
#include "Game/Class_10B3C740.h"

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();
};

class Class_10E7E6A0 : public Class_10AA82D0
{
public:
    void FUN_10b49f60();

    char Unknown04[4];
    int Unknown08;
    char Unknown0C[4];
    union
    {
        int Unknown10;
        float Float10;
    };
    int Unknown14;
    bool Unknown18;
    bool Unknown19;
    bool Unknown1A;
    bool Unknown1B;
    bool Unknown1C;
};

// FUNCTION: 0x10B49F60 ?FUN_10b49f60@Class_10E7E6A0@@QAEXXZ
void Class_10E7E6A0::FUN_10b49f60()
{
    switch (((Class_10B3C740*)this)->FUN_10b3c740(Float10))
    {
    case 1:
        Unknown08 = 0x8f;
        ((Class_10B39530*)GetLinkedObject())->Play(0x8f, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        Unknown10 = Unknown14 = 1;
        break;
    case 2:
        Unknown08 = 0x92;
        ((Class_10B39530*)GetLinkedObject())->Play(0x92, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        Unknown10 = Unknown14 = 2;
        Unknown18 = false;
        break;
    case 3:
        Unknown08 = 0x95;
        ((Class_10B39530*)GetLinkedObject())->Play(0x95, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        Unknown14 = 3;
        Unknown10 = 3;
        break;
    case 4:
        Unknown08 = 0x98;
        ((Class_10B39530*)GetLinkedObject())->Play(0x98, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        Unknown10 = Unknown14 = 4;
        break;
    default:
        Unknown08 = 0x8f;
        ((Class_10B39530*)GetLinkedObject())->Play(0x8f, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
        break;
    }
}
