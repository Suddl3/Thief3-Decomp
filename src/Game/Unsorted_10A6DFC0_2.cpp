// Game/Unsorted_10A6DFC0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"

class Class_10E5D360
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual ~Class_10E5D360() {}
    virtual void Virtual1();
    virtual int FUN_10b9caa0(Class_10E5D360* Other);

    int Unknown04;
};

class Class_10E6B594
{
public:
    virtual ~Class_10E6B594();
};

class Class_10E6B610 : public Class_10E6B594
{
public:
    Class_10E6B610(Class_1098E330* A);

    int Unknown04;
};

struct Struct_10A6DFC0_Param
{
    char Unknown00[4];
    int* Unknown04;
};

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// The table's slots 5 and 7 are the calls below; slot 8 is this function.
class Class_10E6B9B8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(Class_1098E330* A, Class_10E6B610* B, int C, int D);
    virtual void Virtual6();
    virtual void Virtual7(Class_1098E330* A);
    virtual void FUN_10a6dfc0(Class_1098E330* Obj, Class_10E5D360* Msg, Struct_10A6DFC0_Param* Param);
};

class Class_10E6B9F8;

class Class_10E7755C;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6B9F8* Obj, int B, int C, Class_10E7755C* D);
};

extern Class_10F46DA0* DAT_10f46da0;

extern void* DAT_10e6b9f8[];

class Class_10E7755C
{
public:
    Class_10E7755C();
    virtual ~Class_10E7755C() {}

    int Unknown04;
};

class Class_10E6B9F8
{
public:
    Class_10E6B9F8* FUN_10a6e270();

    void** Unknown00;
};

// FUNCTION: 0x10A6DFC0 ?FUN_10a6dfc0@Class_10E6B9B8@@UAEXPAVClass_1098E330@@PAVClass_10E5D360@@PAUStruct_10A6DFC0_Param@@@Z
void Class_10E6B9B8::FUN_10a6dfc0(Class_1098E330* Obj, Class_10E5D360* Msg, Struct_10A6DFC0_Param* Param)
{
    if (Msg->Unknown04 == 0x8003f3)
    {
        int* Ref = Param->Unknown04;
        Virtual7(Obj);
        if (!Obj->bDeleteMe && !(Obj->ObjectFlags & 0x800000) && Ref && *Ref)
        {
            Class_10E6B610* New = new(0, 0, 0, 0, 0) Class_10E6B610(Obj);
            Virtual5(Obj, New, 1, 0);
        }
    }
}

// FUNCTION: 0x10A6E270 ?FUN_10a6e270@Class_10E6B9F8@@QAEPAV1@XZ
Class_10E6B9F8* Class_10E6B9F8::FUN_10a6e270()
{
    Unknown00 = DAT_10e6b9f8;
    Class_10E7755C Local;
    Local.Unknown04 = 0x203ead2;
    DAT_10f46da0->Virtual1(this, 3, -1, &Local);
    Local.Unknown04 = 0x2549eeb;
    DAT_10f46da0->Virtual1(this, 3, -1, &Local);
    Local.Unknown04 = 0x2f0177c;
    DAT_10f46da0->Virtual1(this, 3, -1, &Local);
    Local.Unknown04 = 0x281b9d0;
    DAT_10f46da0->Virtual1(this, 3, -1, &Local);
    Local.Unknown04 = 0x2e2cf2c;
    DAT_10f46da0->Virtual1(this, 3, -1, &Local);
    Local.Unknown04 = 0x2301eea;
    DAT_10f46da0->Virtual1(this, 3, -1, &Local);
    return this;
}
