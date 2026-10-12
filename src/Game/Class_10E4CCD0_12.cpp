// Game/Class_10E4CCD0_12.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"
#include "Game/Class_10E4CCD0.h"
#include "Game/Struct_10B98C50.h"
#include "Game/Struct_10B98E00.h"

extern float DAT_10eafbdc;

void* FUN_10be1a60();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

void* FUN_10bdf650();

class Class_10E95288
{
public:
    Class_10E95288(int A, int B);

    void** Unknown00;
    int Unknown04[26];
};

// FUNCTION: 0x10B98C50 ?FUN_10b98c50@@YAHPAUStruct_10B98C50@@@Z
int FUN_10b98c50(Struct_10B98C50* P)
{
    void* Id = FUN_10be1a60();
    if (Id)
    {
        Class_10DBD510* Owner = P->Unknown08;
        if (Owner->FUN_10dbd510((int)Id)->GetFloat() > DAT_10eafbdc)
            return 1;
    }
    return 0;
}

// FUNCTION: 0x10B98E00 ?FUN_10b98e00@Class_10E4CCD0@@UAEPAVClass_10E95288@@PAUStruct_10B98E00@@@Z
Class_10E95288* Class_10E4CCD0::FUN_10b98e00(Struct_10B98E00* A)
{
    void* Id = FUN_10bdf650();
    if (Id && A->Unknown08->FUN_10dbd510((int)Id)->GetFloat() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) Class_10E95288((int)A, (int)this);
    return 0;
}
