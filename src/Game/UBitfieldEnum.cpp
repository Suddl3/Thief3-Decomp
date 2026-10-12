// Game/UBitfieldEnum.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/FArchive.h"

FArchive& FUN_109bc520(FArchive& Ar, void* V);

class Class_10E4E590
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
    virtual void Serialize(FArchive& Ar);
};

class UBitfieldEnum : public Class_10E4E590
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x30];
    int Unknown34[3];
};

// FUNCTION: 0x10AD73F0 ?Serialize@UBitfieldEnum@@UAEXAAVFArchive@@@Z
void UBitfieldEnum::Serialize(FArchive& Ar)
{
    Class_10E4E590::Serialize(Ar);
    FUN_109bc520(Ar, Unknown34);
    FUN_109bc520(Ar, Unknown34);
}
