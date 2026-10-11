// Game/Unsorted_10906DC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>

extern void* DAT_10f2bfe4;

extern void* DAT_10f2bfe8;

extern unsigned char DAT_10f2bfec;

extern unsigned char DAT_10f2bfed;

extern int DAT_10efeed4;

extern int DAT_10efeed8;

int FUN_10907030(void** Handle, const char* Name);

// FUNCTION: 0x109070D0 ?FUN_109070d0@@YA_NPBDPAPAXPAH@Z
bool FUN_109070d0(const char* Name, void** Out, int* Out2)
{
    *Out = 0;
    *Out2 = 0;
    if (strstr(Name, "default.ini"))
    {
        if (!DAT_10f2bfec)
        {
            DAT_10efeed4 = FUN_10907030(&DAT_10f2bfe4, Name);
            if (DAT_10efeed4)
                DAT_10f2bfec = 1;
        }
        *Out = DAT_10f2bfe4;
        *Out2 = DAT_10efeed4;
        return false;
    }
    if (strstr(Name, "user.ini"))
    {
        if (!DAT_10f2bfed)
        {
            DAT_10efeed8 = FUN_10907030(&DAT_10f2bfe8, Name);
            if (DAT_10efeed8)
                DAT_10f2bfed = 1;
        }
        *Out = DAT_10f2bfe8;
        *Out2 = DAT_10efeed8;
    }
    return false;
}
