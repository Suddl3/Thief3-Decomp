// Game/Unsorted_10B6FE40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stdlib.h>

class Class_10B6FF60_UnknownDC
{
public:
    char Unknown00[0xE4];
    int UnknownE4;
    char UnknownE8[0x134];
    float Unknown21C;
    float Unknown220;
};

class Class_10B6FF60_Unknown00
{
public:
    char Unknown00[0xDC];
    Class_10B6FF60_UnknownDC** UnknownDC;
    int UnknownE0;
};

class Class_10B6FF60
{
public:
    void FUN_10b6ff60();

    Class_10B6FF60_Unknown00* Unknown00;
    char Unknown04[0x7C];
    bool Unknown80;
};

// FUNCTION: 0x10B6FF60 ?FUN_10b6ff60@Class_10B6FF60@@QAEXXZ
void Class_10B6FF60::FUN_10b6ff60()
{
    Class_10B6FF60_Unknown00* Owner = Unknown00;
    for (int i = 0; i < Owner->UnknownE0; i++)
    {
        Class_10B6FF60_UnknownDC* Item = Owner->UnknownDC[i];
        if (Item)
        {
            float Time;
            if (Unknown80)
                Time = (float)((rand() & 3) + 10);
            else
                Time = (float)((rand() & 3) + 3);
            Item->Unknown21C = Time;
            Item->UnknownE4 = 5;
            Item->Unknown220 = Time;
        }
    }
}
