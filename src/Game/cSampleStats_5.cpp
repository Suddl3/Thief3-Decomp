// Game/cSampleStats_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/FArchive.h"
#include "Game/Class_10E8BE68.h"
#include "Game/Class_10E90D70.h"

struct Struct_10BD7F70;

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

class cSampleStats : public Class_10E90D70
{
public:
    virtual void M0() {}
    virtual void M1() {}
    virtual void M2() {}
    virtual void M3() {}
    virtual void M4() {}
    virtual void M5() {}
    virtual void M6() {}
    virtual void M7() {}
    virtual void M8() {}
    virtual void M9() {}
    virtual void M10() {}
    virtual void M11() {}
    virtual void M12() {}
    virtual void M13() {}
    virtual void M14() {}
    virtual void M15() {}
    virtual void M16() {}
    virtual void M17() {}
    virtual void M18() {}
    virtual void M19() {}
    virtual void M20() {}
    virtual void M21() {}
    virtual void M22() {}
    virtual void M23() {}
    virtual void M24() {}
    virtual void M25() {}
    virtual void M26() {}
    virtual void M27() {}
    virtual void M28() {}
    virtual void M29() {}
    virtual void M30() {}
    virtual void M31() {}
    virtual void M32() {}
    virtual void M33() {}
    virtual void M34() {}
    virtual void M35() {}
    virtual void M36() {}
    virtual void M37() {}
    virtual void M38() {}
    virtual void M39() {}
    virtual void M40() {}
    virtual void M41() {}
    virtual void M42() {}
    virtual void M43() {}
    virtual void M44() {}
    virtual void M45() {}
    virtual void M46() {}
    virtual void M47() {}
    virtual void M48() {}
    virtual void M49() {}
    virtual void M50() {}
    virtual void M51() {}
    virtual void M52() {}
    virtual void M53() {}
    virtual void M54() {}
    virtual void M55() {}
    virtual void M56() {}
    virtual void M57() {}
    virtual void M58() {}
    virtual void M59() {}
    virtual void M60() {}
    virtual void M61() {}
    virtual void M62() {}
    virtual void M63() {}
    virtual void M64() {}
    virtual void M65() {}
    virtual void M66() {}
    virtual void M67() {}
    virtual void M68() {}
    virtual void M69() {}
    virtual void M70() {}
    virtual void M71() {}
    virtual void ProcessEntry(int Index);
    virtual void Virtual73(int* A, int* B);
    virtual void FUN_10bd7ee0(FArchive& Ar);

    cSampleStats(int A, int B);

    void FUN_10bd7ea0();
    void FUN_10bd8460();
    cSampleStats* Construct(int A, int B);

    FVector Unknown40;
    FVector Unknown4C;
    FVector Unknown58;
    int Unknown64;
    union
    {
        float MaxValue;
        int Unknown68;
    };
    union
    {
        float Sum;
        int Unknown6C;
    };
    union
    {
        int Count;
        int Unknown70;
    };
    int Unknown74;
    int Unknown78;
    bool Unknown7C;
    char Pad7D[0x3];
    int EntryCount;
    int Unknown84;
    Struct_10BD7F70* Entries;
};

// FUNCTION: 0x10BD7EE0 ?FUN_10bd7ee0@cSampleStats@@UAEXAAVFArchive@@@Z
void cSampleStats::FUN_10bd7ee0(FArchive& Ar)
{
    ((Class_10E8BE68*)this)->Class_10E8BE68::Serialize(Ar);
    FUN_10b052a0(Ar, &Unknown40);
    FUN_10b052a0(Ar, &Unknown4C);
    FUN_10b052a0(Ar, &Unknown58);
    Ar.Serialize(&Unknown64, 4);
    Ar.Serialize(&Unknown68, 4);
    Ar.Serialize(&Unknown6C, 4);
    Ar.Serialize(&Unknown70, 4);
    Ar.Serialize(&Unknown74, 4);
    Ar.Serialize(&Unknown78, 4);
    Ar.Serialize(&Unknown7C, 1);
}
