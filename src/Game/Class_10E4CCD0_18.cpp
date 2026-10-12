// Game/Class_10E4CCD0_18.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"
#include "Game/Class_10E4CCD0.h"
#include "Game/Struct_10B98E00.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

int FUN_10bd1810();

extern float DAT_10eafbdc;

// 0x11c bytes; built by its constructor at 0x10BD51C0.
class Class_10E93878
{
public:
    Class_10E93878(int A, int B);

    void** Unknown00;
    int Unknown04[70];
};

class Class_10E95288;

class Class_10E95898;

class cYellowAlert;

// FUNCTION: 0x10B99CE0 ?FUN_10b99ce0@Class_10E4CCD0@@UAEPAVClass_10E93878@@PAUStruct_10B98E00@@@Z
Class_10E93878* Class_10E4CCD0::FUN_10b99ce0(Struct_10B98E00* A)
{
    int Id = FUN_10bd1810();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->GetFloat() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) Class_10E93878((int)A, (int)this);
    return 0;
}
