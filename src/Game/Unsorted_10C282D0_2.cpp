// Game/Unsorted_10C282D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first.
#include "Game/Class_10BBB410.h"
#include "Game/Class_10E9925C.h"

class Class_10C28570
{
public:
    void Update();
    void FUN_10c283f0();

    Class_10BBB410* Unknown00;
    char Unknown04[4];
    float m_StartTime;
    char Unknown0C[4];
    float m_Duration;
    char Unknown14[0xC];
    Class_10E9925C* Unknown20;
    Class_10E9925C* Unknown24;
    Class_10E9925C* Unknown28;
};

// FUNCTION: 0x10C283F0 ?FUN_10c283f0@Class_10C28570@@QAEXXZ
void Class_10C28570::FUN_10c283f0()
{
    if (Unknown20)
    {
        Unknown00->RemoveItem((int)Unknown20);
        delete Unknown20;
        Unknown20 = 0;
    }
    if (Unknown24)
    {
        Unknown00->RemoveItem((int)Unknown24);
        delete Unknown24;
        Unknown24 = 0;
    }
    if (Unknown28)
    {
        Unknown00->RemoveItem((int)Unknown28);
        delete Unknown28;
        Unknown28 = 0;
    }
}
