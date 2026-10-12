// Game/Class_10E9CA9C_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E9CA9C.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10C61C20_Param;

class Class_10C62290;

class Class_10C62290
{
public:
    Class_10C62290(int A);
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(const Class_109081E0& A);

    char Unknown04[0x138];
};

// FUNCTION: 0x10C62550 ?Create@Class_10E9CA9C@@UAEPAVClass_10C62290@@HPBD@Z
Class_10C62290* Class_10E9CA9C::Create(int A, const char* B)
{
    if (Unknown04)
    {
        GetAllocator()->Virtual8(0, 0);
        Class_10C62290* Obj = new(0, 0, 0, 0, 0) Class_10C62290(A);
        GetAllocator()->Virtual9();
        {
            Class_109081E0 Name(B);
            Obj->Virtual3(Name);
        }
        return Obj;
    }
    return 0;
}
