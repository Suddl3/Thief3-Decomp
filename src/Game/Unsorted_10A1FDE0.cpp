// Game/Unsorted_10A1FDE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// FUNCTION: 0x10A1FDE0 ?FUN_10a1fde0@@YAHPBE@Z
int FUN_10a1fde0(const unsigned char* Value)
{
    if (!Value)
        return 3;
    unsigned char C = *Value;
    if (!C)
        return 3;
    switch (C)
    {
    case 1:
    case 2:
    case 3:
        return 3;
    case 4:
        return 1;
    case 5:
        return 2;
    case 6:
    case 7:
        return 4;
    case 8:
    case 9:
        return 5;
    case 10:
        return 6;
    }
    return 3;
}
