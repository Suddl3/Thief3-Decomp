// Game/Unsorted_10A76810.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cActorManager.h"
#include "Game/Class_10E6BC8C.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

struct Struct_10A76C50;

struct Struct_10A76C50Part
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

struct Struct_10A76C50Copy
{
    Struct_10A76C50* Unknown00;
    Struct_10A76C50Part Unknown04;
    Struct_10A76C50Part Unknown10;
};

struct Struct_10A76C50
{
    char Unknown00[0x2C];
    Struct_10A76C50Part Unknown2C;
    Struct_10A76C50Part Unknown38;
};

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int A);

    int Unknown00;
    int Unknown04;
    Struct_10A76C50Copy** Unknown08;
};

class Class_10E6BC80
{
public:
    virtual void Virtual0();
    virtual void AddCopy(Struct_10A76C50* Source);

    Class_10BFBD70 Unknown04;
};

class Class_10E5D360
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual ~Class_10E5D360() {}
    virtual void Virtual1();
    virtual int FUN_10b9caa0(Class_10E5D360* Other);

    int Unknown04;
};

class Class_10E6BC8C;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6BC8C* Obj, int B, int C, Class_10E5D360* D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A76C50 ?AddCopy@Class_10E6BC80@@UAEXPAUStruct_10A76C50@@@Z
void Class_10E6BC80::AddCopy(Struct_10A76C50* Source)
{
    Struct_10A76C50Copy* Result = 0;
    Struct_10A76C50Copy* Copy = new(0, 0, 0, 0, 0) Struct_10A76C50Copy;
    if (Copy != 0)
    {
        Copy->Unknown00 = Source;
        Copy->Unknown04 = Source->Unknown2C;
        Copy->Unknown10 = Source->Unknown38;
        Result = Copy;
    }
    int Index = Unknown04.Unknown00;
    Class_10BFBD70* Array = &Unknown04;
    Array->FUN_10bfbd70(Index + 1);
    Array->Unknown08[Index] = Result;
}

// FUNCTION: 0x10A76EA0 ??0Class_10E6BC8C@@QAE@XZ
Class_10E6BC8C::Class_10E6BC8C()
{
    Class_10E5D360 Local1(0x800271);
    DAT_10f46da0->Virtual1(this, 1, -1, &Local1);
    Class_10E5D360 Local2(0x40800056);
    DAT_10f46da0->Virtual1(this, 1, -1, &Local2);
}
