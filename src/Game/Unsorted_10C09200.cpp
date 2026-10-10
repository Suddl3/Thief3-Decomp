// Game/Unsorted_10C09200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C08960.h"
#include "Game/Class_10C093C0.h"

// The field at 0x10 of the object: a flag at 0x24 is read through it.
class Class_10C08960_Unknown10
{
public:
    char Unknown00[0x24];
    bool Unknown24;
};

// FUNCTION: 0x10C093C0 ?FUN_10c093c0@Class_10C093C0@@QAEXXZ
void Class_10C093C0::FUN_10c093c0()
{
    if (Unknown04)
    {
        if (Unknown04->Unknown08 && !Unknown04->Unknown10->Unknown24)
            Unknown04->FUN_10c08960();
        if (Unknown04->Unknown20)
        {
            delete Unknown04;
            Unknown04 = 0;
        }
    }
}
