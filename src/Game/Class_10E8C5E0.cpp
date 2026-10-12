// Game/Class_10E8C5E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C5E0.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e8c42c[];

class Class_10E984F4
{
public:
    Class_10E984F4* Init();

    void* Unknown00;
    int m_Elements;
};

class Class_10E8C42C : public Class_10E984F4
{
public:
    Class_10E8C42C()
    {
        Init();
        Unknown00 = DAT_10e8c42c;
    }
};

// FUNCTION: 0x10BA3D30 ?Create@Class_10E8C5E0@@UAEPAVClass_10E8C42C@@HH@Z
Class_10E8C42C* Class_10E8C5E0::Create(int A, int B)
{
    return new(0, 0, 0, 0, 0) Class_10E8C42C;
}
