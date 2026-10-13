// Game/Class_10E5D744.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10E5D744.h"
#include "Game/cTriggerSoundSchemaParam.h"

class Object_10A8AC40;

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A8B0B0 ?FUN_10a8b0b0@Class_10E5D744@@UAEPAVcTriggerSoundSchemaParam@@HH@Z
cTriggerSoundSchemaParam* Class_10E5D744::FUN_10a8b0b0(int A, int B)
{
    GetAllocator()->Virtual8(0, 0);
    cTriggerSoundSchemaParam* Result = new(0, 0, 0, 0, 0) cTriggerSoundSchemaParam;
    GetAllocator()->Virtual9();
    return Result;
}
