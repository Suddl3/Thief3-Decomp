// Game/Unsorted_10A9C510.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Core/CoreClasses.h"

// The static classes of two property classes the symbols do not name, and the
// functions that build them.
extern UClass* DAT_10f3ed80;

extern UClass* DAT_10f3ed84;

UClass* FUN_10af0690(const char* Package);

void FUN_10aeeaa0();

UClass* FUN_10af08f0(const char* Package);

void FUN_10aeebb0();

UClass* FUN_10901200();

// A property's table: UObject's slots (0-30), UField's (31-34) and
// UProperty's own (35-55). Core.h's UField does not declare its own slots.
class Class_10A9C510_Property : public UObject
{
public:
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36(int);
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual char const* ImportText(char const*, unsigned long*, void*);
    virtual void Virtual43();
    virtual void Virtual44(int*, int*, int);
};

// FUNCTION: 0x10A9C510 ?FUN_10a9c510@@YGHPAPAXPAVClass_10A9C510_Property@@H@Z
int __stdcall FUN_10a9c510(void** Data, Class_10A9C510_Property* Prop, int Offset)
{
    if (!DAT_10f3ed80)
    {
        DAT_10f3ed80 = FUN_10af0690("Core");
        FUN_10aeeaa0();
    }
    UClass* ClassA = DAT_10f3ed80;
    if (Prop->IsA(ClassA))
    {
        int Value = 0;
        Prop->Virtual44(&Value, (int*)*Data, 0);
        Value = Value ? 0 : -1;
        Prop->Virtual44((int*)((char*)*Data + Offset), (int*)&Value, 0);
        return 1;
    }

    if (!DAT_10f3ed84)
    {
        DAT_10f3ed84 = FUN_10af08f0("Core");
        FUN_10aeebb0();
    }
    UClass* ClassB = DAT_10f3ed84;
    if (Prop->IsA(ClassB))
    {
        float Value = 0.0f;
        Prop->Virtual44((int*)&Value, (int*)((char*)*Data + Offset), 0);
        Value = Value > 0.1f ? 0.0f : 1.0f;
        Prop->Virtual44((int*)((char*)*Data + Offset), (int*)&Value, 0);
        return 0;
    }

    if (Prop->IsA(UIntProperty::StaticClass()))
    {
        int Value = 0;
        Prop->Virtual44(&Value, (int*)((char*)*Data + Offset), 0);
        Value = Value == 0 ? 1 : 0;
        Prop->Virtual44((int*)((char*)*Data + Offset), (int*)&Value, 0);
        return 0;
    }

    UClass* ClassD = FUN_10901200();
    if (Prop->IsA(ClassD))
    {
        bool Value = false;
        Prop->Virtual44((int*)&Value, (int*)((char*)*Data + Offset), 0);
        Value = !Value;
        Prop->Virtual44((int*)((char*)*Data + Offset), (int*)&Value, 0);
    }
    return 0;
}
