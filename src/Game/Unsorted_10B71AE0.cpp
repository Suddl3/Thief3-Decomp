// Game/Unsorted_10B71AE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B73810.h"
#include "Game/Struct_10B73810.h"

class Class_10B735C0
{
public:
    void FUN_10b735c0(int A);
};

// FUNCTION: 0x10B737B0 ?FUN_10b737b0@Class_10B73810@@QAEXXZ
void Class_10B73810::FUN_10b737b0()
{
    Struct_10B73810* Obj = Unknown188;
    int Base = (int)Obj;
    if (Obj)
        Base = Obj->Unknown1F0;
    for (int i = 0; i < Unknown190; i++)
        Unknown198[i]->FUN_10b735c0(Unknown1A4[Base + i]);
}
