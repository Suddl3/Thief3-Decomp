// Game/Class_10915210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10914D80.h"
#include "Game/Class_10914D80_Field18.h"
#include "Game/Class_10914D80_Node.h"
#include "Game/Class_10915210.h"
#include "Game/Class_109169E0.h"
#include "Game/Class_10915830.h"
#include "Game/Class_10916CA0.h"
#include "Game/Class_109242E0.h"
#include "Game/Class_10924E80.h"

class Class_1090A780;

// FUNCTION: 0x109152A0 ?FUN_109152a0@Class_10915210@@QAEXABVClass_1090A780@@H@Z
void Class_10915210::FUN_109152a0(const Class_1090A780& Name, int B)
{
    Class_109169E0* Obj = FUN_10915210(Name);
    if (Obj)
        Obj->FUN_109172f0(B);
}

// FUNCTION: 0x109152C0 ?FUN_109152c0@Class_10915210@@QAEXABVClass_1090A780@@@Z
void Class_10915210::FUN_109152c0(const Class_1090A780& Name)
{
    Class_109169E0* Obj = FUN_10915210(Name);
    if (Obj)
        Obj->FUN_10916c00();
}

// FUNCTION: 0x10915810 ?Lookup@Class_10915210@@QAEHABVClass_1090A780@@0@Z
int Class_10915210::Lookup(const Class_1090A780& A, const Class_1090A780& B)
{
    Class_109169E0* Obj = FUN_10915210(A);
    if (Obj == 0)
        return 0;
    return Obj->FUN_109169e0(B);
}
