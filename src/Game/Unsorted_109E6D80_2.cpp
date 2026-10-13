// Game/Unsorted_109E6D80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_109E7830_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual bool Virtual2(int A, bool B, bool C);
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
    virtual bool Virtual64(int A);
};

class Class_109E7830_Unknown00
{
public:
    char Pad00[0x8];
    Class_109E7830_Unknown08* Unknown08;
};

class Class_109E7830_Unknown8C
{
public:
    Class_109E7830_Unknown00* Unknown00;
};

class Class_109E7830_Unknown10
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual bool Virtual2(int A, bool B, bool C);
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

class Class_10E5B7C8
{
public:
    virtual bool FUN_109e7830(int A, int B, int C);

    char Unknown04[0x4];
    int Unknown08;
    char Unknown0C[0x4];
    Class_109E7830_Unknown10** Unknown10;
    char Unknown14[0x78];
    Class_109E7830_Unknown8C* Unknown8C;
    int Unknown90;
    char Unknown94[0x164];
    Class_109E7830_Unknown10* Unknown1F8;
};

// FUNCTION: 0x109E7830 ?FUN_109e7830@Class_10E5B7C8@@UAE_NHHH@Z
bool Class_10E5B7C8::FUN_109e7830(int A, int B, int C)
{
    if (Unknown90)
    {
        Class_109E7830_Unknown08* Target = Unknown8C->Unknown00->Unknown08;
        if (Target && Target->Virtual64(2))
        {
            Target->Virtual2(A, B != 3, B == 1);
            return true;
        }
    }
    else
    {
        if (Unknown1F8 && Unknown1F8->Virtual53() && Unknown1F8->Virtual64(2) && Unknown1F8->Virtual2(A, B != 3, B == 1))
            return true;
        for (int i = 0; i < Unknown08; i++)
        {
            Class_109E7830_Unknown10* Element = Unknown10[i];
            if (Element && Element != Unknown1F8 && Element->Virtual53() && Element->Virtual64(2) && Element->Virtual2(A, B != 3, B == 1))
                return true;
        }
    }
    return false;
}
