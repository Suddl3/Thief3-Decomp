// Game/Unsorted_1092E9C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);
void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_1092F130
{
public:
    Class_1092F130()
    {
        Unknown00 = 0;
        Unknown04 = 0;
        Unknown08 = 0;
        m_ChildCount = 0;
        Unknown10 = 0;
        m_Children = 0;
        Unknown18 = 0;
        Unknown1C = 0;
        Unknown20 = 0;
        Unknown24 = -1;
    }

    int Unknown00;
    int Unknown04;
    void* Unknown08;
    int m_ChildCount;
    int Unknown10;
    Class_1092F130** m_Children;
    int Unknown18;
    int Unknown1C;
    void* Unknown20;
    int Unknown24;
};

class ScratchPool : public cIntArray
{
public:
    void SwapAt(int A, int B)
    {
        int Temp = Data[A];
        Data[A] = Data[B];
        Data[B] = Temp;
    }

    Class_1092F130* Pop()
    {
        int Index = Count - 1;
        Class_1092F130* Result = (Class_1092F130*)Data[Count - 1];
        SwapAt(Index, Count - 1);
        SetCount(Count - 1);
        return Result;
    }
};

extern cIntArray DAT_10f31b9c;

extern Class_1092F130** DAT_10f31ba4;

// FUNCTION: 0x1092F040 ?FUN_1092f040@@YAPAVClass_1092F130@@XZ
Class_1092F130* FUN_1092f040()
{
    if (DAT_10f31b9c.Count)
    {
        Class_1092F130* Result = ((ScratchPool&)DAT_10f31b9c).Pop();
        Result->Unknown18 = 0;
        Result->Unknown00 = 0;
        Result->m_ChildCount = 0;
        Result->Unknown24 = -1;
        return Result;
    }

    GetAllocator()->Virtual8(0, 0);
    Class_1092F130* Result = new (0, 0, 0, 0, 0) Class_1092F130;
    GetAllocator()->Virtual9();
    return Result;
}
