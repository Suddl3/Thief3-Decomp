// Game/Class_10E49EB8_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>
#include "Game/Class_10933230.h"

class Object_109339D0_Resource
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

struct Struct_109339D0_Item
{
    char Unknown00[0x14];
    Object_109339D0_Resource* Unknown14;
};

class Class_1095D6C0
{
public:
    ~Class_1095D6C0();

    char Pad00[4];
};

class Class_10E49EB8 : public Class_10933230
{
public:
    virtual void Virtual7();

    int Unknown1C;
    Class_1095D6C0 Unknown20;
    std::vector<Object_109339D0_Resource*> Unknown24;
    char Pad34[0xC];
    std::vector<Struct_109339D0_Item*> Unknown40;
};

// FUNCTION: 0x109339D0 ?Virtual7@Class_10E49EB8@@UAEXXZ
void Class_10E49EB8::Virtual7()
{
    for (std::vector<Struct_109339D0_Item*>::iterator It = Unknown40.begin(); It != Unknown40.end(); ++It)
    {
        Struct_109339D0_Item* Item = *It;
        if (Item->Unknown14)
        {
            Item->Unknown14->Virtual2();
            Item->Unknown14 = 0;
        }
    }
    Unknown1C = 0;
    for (std::vector<Object_109339D0_Resource*>::iterator It = Unknown24.begin(); It != Unknown24.end(); ++It)
    {
        if (*It)
        {
            (*It)->Virtual2();
            *It = 0;
        }
    }
    Unknown20.~Class_1095D6C0();
    Class_10933230::FUN_10933230();
}
