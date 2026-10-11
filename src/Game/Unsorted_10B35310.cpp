// Game/Unsorted_10B35310.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e6c7fc[];

extern void* DAT_10e7c2c0[];

// Ion Storm's memory manager (0x10905AA0): the allocation happens inside a
// scope of it (slots 8 and 9).
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

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// Constructed by 0x10AAF5B0: a primary table at +0x0 and a second base's at +0xC.
class Class_10E6DC88
{
public:
    Class_10E6DC88(int Value);

    void** VTable;
    int Unknown04;
    int Unknown08;
    void** VTable0C;
    int Unknown10;
};

// Its primary table is the one Class_10E6DC88's stores; its second base's table
// (0x10E7C2C0) is its own, so the class takes that address as its name.
class Class_10E7C2C0 : public Class_10E6DC88
{
public:
    Class_10E7C2C0() : Class_10E6DC88(0x6b)
    {
        VTable = DAT_10e6c7fc;
        VTable0C = DAT_10e7c2c0;
    }
};

class Class_10E79554
{
public:
    virtual Class_10E7C2C0* FUN_10b35310();
};

extern void* DAT_10e7c2c4[];

// Its primary table is DAT_10e6c7fc, folded with the one 0x10A8D5A0's class stores.
class Class_10E6C7FC : public Class_10E6DC88
{
public:
    Class_10E6C7FC() : Class_10E6DC88(0x6a)
    {
        VTable = DAT_10e6c7fc;
        VTable0C = DAT_10e7c2c4;
    }
};

class Class_10E79558
{
public:
    virtual Class_10E6C7FC* FUN_10b353b0();
};

// FUNCTION: 0x10B35310 ?FUN_10b35310@Class_10E79554@@UAEPAVClass_10E7C2C0@@XZ
Class_10E7C2C0* Class_10E79554::FUN_10b35310()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E7C2C0* Result = new(0, 0, 0, 0, 0) Class_10E7C2C0;
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10B353B0 ?FUN_10b353b0@Class_10E79558@@UAEPAVClass_10E6C7FC@@XZ
Class_10E6C7FC* Class_10E79558::FUN_10b353b0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6C7FC* Result = new(0, 0, 0, 0, 0) Class_10E6C7FC;
    FUN_10905aa0()->Virtual9();
    return Result;
}
