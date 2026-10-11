// Game/Class_10E88D4C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E88D4C.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e89798[];

extern void* DAT_10e89794[];

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

class Class_10E89798 : public Class_10E6DC88
{
public:
    Class_10E89798() : Class_10E6DC88(0x52)
    {
        VTable = DAT_10e89798;
        VTable0C = DAT_10e89794;
    }
};

// FUNCTION: 0x10B8F070 ?FUN_10b8f070@Class_10E88D4C@@UAEPAVClass_10E89798@@XZ
Class_10E89798* Class_10E88D4C::FUN_10b8f070()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E89798* Result = new(0, 0, 0, 0, 0) Class_10E89798;
    GetAllocator()->Virtual9();
    return Result;
}
