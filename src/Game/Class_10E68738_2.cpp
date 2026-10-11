// Game/Class_10E68738_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A58FE0.h"

class Class_10E6B078 : public Class_10A58FE0
{
public:
    virtual bool HandleKey(int A, int B, bool C);
};

class Class_10E68738 : public Class_10E6B078
{
public:
    virtual void FUN_10a56060(int A, int B, bool C);

    char Unknown04[0x1CC];
    int m_Selection;
    bool Unknown1D4;
};

// FUNCTION: 0x10A56060 ?FUN_10a56060@Class_10E68738@@UAEXHH_N@Z
void Class_10E68738::FUN_10a56060(int A, int B, bool C)
{
    if (C && A == 0x1d)
    {
        int Value = m_Selection;
        int Mode;
        if (Unknown1D4)
        {
            Mode = Value + 1;
            if (Mode == 3)
                Mode = 0;
        }
        else
        {
            Mode = Value == 0;
        }
        SetSelection(Mode);
    }
    Class_10E6B078::HandleKey(A, B, C);
}
