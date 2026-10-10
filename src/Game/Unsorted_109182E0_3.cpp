// Game/Unsorted_109182E0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B59770.h"

struct Struct_10918E10
{
    int Unknown00;
    int Unknown04;
};

extern Class_10B59770 DAT_10f2c768;

extern Struct_10918E10* DAT_10f2c770;

// FUNCTION: 0x10918E10 ?FUN_10918e10@@YA_NH@Z
bool FUN_10918e10(int Key)
{
    for (int i = 0; i < DAT_10f2c768.Unknown00; i++)
    {
        if (DAT_10f2c770[i].Unknown00 == Key)
        {
            Struct_10918E10 Found = DAT_10f2c770[i];
            int Last = DAT_10f2c768.Unknown00 - 1;
            DAT_10f2c770[i] = DAT_10f2c770[Last];
            DAT_10f2c770[Last] = Found;
            DAT_10f2c768.FUN_10abc210(DAT_10f2c768.Unknown00 - 1);
            return true;
        }
    }
    return false;
}
