// Game/Unsorted_10AA4D50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/SwooshGeometryTriStrip.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10AA5110 ?CreateSwooshGeometryTriStrip@@YAPAVSwooshGeometryTriStrip@@XZ
SwooshGeometryTriStrip* CreateSwooshGeometryTriStrip()
{
    GetAllocator()->Virtual8(0, 0);
    SwooshGeometryTriStrip* Result = new(0, 0, 0, 0, 0) SwooshGeometryTriStrip;
    GetAllocator()->Virtual9();
    return Result;
}
