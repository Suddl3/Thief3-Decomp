// Game/Class_10E5B2C0_31.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class cString;

class Class_10B45AD0;

class FVector;

class Window;

// WindowManager.h copied whole, minus its base Class_109E6D60 (a 0x90-byte base would shift every
// field; the header's names are absolute offsets), with Unknown1E4 cut out of PadD4.
class WindowManager
{
public:
    virtual void Virtual0(int A, int B, int C);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(Class_10B45AD0* Window);

    void FUN_109e3d60(void* Window);
    void FUN_109e8ae0(void* Window);
    int FindWindowByName(const cString& Name);
    void FUN_109e6b20(int A);
    void FUN_109e8930(void* Window);
    void OpenTitleLoadWindow();
    void FUN_10b16110(int A, int B);
    void GetUIScreenSize(FVector* Out);
    FVector ScreenToUIPosition(int X, int Y);
    void UIPositionToScreen(FVector* Pos, int* OutX, int* OutY);

    char Unknown04[0x94];
    int Unknown98;
    char Pad9C[0x4];
    int UnknownA0;
    char PadA4[0x28];
    float AssumedUIScreenWidth;
    float AssumedUIScreenHeight;
    char PadD4[0x110];
    int Unknown1E4;
    char PadE8[0x7C];
    char Unknown264;
};

extern WindowManager* GWindowManager;

struct Struct_10A52780
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

class Class_10A52780_Unknown0B4
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
    virtual Struct_10A52780* Virtual11(Struct_10A52780* A);
    virtual void Virtual12();
    virtual void Virtual13();
    virtual Struct_10A52780* Virtual14(Struct_10A52780* A);
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
    virtual Class_10A52780_Unknown0B4* Virtual41();
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
    virtual void Virtual6(Struct_10A52780* A);
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
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual Struct_10A52780 FUN_10a52780();

    char Unknown04[0xB0];
    Class_10A52780_Unknown0B4* Unknown0B4;
};

// FUNCTION: 0x10A52780 ?FUN_10a52780@Class_10E5B2C0@@UAE?AUStruct_10A52780@@XZ
Struct_10A52780 Class_10E5B2C0::FUN_10a52780()
{
    bool Zero = GWindowManager->Unknown1E4 == 0;
    Struct_10A52780 Sum;
    Struct_10A52780 First;
    Struct_10A52780 Second;
    Virtual6(&Sum);
    if (!Virtual64(0x80))
    {
        for (Class_10A52780_Unknown0B4* Item = Unknown0B4; Item; Item = Item->Virtual41())
        {
            Struct_10A52780* V;
            if (Zero)
                V = Item->Virtual11(&First);
            else
                V = Item->Virtual14(&Second);
            Sum.Unknown00 += V->Unknown00;
            Sum.Unknown04 += V->Unknown04;
            Sum.Unknown08 += V->Unknown08;
        }
    }
    return Sum;
}
