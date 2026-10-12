// Game/Class_10E5D79C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D79C.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6c974[];

extern void* DAT_10e6c970[];

// Constructed by 0x10AAF5B0: a primary table at +0x0 and a second base's at +0xC.
class Class_10E6DC88
{
public:
    Class_10E6DC88(int Value);

    void** VTable;
    int Unknown04;
    int Unknown08;
    void** VTable0C;
    int Unknown10;
};

class Class_10E6C974 : public Class_10E6DC88
{
public:
    Class_10E6C974() : Class_10E6DC88(0x10)
    {
        VTable = DAT_10e6c974;
        VTable0C = DAT_10e6c970;
    }
};

// FUNCTION: 0x10A90280 ?Create@Class_10E5D79C@@UAEPAVClass_10E6C974@@XZ
Class_10E6C974* Class_10E5D79C::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6C974* Result = new(0, 0, 0, 0, 0) Class_10E6C974;
    GetAllocator()->Virtual9();
    return Result;
}
