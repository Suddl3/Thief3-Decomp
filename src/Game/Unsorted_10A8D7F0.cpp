// Game/Unsorted_10A8D7F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5D76C.h"
#include "Game/Class_10E5D774.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6c838[];

extern void* DAT_10e6c834[];

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

class Class_10E6C838 : public Class_10E6DC88
{
public:
    Class_10E6C838() : Class_10E6DC88(3)
    {
        VTable = DAT_10e6c838;
        VTable0C = DAT_10e6c834;
    }
};

extern void* DAT_10e6c858[];

extern void* DAT_10e6c854[];

class Class_10E6C858 : public Class_10E6DC88
{
public:
    Class_10E6C858() : Class_10E6DC88(5)
    {
        VTable = DAT_10e6c858;
        VTable0C = DAT_10e6c854;
    }
};

// FUNCTION: 0x10A8D7F0 ?CreateClass_10E6C838@Class_10E5D76C@@UAEPAVClass_10E6C838@@XZ
Class_10E6C838* Class_10E5D76C::CreateClass_10E6C838()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6C838* Result = new(0, 0, 0, 0, 0) Class_10E6C838;
    GetAllocator()->Virtual9();
    return Result;
}

// FUNCTION: 0x10A8D890 ?CreateClass_10E6C858@Class_10E5D774@@UAEPAVClass_10E6C858@@XZ
Class_10E6C858* Class_10E5D774::CreateClass_10E6C858()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10E6C858* Result = new(0, 0, 0, 0, 0) Class_10E6C858;
    GetAllocator()->Virtual9();
    return Result;
}
