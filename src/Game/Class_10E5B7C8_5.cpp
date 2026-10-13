// Game/Class_10E5B7C8_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_109E50F0_Param;

struct Struct_109E50F0
{
    int Count;
    char Unknown04[4];
    Class_109E50F0_Param** Data;
};

class Class_109E50F0_Param
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
    virtual void Virtual37(int A, int B);
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual Struct_109E50F0* Virtual43();
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
    virtual bool Virtual54();
};

class Class_10E5B7C8
{
public:
    void FUN_109e50f0(int Arg1, int Arg2, Class_109E50F0_Param* Param, bool Flag);
};

// FUNCTION: 0x109E50F0 ?FUN_109e50f0@Class_10E5B7C8@@QAEXHHPAVClass_109E50F0_Param@@_N@Z
void Class_10E5B7C8::FUN_109e50f0(int Arg1, int Arg2, Class_109E50F0_Param* Param, bool Flag)
{
    if (Param && (!Flag || Param->Virtual54() || Param->Virtual53()))
    {
        Param->Virtual37(Arg1, Arg2);
        Struct_109E50F0* List = Param->Virtual43();
        for (int i = 0; i < List->Count; i++)
            FUN_109e50f0(Arg1, Arg2, List->Data[i], true);
    }
}
