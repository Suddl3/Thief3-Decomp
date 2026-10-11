// Game/Unsorted_10936B70_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class IDirect3DDevice8
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall Virtual3();
    virtual int __stdcall Virtual4();
    virtual int __stdcall Virtual5();
    virtual int __stdcall Virtual6();
    virtual int __stdcall Virtual7();
    virtual int __stdcall Virtual8();
    virtual int __stdcall Virtual9();
    virtual int __stdcall Virtual10();
    virtual int __stdcall Virtual11();
    virtual int __stdcall Virtual12();
    virtual int __stdcall Virtual13();
    virtual int __stdcall Virtual14();
    virtual int __stdcall Virtual15();
    virtual int __stdcall Virtual16();
    virtual int __stdcall Virtual17();
    virtual int __stdcall Virtual18();
    virtual int __stdcall Virtual19();
    virtual int __stdcall Virtual20();
    virtual int __stdcall Virtual21();
    virtual int __stdcall Virtual22();
    virtual int __stdcall Virtual23();
    virtual int __stdcall Virtual24();
    virtual int __stdcall Virtual25();
    virtual int __stdcall Virtual26();
    virtual int __stdcall Virtual27();
    virtual int __stdcall Virtual28();
    virtual int __stdcall Virtual29();
    virtual int __stdcall Virtual30();
    virtual int __stdcall Virtual31();
    virtual int __stdcall Virtual32();
    virtual int __stdcall Virtual33();
    virtual int __stdcall Virtual34();
    virtual int __stdcall Virtual35();
    virtual int __stdcall Virtual36();
    virtual int __stdcall Virtual37();
    virtual int __stdcall Virtual38();
    virtual int __stdcall Virtual39();
    virtual int __stdcall Virtual40();
    virtual int __stdcall Virtual41();
    virtual int __stdcall Virtual42();
    virtual int __stdcall Virtual43();
    virtual int __stdcall Virtual44();
    virtual int __stdcall Virtual45();
    virtual int __stdcall Virtual46();
    virtual int __stdcall Virtual47();
    virtual int __stdcall Virtual48();
    virtual int __stdcall Virtual49();
    virtual int __stdcall Virtual50(int State, int Value);
    virtual int __stdcall Virtual51();
    virtual int __stdcall Virtual52();
    virtual int __stdcall Virtual53();
    virtual int __stdcall Virtual54();
    virtual int __stdcall Virtual55();
    virtual int __stdcall Virtual56();
    virtual int __stdcall Virtual57();
    virtual int __stdcall Virtual58();
    virtual int __stdcall Virtual59();
    virtual int __stdcall Virtual60();
    virtual int __stdcall Virtual61();
    virtual int __stdcall Virtual62();
    virtual int __stdcall Virtual63(int Stage, int Type, int Value);
};

extern IDirect3DDevice8* GDirect3DDevice8;

extern int DAT_10efefb8;

// FUNCTION: 0x10936E00 ?FUN_10936e00@@YGXH_N@Z
void __stdcall FUN_10936e00(int A, bool B)
{
    if (A != -1)
    {
        if (B)
        {
            GDirect3DDevice8->Virtual63(A, 0x12, 2);
            GDirect3DDevice8->Virtual63(A, 0x10, DAT_10efefb8);
        }
        else
        {
            GDirect3DDevice8->Virtual63(A, 0x12, 0);
            GDirect3DDevice8->Virtual63(A, 0x10, 2);
        }
        GDirect3DDevice8->Virtual63(A, 0xd, 1);
        GDirect3DDevice8->Virtual63(A, 0xe, 1);
        GDirect3DDevice8->Virtual50(A + 0x80, 8);
    }
}

// FUNCTION: 0x10936EB0 ?FUN_10936eb0@@YGXH_N@Z
void __stdcall FUN_10936eb0(int Stage, bool Flag)
{
    if (Stage == -1)
        return;
    if (Flag)
    {
        GDirect3DDevice8->Virtual63(Stage, 0x12, 2);
        GDirect3DDevice8->Virtual63(Stage, 0x10, DAT_10efefb8);
    }
    else
    {
        GDirect3DDevice8->Virtual63(Stage, 0x12, 0);
        GDirect3DDevice8->Virtual63(Stage, 0x10, 2);
    }
    GDirect3DDevice8->Virtual63(Stage, 0xd, 3);
    GDirect3DDevice8->Virtual63(Stage, 0xe, 3);
    GDirect3DDevice8->Virtual50(Stage + 0x80, 0);
}

// FUNCTION: 0x10936F60 ?FUN_10936f60@@YGXH_N@Z
void __stdcall FUN_10936f60(int Stage, bool Flag)
{
    if (Stage != -1)
    {
        if (Flag)
        {
            GDirect3DDevice8->Virtual63(Stage, 0x12, 2);
            GDirect3DDevice8->Virtual63(Stage, 0x10, DAT_10efefb8);
        }
        else
        {
            GDirect3DDevice8->Virtual63(Stage, 0x12, 0);
            GDirect3DDevice8->Virtual63(Stage, 0x10, 2);
        }
        GDirect3DDevice8->Virtual63(Stage, 0xd, 4);
        GDirect3DDevice8->Virtual63(Stage, 0xe, 4);
        GDirect3DDevice8->Virtual50(Stage + 0x80, 0);
    }
}
