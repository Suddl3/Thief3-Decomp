// Game/Unsorted_109568F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class IDirect3DDevice8
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall Virtual3();
    virtual int __stdcall Virtual4();
    virtual int __stdcall Virtual5();
    virtual int __stdcall Virtual6();
    virtual int __stdcall Virtual7();
    virtual int __stdcall Virtual8();
    virtual int __stdcall Virtual9();
    virtual int __stdcall Virtual10();
    virtual int __stdcall Virtual11();
    virtual int __stdcall Virtual12();
    virtual int __stdcall Virtual13();
    virtual int __stdcall Virtual14();
    virtual int __stdcall Virtual15();
    virtual int __stdcall Virtual16();
    virtual int __stdcall Virtual17();
    virtual int __stdcall Virtual18();
    virtual int __stdcall Virtual19();
    virtual int __stdcall Virtual20();
    virtual int __stdcall Virtual21();
    virtual int __stdcall Virtual22();
    virtual int __stdcall Virtual23();
    virtual int __stdcall Virtual24();
    virtual int __stdcall Virtual25();
    virtual int __stdcall Virtual26();
    virtual int __stdcall Virtual27();
    virtual int __stdcall Virtual28();
    virtual int __stdcall Virtual29();
    virtual int __stdcall Virtual30();
    virtual int __stdcall Virtual31();
    virtual int __stdcall Virtual32();
    virtual int __stdcall Virtual33();
    virtual int __stdcall Virtual34();
    virtual int __stdcall Virtual35();
    virtual int __stdcall Virtual36();
    virtual int __stdcall Virtual37();
    virtual int __stdcall Virtual38();
    virtual int __stdcall Virtual39();
    virtual int __stdcall Virtual40();
    virtual int __stdcall Virtual41();
    virtual int __stdcall Virtual42();
    virtual int __stdcall Virtual43();
    virtual int __stdcall Virtual44();
    virtual int __stdcall Virtual45();
    virtual int __stdcall Virtual46();
    virtual int __stdcall Virtual47();
    virtual int __stdcall Virtual48();
    virtual int __stdcall Virtual49();
    virtual int __stdcall Virtual50(int State, int Value);
};

extern IDirect3DDevice8* GDirect3DDevice8;

class Class_10936AC0
{
public:
    void FUN_10937010();
};

extern Class_10936AC0* DAT_10f31be0;

class Class_10955C80
{
public:
    void FUN_10955c80(int A, unsigned char B);

    char Unknown00[0x38];
};

class Class_109523D0
{
public:
    int FUN_10952410(int* A);

    char Unknown00[0x30];
};

class Class_109568F0 : public Class_109523D0
{
public:
    void FUN_109568f0(int A);

    int Unknown30;
    char Unknown34[8];
    float Alpha;
    char Unknown40[0xC];
    unsigned char Unknown4C;
    char Unknown4D[0x43];
    Class_10955C80 Unknown90[9];
};

// FUNCTION: 0x109568F0 ?FUN_109568f0@Class_109568F0@@QAEXH@Z
void Class_109568F0::FUN_109568f0(int A)
{
    DAT_10f31be0->FUN_10937010();
    GDirect3DDevice8->Virtual50(0x3c, (int)(Alpha * 255.5f) * 0x01010101);
    int Index;
    int Result = FUN_10952410(&Index);
    if (Result == 1)
    {
        Unknown90[Index].FUN_10955c80(A, Unknown4C);
        return;
    }
    for (int i = 0; i < 9; i++)
    {
        switch (i)
        {
        case 0:
        case 3:
        case 5:
        case 8:
            Unknown90[i].FUN_10955c80(A, Unknown4C);
            break;
        case 1:
        case 7:
            if ((Unknown30 & 0x40) && Result == 2)
                Unknown90[i].FUN_10955c80(A, Unknown4C);
            break;
        case 6:
            Unknown90[6].FUN_10955c80(A, Unknown4C);
            break;
        }
    }
}
