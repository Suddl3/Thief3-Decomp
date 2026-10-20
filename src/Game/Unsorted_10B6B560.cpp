// Game/Unsorted_10B6B560.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The options window: the two settings the base class copies into it, and the HUD's subtitles.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109E6D60.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/Struct_10AA3520.h"
#include "Game/cIntArray.h"

class FVector;

class Class_10B45AD0;

class APlayerPawn;

class FArchive;

struct Struct_10A37780_Field20;

Class_10905A90_Member* GetAllocator();

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class cString
{
public:
    cString(const char* In);
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

// include/Game/WindowManager.h, copied whole with SetHUDMode added.
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
    int FindWindowByName(const cString& Name);
    void FUN_109e6b20(int A);
    void FUN_109e8930(void* Window);
    void OpenTitleLoadWindow();
    void FUN_10b16110(int A, int B);
    void GetUIScreenSize(FVector* Out);
    FVector ScreenToUIPosition(int X, int Y);
    void UIPositionToScreen(FVector* Pos, int* OutX, int* OutY);

    void SetHUDMode(unsigned char Flag);

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

void* GetWindowManager();

extern const char DAT_10e79144[];

extern const char DAT_10e7912c[];

extern Struct_10AA3520* DAT_10f35dec;

extern Class_10F3A3D8* DAT_10f3a3d8;

// The base class's settings: where the HUD sits and how big it is.
struct Class_10B603F0_Vector
{
    float X;
    float Y;
    float Z;
};

class Class_10B21560
{
public:
    char Pad00[0x2C];
    Class_10B603F0_Vector Unknown2C;
    Class_10B603F0_Vector Unknown38;
};

// The four bytes the base class takes for the HUD's rectangle and colour.
class Class_10B603F0_Rect
{
public:
    Class_10B603F0_Rect()
    {
        Unknown00 = 0;
        Unknown01 = 0;
        Unknown02 = 0;
        Unknown03 = 0;
    }

    char Unknown00;
    char Unknown01;
    char Unknown02;
    char Unknown03;
};

class Class_10B603F0_Color
{
public:
    Class_10B603F0_Color()
    {
        Unknown00 = 0;
        Unknown01 = 0;
        Unknown02 = 0;
        Unknown03 = -1;
    }

    char Unknown00;
    char Unknown01;
    char Unknown02;
    char Unknown03;
};

// include/Game/Class_10A37780.h, copied whole with the method this function calls added.
class Class_10A37780
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(int A);
    virtual int Virtual4();
    virtual void Virtual5(int A, int B, float C);
    virtual int Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual Struct_10A37780_Field20* Virtual11(APlayerPawn* A);
    virtual Struct_10A37780_Field20* Virtual12();

    void FUN_10a378f0(FArchive& Ar);
    void FUN_10a37780(APlayerPawn* A, bool B);
    void FUN_10a383a0(Class_10B603F0_Color* A, Class_10B603F0_Rect* B, float C);

    char Unknown04[8];
    int Unknown0C;
    char Unknown10[8];
    int Unknown18;
    int Unknown1C;
    Struct_10A37780_Field20* Unknown20;
    char Unknown24[0x4];
    Struct_10A37780_Field20* Unknown28;
    char Unknown2C[0x560];
    bool Unknown58C;
    char Pad58D[0x3];
};

// include/Game/Class_10AC2E40.h, copied whole with the virtual this function calls added.
class Class_10AC2E40
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, float C);

    float GetFraction();

    char Unknown00[0x600];
    float m_Current;
};

// The window the HUD lives in, and the subtitle window it holds.
class cT3SubtitleWindow
{
public:
    void FUN_10b2acf0();
};

class Class_10B6B560_Window
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
    virtual cT3SubtitleWindow* Virtual45(const cString& Name);
};

// include/Game/Class_10E67FD0.h and the window's own class, copied whole with the
// methods this function calls and the two settings it copies added.
class Class_10E67FD0
{
public:
    Class_10E67FD0();

    virtual ~Class_10E67FD0();

    char Unknown04[0xC0];
    int UnknownC4;
    char UnknownC8[0x20];
    int Unknown0E8;
    char Unknown0EC[0x2C];
};

class Class_10E85AD8 : public Class_10E67FD0
{
public:
    Class_10E85AD8();

    int FindCurrentIndex();
    void FUN_10b6b560();
    void DispatchFirstAccepted();
    void ResetState();
    void DeactivateRejected();

    int Unknown118;
    int Unknown11C;
    int Unknown120;
    int Unknown124;
    int Unknown128;
    int Unknown12C;
    int Unknown130;
    int Unknown134;
    int Unknown138;
    int Unknown13C;
    int Unknown140;
    int Unknown144;
    int Unknown148;
    cIntArray Unknown14C;
    int m_CurrentIndex;
    int Unknown15C;
    int Unknown160;
    Class_10B603F0_Vector Unknown164;
    Class_10B603F0_Vector Unknown170;
    int Unknown17C;
    int m_State;
};

// FUNCTION: 0x10B6B560 ?FUN_10b6b560@Class_10E85AD8@@QAEXXZ
void Class_10E85AD8::FUN_10b6b560()
{
    Unknown164 = DAT_10f35dec->Unknown08->Unknown2C;
    Unknown170 = DAT_10f35dec->Unknown08->Unknown38;
    DispatchFirstAccepted();
    ResetState();
    DAT_10f3a3d8->Unknown10->Virtual5(0, 1, -1.0f);
    ((WindowManager*)GetWindowManager())->SetHUDMode(0);
    DeactivateRejected();
    Class_10B603F0_Rect Rect;
    Class_10B603F0_Color Color;
    DAT_10f35dec->Unknown10->FUN_10a383a0(&Color, &Rect, 2.5f);
    Class_10B6B560_Window* Window;
    {
        cString Name(DAT_10e79144);
        Window = (Class_10B6B560_Window*)GWindowManager->FindWindowByName(Name);
    }
    cT3SubtitleWindow* Subtitle = 0;
    if (Window)
    {
        {
            cString SubtitleName(DAT_10e7912c);
            Subtitle = Window->Virtual45(SubtitleName);
        }
        if (Subtitle)
            Subtitle->FUN_10b2acf0();
    }
}
