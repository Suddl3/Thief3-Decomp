// Game/Unsorted_10C05660_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10C05A80.h"

extern float DAT_10eafbdc;

struct Struct_10D38640
{
    int Unknown00;
    char Unknown04[4];
    Struct_10C05A80* Unknown08;
};

float FUN_10c05810(Struct_10D38640* A, int Axis);

// FUNCTION: 0x10C05810 ?FUN_10c05810@@YAMPAUStruct_10D38640@@H@Z
float FUN_10c05810(Struct_10D38640* A, int Axis)
{
    float Best = DAT_10eafbdc;
    bool Found = false;
    for (int i = 0; i < A->Unknown00; i++)
    {
        float Value;
        switch (Axis)
        {
        case 0:
            Value = A->Unknown08[i].Unknown00;
            break;
        case 1:
            Value = A->Unknown08[i].Unknown04;
            break;
        case 2:
            Value = A->Unknown08[i].Unknown08;
            break;
        }
        if (!Found || Value < Best)
        {
            Best = Value;
            Found = true;
        }
    }
    return Best;
}
