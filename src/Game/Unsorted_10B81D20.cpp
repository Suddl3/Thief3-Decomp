// Game/Unsorted_10B81D20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Allocator_10FFA700.h"

extern Allocator_10FFA700* DAT_10ffa700;

struct Struct_10B81D20
{
    char Unknown00[4];
    unsigned short Unknown04;
};

// FUNCTION: 0x10B81D20 ?FUN_10b81d20@@YAXPAUStruct_10B81D20@@@Z
void FUN_10b81d20(Struct_10B81D20* P)
{
    DAT_10ffa700->Free(P, P->Unknown04, 0x2b);
}
