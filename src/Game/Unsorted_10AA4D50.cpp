// Game/Unsorted_10AA4D50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6d5b0[];

class SwooshGeometryTriStrip
{
public:
    SwooshGeometryTriStrip()
    {
        Unknown04 = 0;
        Unknown08 = 0;
        Unknown0C = 0;
        Unknown10 = 0;
        Unknown14 = 0;
        Unknown18 = 0;
        Unknown1C = 0;
        VTable = DAT_10e6d5b0;
    }

    void** VTable;
    char Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
};

// FUNCTION: 0x10AA5110 ?CreateSwooshGeometryTriStrip@@YAPAVSwooshGeometryTriStrip@@XZ
SwooshGeometryTriStrip* CreateSwooshGeometryTriStrip()
{
    GetAllocator()->Virtual8(0, 0);
    SwooshGeometryTriStrip* Result = new(0, 0, 0, 0, 0) SwooshGeometryTriStrip;
    GetAllocator()->Virtual9();
    return Result;
}
