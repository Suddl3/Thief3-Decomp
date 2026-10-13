// Game/Unsorted_10A1FB80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A1FD90.h"
#include "Game/Class_10A21480.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// Game/Class_10A1F880.h's class, copied whole with its constructor added: the new below
// calls it out of line (FUN_10a1fb80) and takes its result.
class Class_10A1F880
{
public:
    Class_10A1F880();

    int GetAt(int Index);

    char Unknown00[4];
    int m_Count;
    char Unknown08[4];
    int* m_Values;
};

extern Class_10A1F880* DAT_10f39f00;

// FUNCTION: 0x10A1FCF0 ?FUN_10a1fcf0@@YAPAVClass_10A1F880@@XZ
Class_10A1F880* FUN_10a1fcf0()
{
    if (!DAT_10f39f00)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10f39f00 = new(0, 0, 0, 0, 0) Class_10A1F880;
        GetAllocator()->Virtual9();
    }
    return DAT_10f39f00;
}

// FUNCTION: 0x10A1FD90 ?FUN_10a1fd90@Class_10A1FD90@@QAEXHHH@Z
void Class_10A1FD90::FUN_10a1fd90(int A, int B, int C)
{
    int Offset = m_Stride * C + m_BaseOffset;
    Virtual37(Offset + A, B ? Offset + B : 0);
}

// FUNCTION: 0x10A21480 ?Free@Class_10A21480@@QAEXXZ
void Class_10A21480::Free()
{
    FUN_10a20f60(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(m_Buffer);
        m_Buffer = 0;
        Unknown04 = 0;
    }
}
