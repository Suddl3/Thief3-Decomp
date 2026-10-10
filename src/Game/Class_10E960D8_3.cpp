// Game/Class_10E960D8_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"

struct Struct_10BE4540
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

class Class_10E960D8
{
public:
    bool FUN_10be4540();

    char Unknown00[4];
    Struct_10BE4540* Unknown04;
};

// FUNCTION: 0x10BE4540 ?FUN_10be4540@Class_10E960D8@@QAE_NXZ
bool Class_10E960D8::FUN_10be4540()
{
    switch (Unknown04->Unknown08->FUN_10dbd510(0x42000585)->FUN_10bbdb80())
    {
    case 1:
        return true;
    }
    return false;
}
