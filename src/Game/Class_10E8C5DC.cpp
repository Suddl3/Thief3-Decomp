// Game/Class_10E8C5DC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C5DC.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e8c3f0[];

class Class_10E984F4
{
public:
    Class_10E984F4* Init();

    void* Unknown00;
    int m_Elements;
};

class Class_10E8C3F0 : public Class_10E984F4
{
public:
    Class_10E8C3F0()
    {
        Init();
        Unknown00 = DAT_10e8c3f0;
    }
};

// FUNCTION: 0x10BA3C90 ?Create@Class_10E8C5DC@@UAEPAVClass_10E8C3F0@@HH@Z
Class_10E8C3F0* Class_10E8C5DC::Create(int A, int B)
{
    return new(0, 0, 0, 0, 0) Class_10E8C3F0;
}
