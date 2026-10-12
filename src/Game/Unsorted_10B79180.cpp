// Game/Unsorted_10B79180.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B79180.h"
#include "Game/Class_10B791E0.h"
#include "Game/Class_10B79A30.h"
#include "Game/Struct_10B79A30.h"

struct Struct_10B79180
{
    int Unknown00;
    int Unknown04;
};

struct Struct_10B791E0_Entry
{
    int Unknown00;
    int Unknown04;
};

// FUNCTION: 0x10B79180 ?FindKeyByValue@Class_10B79180@@QAEHH@Z
int Class_10B79180::FindKeyByValue(int Key)
{
    for (int i = 0; i < Virtual117(); i++)
    {
        if (m_Entries[i].Unknown04 == Key)
            return m_Entries[i].Unknown00;
    }
    return 0;
}

// FUNCTION: 0x10B791E0 ?FindValueByKey@Class_10B791E0@@QAEHH@Z
int Class_10B791E0::FindValueByKey(int Key)
{
    for (int i = 0; i < Virtual117(); i++)
    {
        if (m_Entries[i].Unknown00 == Key)
            return m_Entries[i].Unknown04;
    }
    return 0;
}

// FUNCTION: 0x10B79A30 ?FUN_10b79a30@Class_10B79A30@@QAEXHABUStruct_10B79A30@@00HHH@Z
void Class_10B79A30::FUN_10b79a30(int A, const Struct_10B79A30& B, const Struct_10B79A30& C, const Struct_10B79A30& D,
                                  int E, int F, int G)
{
    Unknown50 = E;
    Unknown54 = B;
    Unknown60 = C;
    Unknown6C = D;
    Unknown78 = F;
    Unknown7C = G;
    FUN_10b79340(A);
}
