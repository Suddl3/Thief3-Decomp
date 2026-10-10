// Game/Unsorted_10A94FC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E67938
{
public:
    virtual void FUN_10a4c470(int A, int B, int C, int D);
    virtual ~Class_10E67938();
};

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

class Class_10E6CD50 : public Class_10AAB5C0, public Class_10E67938
{
public:
    virtual void FUN_10a94fc0();
};

class Class_10E5D5E0Base
{
public:
    Class_10E5D5E0Base() : Unknown00(0) {}

    int Unknown00;
};

class Class_10E5D5E0 : public Class_10E5D5E0Base
{
public:
    Class_10E5D5E0() {}
    virtual ~Class_10E5D5E0() {}
    virtual void Virtual1();
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E67938* Obj, int B, int C, Class_10E5D5E0* D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A94FC0 ?FUN_10a94fc0@Class_10E6CD50@@UAEXXZ
void Class_10E6CD50::FUN_10a94fc0()
{
    Class_10AAB5C0* Owner = (Class_10AAB5C0*)FUN_10aab5c0();
    Class_10AAB5C0* Result = Owner->Virtual4(0);
    Class_10E5D5E0 Local;
    Local.Unknown00 = Result->Unknown04;
    DAT_10f46da0->Virtual1(this, 0x61, -1, &Local);
}
