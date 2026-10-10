// Game/Unsorted_10A737B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E5D360
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual ~Class_10E5D360() {}
    virtual void Virtual1();
    virtual int FUN_10b9caa0(Class_10E5D360* Other);

    int Unknown04;
};

class Class_10E6BB40;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6BB40* Obj, int B, int C, Class_10E5D360* D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E67938
{
public:
    Class_10E67938();
    virtual void FUN_10a4c470(int A, int B, int C, int D);
    virtual ~Class_10E67938();
};

class Class_10E6BB40 : public Class_10E67938
{
public:
    Class_10E6BB40();
};

// FUNCTION: 0x10A73980 ??0Class_10E6BB40@@QAE@XZ
Class_10E6BB40::Class_10E6BB40()
{
    Class_10E5D360 Local(0x80378);
    DAT_10f46da0->Virtual1(this, 1, -1, &Local);
}
