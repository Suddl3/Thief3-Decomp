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
    void SetCount(int A);
    void MoveRange(int A, int B, int C);

    int m_Count;
    int Unknown04;
    Struct_10C27380* m_Items;
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
    for (int I = Unknown30.m_Count - 1; I >= 0; I--)
    {
        if (Unknown30.m_Items[I].Unknown04 == A)
        {
            if (I != Unknown30.m_Count - 1)
                Unknown30.MoveRange(I + 1, I, Unknown30.m_Count - I - 1);
            Unknown30.SetCount(Unknown30.m_Count - 1);
        }
    }
}
