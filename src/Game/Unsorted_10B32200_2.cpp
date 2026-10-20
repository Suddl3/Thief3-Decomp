// Game/Unsorted_10B32200_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_109B6D50.h"
#include "Game/Class_10B31BE0.h"
#include "Game/Class_10B39530.h"

extern const char DAT_10e7a624[];

class Class_10B39870;

struct Struct_10B21820_Object;

// Copied from include/Game/Class_10AA82D0.h with the return type the symbol has.
class Class_10AA82D0
{
public:
    virtual void Virtual0();

    Class_10B39870* GetLinkedObject();

    char Unknown04[4];
    int Unknown08;
    int m_LinkedObject;
};

class Class_10B21820
{
public:
    Struct_10B21820_Object* FUN_10991e10();

    char Unknown00[0x37C];
    int Unknown37C;
    char Unknown380[0xC];
    int Unknown38C;
    char Unknown390[0xC0];
    int Unknown450;
};

class Class_10E7E928 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2(Class_10B21820* A);

    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    bool Unknown30;
    bool Unknown31;
    bool Unknown32;
    Class_10B31BE0 Unknown33;
    char Unknown34[4];
    float Unknown38;
    bool Unknown3C;
};

// FUNCTION: 0x10B32390 ?Virtual2@Class_10E7E928@@UAEXPAVClass_10B21820@@@Z
void Class_10E7E928::Virtual2(Class_10B21820* A)
{
    Unknown32 = false;
    Unknown30 = false;
    Unknown31 = false;
    Unknown3C = false;
    Unknown38 = -1.0f;
    ((Class_1098E330*)A)->FUN_1098e330(0x100500, &Unknown10);
    ((Class_1098E330*)A)->FUN_1098e330(0x100501, &Unknown14);
    Unknown1C = 0;
    Unknown18 = 0;
    Unknown2C = 0;
    Unknown28 = 0;
    Unknown24 = 0;
    Unknown20 = 0;
    Struct_10B21820_Object* Obj = A->FUN_10991e10();
    {
        cString Name(DAT_10e7a624);
        ((Class_109B6D50*)Obj)->FUN_109bf5f0(A->Unknown37C, Name);
    }
    {
        cString Name2(DAT_10e7a624);
        ((Class_109B6D50*)Obj)->FUN_109bf5f0(A->Unknown38C, Name2);
    }
    ((Class_10B39530*)GetLinkedObject())->Play(0x6b, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    A->Unknown450 |= 1;
}
