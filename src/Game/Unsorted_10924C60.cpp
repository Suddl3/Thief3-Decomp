// Game/Unsorted_10924C60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern bool DAT_10f2c728;

extern bool DAT_10f2c72d;

extern bool DAT_10f2c730;

extern bool DAT_10f2c8d6;

// FUNCTION: 0x10924D50 ?FUN_10924d50@@YG_NH@Z
bool __stdcall FUN_10924d50(int Param1)
{
    switch (Param1 - 4)
    {
    case 0:
        if (!DAT_10f2c72d && !DAT_10f2c728)
            return true;
        return false;
    case 1:
        if (!DAT_10f2c72d && !DAT_10f2c730)
            return true;
        return false;
    case 2:
        if (DAT_10f2c8d6 && !DAT_10f2c72d && !DAT_10f2c730 && !DAT_10f2c728)
            return true;
        return false;
    case 3:
        if (!DAT_10f2c72d && !DAT_10f2c730 && !DAT_10f2c728)
            return true;
        return false;
    }
    return true;
}
