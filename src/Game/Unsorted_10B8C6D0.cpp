// Game/Unsorted_10B8C6D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/Class_10B8C780.h"

struct Struct_10B8C780
{
    int Unknown00;
    Class_1098E330* Unknown04;
};

// FUNCTION: 0x10B8C780 ?FUN_10b8c780@Class_10B8C780@@QAEXPAUStruct_10B8C780@@@Z
void Class_10B8C780::FUN_10b8c780(Struct_10B8C780* Param)
{
    Unknown1C = Param;
    Param->Unknown04->FUN_1098e330(0x8006b7, (int*)&Param);
    Unknown18 = (int)Param == 1;
}
