// Game/Class_10E5D798.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D798.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6c950[];

extern void* DAT_10e6c96c[];

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

class Class_10E6C950 : public Class_10E6DC88
{
public:
    Class_10E6C950() : Class_10E6DC88(0xf)
    {
        VTable = DAT_10e6c950;
        VTable0C = DAT_10e6c96c;
    }
};

// FUNCTION: 0x10A901A0 ?Create@Class_10E5D798@@UAEPAVClass_10E6C950@@XZ
Class_10E6C950* Class_10E5D798::Create()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6C950* Result = new(0, 0, 0, 0, 0) Class_10E6C950;
    GetAllocator()->Virtual9();
    return Result;
}
