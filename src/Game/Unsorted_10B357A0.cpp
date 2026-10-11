// Game/Unsorted_10B357A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

// Its primary table is its own; its second base's table is named by its class.
class Class_10E7C2EC : public Class_10E6DC88
{
public:
    Class_10E7C2EC()
        : Class_10E6DC88(0x72)
    {
    }

    virtual int Virtual0(int A, int B, int C, int* D);
};

class Class_10E79560
{
public:
    virtual Class_10E7C2EC* FUN_10b357a0();
};

// FUNCTION: 0x10B357A0 ?FUN_10b357a0@Class_10E79560@@UAEPAVClass_10E7C2EC@@XZ
Class_10E7C2EC* Class_10E79560::FUN_10b357a0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E7C2EC* Result = new(0, 0, 0, 0, 0) Class_10E7C2EC;
    FUN_10905aa0()->Virtual9();
    return Result;
}
