// Game/Unsorted_10AC6B30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E5D360
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual ~Class_10E5D360() {}
    virtual void Virtual1();
    virtual int IsEqual(Class_10E5D360* Other);

    int Unknown04;
};

class Class_10E6FC70
{
public:
    Class_10E6FC70* FUN_10ac8180();

    void** Unknown00;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6FC70* Obj, int A, int B, Class_10E5D360* C);
};

extern Class_10F46DA0* DAT_10f46da0;

extern void* DAT_10e6fc70[];

// FUNCTION: 0x10AC8180 ?FUN_10ac8180@Class_10E6FC70@@QAEPAV1@XZ
Class_10E6FC70* Class_10E6FC70::FUN_10ac8180()
{
    Unknown00 = DAT_10e6fc70;
    {
        Class_10E5D360 Local1(0x80026e);
        DAT_10f46da0->Virtual1(this, 1, -1, &Local1);
    }
    {
        Class_10E5D360 Local2(0x2000ba);
        DAT_10f46da0->Virtual1(this, 1, -1, &Local2);
    }
    {
        Class_10E5D360 Local3(0x8001fe);
        DAT_10f46da0->Virtual1(this, 1, -1, &Local3);
    }
    {
        Class_10E5D360 Local4(0x8001f2);
        DAT_10f46da0->Virtual1(this, 1, -1, &Local4);
    }
    {
        Class_10E5D360 Local5(0x8001f3);
        DAT_10f46da0->Virtual1(this, 1, -1, &Local5);
    }
    {
        Class_10E5D360 Local6(0x803b9);
        DAT_10f46da0->Virtual1(this, 1, -1, &Local6);
    }
    {
        Class_10E5D360 Local7(0x8001fa);
        DAT_10f46da0->Virtual1(this, 1, -1, &Local7);
    }
    return this;
}
