// Game/Unsorted_10B64460.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B64460.h"

class Class_10B64460_Unknown04
{
public:
    virtual void Virtual0();
    virtual bool Virtual1(int A, int B, bool C);
};

// FUNCTION: 0x10B64460 ?HandleKey@Class_10B64460@@QAE_NHH_NPAVClass_10B64460_Unknown04@@@Z
bool Class_10B64460::HandleKey(int A, int B, bool C, Class_10B64460_Unknown04* D)
{
    if (!C || D == 0 || D != m_Target)
    {
        Unknown1C = 0x40;
        return false;
    }
    if (A == 0x1b || A == 0x1c || A == 0x25 || A == 0x24)
    {
        Unknown20 = 0;
        Unknown24 = 0;
        Unknown1C = A;
        return m_Target->Virtual1(A, B, C);
    }
    return false;
}
