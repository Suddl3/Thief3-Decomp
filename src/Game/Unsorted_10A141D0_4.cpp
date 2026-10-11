// Game/Unsorted_10A141D0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern const char DAT_10e47660[];

int __stricmp(const char* A, const char* B);

class Class_10919B80;

class Class_109022E0;

class Class_10E5D498;

class Class_10E5D548_Unknown10;

struct Struct_10A13110;

class Class_10E5D548_Unknown10
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
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual const char** Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29(int Param);
    virtual void Virtual30(int Param);
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34(int Param);
};

class Class_10E5D548
{
public:
    virtual Class_10919B80* Virtual0();
    virtual Class_10919B80* FUN_10a12e60(int A);
    virtual void Virtual2();
    virtual Class_10E5D498* FUN_10a13600(const Class_109022E0& A, float B);
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void FUN_10a14540();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void FUN_10a12fd0(int Param);
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14(int A, int* B);
    virtual void Virtual15();
    virtual int FUN_10a141a0(int Value);
    virtual void Virtual17();
    virtual int FUN_10a13090(int Param);
    virtual int FUN_10a130d0(int Param);
    virtual void Virtual20();
    virtual void Virtual21();
    virtual Class_10E5D548_Unknown10* FUN_10a143a0(const char** Name);
    virtual Class_10E5D548_Unknown10* FUN_10a13150(int A);
    virtual Struct_10A13110* FUN_10a13110(int Key);
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void FUN_10a13480(int Param);

    int Unknown04;
    int Unknown08;
    char Pad0C[0x4];
    Class_10E5D548_Unknown10** Unknown10;
    int Unknown14;
    char Pad18[0x4];
    int* Unknown1C;
    int Unknown20;
    char Unknown24[4];
    Struct_10A13110* Unknown28;
};

// FUNCTION: 0x10A143A0 ?FUN_10a143a0@Class_10E5D548@@UAEPAVClass_10E5D548_Unknown10@@PAPBD@Z
Class_10E5D548_Unknown10* Class_10E5D548::FUN_10a143a0(const char** Name)
{
    for (int i = 0; i < Unknown08; i++)
    {
        const char** Info = Unknown10[i]->Virtual15();
        const char* Want = *Name;
        if (!Want)
            Want = DAT_10e47660;
        const char* Have = *Info;
        if (!Have)
            Have = DAT_10e47660;
        if (__stricmp(Have, Want) == 0)
            return Unknown10[i];
    }
    return 0;
}
