// Game/Unsorted_10C303B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/FCoords.h"

extern FCoords DAT_10f46de8;

extern float DAT_10e49684;

class Class_10C30420_Unknown0C
{
public:
    char Unknown00[0x2C];
    FVector Unknown2C;
};

class Class_10E9AC80
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
    virtual int FUN_10c30420(const FVector& Point, float Radius);
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
    virtual FRotator* Virtual50(FVector* Out);

    int Unknown04;
    int Unknown08;
    Class_10C30420_Unknown0C* Unknown0C;
};

// FUNCTION: 0x10C30420 ?FUN_10c30420@Class_10E9AC80@@UAEHABVFVector@@M@Z
int Class_10E9AC80::FUN_10c30420(const FVector& Point, float Radius)
{
    const FVector* Origin = &Unknown0C->Unknown2C;
    FVector Delta;
    Delta.X = Point.X - Origin->X;
    Delta.Y = Point.Y - Origin->Y;
    FVector Dir;
    const FRotator& Rotation = *Virtual50(&Dir);
    FCoords Coords = FCoords(DAT_10f46de8).FUN_10961af0(Rotation);
    Dir = Coords.XAxis;
    Delta.Z = 0.0f;
    Dir.Z = 0.0f;
    Delta.Normalize();
    Dir.Normalize();
    float Dot = Dir.X * Delta.X + Dir.Y * Delta.Y;
    Dot += Dir.Z * Delta.Z;
    if (DAT_10e49684 < Dot)
        Dot = DAT_10e49684;
    if (Dot < DAT_10e49684 - Radius)
        return 1;
    return 0;
}
