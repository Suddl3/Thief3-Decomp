// Game/Unsorted_10B16780.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E5B7C8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_109e64e0();
};

class Class_10E79228 : public Class_10E5B7C8
{
public:
    virtual void FUN_10b170f0();

    void FUN_10b16b30();
};

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* A);
};

Class_10905A90_Member* FUN_10905aa0();

class Class_109081E0
{
public:
    Class_109081E0(const char* In);
    ~Class_109081E0()
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

class WindowManager
{
public:
    int FUN_109e5960(const Class_109081E0& Name);
};

class Class_10B314F0;

class Class_10B175C0 : public WindowManager
{
public:
    Class_10B314F0* FUN_10b16fb0();
};

// FUNCTION: 0x10B16FB0 ?FUN_10b16fb0@Class_10B175C0@@QAEPAVClass_10B314F0@@XZ
Class_10B314F0* Class_10B175C0::FUN_10b16fb0()
{
    Class_109081E0 Name("FMVWindow");
    int Result = FUN_109e5960(Name);
    return (Class_10B314F0*)Result;
}

// FUNCTION: 0x10B170F0 ?FUN_10b170f0@Class_10E79228@@UAEXXZ
void Class_10E79228::FUN_10b170f0()
{
    FUN_10b16b30();
    Class_10E5B7C8::FUN_109e64e0();
}
