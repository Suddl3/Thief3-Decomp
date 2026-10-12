// Game/Unsorted_10B1D600.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// FUNCTION: 0x10B1DAD0 ?WrapAngle@@YAHH@Z
int WrapAngle(int A)
{
    if (A > 0x7fff)
        return A - 0xffff;
    if (A < -0x7fff)
        return A + 0xffff;
    return A;
}
