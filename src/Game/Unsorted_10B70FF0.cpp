// Game/Unsorted_10B70FF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B45AD0.h"
#include "Game/Class_10B70FF0.h"

class Class_10B70FF0_Unknown00
{
public:
    virtual void Virtual0();
    virtual bool Virtual1(int A, int B, bool C);
};

class Class_10B70FF0_Unknown04
{
public:
    virtual void Virtual0();
    virtual bool Virtual1(int A, int B, bool C);
};

class Class_10B70FF0_Unknown08
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
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
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
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70(int A);
};

// FUNCTION: 0x10B70FF0 ?FUN_10b70ff0@Class_10B70FF0@@QAE_NHH_NPAXPAVClass_10B45AD0@@H@Z
bool Class_10B70FF0::FUN_10b70ff0(int A, int B, bool C, void* D, Class_10B45AD0* E, int F)
{
    switch (Unknown1C)
    {
    case 0:
        if (C && D && D == Unknown04)
        {
            if (A == 0x1b || A == 0x1c || A == 0x25 || A == 0x24)
            {
                Unknown20 = A;
                Unknown24 = 0;
                Unknown28 = 0;
                return Unknown04->Virtual1(A, B, C);
            }
        }
        else
        {
            Unknown20 = 0x40;
        }
        return false;
    case 1:
        if (C && D && A == 0x1d && Unknown00 == D)
        {
            Unknown00->Virtual1(A, B, C);
            return true;
        }
        return false;
    case 2:
        if (C && D && A == 0x1d && Unknown08 == D)
        {
            Unknown08->Virtual70(2);
            if (Unknown10 == 8 && E)
                E->FUN_10b45ad0(F);
            return true;
        }
        return false;
    }
    return false;
}
