// Game/Unsorted_109182E0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B59770.h"
#include "Game/Struct_10918E10.h"

extern Class_10B59770 DAT_10f2c768;

extern Struct_10918E10* DAT_10f2c770;

// FUNCTION: 0x10918E10 ?RemoveByKey@@YA_NH@Z
bool RemoveByKey(int Key)
{
    for (int i = 0; i < DAT_10f2c768.Unknown00; i++)
    {
        if ((int)DAT_10f2c770[i].Unknown00 == Key)
        {
            Struct_10918E10 Found = DAT_10f2c770[i];
            int Last = DAT_10f2c768.Unknown00 - 1;
            DAT_10f2c770[i] = DAT_10f2c770[Last];
            DAT_10f2c770[Last] = Found;
            DAT_10f2c768.Resize(DAT_10f2c768.Unknown00 - 1);
            return true;
        }
    }
    return false;
}
