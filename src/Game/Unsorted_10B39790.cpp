// Game/Unsorted_10B39790.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B39790.h"
#include "Game/Class_10B397D0.h"
#include "Game/Class_10B39870.h"
#include "Game/Class_10B3A460.h"
#include "Game/Class_10B47130.h"
#include "Game/Class_10B47180.h"
#include "Game/Static_10B3A410.h"

class Class_10B47720
{
public:
    void FUN_10b47720(int A);
};

Class_10B3A460* GetEntries();

// FUNCTION: 0x10B39790 ?FUN_10b39790@Class_10B39790@@QAEXHHHHH@Z
void Class_10B39790::FUN_10b39790(int A, int B, int C, int D, int E)
{
    int Index = GetEntries()->GetEntry(A)->m_Index;
    m_Handlers[Index]->FUN_10b47130(A, B, C, D, E);
}

// FUNCTION: 0x10B397D0 ?FUN_10b397d0@Class_10B397D0@@QAEXHHHH@Z
void Class_10B397D0::FUN_10b397d0(int A, int B, int C, int D)
{
    int Index = GetEntries()->GetEntry(A)->m_Index;
    m_Handlers[Index]->FUN_10b47180(A, B, C, D);
}

// FUNCTION: 0x10B39870 ?FUN_10b39870@Class_10B39870@@QAEHH@Z
int Class_10B39870::FUN_10b39870(int A)
{
    Unknown0C->FUN_10b47720(A);
    return A;
}

// FUNCTION: 0x10B3A410 ?FUN_10b3a410@@YAPAUStatic_10B3A410@@XZ
Static_10B3A410* FUN_10b3a410()
{
    static Static_10B3A410 Instance;
    return &Instance;
}
