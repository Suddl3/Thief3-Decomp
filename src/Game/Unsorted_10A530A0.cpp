// Game/Unsorted_10A530A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The UI screen manager's base: only its virtuals are known here.
class Class_109E6D60
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int Window);

    bool IsCurrentWindow(int p1);
};

class FVector;

class Class_10B45AD0;

class cString;

// include/Game/WindowManager.h, copied whole: the screen width at +0x1DC is
// the field the padding hides, and GetUIScreenSize returns the size array.
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
    int FindWindowByName(const cString& Name);
    void FUN_109e6b20(int A);
    void FUN_109e8930(void* Window);
    void OpenTitleLoadWindow();
    void FUN_10b16110(int A, int B);
    float* GetUIScreenSize(float* Out);
    FVector ScreenToUIPosition(int X, int Y);
    void UIPositionToScreen(FVector* Pos, int* OutX, int* OutY);

    char Unknown04[0x94];
    int Unknown98;
    char Pad9C[0x4];
    int UnknownA0;
    char PadA4[0x28];
    float AssumedUIScreenWidth;
    float AssumedUIScreenHeight;
    char PadD4[0x108];
    float Unknown1DC;
    char Pad1E0[0x84];
    char Unknown264;
};

extern WindowManager* GWindowManager;

// The element's position, in UI space, with the zoom factor the screen size
// is applied to.
struct PosF
{
    float X;
    float Y;
    float Scale;
};

// The element's bounds.
struct RectF
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
    float Unknown0C;
    float Unknown10;
    float Unknown14;
    float Unknown18;
};

// The object the element's Virtual41 hands out.
class Class_10A530A0_Virtual41
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
    virtual bool Virtual64(int A);
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
    virtual void Virtual15(RectF* Out);
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
    virtual Class_10A530A0_Virtual41* Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual bool Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual Class_10E5B2C0* FUN_10a530a0(int X, int Y);
    virtual void Virtual53();
    virtual bool Virtual54();
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
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72(PosF* Out);

    char Pad04[0xB4];
    int UnknownB8;
    char PadBC[0x4];
    Class_10E5B2C0** UnknownC0;
};

// FUNCTION: 0x10A530A0 ?FUN_10a530a0@Class_10E5B2C0@@UAEPAV1@HH@Z
Class_10E5B2C0* Class_10E5B2C0::FUN_10a530a0(int X, int Y)
{
    if (this->Virtual54())
    {
        if (this->Virtual46())
        {
            PosF Pos;
            this->Virtual72(&Pos);

            if (this->Virtual41() && this->Virtual41()->Virtual64(0x10))
            {
                float ScreenSize[2];
                float ScreenWidth = GWindowManager->Unknown1DC;
                float* Size = GWindowManager->GetUIScreenSize(ScreenSize);
                float HalfWidth = Size[0] * 0.5f;
                float HalfHeight = Size[1] * 0.5f;
                Pos.X = (Pos.X - HalfWidth) / (Pos.Scale / ScreenWidth + 1.0f) + HalfWidth;
                Pos.Y = (Pos.Y - HalfHeight) / (Pos.Scale / ScreenWidth + 1.0f) + HalfHeight;
                Pos.Scale = 0.0f;
            }

            RectF Rect;
            this->Virtual15(&Rect);
            if (X >= Rect.Unknown00 + Pos.X)
            {
                if (X <= Rect.Unknown0C + Pos.X)
                {
                    if (Y >= Rect.Unknown10 + Pos.Y)
                    {
                        if (Y <= Rect.Unknown04 + Pos.Y)
                            return this;
                    }
                }
            }
        }

        for (int i = 0; i < UnknownB8; i++)
        {
            Class_10E5B2C0* Child = UnknownC0[i];
            Class_10E5B2C0* Hit = Child->FUN_10a530a0(X, Y);
            if (Hit)
                return Hit;
        }
    }

    return 0;
}
