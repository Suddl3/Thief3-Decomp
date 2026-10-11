// Game/Unsorted_10B8F070.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e89798[];

extern void* DAT_10e89794[];

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

class Class_10E89798 : public Class_10E6DC88
{
public:
    Class_10E89798() : Class_10E6DC88(0x52)
    {
        VTable = DAT_10e89798;
        VTable0C = DAT_10e89794;
    }
};

class Class_10E88D4C
{
public:
    virtual Class_10E89798* FUN_10b8f070();
};

// FUNCTION: 0x10B8F070 ?FUN_10b8f070@Class_10E88D4C@@UAEPAVClass_10E89798@@XZ
Class_10E89798* Class_10E88D4C::FUN_10b8f070()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E89798* Result = new(0, 0, 0, 0, 0) Class_10E89798;
    FUN_10905aa0()->Virtual9();
    return Result;
}
