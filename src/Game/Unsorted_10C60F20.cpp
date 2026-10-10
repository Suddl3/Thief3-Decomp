// Game/Unsorted_10C60F20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C60F20.h"

struct Struct_10C60F20
{
    char Unknown00[8];
    unsigned int Unknown08;
};

extern float DAT_10eafbdc;

// FUNCTION: 0x10C60F20 ?FUN_10c60f20@Class_10C60F20@@QAEMXZ
float Class_10C60F20::FUN_10c60f20()
{
    Virtual9();
    if (Unknown11C)
    {
        if (Unknown1C)
        {
            unsigned int Count = Unknown1C->Unknown08;
            if (Count)
                return (float)Unknown104 / (float)Count;
        }
    }
    return DAT_10eafbdc;
}
