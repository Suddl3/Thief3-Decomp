// Game/Unsorted_10ABC140_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// FUNCTION: 0x10ABC1C0 ?ScaleToCount@@YAHMMMHH@Z
int ScaleToCount(float A, float B, float C, int Unknown10, int E)
{
    if (A < B)
        return 0;
    if (A > C)
        return E;
    int Result = (int)((A - B) / (C - B) * E);
    if (Result == 0)
        Result = 1;
    return Result;
}
