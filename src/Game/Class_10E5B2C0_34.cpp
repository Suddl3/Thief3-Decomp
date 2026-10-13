// Game/Class_10E5B2C0_34.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10A52490
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

class WindowManager
{
public:
    char Unknown00[0x1E4];
    int Unknown1E4;
};

extern WindowManager* GWindowManager;

class Class_10E5B2C0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(Struct_10A52490* Out);
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual Struct_10A52490* FUN_10a52490(Struct_10A52490* Out);
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
    virtual Struct_10A52490* Virtual33();
};

// FUNCTION: 0x10A52490 ?FUN_10a52490@Class_10E5B2C0@@UAEPAUStruct_10A52490@@PAU2@@Z
Struct_10A52490* Class_10E5B2C0::FUN_10a52490(Struct_10A52490* Out)
{
    int Flag = GWindowManager->Unknown1E4;
    Struct_10A52490 Pos;
    Virtual6(&Pos);
    Struct_10A52490 R;
    R.Unknown00 = Virtual33()->Unknown00 * 0.5f + Pos.Unknown00;
    if (Flag == 0)
    {
        R.Unknown04 = Pos.Unknown04 - Virtual33()->Unknown04 * 0.5f;
    }
    else
    {
        R.Unknown04 = Virtual33()->Unknown04 * 0.5f + Pos.Unknown04;
    }
    R.Unknown08 = Pos.Unknown08;
    *Out = R;
    return Out;
}
