// Game/Unsorted_10A58330.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A18F80.h"
#include "Game/Class_109E6D60.h"

class Class_109081E0;

class Class_10B45AD0;

class FVector;

class Window;

class Object_10A18FC0;

// include/Game/WindowManager.h, copied whole with FUN_109e4800 and FUN_109e4830 added.
class WindowManager : public Class_109E6D60
{
public:
    virtual void Virtual0(int A, int B, int C);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(Class_10B45AD0* Window);

    void FUN_109e3d60(void* Window);
    void FUN_109e8ae0(void* Window);
    int FUN_109e5960(const Class_109081E0& Name);
    void FUN_109e6b20(int A);
    void FUN_109e8930(void* Window);
    void FUN_10b158b0();
    void FUN_10b16110(int A, int B);
    void GetUIScreenSize(FVector* Out);
    FVector FUN_109e4290(int X, int Y);
    void FUN_109e4300(FVector* Pos, int* OutX, int* OutY);
    int FUN_109e4800();
    int FUN_109e4830();

    char Unknown04[0x94];
    int Unknown98;
    char Pad9C[0x4];
    int UnknownA0;
    char PadA4[0x28];
    float AssumedUIScreenWidth;
    float AssumedUIScreenHeight;
    char PadD4[0x190];
    char Unknown264;
};

extern WindowManager* GWindowManager;

class Class_10E83E20
{
public:
    void FUN_10a58950(int A);
};

Object_10A18FC0* FUN_10a18fc0();

class Class_10E68D80
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
    virtual Class_10E68D80* Virtual41();
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
    virtual Class_10E68D80* Virtual52(int X, int Y);
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
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual void Virtual80();
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
    virtual void FUN_10a58330(int A);
    int FUN_10a57d40(int X, int Y);

    char Unknown04[0x1CC];
    Class_10E68D80* Unknown1D0;
    Class_10E68D80* Unknown1D4;
    char Unknown1D8[0x10];
    int Unknown1E8;
    int Unknown1EC;
    int Unknown1F0;
    int Unknown1F4;
};

// FUNCTION: 0x10A58330 ?FUN_10a58330@Class_10E68D80@@UAEXH@Z
void Class_10E68D80::FUN_10a58330(int A)
{
    ((Class_10E83E20*)this)->FUN_10a58950(A);
    if (((Class_10A18F80*)FUN_10a18fc0())->FUN_10a18f80(1))
    {
        int X = GWindowManager->FUN_109e4800();
        int Y = GWindowManager->FUN_109e4830();
        Class_10E68D80* R = Virtual41();
        Class_10E68D80* Q = R->Virtual52(X, Y);
        if (Q)
        {
            if (Q == this)
                Unknown1F4 = FUN_10a57d40(X, Y);
            else if (Q == Unknown1D0 && Unknown1F0 != Unknown1E8)
                Unknown1F4 = Unknown1F0 - 1;
            else if (Q == Unknown1D4 && Unknown1F0 != Unknown1EC)
                Unknown1F4 = Unknown1F0 + 1;
        }
    }
    else if (Unknown1D0 && Unknown1D4)
    {
        Unknown1D4->Virtual70(0);
        Unknown1D0->Virtual70(0);
    }
}
