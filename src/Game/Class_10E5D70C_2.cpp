// Game/Class_10E5D70C_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Object_10A18F40.h"
#include "Game/Class_10E5D70C.h"

class Class_10A4DFD0
{
public:
    void FUN_10a4dfd0();
};

Class_10A4DFD0* __stdcall FUN_10a4f900(int A, Object_10A18F40* B, void** C);

// FUNCTION: 0x10A18F10 ?FUN_10a18f10@Class_10E5D70C@@QAEXXZ
void Class_10E5D70C::FUN_10a18f10()
{
    for (int i = 0; i < 14; i++)
        FUN_10a4f900(i, Unknown04, &Unknown638[i])->FUN_10a4dfd0();
}
