// Game/Unsorted_10924A00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10924B30_Slot
{
    void* Unknown00;
    char Unknown04[0x1C];
};

class Class_10924B30
{
public:
    bool FUN_10924b30(int Index, int A);
    bool FUN_109246b0(Struct_10924B30_Slot* Slot, int A);

    char Unknown00[0x48];
    Struct_10924B30_Slot Unknown48[3];
    int UnknownA8;
};

struct Struct_1094D980
{
public:
    void SetValues(int A, int B, int C);
};

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

class Class_10924AE0
{
public:
    bool FUN_10924ae0();
    bool FUN_10924490(int A, int B, int C, int D, Struct_1094D980* E);

    char Unknown00[0x48];
    Struct_1094D980 Unknown48;
};

// FUNCTION: 0x10924AE0 ?FUN_10924ae0@Class_10924AE0@@QAE_NXZ
bool Class_10924AE0::FUN_10924ae0()
{
    FUN_10905aa0()->Virtual8(0, 0);
    Unknown48.SetValues(1, 0, 0xff000000);
    bool Result = FUN_10924490(1, 0, 0, 0, &Unknown48);
    FUN_10905aa0()->Virtual9();
    return Result;
}

// FUNCTION: 0x10924B30 ?FUN_10924b30@Class_10924B30@@QAE_NHH@Z
bool Class_10924B30::FUN_10924b30(int Index, int A)
{
    if (Index != -1)
    {
        if (Unknown48[Index].Unknown00)
        {
            if (FUN_109246b0(&Unknown48[Index], A))
                UnknownA8 = Index;
        }
    }
    return false;
}
