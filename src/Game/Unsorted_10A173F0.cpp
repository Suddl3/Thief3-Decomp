// Game/Unsorted_10A173F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

class FName;

class cString;

class Class_10A174E0
{
public:
    Class_10A174E0();
    virtual int Virtual0(FName Name);
    virtual void Virtual1(int A, int B);
    virtual void Virtual2();
    virtual int Virtual3(FName Name);

    ~Class_10A174E0();

    void FUN_10a16700(const cString& Name);

    char Unknown04[0x5C];
};

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern Class_10A174E0* DAT_10f3987c;

// FUNCTION: 0x10A18230 ?GetStats@@YAPAVClass_10A174E0@@XZ
Class_10A174E0* GetStats()
{
    if (!DAT_10f3987c)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10f3987c = new(0, 0, 0, 0, 0) Class_10A174E0;
        GetAllocator()->Virtual9();
    }
    return DAT_10f3987c;
}
