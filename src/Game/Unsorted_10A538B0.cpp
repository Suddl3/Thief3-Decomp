// Game/Unsorted_10A538B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10eafbdc;

extern float DAT_10e67de8;

// The objects the four fields point at: a table, a scale and a timer.
class Class_10A53A00_UnknownFC
{
public:
    virtual void Virtual0(int A);
    virtual bool Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(float A);

    float Unknown04;
    float Unknown08;
};

class Class_10A53A00_Unknown100
{
public:
    virtual void Virtual0(int A);
    virtual bool Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(float A);

    float Unknown04;
    float Unknown08;
};

class Class_10A53A00_Unknown104
{
public:
    virtual void Virtual0(int A);
    virtual bool Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(float A);

    float Unknown04;
    float Unknown08;
};

class Class_10A53A00_Unknown108
{
public:
    virtual void Virtual0(int A);
    virtual bool Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(float A);

    float Unknown04;
    float Unknown08;
};

class Class_10E5B2C0
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
    virtual void Virtual56(int A);

    char Unknown04[0xE8];
    int UnknownEC;
    char UnknownF0[0xC];
    Class_10A53A00_UnknownFC* UnknownFC;
    Class_10A53A00_Unknown100* Unknown100;
    Class_10A53A00_Unknown104* Unknown104;
    Class_10A53A00_Unknown108* Unknown108;

    void FUN_10a53a00(float A);
};

// FUNCTION: 0x10A53A00 ?FUN_10a53a00@Class_10E5B2C0@@QAEXM@Z
void Class_10E5B2C0::FUN_10a53a00(float A)
{
    if (Unknown100)
    {
        if (Unknown100->Virtual1())
        {
            if (Unknown100)
                Unknown100->Virtual0(1);
            Unknown100 = 0;
        }
        else
        {
            if (!(Unknown100->Unknown08 <= DAT_10eafbdc))
                Unknown100->Unknown08 = Unknown100->Unknown08 - A;
            else
                Unknown100->Virtual5(A * Unknown100->Unknown04);
        }
    }

    if (Unknown104)
    {
        if (Unknown104->Virtual1())
        {
            if (Unknown104)
                Unknown104->Virtual0(1);
            Unknown104 = 0;
        }
        else
        {
            if (!(Unknown104->Unknown08 <= DAT_10eafbdc))
                Unknown104->Unknown08 = Unknown104->Unknown08 - A;
            else
                Unknown104->Virtual5(A * Unknown104->Unknown04);
        }
    }

    if (Unknown108)
    {
        if (Unknown108->Virtual1())
        {
            if (Unknown108)
                Unknown108->Virtual0(1);
            Unknown108 = 0;
        }
        else
        {
            if (!(Unknown108->Unknown08 <= DAT_10eafbdc))
                Unknown108->Unknown08 = Unknown108->Unknown08 - A;
            else
                Unknown108->Virtual5(A * Unknown108->Unknown04);
        }
    }

    if (UnknownFC)
    {
        if (UnknownFC->Virtual1())
        {
            if ((float)UnknownEC <= DAT_10e67de8)
                Virtual56(0);
            if (UnknownFC)
                UnknownFC->Virtual0(1);
            UnknownFC = 0;
        }
        else
        {
            if (!(UnknownFC->Unknown08 <= DAT_10eafbdc))
                UnknownFC->Unknown08 = UnknownFC->Unknown08 - A;
            else
                UnknownFC->Virtual5(A * UnknownFC->Unknown04);
        }
    }
}
