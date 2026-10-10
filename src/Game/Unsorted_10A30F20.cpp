// Game/Unsorted_10A30F20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

class Class_10E663C8;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10E663C8* A);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E663C8
{
public:
    virtual ~Class_10E663C8();

    int Unknown04;
    Class_109081E0 Unknown08;
};

// FUNCTION: 0x10A30F20 ??1Class_10E663C8@@UAE@XZ
Class_10E663C8::~Class_10E663C8()
{
    DAT_10f46da0->Virtual2(this);
}
