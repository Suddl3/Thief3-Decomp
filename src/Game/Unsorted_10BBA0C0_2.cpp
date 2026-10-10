// Game/Unsorted_10BBA0C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_1098E330
{
public:
    int FUN_1098e330(int Id, int* Out);
};

class Class_10c7d570
{
public:
    void* FUN_10c7d570();
};

class Object_10BBAB80
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(void* A, float* B);
};

class Class_10BBAB80
{
public:
    void FUN_10bbab80();

    char Unknown00[8];
    Class_10c7d570* Unknown08;
    char Unknown0C[0x27C];
    float Unknown288;
};

struct Struct_10AA3520
{
    char Unknown00[0xB0];
    Object_10BBAB80* Unknown0B0;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10BB7670
{
public:
    bool FUN_10bb7670();
};

class Class_109BC840
{
public:
    void FUN_109bc840(int A, int B, float C, int D, int E);
};

class Class_10BA9FD0
{
public:
    void* FUN_10ba9fd0();
};

class Class_10BAA580 : public Class_10BA9FD0
{
public:
    Class_109BC840* FUN_10baa580();
};

class Class_10BBAD80
{
public:
    void FUN_10bbad80(int A, int B, float C, int D, int E);
    bool FUN_10bbaca0(int A);

    char Unknown00[8];
    Class_10BAA580* Unknown08;
};

// FUNCTION: 0x10BBAB80 ?FUN_10bbab80@Class_10BBAB80@@QAEXXZ
void Class_10BBAB80::FUN_10bbab80()
{
    float Position[3];
    float Out;
    if (((Class_1098E330*)Unknown08->FUN_10c7d570())->FUN_1098e330(0x1007b8, (int*)&Out) && Out >= 0.0f)
    {
        DAT_10f35dec->Unknown0B0->Virtual2(Unknown08->FUN_10c7d570(), Position);
        Unknown288 = Position[1];
        return;
    }
    Unknown288 = -1.0f;
}

// FUNCTION: 0x10BBAD80 ?FUN_10bbad80@Class_10BBAD80@@QAEXHHMHH@Z
void Class_10BBAD80::FUN_10bbad80(int A, int B, float C, int D, int E)
{
    if (((Class_10BB7670*)Unknown08->FUN_10ba9fd0())->FUN_10bb7670())
    {
        if (!FUN_10bbaca0(A))
        {
            Class_109BC840* Obj = Unknown08->FUN_10baa580();
            if (Obj)
                Obj->FUN_109bc840(A, B, C, D, E);
        }
    }
}
