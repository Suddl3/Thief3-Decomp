// Game/Unsorted_10A86510_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Object_10A858C0.h"

extern cIntArray DAT_10f3a1c8;

extern Object_10A858C0** DAT_10f3a1d0;

// FUNCTION: 0x10A872A0 ?FUN_10a872a0@@YAXH@Z
void FUN_10a872a0(int Param)
{
    for (int i = 0; i < DAT_10f3a1c8.Count; i++)
    {
        if (!DAT_10f3a1d0[i]->Virtual3())
        {
            delete DAT_10f3a1d0[i];
            DAT_10f3a1d0[i] = 0;
            int Last = DAT_10f3a1c8.Count - 1;
            Object_10A858C0* Temp = DAT_10f3a1d0[i];
            DAT_10f3a1d0[i] = DAT_10f3a1d0[Last];
            DAT_10f3a1d0[Last] = Temp;
            DAT_10f3a1c8.SetCount(DAT_10f3a1c8.Count - 1);
            i--;
        }
        else
        {
            DAT_10f3a1d0[i]->Virtual6(Param);
        }
    }
}
