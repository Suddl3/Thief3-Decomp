// Game/Unsorted_10BE85D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E960D8
{
public:
    virtual void Virtual0();

    void FUN_10be7ea0();
};

class FVector
{
public:
    float X, Y, Z;
};

class Class_10C88610
{
public:
    void* FUN_10c88610();
};

class Class_10AAF570;

class Class_10BB8360
{
public:
    void FUN_10bb83a0(int A, float B, int C);

    char Unknown00[0xC];
    Class_10AAF570* Unknown0C;
};

class Class_10BE8710_Unknown04 : public Class_10BB8360
{
public:
    char Unknown10[0x20];
    Class_10C88610 Unknown30;
};

class Object_10BE8710
{
public:
    virtual void Virtual0();
    virtual unsigned char Virtual1(FVector* A, int* B);
};

double FUN_10c00480();

class Class_10E96510 : public Class_10E960D8
{
public:
    void FUN_10be8710();

    Class_10BE8710_Unknown04* Unknown04;
    char Unknown08[0x48];
    float Unknown50;
    FVector Unknown54;
};

// FUNCTION: 0x10BE8710 ?FUN_10be8710@Class_10E96510@@QAEXXZ
void Class_10E96510::FUN_10be8710()
{
    FVector Out;
    int Flag;
    Class_10BE8710_Unknown04* Owner = Unknown04;
    Object_10BE8710* Object = static_cast<Object_10BE8710*>(Owner->Unknown30.FUN_10c88610());
    if (Object && Object->Virtual1(&Out, &Flag) == 1)
    {
        Unknown50 = (float)FUN_10c00480();
        Unknown54 = Out;
        Unknown04->FUN_10bb83a0((int)&Unknown54, 5.0f, 0);
    }
    FUN_10be7ea0();
}
