// Game/Unsorted_1094E6D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1094E6D0.h"
#include "Game/Class_10F2C744.h"

Class_10905A90_Member* FUN_10905aa0();

extern Class_10F2C744* DAT_10f2c744;

struct Struct_1094E6D0_Group
{
    char Unknown00[0x18];
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
};

// FUNCTION: 0x1094E6D0 ?FUN_1094e6d0@Class_1094E6D0@@QAEXHHHHH@Z
void Class_1094E6D0::FUN_1094e6d0(int Index, int A, int B, int C, int D)
{
    Unknown108[Index].Unknown18 = A;
    Unknown108[Index].Unknown1C = B;
    Unknown108[Index].Unknown20 = C;
    Unknown108[Index].Unknown24 = D;
    if (Index == 0)
    {
        FUN_10905aa0()->Virtual8(0, 0);
        DAT_10f2c744->Virtual3(0, 0x10, 0, "BlendMesh::m_ShadowVertex", &Unknown114);
        DAT_10f2c744->Virtual3(1, 0x10, 0, "BlendMesh::m_ShadowVertex", &Unknown118);
        FUN_10905aa0()->Virtual9();
    }
}
