// Game/Unsorted_10BD6AC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10e499a0;

float appFrand();

unsigned int __stdcall FUN_10bd4860(int, float, int);

// FUNCTION: 0x10BD72D0 ?FUN_10bd72d0@@YAHXZ
int FUN_10bd72d0()
{
    unsigned int Flags = FUN_10bd4860(0xf, 8.0f, 1);
    if (Flags & 4)
        return 4;
    if ((Flags & 2) && (Flags & 1))
        return (appFrand() > DAT_10e499a0) ? 2 : 1;
    if (Flags & 2)
        return 2;
    if (Flags & 1)
        return 1;
    return (Flags & 8) ? 8 : 4;
}
