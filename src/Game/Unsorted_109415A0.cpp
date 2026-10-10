// Game/Unsorted_109415A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109415A0.h"

class Class_109416F0
{
public:
    bool FUN_109416f0(int A, int B);

    char Unknown00[4];
    bool Unknown04;
    bool Unknown05;
    bool Unknown06;
    char Unknown07[0x15];
    int Unknown1C;
    int Unknown20;
    char Unknown24[8];
    int Unknown2C;
    char Unknown30[0x14];
};

// FUNCTION: 0x109415A0 ?FUN_109415a0@Class_109415A0@@QAEXXZ
void Class_109415A0::FUN_109415a0()
{
    for (int i = 0; i < Unknown04; i++)
    {
        Class_109416F0* Item = &Unknown0C[i];
        Item->Unknown04 = false;
        Item->Unknown05 = false;
        Item->Unknown20 = 0;
        Item->Unknown2C = 0;
        Item->Unknown1C = 0;
        Item->Unknown06 = false;
    }
    Unknown1C = 0;
    Unknown18 = -1;
    Unknown00 = false;
}
