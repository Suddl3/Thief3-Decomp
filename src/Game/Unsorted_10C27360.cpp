// Game/Unsorted_10C27360.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10C27380
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class Class_10BAEC40
{
public:
    void FUN_10bae1d0(int A);
    void FUN_10bf7ad0(int A, int B, int C);

    int Unknown00;
    int Unknown04;
    Struct_10C27380* Unknown08;
};

class Class_10C27380
{
public:
    void FUN_10c27380(int A);

    char Unknown00[0x30];
    Class_10BAEC40 Unknown30;
};

// FUNCTION: 0x10C27380 ?FUN_10c27380@Class_10C27380@@QAEXH@Z
void Class_10C27380::FUN_10c27380(int A)
{
    for (int I = Unknown30.Unknown00 - 1; I >= 0; I--)
    {
        if (Unknown30.Unknown08[I].Unknown04 == A)
        {
            if (I != Unknown30.Unknown00 - 1)
                Unknown30.FUN_10bf7ad0(I + 1, I, Unknown30.Unknown00 - I - 1);
            Unknown30.FUN_10bae1d0(Unknown30.Unknown00 - 1);
        }
    }
}
