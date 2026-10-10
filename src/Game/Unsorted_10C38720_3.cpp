// Game/Unsorted_10C38720_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10c7d570
{
public:
    void* FUN_10c7d570();
};

class Class_10C0A9A0
{
public:
    void FUN_10c0a9a0(void* A);
    void FUN_10c09f50(int A, void* B);
};

class Class_10FF667C
{
public:
    char Unknown00[0x1C];
    Class_10C0A9A0* Unknown1C;
};

extern Class_10FF667C* DAT_10ff667c;

class Class_10C38EB0_Member
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
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual Class_10c7d570* Virtual34();
};

class Class_10C38EB0
{
public:
    void FUN_10c38eb0(int A);

    char Unknown00[0x48];
    Class_10C38EB0_Member* Unknown48;
    char Unknown4C[0xBA];
    bool Unknown106;
};

// FUNCTION: 0x10C38EB0 ?FUN_10c38eb0@Class_10C38EB0@@QAEXH@Z
void Class_10C38EB0::FUN_10c38eb0(int A)
{
    if (Unknown106)
    {
        void* X = Unknown48->Virtual34()->FUN_10c7d570();
        DAT_10ff667c->Unknown1C->FUN_10c0a9a0(X);
    }
    else
    {
        Unknown106 = true;
    }
    void* Y = Unknown48->Virtual34()->FUN_10c7d570();
    DAT_10ff667c->Unknown1C->FUN_10c09f50(A, Y);
}
