// Game/Unsorted_10C38F70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C39220.h"
#include "Game/Struct_10C39220.h"

// FUNCTION: 0x10C39220 ?FUN_10c39220@Class_10C39220@@QAE_NH@Z
bool Class_10C39220::FUN_10c39220(int A)
{
    Struct_10C39220* Out = (Struct_10C39220*)A;
    if (UnknownAC >= UnknownA0)
        return false;
    if (UnknownFC == 1 || UnknownFC == 7)
        *Out = Unknown28;
    else
        *Out = UnknownA8[UnknownAC];
    return true;
}
