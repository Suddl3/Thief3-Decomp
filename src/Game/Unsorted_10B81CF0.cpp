// Game/Unsorted_10B81CF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Allocator_10FFA700.h"

extern Allocator_10FFA700* DAT_10ffa700;

struct Struct_10B81CF0
{
    char Unknown00[4];
    unsigned short Unknown04;
};

// FUNCTION: 0x10B81CF0 ?FUN_10b81cf0@@YAXPAUStruct_10B81CF0@@@Z
void FUN_10b81cf0(Struct_10B81CF0* p)
{
    DAT_10ffa700->Free(p, p->Unknown04, 0x1f);
}
