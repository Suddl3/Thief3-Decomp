// Game/Unsorted_10918400.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10F2C744.h"

struct Struct_10918400
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

extern Class_10F2C744* DAT_10f2c744;

class Class_10918400_Child
{
public:
    char Unknown00[0x184];
    unsigned char Unknown184;
};

class Class_10918400_Element
{
public:
    char Unknown00[0x114];
    Class_10918400_Child** Unknown114;
    int Unknown118;
};

class Class_10924E80
{
public:
    char Unknown00[0xA4];
    int Unknown0A4;
    int Unknown0A8;
    Class_10918400_Element** Unknown0AC;
};

extern Class_10924E80* DAT_10f2c734;

extern int DAT_10f2c720;

// FUNCTION: 0x10918400 ?FUN_10918400@@YAXXZ
void FUN_10918400()
{
    unsigned int Count = DAT_10f2c744->Virtual4();
    for (unsigned int i = 0; i < Count; i++)
    {
        Struct_10918400 Info;
        DAT_10f2c744->Virtual5(i, &Info);
        if (Info.Unknown04 & 1)
            DAT_10f2c744->Virtual7(i);
    }
    for (int i = 0; i < DAT_10f2c734->Unknown0A4; i++)
    {
        Class_10918400_Element* Element = DAT_10f2c734->Unknown0AC[i];
        for (int j = 0; j < Element->Unknown118; j++)
        {
            Class_10918400_Child* Child = Element->Unknown114[j];
            if (Child)
                Child->Unknown184 = 0;
        }
    }
    DAT_10f2c720 = 0;
}
