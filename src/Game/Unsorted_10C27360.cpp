// Game/Unsorted_10C27360.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10C27380
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class cStructArray
{
public:
    void SetCount(int A);
    void MoveRange(int A, int B, int C);

    int m_Count;
    int m_AllocBytes;
    Struct_10C27380* m_Items;
};

class Class_10C27380
{
public:
    void RemoveMatching(int A);

    char Unknown00[0x30];
    cStructArray m_Entries;
};

// FUNCTION: 0x10C27380 ?RemoveMatching@Class_10C27380@@QAEXH@Z
void Class_10C27380::RemoveMatching(int A)
{
    for (int I = m_Entries.m_Count - 1; I >= 0; I--)
    {
        if (m_Entries.m_Items[I].Unknown04 == A)
        {
            if (I != m_Entries.m_Count - 1)
                m_Entries.MoveRange(I + 1, I, m_Entries.m_Count - I - 1);
            m_Entries.SetCount(m_Entries.m_Count - 1);
        }
    }
}
