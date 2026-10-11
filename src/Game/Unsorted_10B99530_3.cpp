// Game/Unsorted_10B99530_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

int FUN_10bed150();

struct Struct_10B98E00
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

// The object the function allocates: 0x54 bytes, built from (int, int, int, int, int, int).
class Class_10E97370
{
public:
    Class_10E97370(int A, int B, int C, int D, int E, int F);

    char Unknown00[0x54];
};

class Class_10E4CCD0
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
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual Class_10E97370* FUN_10b996b0(Struct_10B98E00* A, int B, int C, int D, int E);
};

// FUNCTION: 0x10B996B0 ?FUN_10b996b0@Class_10E4CCD0@@UAEPAVClass_10E97370@@PAUStruct_10B98E00@@HHHH@Z
Class_10E97370* Class_10E4CCD0::FUN_10b996b0(Struct_10B98E00* A, int B, int C, int D, int E)
{
    int Id = FUN_10bed150();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->FUN_10bbdb40() > 0.0f)
        return new(0, 0, 0, 0, 0) Class_10E97370(B, C, D, E, (int)A, (int)this);
    return 0;
}
