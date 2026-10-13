// Game/Class_10E4CCD0_41.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/DeathState.h"
#include "Game/Class_10E92D60.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

struct Struct_10B98E00;

class Object_10BCE8D0;

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
    virtual Class_10E92D60* FUN_10b97c40(Struct_10B98E00* A, bool B, int C, void* D, int E);
};

// FUNCTION: 0x10B97C40 ?FUN_10b97c40@Class_10E4CCD0@@UAEPAVClass_10E92D60@@PAUStruct_10B98E00@@_NHPAXH@Z
Class_10E92D60* Class_10E4CCD0::FUN_10b97c40(Struct_10B98E00* A, bool B, int C, void* D, int E)
{
    return new(0, 0, 0, 0, 0) Class_10E92D60((int)A, (int)this, B, C, D, E);
}
