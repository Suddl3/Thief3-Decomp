// Game/Unsorted_1092F270.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4AC6C.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10951900.h"
#include "Game/Class_1092F270.h"

Class_10905A90_Member* GetAllocator();

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x1092F270 ?GetOrCreate@Class_1092F270@@QAEPAVClass_10951900@@_N@Z
Class_10951900* Class_1092F270::GetOrCreate(bool A)
{
    if (Unknown0B0 == 0 && A)
    {
        GetAllocator()->Virtual8(0, 0);
        Unknown0B0 = new(0, 0, 0, 0, 0) Class_10E4AC6C;
        GetAllocator()->Virtual9();
    }
    return (Class_10951900*)Unknown0B0;
}
