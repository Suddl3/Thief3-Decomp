// Game/Unsorted_10BCC2B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class FVector;

struct Struct_10BA91E0;

class Class_10963740
{
public:
    char Unknown00[12];
};

class Class_10C25EB0 : public Class_10963740
{
public:
    char FUN_10c25fb0();
};

class Class_10C06F30
{
public:
    Class_10963740* FUN_10c06f30(Class_10963740* A, int B);
};

class Class_10AA6080
{
public:
    bool FUN_10aa6080(FVector* A, float B);
};

int FUN_10aa6040();

float FUN_10ba91e0(const Struct_10BA91E0* A, const Struct_10BA91E0* B);

extern float DAT_10eafbdc;

class Class_10E92690
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual float FUN_10bcc2b0(int A, int B);

    Class_10C06F30* Unknown04;
    char Unknown08[0x10];
};

// FUNCTION: 0x10BCC2B0 ?FUN_10bcc2b0@Class_10E92690@@UAEMHH@Z
float Class_10E92690::FUN_10bcc2b0(int A, int B)
{
    if (((Class_10AA6080*)FUN_10aa6040())->FUN_10aa6080((FVector*)A, 80.0f) == true)
    {
        return DAT_10eafbdc;
    }
    Class_10C25EB0 Local;
    Unknown04->FUN_10c06f30(&Local, A);
    unsigned char Count = Local.FUN_10c25fb0();
    if (Count < 100)
    {
        return 0.01f;
    }
    return FUN_10ba91e0((const Struct_10BA91E0*)Unknown08, (const Struct_10BA91E0*)A);
}
