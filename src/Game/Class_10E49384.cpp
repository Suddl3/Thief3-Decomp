// Game/Class_10E49384.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_10913D70.h"
#include "Game/Class_10E49384.h"

extern void* DAT_10e49384[];

inline void FreeBlock(int*& Block)
{
    if (Block)
    {
        int* Obj = Block - 1;
        GetAllocator()->Virtual5(Obj);
        Block = 0;
    }
}

// FUNCTION: 0x10913A50 ??1Class_10E49384@@QAE@XZ
Class_10E49384::~Class_10E49384()
{
    VTable = DAT_10e49384;
    FreeBlock(m_Block);
}
