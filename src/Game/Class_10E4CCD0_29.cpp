// Game/Class_10E4CCD0_29.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

int FUN_10be9ab0();

struct Struct_10B98E00
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

class Class_10E4CCD0;

// The object the function allocates: 0x88 bytes, built from (Struct_10B98E00*, owner, int, int, int).
class Class_10BE9D40
{
public:
    Class_10BE9D40(Struct_10B98E00* A, Class_10E4CCD0* Owner, int B, int C, int D);

    char Pad00[0x88];
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
    virtual Class_10BE9D40* FUN_10b993a0(Struct_10B98E00* A, int B, int C, int D);
};

// FUNCTION: 0x10B993A0 ?FUN_10b993a0@Class_10E4CCD0@@UAEPAVClass_10BE9D40@@PAUStruct_10B98E00@@HHH@Z
Class_10BE9D40* Class_10E4CCD0::FUN_10b993a0(Struct_10B98E00* A, int B, int C, int D)
{
    int Id = FUN_10be9ab0();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->GetFloat() > 0.0f)
        return new(0, 0, 0, 0, 0) Class_10BE9D40(A, this, B, C, D);
    return 0;
}
