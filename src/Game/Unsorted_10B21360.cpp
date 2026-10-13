// Game/Unsorted_10B21360.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B21360.h"
#include "Game/Class_10B255F0.h"
#include "Game/Info_10B21360.h"
#include "T3Player/T3PlayerClasses.h"

Class_10B255F0* GetSelection();

// FUNCTION: 0x10B21360 ?FUN_10b21360@Class_10B21360@@QAEXPBUInfo_10B21360@@@Z
void Class_10B21360::FUN_10b21360(const Info_10B21360* In)
{
    Unknown468 = *In;
}

// FUNCTION: 0x10B21380 ?FUN_10b21380@AGarrett@@UAEPAXXZ
void* AGarrett::Virtual122()
{
    return GetSelection()->FUN_10b24f70();
}
