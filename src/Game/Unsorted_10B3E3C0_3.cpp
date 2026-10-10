// Game/Unsorted_10B3E3C0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A3C2E0
{
public:
    void FUN_10a3c2e0();
};

struct Struct_10AA3520
{
    char Unknown00[0x94];
    Class_10A3C2E0* Unknown94;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10B39530
{
public:
    void FUN_10b39530(int A, float B, float C, int D, int E, int F, float G);
};

class Class_10B396B0
{
public:
    void FUN_10b396b0(int A);
};

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int FUN_10aa82d0();
};

class Class_10B3ED20 : public Class_10AA82D0
{
public:
    void FUN_10b3ea80();
    void FUN_10b3e820(int A);

    char Unknown04[0x48];
    char Unknown4C;
};

// FUNCTION: 0x10B3EA80 ?FUN_10b3ea80@Class_10B3ED20@@QAEXXZ
void Class_10B3ED20::FUN_10b3ea80()
{
    Unknown4C = 0;
    ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0xb5, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    ((Class_10B396B0*)FUN_10aa82d0())->FUN_10b396b0(0xb9);
    ((Class_10B396B0*)FUN_10aa82d0())->FUN_10b396b0(0xb8);
    DAT_10f35dec->Unknown94->FUN_10a3c2e0();
    FUN_10b3e820(4);
}
