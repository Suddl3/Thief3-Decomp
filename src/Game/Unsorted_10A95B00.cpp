// Game/Unsorted_10A95B00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5D9DC.h"
#include "Game/Class_10E6CE6C.h"
#include "Game/Class_10E6CE78.h"
#include "Game/TimeManager.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A95B00 ?FUN_10a95b00@Class_10E5D9DC@@UAEPAVClass_10E6CE6C@@XZ
Class_10E6CE6C* Class_10E5D9DC::FUN_10a95b00()
{
    Class_10E6CE6C* Object = (Class_10E6CE6C*)operator new(sizeof(Class_10E6CE6C), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}

// FUNCTION: 0x10A95B40 ?FUN_10a95b40@Class_10E6CE78@@UAE_NHH@Z
bool Class_10E6CE78::FUN_10a95b40(int p1, int p2)
{
    return TimeManager::Instance()->IsPaused() != 0;
}
