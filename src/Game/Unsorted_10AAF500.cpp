// Game/Unsorted_10AAF500.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10EB766C
{
public:
    virtual ~Class_10EB766C();

    int Unknown04;
    int Unknown08;
};

class Class_10E6C874 : public Class_10EB766C
{
};

class Class_10E5B578
{
public:
    virtual int Virtual0(int A, int B, int C, int* D) = 0;
};

class Class_10E6DC88 : public Class_10E6C874, public Class_10E5B578
{
public:
    virtual ~Class_10E6DC88();
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E5B578* A, int B, int C, int D);
    virtual void Virtual2(Class_10E5B578* A);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10AAF500 ??1Class_10E6DC88@@UAE@XZ
Class_10E6DC88::~Class_10E6DC88()
{
    if (DAT_10f46da0)
        DAT_10f46da0->Virtual2(this);
}

// FUNCTION: 0x10AAF5E0 ??_GClass_10E6DC88@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10AAF500's definition in this unit.
