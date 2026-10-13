// Game/Unsorted_10A37B00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10A37B00_Unknown20 {};

struct Struct_10A37B00_Unknown28 {};

class Class_10A37B00_Unknown598
{
public:
    char Pad00[0x38];
    float Unknown38;
    char Pad3C[0x148];
    float Unknown184;
};

class Class_10A37B00
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, float C);
    virtual void Virtual6();
    virtual void Virtual7(int A);
    virtual void Virtual8(int A);
    virtual void Virtual9();
    virtual void Virtual10();
    virtual Struct_10A37B00_Unknown28* Virtual11(int A);

    void FUN_10a37b00(int A, float B);

    char Pad04[0x1c];
    Struct_10A37B00_Unknown20* Unknown20;
    char Pad24[0x4];
    Struct_10A37B00_Unknown28* Unknown28;
    char Pad2C[0x18];
    float Unknown44;
    char Pad48[0x548];
    int Unknown590;
    char Pad594[0x4];
    Class_10A37B00_Unknown598** Unknown598;
};

// FUNCTION: 0x10A37B00 ?FUN_10a37b00@Class_10A37B00@@QAEXHM@Z
void Class_10A37B00::FUN_10a37b00(int A, float B)
{
    Struct_10A37B00_Unknown28* Obj = 0;
    if (A != 0)
    {
        Obj = Virtual11(A);
    }
    if (Unknown20)
    {
        delete Unknown20;
        Unknown20 = 0;
    }
    if (Obj)
    {
        if (Unknown28)
        {
            delete Unknown28;
            Unknown28 = 0;
        }
        Unknown28 = Obj;
    }
    Virtual5(-1, 0, -1.0f);
    Virtual7(A + 0x2c);
    Virtual8(A + 0x38);
    if (B > 0.0f)
    {
        Unknown44 = B;
    }
    else if (Unknown44 == 0.0f)
    {
        Unknown44 = 90.0f;
    }
    for (int i = 0; i < Unknown590; i++)
    {
        Class_10A37B00_Unknown598* Item = Unknown598[i];
        if (Item->Unknown38 <= 0.0f)
        {
            float Value = Unknown44;
            if (Item->Unknown38 > 200.0f)
            {
                Item->Unknown38 = 200.0f;
            }
            if (Item->Unknown38 < 0.0f)
            {
                Item->Unknown38 = 0.0f;
            }
            Item->Unknown38 = Value;
            Item->Unknown184 = Unknown44;
        }
    }
}
