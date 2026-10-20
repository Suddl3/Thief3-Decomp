// Game/Unsorted_10B55FC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10eafbdc;

class Class_10B55740
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
    virtual int Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual bool Virtual80();
    virtual void Virtual81();
    virtual void Virtual82();
    virtual void Virtual83();
    virtual void Virtual84();
    virtual void Virtual85();
    virtual void Virtual86();
    virtual void Virtual87();
    virtual void Virtual88();
    virtual void Virtual89();
    virtual void Virtual90();
    virtual void Virtual91();
    virtual void Virtual92();
    virtual void Virtual93();
    virtual void Virtual94();
    virtual void Virtual95();
    virtual void Virtual96();
    virtual void Virtual97();
    virtual void Virtual98();
    virtual void Virtual99();
    virtual void Virtual100();
    virtual void Virtual101();
    virtual void Virtual102();
    virtual void Virtual103();
    virtual void Virtual104();
    virtual void Virtual105();
    virtual void FUN_10b56080(float A);
    virtual void Virtual107();
    virtual void Virtual108();
    virtual int Virtual109();
    virtual void Virtual110();
    virtual bool Virtual111(float A);

    void FUN_10b55740(int A);
    void FUN_10b55fc0(int A);

    char Pad04[0x134];
    float Unknown138;
    float Unknown13c;
    char Pad140[0x8];
    int Unknown148;
};

// FUNCTION: 0x10B56080 ?FUN_10b56080@Class_10B55740@@UAEXM@Z
void Class_10B55740::FUN_10b56080(float A)
{
    switch (this->Virtual71())
    {
    case 3:
        if (!this->Virtual80())
            this->Virtual70(0);
        break;
    case 2:
        if (!this->Virtual80())
            this->Virtual70(1);
        break;
    case 0:
    case 1:
    {
        int nCurrent = this->Virtual109();
        if (nCurrent != this->Unknown148)
        {
            this->Unknown138 = this->Unknown13c;
            if (this->Virtual71() == 1)
            {
                this->Virtual70(3);
            }
            else
            {
                if (nCurrent < this->Unknown148)
                    this->FUN_10b55740(nCurrent);
                else
                    this->FUN_10b55fc0(nCurrent);
            }
        }
        else
        {
            if (this->Virtual111(A))
            {
                this->Unknown138 = 0.0f;
                if (this->Virtual71() != 0)
                    this->Virtual70(3);
            }
            else
            {
                if (this->Unknown138 >= DAT_10eafbdc)
                {
                    this->Unknown138 = this->Unknown138 - A;
                    if (this->Unknown138 <= DAT_10eafbdc)
                    {
                        if (this->Virtual71() != 1)
                            this->Virtual70(2);
                    }
                }
            }
        }
        break;
    }
    }
}
