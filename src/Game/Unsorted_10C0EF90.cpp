// Game/Unsorted_10C0EF90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

int FUN_10af36e0(const char* A, const char* B);

extern char DAT_10f06388[18][0x28];

extern const char DAT_10e47660[];

// FUNCTION: 0x10C0EF90 ?FUN_10c0ef90@@YAHPAPBD@Z
int FUN_10c0ef90(const char** A)
{
    for (int i = 0; i < 18; i++)
    {
        const char* Text = *A ? *A : DAT_10e47660;
        if (!FUN_10af36e0(Text, DAT_10f06388[i]))
            return i;
    }
    return -1;
}
