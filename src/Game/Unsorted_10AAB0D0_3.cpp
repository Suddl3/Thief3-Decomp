// Game/Unsorted_10AAB0D0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

class Class_1090A780
{
public:
    ~Class_1090A780()
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

class Class_10AB3800
{
public:
    Class_1090A780 FUN_10ab3800();
    void* FUN_10ab37c0();

    char Unknown00[0xC];
};

class Class_10B36120
{
public:
    Class_1090A780 FUN_10b36120();

    Class_1090A780 Unknown00;
};

class Class_10AAB200_Param
{
public:
    virtual void Virtual0(const Class_1090A780& Value);
    virtual void Virtual1(int Value);
};

class Class_10E6DA1C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int FUN_10aab200(Class_10AAB200_Param* Writer);

    Class_10B36120 Unknown04;
    int Unknown08;
    Class_1090A780 Unknown0C;
    Class_10AB3800 Unknown10;
};

// FUNCTION: 0x10AAB200 ?FUN_10aab200@Class_10E6DA1C@@UAEHPAVClass_10AAB200_Param@@@Z
int Class_10E6DA1C::FUN_10aab200(Class_10AAB200_Param* Writer)
{
    Writer->Virtual0(Unknown04.FUN_10b36120());
    Writer->Virtual1(Unknown08);
    Writer->Virtual0(Unknown0C);
    Writer->Virtual0(Unknown10.FUN_10ab3800());
    Writer->Virtual0(*(Class_1090A780*)Unknown10.FUN_10ab37c0());
    return 1;
}
