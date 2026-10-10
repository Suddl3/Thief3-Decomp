// Game/Unsorted_10BAE100.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern "C" int __cdecl sprintf(char* Out, const char* Format, ...);

class Class_109081E0
{
public:
    Class_109081E0(const char* In);
    ~Class_109081E0();

    char* Unknown00;
};

extern const char DAT_10e8d7d0[];

extern const char DAT_10e48c2c[];

class Class_10E8D7A8
{
public:
    Class_10E8D7A8(const Class_10E8D7A8& Other);

    virtual ~Class_10E8D7A8();

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
};

class Class_10BAE080
{
public:
    int FUN_10c176e0(const Class_10E8D7A8& Item);
    void FUN_10bad9d0(int Count);
    void FUN_10bae2b0(const Class_10BAE080& Other);

    int Unknown00;
    int Unknown04;
    Class_10E8D7A8* Unknown08;
};

// FUNCTION: 0x10BAE2B0 ?FUN_10bae2b0@Class_10BAE080@@QAEXABV1@@Z
void Class_10BAE080::FUN_10bae2b0(const Class_10BAE080& Other)
{
    FUN_10bad9d0(Other.Unknown00);
    for (int i = 0; i < Unknown00; i++)
        Unknown08[i] = Other.Unknown08[i];
}

// FUNCTION: 0x10BAE330 ?FUN_10bae330@@YA?AVClass_109081E0@@H@Z
Class_109081E0 FUN_10bae330(int Value)
{
    char Buffer[8];
    if (Value < 10)
        sprintf(Buffer, DAT_10e8d7d0, Value);
    else
    {
        if (Value > 99)
            Value = 99;
        sprintf(Buffer, DAT_10e48c2c, Value);
    }
    return Class_109081E0(Buffer);
}
