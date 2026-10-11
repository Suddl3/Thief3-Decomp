// Game/Unsorted_10AC3C60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class FArchive
{
public:
    virtual void Virtual0();
    virtual void Serialize(void* V, int Length);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();

    char Unknown04[16];
    int Unknown14;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* A);

extern float DAT_10eafbdc;

class Object_10AC6AD0;

class Class_10AC3DE0_Unknown24
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual float Virtual4();
    virtual void Virtual5(float A);
    virtual void Virtual6(void* A);

    float Unknown04;
    float Unknown08;
};

class Class_10AC3DE0_Unknown74
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual float Virtual4();
    virtual void Virtual5(float A);
    virtual void Virtual6(void* A);

    float Unknown04;
    float Unknown08;
};

class Class_10E6F6A8
{
public:
    virtual void Virtual0(Object_10AC6AD0* A, int B, int C, int D);
    virtual void Virtual1() = 0;
    virtual void Virtual2() = 0;
    virtual void FUN_10ac6ad0(int A, Object_10AC6AD0* B);
    virtual bool FUN_10ac5c10();
    virtual void FUN_10ac3de0(FArchive& Ar);

    void FUN_10ac5c20(int A, Object_10AC6AD0* B);

    int Unknown04;
    char Unknown08[0xC];
    char Unknown14[4];
    char Pad18[0xC];
    Class_10AC3DE0_Unknown24 Unknown24;
    char Pad30[0x44];
    Class_10AC3DE0_Unknown74 Unknown74;
    char Pad80[0x50];
    void* Unknownd0;
};

// FUNCTION: 0x10AC3DE0 ?FUN_10ac3de0@Class_10E6F6A8@@UAEXAAVFArchive@@@Z
void Class_10E6F6A8::FUN_10ac3de0(FArchive& Ar)
{
    Ar.Serialize(&Unknownd0, 4);
    FUN_10b052a0(Ar, &Unknown14);
    FUN_10b052a0(Ar, &Unknown08);
    if (Ar.Unknown14)
    {
        Class_10AC3DE0_Unknown74* Obj = &Unknown74;
        Obj->Virtual6(&Unknown14);
        float Value = Obj->Virtual4();
        if (!(Obj->Unknown08 <= DAT_10eafbdc))
            Obj->Unknown08 = Obj->Unknown08 - Value;
        else
            Obj->Virtual5(Value * Obj->Unknown04);
        Class_10AC3DE0_Unknown24* Obj2 = &Unknown24;
        Obj2->Virtual6(&Unknown08);
        float Value2 = Obj2->Virtual4();
        if (!(Obj2->Unknown08 <= DAT_10eafbdc))
        {
            Obj2->Unknown08 = Obj2->Unknown08 - Value2;
            return;
        }
        Obj2->Virtual5(Value2 * Obj2->Unknown04);
    }
}
