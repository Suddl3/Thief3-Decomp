// Game/Unsorted_10925230.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern bool DAT_10f31a60;

class Class_10950230;

extern Class_10950230* DAT_10f31a64;

class Class_109242E0
{
public:
    void FUN_109243f0();
};

extern Class_109242E0* DAT_10f319a0;

class Class_10925230
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

    char Unknown04[0x38];
    bool Unknown3C;
};

class Class_10924E80
{
public:
    void FUN_10925230();

    char Unknown00[0xBC];
    int Unknown0BC;
    char Unknown0C0[4];
    Class_10925230** Unknown0C4;
};

// FUNCTION: 0x10925230 ?FUN_10925230@Class_10924E80@@QAEXXZ
void Class_10924E80::FUN_10925230()
{
    if (DAT_10f31a60 || DAT_10f31a64)
        return;
    DAT_10f319a0->FUN_109243f0();
    for (int i = 0; i < Unknown0BC; i++)
    {
        Class_10925230* Obj = Unknown0C4[i];
        if (Obj->Unknown3C)
            Obj->Virtual7();
    }
}
