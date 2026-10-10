// Game/Unsorted_10A1EDE0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* FUN_10905aa0();

extern const char DAT_10e5027c[];

class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0();
    Class_109081E0& FUN_1090a590(const char* In);

    char* Unknown00;
};

class Class_10E65558
{
public:
    virtual ~Class_10E65558() {}
};

class Class_10E65574 : public Class_10E65558
{
public:
    Class_10E65574();
    virtual ~Class_10E65574();

    Class_109081E0 Unknown04;
};

// FUNCTION: 0x10A1EDE0 ??0Class_10E65574@@QAE@XZ
Class_10E65574::Class_10E65574()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Unknown04.FUN_1090a590(DAT_10e5027c);
    FUN_10905aa0()->Virtual9();
}
