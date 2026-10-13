// Game/Class_10E84BB8_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E6B078_Member;

class Class_10B66090_Unknown198;

class Class_10B66090_Unknown1A8;

class Class_10B66090_Unknown1AC;

// Copy of include/Game/cTextWindow.h with the fields this handler reads: the header
// leaves 0xEC..0x1B8 as padding, and the slots 0x198..0x1AC are named here.
class cTextWindow
{
public:
    virtual ~cTextWindow();
    virtual bool HandleKey(int A, bool B, bool C);
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

    cTextWindow();

    char Unknown04[0xC0];
    Class_10E6B078_Member* Unknown0C4;
    char PadC8[0x20];
    int Unknown0E8;
    char Unknown0EC[0xAC];
    Class_10B66090_Unknown198** Unknown198;
    int Unknown19C;
    int Unknown1A0;
    int Unknown1A4;
    Class_10B66090_Unknown1A8* Unknown1A8;
    Class_10B66090_Unknown1AC* Unknown1AC;
    char Unknown1B0[0x8];
};

// The handler objects at +0x198 and +0x1A8: their slot 1 takes the key, its flag and the bool.
class Class_10B66090_Unknown198
{
public:
    virtual void Virtual0();
    virtual bool Virtual1(int A, bool B, bool C);
};

class Class_10B66090_Unknown1A8
{
public:
    virtual void Virtual0();
    virtual bool Virtual1(int A, bool B, bool C);
};

class Class_10B66090_Unknown1AC
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

class Class_10E84BB8 : public cTextWindow
{
public:
    virtual bool FUN_10b66090(int A, bool B, bool C);
};

// FUNCTION: 0x10B66090 ?FUN_10b66090@Class_10E84BB8@@UAE_NH_N0@Z
bool Class_10E84BB8::FUN_10b66090(int A, bool B, bool C)
{
    if (!C)
        return false;
    if (A == 0x1d)
    {
        Class_10B66090_Unknown1AC* Obj = Unknown1AC;
        if (Obj && Unknown0C4 == (Class_10E6B078_Member*)Obj)
        {
            Obj->Virtual70(2);
            return true;
        }
    }
    else if (A == 0x1e)
    {
        Unknown1AC->Virtual70(2);
    }
    else
    {
        Class_10E6B078_Member* Current = Unknown0C4;
        int Index = -1;
        for (int i = 0; i < 4; i++)
        {
            if ((Class_10E6B078_Member*)Unknown198[i] == Current)
            {
                Index = i;
                break;
            }
        }
        bool Found = Index != -1;
        if ((Found || Current == (Class_10E6B078_Member*)Unknown1A8) && Current)
        {
            Unknown19C = A;
            Unknown1A0 = 0;
            Unknown1A4 = 0;
        }
        else
        {
            Unknown19C = 0x40;
        }
        if (Found)
        {
            Class_10B66090_Unknown198* Handler = Unknown198[Index];
            if (Handler && Handler->Virtual1(A, B, C))
                return true;
        }
        if (Unknown1A8 && Unknown1A8->Virtual1(A, B, C))
            return true;
        return cTextWindow::HandleKey(A, B, C);
    }
    return true;
}
