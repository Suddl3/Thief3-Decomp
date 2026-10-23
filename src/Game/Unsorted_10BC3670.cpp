// Game/Unsorted_10BC3670.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/TimeManager.h"
#include "Game/cIntArray.h"

struct Struct_10D9E5E0_Param;

class Class_10970890;

// Game/Class_1098E330.h copied: the code calls Virtual99 with the FVector it fills.
class Class_1098E330 : public AActor
{
public:
    virtual void Virtual93();
    virtual void Virtual94();
    virtual void Virtual95();
    virtual void Virtual96();
    virtual void Virtual97();
    virtual void Virtual98();
    virtual void Virtual99(FVector* Out);
    virtual void Virtual100();
    virtual void Virtual101();
    virtual void Virtual102();
    virtual void Virtual103();
    virtual void Virtual104();
    virtual int Virtual105();

    int GetPropertyValue(int Id, int* Out);
    Class_10970890* FUN_10991eb0();
    int FUN_10b22000();
    float FUN_10992b70(float Value);

    char Pad04[0x20];
    int Unknown24;
    char Pad28[0x4];
    int Unknown2C;
    char Pad30[0x94];
    unsigned int m_Flags;
    char PadC8[0x2c];
    int UnknownF4;
    int UnknownF8;
    int UnknownFC;
    int Unknown100;
    int Unknown104;
    int Unknown108;
};

// Game/Class_1098E3D0.h copied.
class Class_1098E3D0 : public Class_1098E330
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();

    void FUN_10990560(int A);
    void FUN_1098e3d0(int A, void* B);

    char Pad01[0xaf];
    Struct_10D9E5E0_Param* UnknownB0;
};

// AICore/AICoreClasses.h's AAIPawn, with the base the code calls.
class AAIPawn : public Class_1098E3D0
{
public:
    virtual float GetLightLevel();
};

extern float DAT_10e49684;

extern float DAT_10e4a640;

void FUN_10a4acf0(float* Out, FVector Location, int Count, int Lights, float Scale);

// FUNCTION: 0x10BC39D0 GetLightLevel
float AAIPawn::GetLightLevel()
{
    float Colors[3];
    float Now;
    float Light;
    float Result;
    float Cached;
    float LastUpdate;
    LastUpdate = 0.0f;
    GetPropertyValue(0x100584, (int*)&LastUpdate);
    Now = (float)TimeManager::Instance()->GetGameTime();
    if (Now < LastUpdate + 0.1f)
    {
        Cached = 0.0f;
        GetPropertyValue(0x100583, (int*)&Cached);
        return Cached;
    }
    else
    {
        FVector Location;
        Virtual99(&Location);
        cIntArray Lights;
        Lights.SetCount(1);
        Lights.Data[0] = (int)this;
        FUN_10a4acf0(Colors, Location, 3, (int)&Lights, 1.0f);
        if (Colors[0] > DAT_10e49684)
            Colors[0] = 1.0f;
        if (Colors[1] > DAT_10e49684)
            Colors[1] = 1.0f;
        if (Colors[2] > DAT_10e49684)
            Colors[2] = 1.0f;
        Light = (Colors[2] + Colors[1] + Colors[0]) * DAT_10e4a640;
        Result = FUN_10992b70(Light);
        FUN_1098e3d0(0x100583, &Result);
        FUN_1098e3d0(0x100584, &Now);
        Light = Result;
        return Light;
    }
}
