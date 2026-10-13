// Game/Unsorted_10A37780.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class APlayerPawn;

struct Struct_10A37780_Field20 {};

class Class_10A37780
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, float C);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual Struct_10A37780_Field20* Virtual11(APlayerPawn* A);

    void FUN_10a37780(APlayerPawn* A, bool B);

    char Unknown04[0x1C];
    Struct_10A37780_Field20* Unknown20;
    char Unknown24[0x4];
    Struct_10A37780_Field20* Unknown28;
};

// FUNCTION: 0x10A37780 ?FUN_10a37780@Class_10A37780@@QAEXPAVAPlayerPawn@@_N@Z
void Class_10A37780::FUN_10a37780(APlayerPawn* A, bool B)
{
    Struct_10A37780_Field20* Item = 0;
    if (A)
        Item = Virtual11(A);
    if (B)
    {
        if (Unknown20)
        {
            delete Unknown20;
            Unknown20 = 0;
        }
        Unknown20 = Item;
    }
    else
    {
        if (Unknown20)
        {
            delete Unknown20;
            Unknown20 = 0;
        }
        if (Item)
        {
            if (Unknown28)
            {
                delete Unknown28;
                Unknown28 = 0;
            }
            Unknown28 = Item;
        }
    }
    Virtual5(-1, 0, -1.0f);
}
