// Game/Unsorted_10A758B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_1098E330
{
public:
    void FUN_1098e330(int A, int* B);
};

class APawn
{
public:
    void FUN_10a6ea30(int A, int B);
};

class Class_10E6BBE8
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
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual int FUN_10a76490(int A, int B, int C);

    void FUN_10a759b0(int A, int B);
    void FUN_10a76260(int A, int B);
};

// FUNCTION: 0x10A76490 ?FUN_10a76490@Class_10E6BBE8@@UAEHHHH@Z
int Class_10E6BBE8::FUN_10a76490(int A, int B, int C)
{
    Class_1098E330* Obj = (Class_1098E330*)A;
    int Key;
    int Local;
    Obj->FUN_1098e330(0x80028b, &Key);
    if (Key != 0)
    {
        ((APawn*)Obj)->FUN_10a6ea30(0x80028b, 0);
        Obj->FUN_1098e330(0x2047b, &Local);
        FUN_10a759b0((int)Obj, Local);
        return 1;
    }
    FUN_10a76260((int)Obj, 0);
    return 1;
}
