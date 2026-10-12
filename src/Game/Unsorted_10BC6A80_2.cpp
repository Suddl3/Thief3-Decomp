// Game/Unsorted_10BC6A80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"
#include "Game/Class_10E97B00.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10BBDB40.h"

// The object at this->Unknown04: its Unknown08 is the Class_10C7D570 that owns FUN_10dbd510.
class Class_10BC7F30_Unknown04
{
public:
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

class Class_10BC9A50
{
public:
    void CheckDeathGrunt();
    void FUN_10bc7d70(Class_10E97B00* Name, int Flags, int Count, Class_109081E0* Out, bool Flag);

    char Unknown00[4];
    Class_10BC7F30_Unknown04* Unknown04;
};

// The address of an object passed by reference.
inline Class_10E97B00* AddressOf(const Class_10E97B00& Object)
{
    return (Class_10E97B00*)&Object;
}

// FUNCTION: 0x10BC7F30 ?CheckDeathGrunt@Class_10BC9A50@@QAEXXZ
void Class_10BC9A50::CheckDeathGrunt()
{
    if (this->Unknown04->Unknown08->FUN_10dbd510(0x100647)->GetFloat() > 0.0)
    {
        Class_109081E0 Text(DAT_10e47660);
        FUN_10bc7d70(AddressOf(Class_10E97B00("+death:grunt")), 10, 8, &Text, true);
    }
}
