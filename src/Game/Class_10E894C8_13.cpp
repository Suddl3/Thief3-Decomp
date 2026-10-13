// Game/Class_10E894C8_13.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10CAB760
{
public:
    void FUN_10cab760(float A, void* B, void* C);
};

extern Class_10CAB760* DAT_10ffa79c;

extern void* DAT_10ffa7a0;

extern float DAT_10eafbdc;

class Class_10B8B2A0_Unknown10
{
public:
    char Unknown00[0xC];
    int Unknown0C;
};

class Class_10E894C8
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
    virtual void FUN_10b8b2a0(float C);

    void FUN_10b8b080(float A, bool B);
    void FUN_10b8a950(float A, bool B);

    char Unknown04[0xC];
    Class_10B8B2A0_Unknown10* Unknown10;
    char Unknown14[0x1C];
    int Unknown30;
    bool Unknown34;
    char Unknown35[0x3];
    void* Unknown38;
};

// FUNCTION: 0x10B8B2A0 ?FUN_10b8b2a0@Class_10E894C8@@UAEXM@Z
void Class_10E894C8::FUN_10b8b2a0(float C)
{
    if (Unknown30 >= 0 && Unknown38)
    {
        if (!Unknown34)
            FUN_10b8b080(C, C < DAT_10eafbdc);
        else
            FUN_10b8a950(C, C < DAT_10eafbdc);
        DAT_10ffa79c->FUN_10cab760(-0.5f, &Unknown10->Unknown0C, DAT_10ffa7a0);
    }
}
