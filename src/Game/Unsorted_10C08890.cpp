// Game/Unsorted_10C08890.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C08890.h"
#include "Game/Class_10C08DE0.h"

class Class_10C08E80
{
public:
    void FUN_10c08e80();

    char Unknown00[4];
    Class_10C08DE0* Unknown04;
};

// FUNCTION: 0x10C08890 ?TrySet@Class_10C08890@@QAE_NH@Z
bool Class_10C08890::TrySet(int p1)
{
    if (Unknown04 == 0)
    {
        Unknown04 = p1;
        return true;
    }
    return false;
}

// FUNCTION: 0x10C08E80 ?FUN_10c08e80@Class_10C08E80@@QAEXXZ
void Class_10C08E80::FUN_10c08e80()
{
    if (Unknown04)
        Unknown04->FUN_10c08de0();
}
