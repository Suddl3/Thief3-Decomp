// Game/Unsorted_10B99D90_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

int FUN_10bd1810();

extern float DAT_10eafbdc;

struct Struct_10B98E00
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

// 0x11c bytes; built by its constructor at 0x10BD51E0.
class Class_10E939E0
{
public:
    Class_10E939E0(int A, int B);

    void** Unknown00;
    int Unknown04[70];
};

class Class_10E93878;

class Class_10E95288;

class Class_10E95898;

class Class_10BE5EF0;

class Class_10E4CCD0
{
public:
    virtual void Virtual0();
    virtual Class_10E95288* FUN_10b98e00(Struct_10B98E00* A);
    virtual void Virtual2();
    virtual Class_10E95898* FUN_10b98f60(Struct_10B98E00* A, int B, bool C);
    virtual void Virtual4();
    virtual Class_10BE5EF0* FUN_10b990d0(Struct_10B98E00* A);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual Class_10E93878* FUN_10b99ce0(Struct_10B98E00* A);
    virtual Class_10E939E0* FUN_10b99d90(Struct_10B98E00* A);
};

// FUNCTION: 0x10B99D90 ?FUN_10b99d90@Class_10E4CCD0@@UAEPAVClass_10E939E0@@PAUStruct_10B98E00@@@Z
Class_10E939E0* Class_10E4CCD0::FUN_10b99d90(Struct_10B98E00* A)
{
    int Id = FUN_10bd1810();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->FUN_10bbdb40() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) Class_10E939E0((int)A, (int)this);
    return 0;
}
