// Game/cAISpeech.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10E97B00.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10BBDB40.h"
#include "Game/cAISpeech.h"

// The object at this->Unknown04: its Unknown08 is the Class_10C7D570 that owns FUN_10dbd510.
class Class_10BC7F30_Unknown04
{
public:
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

// The address of an object passed by reference.
inline Class_10E97B00* AddressOf(const Class_10E97B00& Object)
{
    return (Class_10E97B00*)&Object;
}

// FUNCTION: 0x10BC7F30 ?CheckDeathGrunt@cAISpeech@@QAEXXZ
void cAISpeech::CheckDeathGrunt()
{
    if (((Class_10BC7F30_Unknown04*)this->Unknown04)->Unknown08->FUN_10dbd510(0x100647)->GetFloat() > 0.0)
    {
        cString Text(DAT_10e47660);
        FUN_10bc7d70(AddressOf(Class_10E97B00("+death:grunt")), 10, 8, &Text, true);
    }
}
