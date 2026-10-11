// Game/Unsorted_1091D450.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

void FUN_1092bdb0(void* Memory);

class Class_1091CD10
{
public:
    void FUN_1091cd10();
};

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

// Copied from include/Game/Class_1091CC80.h with the destructor added: the
// game's body of it is inline in the caller.
class Class_1091CC80
{
public:
    ~Class_1091CC80()
    {
        FUN_1091c850(0x40);
        delete Unknown14;
        Unknown04 = 0;
        Unknown0C = 0;
        Unknown14 = 0;
        Unknown00 = 0;
    }

    void FUN_1091c850(int A);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    void* Unknown14;
};

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

class Class_1091DDF0_Unknown0C
{
};

class Class_1091DDF0
{
public:
    ~Class_1091DDF0();

    Class_109081E0 Unknown00;
    void* Unknown04;
    Class_109081E0 Unknown08;
    Class_1091DDF0_Unknown0C* Unknown0C;
    char Pad10[0x14];
    Class_1091CD10* Unknown24;
    Class_1091CD10* Unknown28;
    char Pad2C[0x4];
    Class_1091CC80 Unknown30;
};

// FUNCTION: 0x1091DDF0 ??1Class_1091DDF0@@QAE@XZ
Class_1091DDF0::~Class_1091DDF0()
{
    FUN_1092bdb0(Unknown04);
    Class_1091CD10* Object = Unknown24;
    if (Object)
    {
        Object->FUN_1091cd10();
        delete Object;
    }
    Class_1091CD10* Other = Unknown28;
    if (Other)
    {
        Other->FUN_1091cd10();
        delete Other;
    }
    if (Unknown0C)
        delete Unknown0C;
}
