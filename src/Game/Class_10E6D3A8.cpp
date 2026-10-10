// Game/Class_10E6D3A8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA1AC0.h"
#include "Game/Class_10E6D3A8.h"

class Class_10978090
{
public:
    int FUN_10978090();
};

void FUN_10a36cf0();

void FUN_10a36cd0();

// FUNCTION: 0x10AA1AC0 ?FUN_10aa1ac0@Class_10E6D3A8@@UAEHHHPAVClass_10AA1AC0@@@Z
int Class_10E6D3A8::FUN_10aa1ac0(int A, int B, Class_10AA1AC0* C)
{
    if (C->Virtual4(0)->FUN_10978090() == 1)
    {
        FUN_10a36cf0();
        return 1;
    }
    FUN_10a36cd0();
    return 1;
}
