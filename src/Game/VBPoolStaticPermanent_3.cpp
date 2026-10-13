// Game/VBPoolStaticPermanent_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>

class Class_10933450_Resource
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

struct Struct_10933450_Item
{
    char Unknown00[0x14];
    Class_10933450_Resource* Unknown14;
};

class Class_1095D6C0
{
public:
    ~Class_1095D6C0();

    char Pad00[4];
};

class VBPoolStaticPermanent
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void FUN_10933450();

    char Unknown04[0x10];
    int Unknown14;
    char Unknown18[4];
    int Unknown1C;
    Class_1095D6C0 Unknown20;
    std::vector<Class_10933450_Resource*> Unknown24;
    char Pad34[0xC];
    std::vector<Struct_10933450_Item*> Unknown40;
};

// FUNCTION: 0x10933450 ?FUN_10933450@VBPoolStaticPermanent@@UAEXXZ
void VBPoolStaticPermanent::FUN_10933450()
{
    if (Unknown14 & 2)
        return;
    for (std::vector<Struct_10933450_Item*>::iterator It = Unknown40.begin(); It != Unknown40.end(); ++It)
    {
        Struct_10933450_Item* Item = *It;
        if (Item->Unknown14)
        {
            Item->Unknown14->Virtual2();
            Item->Unknown14 = 0;
        }
    }
    Unknown1C = 0;
    for (std::vector<Class_10933450_Resource*>::iterator It = Unknown24.begin(); It != Unknown24.end(); ++It)
    {
        if (*It)
        {
            (*It)->Virtual2();
            *It = 0;
        }
    }
    Unknown20.~Class_1095D6C0();
}
