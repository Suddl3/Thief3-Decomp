// Game/Unsorted_10B7C070.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/FCoords.h"
#include "Game/Class_10D9B090.h"

struct Struct_10D9E5E0_Param;

class Class_10B7C070_Unknown14
{
public:
    void FUN_10daa0e0();
    void FUN_10daa0d0();
};

// Class_10D9FEE0 from include/Game/Class_10D9FEE0.h, with the field at 0x14 and Virtual3 taking its argument.
class Class_10D9FEE0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(int A);

    void FUN_10da0ab0(const FCoords& A);
    void FUN_10da01b0(const FVector& A);
    void FUN_10da0710(const FVector& A);

    char Pad04[0x4];
    int Unknown08;
    char Pad0C[0x8];
    Class_10B7C070_Unknown14* Unknown14;
};

// Class_10990D10 from include/Game/Class_10990D10.h, with virtual slots up to 44 and the field at 0xB0.
class Class_10990D10
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
    virtual void Virtual15();
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
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual FCoords Virtual44();

    void FUN_10990d10();
    void FUN_10991fc0(int A);

    char Pad04[0xAC];
    Class_10D9FEE0* UnknownB0;
};

class Class_10B7C070
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
    virtual void Virtual15();
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
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41(Class_10990D10* A);

    void FUN_10b7c070(Class_10990D10* A);
};

Class_10D9B090* FUN_10d9dcb0();

// FUNCTION: 0x10B7C070 ?FUN_10b7c070@Class_10B7C070@@QAEXPAVClass_10990D10@@@Z
void Class_10B7C070::FUN_10b7c070(Class_10990D10* A)
{
    if (A)
    {
        Class_10D9FEE0* Esi = A->UnknownB0;
        if (Esi)
        {
            if (Esi->Unknown08 == 0)
            {
                FUN_10d9dcb0()->FUN_10d9e5e0((Struct_10D9E5E0_Param*)Esi);
                Class_10B7C070_Unknown14* Ebx = Esi->Unknown14;
                Ebx->FUN_10daa0e0();
                Esi->Virtual3(1);
                A->FUN_10991fc0(0);
                Virtual41(A);
                Ebx->FUN_10daa0d0();
            }
            else
            {
                Esi->FUN_10da0ab0(A->Virtual44());
                Esi->FUN_10da0710(FVector(0.0f, 0.0f, 0.0f));
                Esi->FUN_10da01b0(FVector(0.0f, 0.0f, 0.0f));
            }
        }
    }
}
