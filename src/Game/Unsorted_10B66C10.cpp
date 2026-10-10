// Game/Unsorted_10B66C10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* FUN_10905aa0();

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int Count);

    ~Class_10BFBD70()
    {
        FUN_10bfbd70(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10E6AEA0
{
public:
    virtual ~Class_10E6AEA0();
};

class Class_10E84BB8 : public Class_10E6AEA0
{
public:
    virtual ~Class_10E84BB8();

    char Unknown04[0x18C];
    Class_10BFBD70 Unknown190;
};

// FUNCTION: 0x10B66C10 ??_GClass_10E84BB8@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B66C30's definition in this unit.

// FUNCTION: 0x10B66C30 ??1Class_10E84BB8@@UAE@XZ
Class_10E84BB8::~Class_10E84BB8()
{
}
