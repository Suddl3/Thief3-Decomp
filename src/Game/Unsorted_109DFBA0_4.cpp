// Game/Unsorted_109DFBA0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern "C" __declspec(dllimport) unsigned long __stdcall GetTickCount(void);

extern int DAT_10f35da0;

extern int DAT_10f35b2c;

extern int DAT_10f35b28;

extern int DAT_10f35b50;

extern int DAT_10f35b4c;

extern int DAT_10f35b44;

extern bool DAT_10f35b08;

extern bool DAT_10f35b48;

// FUNCTION: 0x109DFE80 ?AdvanceIndexOnTimer@@YAXXZ
void AdvanceIndexOnTimer()
{
    if (DAT_10f35da0 != 0)
    {
        DAT_10f35b28 = GetTickCount();
        if (DAT_10f35b2c == 0)
        {
            DAT_10f35b2c = DAT_10f35b28;
            return;
        }
        int Interval = DAT_10f35b50;
        if (DAT_10f35b44 != 0)
            Interval = DAT_10f35b4c;
        if (DAT_10f35b28 - DAT_10f35b2c > Interval)
        {
            DAT_10f35b2c = DAT_10f35b28;
            if (!DAT_10f35b08)
            {
                DAT_10f35b44++;
                if (DAT_10f35b44 >= DAT_10f35da0)
                    DAT_10f35b44 = 0;
            }
            DAT_10f35b48 = true;
        }
    }
}
