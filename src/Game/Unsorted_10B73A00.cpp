// Game/Unsorted_10B73A00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B73130
{
public:
    bool FUN_10b73130(int A, int B);
};

class Class_10B73810
{
public:
    void ApplyValues();
    void FUN_10b73b40(int A);

    char Unknown00[0xC4];
    int Unknown0C4;
    char Unknown0C8[0xC8];
    int m_ChildCount;
    char Unknown194[4];
    Class_10B73130** m_Children;
};

// FUNCTION: 0x10B73B40 ?FUN_10b73b40@Class_10B73810@@QAEXH@Z
void Class_10B73810::FUN_10b73b40(int A)
{
    for (int i = 0; i < m_ChildCount; i++)
    {
        if (m_Children[i]->FUN_10b73130(A, Unknown0C4))
            ApplyValues();
    }
}
