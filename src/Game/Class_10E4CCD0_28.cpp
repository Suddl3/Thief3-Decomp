// Game/Class_10E4CCD0_28.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

void* FUN_10be9150();

struct Struct_10B98E00
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

class Class_10E95288;

class Class_10E4CCD0
{
public:
    virtual void Virtual0();
    virtual Class_10E95288* FUN_10b98e00(Struct_10B98E00* A);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual Class_10E95288* FUN_10b992e0(Struct_10B98E00* A, int B);
};

class Class_10E95288
{
public:
    Class_10E95288(Struct_10B98E00* A, Class_10E4CCD0* Owner, int B);

    char Unknown00[0x54];
};

// FUNCTION: 0x10B992E0 ?FUN_10b992e0@Class_10E4CCD0@@UAEPAVClass_10E95288@@PAUStruct_10B98E00@@H@Z
Class_10E95288* Class_10E4CCD0::FUN_10b992e0(Struct_10B98E00* A, int B)
{
    void* Id = FUN_10be9150();
    if (Id && A->Unknown08->FUN_10dbd510((int)Id)->FUN_10bbdb40() > 0.0f)
        return new(0, 0, 0, 0, 0) Class_10E95288(A, this, B);
    return 0;
}
