// Game/Unsorted_10C49260.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10C49100.h"
#include "Game/Class_10C49100_Field18.h"
#include "Game/Class_10C49100_Node.h"
#include "Game/Class_10D3F830.h"
#include "Game/Class_10E9BB8C.h"
#include "Game/Class_10E9BBC0.h"

struct Struct_10C49860
{
    int Unknown00;
    int Unknown04;
};

// FUNCTION: 0x10C49860 ?FUN_10c49860@Class_10E9BBC0@@UAEXPAUStruct_10C49860@@@Z
void Class_10E9BBC0::FUN_10c49860(Struct_10C49860* A)
{
    int Key = A->Unknown04;
    m_Entries.FUN_10d3f830(&Key);
}
