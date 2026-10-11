// Game/Unsorted_10B28430_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109E6D60.h"

class Class_109081E0;

class Class_10B45AD0;

class FVector;

class Window;

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class Class_109081E0
{
public:
    Class_109081E0(const char* In);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

// include/Game/WindowManager.h, copied whole: the base's Virtual4(int) is brought back by a
// using-declaration, since the header's Virtual4 overload hides it.
class WindowManager : public Class_109E6D60
{
public:
    virtual void Virtual0(int A, int B, int C);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(Class_10B45AD0* Window);
    using Class_109E6D60::Virtual4;

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

// The getter's result: nothing but the field at 0x264 is used.
class Class_10B154C0_Result
{
public:
    char Pad00[0x264];
    char Unknown264;
};

void* FUN_10b154c0();

extern const char DAT_10e7ad64[];

class Class_10B28870
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

    void FUN_10b28870();
};

// FUNCTION: 0x10B28870 ?FUN_10b28870@Class_10B28870@@QAEXXZ
void Class_10B28870::FUN_10b28870()
{
    Virtual56(0);
    GWindowManager->FUN_109e8930(this);
    ((Class_10B154C0_Result*)FUN_10b154c0())->Unknown264 = 0;
    int Window;
    {
        Class_109081E0 Name(DAT_10e7ad64);
        Window = GWindowManager->FUN_109e5960(Name);
    }
    if (Window)
    {
        if (!GWindowManager->FUN_109e6d60(Window))
            GWindowManager->Virtual4(Window);
        else
            GWindowManager->FUN_109e6b20(1);
    }
}
