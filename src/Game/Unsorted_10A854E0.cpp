// Game/Unsorted_10A854E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10AA3520.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/cIntArray.h"
#include "Game/Class_10A857A0.h"
#include "Game/Class_10B1BD70.h"
#include "Game/Object_10A84D10.h"

class Object_10A84D10;

struct Struct_10A84D10;

struct Struct_10A85890;

struct Struct_10A85660_Items
{
    int Count;
    char Unknown04[4];
    int* Items;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10E6C390
{
public:
    virtual void FUN_10a85660(int Message, int Value, int A, int B);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual bool Virtual3();
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
    virtual int Virtual14();
    virtual int Virtual15(int A);

    void FUN_10a84e50();
    void FUN_10a84d70();
    void FUN_10a84d10();
    void FUN_10a85110(Struct_10A85890* Ar);
    void FUN_10a852e0(Struct_10A85890* Ar);
    void FUN_10a85890(Struct_10A85890* Ar);
    void FUN_10a84e90();
    void FUN_10a84e60();
    void FUN_10a850c0();

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    union
    {
        unsigned char Field14;
        bool Unknown14;
    };
    bool Unknown15;
    char Pad16[0x6];
    Object_10A84D10* Unknown1C;
    Object_10A84D10* Unknown20;
    Struct_10A84D10* Unknown24;
    char Pad28[0x4];
    int Unknown2C;
    int Unknown30;
    bool Unknown34;
    char Pad35[0x7];
    float Unknown3C;
    float Unknown40;
    float Unknown44;
    float Unknown48;
};

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

Class_10905A90_Member* GetAllocator();

class Class_10A857A0;

// Class_10E6DA64 from include/Game/Class_10E6DA64.h, with its constructor and the virtuals this function calls.
class Class_10E6DA64
{
public:
    Class_10E6DA64();
    Class_10E6DA64* FUN_10aab8b0();

    virtual void Virtual0();
    virtual void Virtual1(int A, int B, int C, int D);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual cIntArray* Virtual4();

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
};

// Class_10F46DA0 from include/Game/Class_10F46DA0.h, with the slot 1 and slot 3 parameters this function passes (its owner, then ints).
class Class_10E5B578;

class Class_10B697A0;

class Class_10E5D650;

struct Struct_10C14320;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10A857A0* A, int B, int C, int D);
    virtual void Virtual2(Class_10E5B578* A);
    virtual void Virtual3(Class_10A857A0* A, int B, int C, int D);
    virtual void Virtual4();
    virtual void Virtual5(int A, Class_10B697A0* B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A85660 ?FUN_10a85660@Class_10E6C390@@UAEXHHHH@Z
void Class_10E6C390::FUN_10a85660(int Message, int Value, int A, int B)
{
    switch (Message)
    {
    case 38:
        if (Unknown1C)
        {
            Struct_10A85660_Items* Items = Unknown1C->Virtual4();
            for (int i = 0; i < Items->Count; i++)
            {
                if (Items->Items[i] == Value)
                {
                    Virtual8();
                    return;
                }
            }
        }
        break;
    case 27:
        Unknown34 = true;
        return;
    case 11:
        if (Virtual3())
        {
            Virtual8();
            return;
        }
        break;
    case 116:
        if (Virtual3())
        {
            DAT_10f35dec->UnknownBC->Virtual9();
            return;
        }
        break;
    case 117:
        if (Virtual3())
        {
            DAT_10f35dec->UnknownBC->Virtual10();
            return;
        }
        break;
    }
}

// FUNCTION: 0x10A857A0 ?FUN_10a857a0@Class_10A857A0@@QAEPAVClass_10E6DA64@@HH@Z
Class_10E6DA64* Class_10A857A0::FUN_10a857a0(int A, int B)
{
    DAT_10f46da0->Virtual3(this, 0x26, -1, -1);
    GetAllocator()->Virtual8(0, 0);
    Class_10E6DA64* Obj = new(0, 0, 0, 0, 0) Class_10E6DA64;
    GetAllocator()->Virtual9();
    if (Unknown04 == 3)
        Obj->Virtual1(A, 0, 0, B);
    else
        Obj->Virtual1(A, 0, 0, B);
    cIntArray* Arr = Obj->Virtual4();
    for (int i = 0; i < Arr->Count; i++)
    {
        if (Arr->Data[i] != 0)
            DAT_10f46da0->Virtual1(this, 0x26, Arr->Data[i], -1);
    }
    return Obj;
}
