// Game/Unsorted_10C392E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10DC1750.h"
#include "Game/Class_10DC1750_Result.h"
#include "Game/Struct_10DC1750_Result_1C.h"

float GetFrameDeltaTime();

class Class_10C39880_Result
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();
};

class Class_10C39880_Unknown48
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
    virtual void* Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual Class_10C39880_Result* Virtual39();
};

class Class_10C39880
{
public:
    bool FUN_10c39880();

    char Unknown00[0x48];
    Class_10C39880_Unknown48* Unknown48;
    char Pad4C[0x90];
    float UnknownDC;
};

// FUNCTION: 0x10C39880 ?FUN_10c39880@Class_10C39880@@QAE_NXZ
bool Class_10C39880::FUN_10c39880()
{
    Class_10DC1750_Result* Result = ((Class_10DC1750*)Unknown48->Virtual34())->FUN_10dc1750();
    Struct_10DC1750_Result_1C* List = &Result->Unknown1C;
    int Index = 0;
    for (; Index < List->Count; Index++)
    {
        if (List->Items[Index] == 0x18)
        {
            if (Index != -1)
                return true;
            break;
        }
    }
    Class_10C39880_Result* P = Unknown48->Virtual39();
    if (P == 0 || P->Virtual5() == 0)
    {
        double Remaining = UnknownDC;
        UnknownDC = Remaining - GetFrameDeltaTime();
        if (UnknownDC < 0.0f)
        {
            UnknownDC = UnknownDC + 0.1f;
            return true;
        }
    }
    return false;
}
