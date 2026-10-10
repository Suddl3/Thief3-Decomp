// Game/Class_10E6C4A8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Object_10C12B50.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_109081E0
{
public:
    Class_109081E0(const char* In);
    Class_109081E0(const Class_109081E0& Other);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

void FUN_10d3d990(void* Stream, int* Value);

class Class_10E6C4A8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void FUN_10a89130(int A, void* Stream);

    Object_10C12B50* Unknown04;
};

// FUNCTION: 0x10A89130 ?FUN_10a89130@Class_10E6C4A8@@UAEXHPAX@Z
void Class_10E6C4A8::FUN_10a89130(int A, void* Stream)
{
    FUN_10d3d990(Stream, (int*)&Unknown04->Virtual25());
}
