// Game/Unsorted_10913D90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10914150.h"
#include "Game/Class_10914380.h"

class Class_1090A780;

class Class_1090FD40;

class Class_109159B0
{
public:
    void FUN_109159b0(Class_1090FD40* Out);
};

// FUNCTION: 0x10914150 ?FUN_10914150@Class_10914150@@QAEXPAVClass_1090FD40@@@Z
void Class_10914150::FUN_10914150(Class_1090FD40* Out)
{
    for (int i = 0; i < Unknown04; i++)
        Unknown0C[i]->FUN_109159b0(Out);
}

// FUNCTION: 0x10914380 ?FUN_10914380@Class_10914380@@QAE_NABVClass_1090A780@@0AAVClass_109081E0@@PAX@Z
bool Class_10914380::FUN_10914380(const Class_1090A780& A, const Class_1090A780& B, Class_109081E0& Out, void* Filter)
{
    Class_109081E0* Found = FUN_10913fc0(A, B, Filter, 0);
    if (!Found)
        return false;
    Out = *Found;
    return true;
}
