// Game/Unsorted_10B43D80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e81130[];

class Class_10E6AEA0
{
public:
    Class_10E6AEA0();

    void** Unknown00;
    char Unknown04[0xE4];
    int Unknown0E8;
    char Unknown0EC[0x64];
};

class Class_10E81130 : public Class_10E6AEA0
{
public:
    Class_10E81130* FUN_10b46080();

    int Unknown150;
    int Unknown154;
    int Unknown158;
    int Unknown15C;
    int Unknown160;
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

class Class_10B2AB30
{
public:
    void FUN_10b2a8a0(int Count);

    ~Class_10B2AB30()
    {
        FUN_10b2a8a0(0);
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

class Class_10B787F0
{
public:
    virtual void Virtual0();
    ~Class_10B787F0();
};

class Class_10E80C78 : public Class_10B787F0
{
public:
    virtual void Virtual1();
    ~Class_10E80C78();

    char Unknown04[0x194];
    Class_10B2AB30 Unknown198;
};

// FUNCTION: 0x10B43D80 ??1Class_10E80C78@@QAE@XZ
Class_10E80C78::~Class_10E80C78()
{
}

// FUNCTION: 0x10B46080 ?FUN_10b46080@Class_10E81130@@QAEPAV1@XZ
Class_10E81130* Class_10E81130::FUN_10b46080()
{
    this->Class_10E6AEA0::Class_10E6AEA0();
    Unknown150 = 0;
    Unknown154 = 0;
    Unknown158 = 0;
    Unknown15C = 0;
    Unknown160 = 0;
    Unknown00 = DAT_10e81130;
    Unknown0E8 = 6;
    return this;
}
