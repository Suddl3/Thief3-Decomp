// Game/Unsorted_10B31B70_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10993E20.h"
#include "Game/Struct_10B21820_Object.h"

extern const char* DAT_10ff37f8;

class Class_10B21820;

class Class_10B21820 : public Class_10993E20
{
public:
    Struct_10B21820_Object* FUN_10991e10();
};

// FUNCTION: 0x10B31B70 ?FUN_10b31b70@@YGXPAVClass_10B21820@@H@Z
void __stdcall FUN_10b31b70(Class_10B21820* A, int B)
{
    Struct_10B21820_Object* Obj = A->FUN_10991e10();
    int R = Obj->Virtual47(DAT_10ff37f8);
    Obj->Virtual60(0);
    Obj->Virtual44(R, 0, 0, 0, B, -1, 1.0f, 1);
    A->FUN_10993e20(0);
}
