// Game/Class_10E6C484_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E6C470.h"
#include "Game/Class_10E6DC54.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E6C484
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void FUN_10a88ec0();

    Class_10E6C470* Unknown04;
    char Unknown08[0x670];
    Class_10E6DC54* Unknown678;
};

// FUNCTION: 0x10A88EC0 ?FUN_10a88ec0@Class_10E6C484@@UAEXXZ
void Class_10E6C484::FUN_10a88ec0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Unknown678 = new(0, 0, 0, 0, 0) Class_10E6DC54;
    FUN_10905aa0()->Virtual9();
    Unknown04 = Unknown678;
}
