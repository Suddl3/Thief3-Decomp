// Game/Unsorted_109E66F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1092D3D0.h"
#include "Game/Class_109E6AA0.h"
#include "Game/Class_109E6D60.h"
#include "Game/Object_10A18FC0.h"
#include "Game/Class_1092D420.h"

struct Class_109E6D60_Member
{
    char Unknown00[8];
    int Unknown08;
};

extern Class_1092D420* DAT_10f31b88;

Object_10A18FC0* FUN_10a18fc0();

class Class_109E6AA0_Unknown98
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
    virtual void Virtual44(int A, int B, int C);
};

// FUNCTION: 0x109E6AA0 ?FUN_109e6aa0@Class_109E6AA0@@QAEXXZ
void Class_109E6AA0::FUN_109e6aa0()
{
    if (Unknown218 == 0 && Unknown21C == 0)
    {
        DAT_10f31b88->HideCursor();
        if (Unknown210 != -1 && Unknown214 != -1)
            FUN_10a18fc0()->Virtual4(Unknown210, Unknown214);
        Unknown210 = -1;
        Unknown214 = -1;
        Unknown98->Virtual44(1, 1, 0);
    }
}

// FUNCTION: 0x109E6D60 ?FUN_109e6d60@Class_109E6D60@@QAE_NH@Z
bool Class_109E6D60::FUN_109e6d60(int p1)
{
    return p1 == (*Unknown8C)->Unknown08;
}
