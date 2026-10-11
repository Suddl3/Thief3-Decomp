// Game/Unsorted_10B98EB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10DBD510
{
public:
    Class_10BBDB40* FUN_10dbd510(int Id);
};

struct Struct_10B98E00
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

int FUN_10bdf450();

// 0x48 bytes; built by its constructor.
class Class_10E95170
{
public:
    Class_10E95170(int A, int B);

    void** Unknown00;
    int Unknown04[17];
};

class Class_10E95288;

class Class_10E4CCD0
{
public:
    virtual void Virtual0();
    virtual Class_10E95288* FUN_10b98e00(Struct_10B98E00* A);
    virtual Class_10E95170* FUN_10b98eb0(Struct_10B98E00* A);
};

// FUNCTION: 0x10B98EB0 ?FUN_10b98eb0@Class_10E4CCD0@@UAEPAVClass_10E95170@@PAUStruct_10B98E00@@@Z
Class_10E95170* Class_10E4CCD0::FUN_10b98eb0(Struct_10B98E00* A)
{
    int Id = FUN_10bdf450();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->FUN_10bbdb40() > 0.0f)
        return new(0, 0, 0, 0, 0) Class_10E95170((int)A, (int)this);
    return 0;
}
