// Game/Class_10E6CCE8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E5D5E0.h"
#include "Game/Class_10E67938.h"

class Class_10AAB5C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10a94fc0();
    virtual void Virtual3();
    virtual Class_10AAB5C0* Virtual4(int A);

    int FUN_10aab5c0();

    int Unknown04;
    int Unknown08;
};

class Class_10A94480_Result
{
public:
    int Unknown00;
};

class Class_10B0FDC0
{
public:
    Class_10A94480_Result* FUN_10b0fdc0(int* Out);
};

class Class_10A94480_Owner
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10B0FDC0* Virtual4(int A);
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E67938* Obj, int B, int C, Class_10E5D5E0* D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E6CCE8 : public Class_10AAB5C0, public Class_10E67938
{
public:
    virtual void FUN_10a94480();
};

// FUNCTION: 0x10A94480 ?FUN_10a94480@Class_10E6CCE8@@UAEXXZ
void Class_10E6CCE8::FUN_10a94480()
{
    Class_10E5D5E0 Local;
    int Key;
    Class_10A94480_Owner* Owner = (Class_10A94480_Owner*)FUN_10aab5c0();
    Class_10B0FDC0* Result = Owner->Virtual4(0);
    Class_10A94480_Result* Value = Result->FUN_10b0fdc0(&Key);
    Local.Unknown00 = Value->Unknown00;
    DAT_10f46da0->Virtual1(this, 0x60, -1, &Local);
}
