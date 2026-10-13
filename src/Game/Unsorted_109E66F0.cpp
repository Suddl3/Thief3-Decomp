// Game/Unsorted_109E66F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1092D3D0.h"
#include "Game/Class_109E6AA0.h"
#include "Game/Class_109E6D60.h"
#include "Game/Object_10A18FC0.h"
#include "Game/Class_1092D420.h"
#include "Game/Class_109E69A0.h"

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

class Class_109E69A0_Unknown08
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
    virtual bool Virtual31(int A, int B, int C);
};

class Class_109E69A0_Unknown00
{
public:
    char Pad00[0x8];
    Class_109E69A0_Unknown08* Unknown08;
};

class Class_109E69A0_Unknown8C
{
public:
    Class_109E69A0_Unknown00* Unknown00;
};

class Class_109E69A0_Unknown10
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
    virtual bool Virtual31(int A, int B, int C);
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
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual bool Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual bool Virtual64(int A);
};

// FUNCTION: 0x109E69A0 ?FUN_109e69a0@Class_109E69A0@@QAE_NHHH@Z
bool Class_109E69A0::FUN_109e69a0(int A, int B, int C)
{
    if (Unknown90)
    {
        Class_109E69A0_Unknown08* Target = Unknown8C->Unknown00->Unknown08;
        if (Target && Target->Virtual31(A, B, C))
            return true;
    }
    else
    {
        if (Unknown1F8 && Unknown1F8->Virtual53() && Unknown1F8->Virtual64(2) && Unknown1F8->Virtual31(A, B, C))
            return true;
        for (int i = 0; i < Unknown08; i++)
        {
            Class_109E69A0_Unknown10* Element = Unknown10[i];
            if (Element && Element != Unknown1F8 && Element->Virtual53() && Element->Virtual64(2) && Element->Virtual31(A, B, C))
                return true;
        }
    }
    return false;
}

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

// FUNCTION: 0x109E6D60 ?IsCurrentWindow@Class_109E6D60@@QAE_NH@Z
bool Class_109E6D60::IsCurrentWindow(int p1)
{
    return p1 == (*m_Current)->Unknown08;
}
