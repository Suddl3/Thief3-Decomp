// Game/Class_10E6B5A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10953AC0.h"

extern "C" void* memcpy(void* Dest, const void* Src, unsigned Count);

struct Struct_10A68BB0
{
    char Unknown00[0x10];
};

class Class_10E6B5A0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int SetItems(const Struct_10A68BB0* Items, int Count);

    char Unknown04[0xC];
    int Unknown10;
    Class_10953AC0 m_Items;
};

// FUNCTION: 0x10A68BB0 ?SetItems@Class_10E6B5A0@@UAEHPBUStruct_10A68BB0@@H@Z
int Class_10E6B5A0::SetItems(const Struct_10A68BB0* Items, int Count)
{
    m_Items.FUN_10953ac0(Count);
    memcpy(m_Items.Unknown08, Items, Count * sizeof(Struct_10A68BB0));
    return ++Unknown10;
}
