// Game/Unsorted_10A987A0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

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

class Class_10EB766C
{
public:
    virtual ~Class_10EB766C();

    int Unknown04;
    int Unknown08;
};

class Class_10E5B578
{
public:
    virtual int Virtual0(int A, int B, int C, int* D) = 0;
};

class Class_10E6DC88 : public Class_10EB766C, public Class_10E5B578
{
public:
    Class_10E6DC88(int Value);
    virtual ~Class_10E6DC88();

    int Unknown10;
};

// Its second base's table (0x10E70820) is folded with Class_10E8C22C's.
class Class_10E6CFB8 : public Class_10E6DC88
{
public:
    Class_10E6CFB8()
        : Class_10E6DC88(0x5b)
    {
    }

    virtual int Virtual0(int A, int B, int C, int* D);
};

class Class_10E5D83C
{
public:
    virtual Class_10E6CFB8* FUN_10a987a0();
};

// FUNCTION: 0x10A987A0 ?FUN_10a987a0@Class_10E5D83C@@UAEPAVClass_10E6CFB8@@XZ
Class_10E6CFB8* Class_10E5D83C::FUN_10a987a0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E6CFB8* Result = new(0, 0, 0, 0, 0) Class_10E6CFB8;
    FUN_10905aa0()->Virtual9();
    return Result;
}
