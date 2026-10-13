// Game/Unsorted_109E2A90_9.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5B2AC.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern Class_10E5B2AC* DAT_10f35dc0;

// FUNCTION: 0x109E34B0 ?GetMessageHandler@@YAPAVClass_10E5B2AC@@XZ
Class_10E5B2AC* GetMessageHandler()
{
    if (!DAT_10f35dc0)
    {
        GetAllocator()->Virtual8(0, 0);
        Class_10E5B2AC* Result = new(0, 0, 0, 0, 0) Class_10E5B2AC;
        DAT_10f35dc0 = Result;
        GetAllocator()->Virtual9();
    }
    return DAT_10f35dc0;
}
