// Game/Unsorted_10AC6870.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Object_10AC6AD0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7(void* A);
    virtual void Virtual8(void* A);
};

class Class_10E6F6A8_Result
{
public:
    virtual void Virtual0(int A, Object_10AC6AD0* B);
};

class Class_10E6F6A8
{
public:
    virtual void Virtual0(Object_10AC6AD0* A, int B, int C, int D);
    virtual Class_10E6F6A8_Result* Virtual1();
    virtual void Virtual2();
    virtual void FUN_10ac6ad0(int A, Object_10AC6AD0* B);

    void FUN_10ac5c20(int A, Object_10AC6AD0* B);

    int Unknown04;
    char Unknown08[0xC];
    char Unknown14[4];
};

// FUNCTION: 0x10AC6AD0 ?FUN_10ac6ad0@Class_10E6F6A8@@UAEXHPAVObject_10AC6AD0@@@Z
void Class_10E6F6A8::FUN_10ac6ad0(int A, Object_10AC6AD0* B)
{
    if (Unknown04 == 0)
        Virtual0(B, -1, 0, 0);
    Class_10E6F6A8_Result* Result = Virtual1();
    Result->Virtual0(A, B);
    FUN_10ac5c20(A, B);
    B->Virtual8(&Unknown14);
    B->Virtual7(&Unknown08);
}
