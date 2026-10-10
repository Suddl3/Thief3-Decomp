// Game/Unsorted_10B5A400_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class Class_109081E0
{
public:
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

class Class_10E67FD0
{
public:
    virtual ~Class_10E67FD0();

    char Unknown04[0x14C];
};

class Class_10E82688 : public Class_10E67FD0
{
public:
    virtual ~Class_10E82688();

    char Unknown150[0x8];
    Class_109081E0 Unknown158;
};

// FUNCTION: 0x10B5A500 ??1Class_10E82688@@UAE@XZ
Class_10E82688::~Class_10E82688()
{
}

// FUNCTION: 0x10B5A6D0 ??_GClass_10E82688@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B5A500's definition in this unit.
