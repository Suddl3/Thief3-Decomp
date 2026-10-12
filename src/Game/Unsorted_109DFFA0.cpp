// Game/Unsorted_109DFFA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

extern cIntArray DAT_10f35dac;

extern int DAT_10f35b54;

extern bool DAT_10f45c0c;

extern int DAT_10e5afec[];

extern int DAT_10e5afbc[];

extern float DAT_10e49984;

// FUNCTION: 0x109DFFA0 ?InitIntTable@@YAXXZ
void InitIntTable()
{
    if (DAT_10f35b54 == 0)
    {
        int i = 0;
        if (DAT_10f45c0c)
        {
            DAT_10f35b54 = 7;
            do
            {
                int Count = DAT_10f35dac.Unknown00;
                DAT_10f35dac.SetCount(DAT_10f35dac.Unknown00 + 1);
                DAT_10f35dac.Unknown08[Count] = DAT_10e5afec[i];
                if (DAT_10f35dac.Unknown08[i] == 0)
                    DAT_10f35dac.Unknown08[i] = (int)((float)i * DAT_10e49984 / DAT_10f35b54);
                i++;
            } while (i < DAT_10f35b54 + 1);
            return;
        }
        DAT_10f35b54 = 11;
        do
        {
            int Count = DAT_10f35dac.Unknown00;
            DAT_10f35dac.SetCount(DAT_10f35dac.Unknown00 + 1);
            DAT_10f35dac.Unknown08[Count] = DAT_10e5afbc[i];
            if (DAT_10f35dac.Unknown08[i] == 0)
                DAT_10f35dac.Unknown08[i] = (int)((float)i * DAT_10e49984 / DAT_10f35b54);
            i++;
        } while (i < DAT_10f35b54 + 1);
    }
}
