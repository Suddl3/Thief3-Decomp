// Game/cStateStack_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10eafbdc;

double GetTimeSeconds();

class Class_10B9E410_Item;

class Class_10B9E410_Member;

// The header's cStateStack with the two timers as floats (the code compares them with the float constant).
class cStateStack
{
public:
    void FUN_10b9cf60();
    void FUN_10b9cfa0();
    Class_10B9E410_Item* Top()
    {
        if (m_Count == 0)
            return 0;
        return m_Stack[m_Count - 1];
    }
    void FUN_10b9cf20();
    void FUN_10b9e410();
    void ApplyNextState(int A);
    void FUN_10b9d8d0();
    void FUN_10b9dc80(int A);
    void FUN_10b9dcc0();
    void FUN_10b9dc40(int A);
    void FUN_10b9e660();
    void FUN_10b9e690(int A);
    void FUN_10b9eee0();
    void FUN_10b9d2b0();

    char Unknown00[0xC];
    int Unknown0C;
    int m_Count;
    char Unknown14[4];
    Class_10B9E410_Item** m_Stack;
    float Unknown1C;
    float Unknown20;
    char Unknown24[0x14];
    Class_10B9E410_Member* m_Member;
};

// FUNCTION: 0x10B9D2B0 ?FUN_10b9d2b0@cStateStack@@QAEXXZ
void cStateStack::FUN_10b9d2b0()
{
    if (Unknown1C != DAT_10eafbdc)
    {
        double EndTime = Unknown1C + 2.0f;
        if (GetTimeSeconds() > EndTime)
            FUN_10b9cf60();
    }
    if (Unknown20 != DAT_10eafbdc)
    {
        double EndTime = Unknown20 + 2.0f;
        if (GetTimeSeconds() > EndTime)
            FUN_10b9cfa0();
    }
}
