// Game/Unsorted_10A2EFA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10E66320.h"

int appStricmp(const char* A, const char* B);

// Copied from include/Game/Class_10E66338.h: this calls Class_10E66320::FUN_10a2f0c0 unadjusted, so the
// class derives from Class_10E66320 at offset 0 (the base is 0x14 bytes); slot 2 gets the function's real name.
class Class_10E66338 : public Class_10E66320
{
public:
    virtual int FUN_10a2efa0(Class_10E66338* Other);

    char Pad14[0x4];
    FString Unknown18;
    FString Unknown24;
    FString Unknown30;
    int Unknown3C;
    int Unknown40;
    int Unknown44;
};

// FUNCTION: 0x10A2EFA0 ?FUN_10a2efa0@Class_10E66338@@UAEHPAV1@@Z
int Class_10E66338::FUN_10a2efa0(Class_10E66338* Other)
{
    if (Class_10E66320::FUN_10a2f0c0(Other))
    {
        if (Unknown3C && Other->Unknown3C)
        {
            FString* OtherName = &Other->Unknown18;
            if (OtherName && appStricmp(*Unknown18, **OtherName) != 0)
                return 0;
        }
        if (Unknown40 && Other->Unknown40)
        {
            FString* OtherName = &Other->Unknown24;
            if (OtherName && appStricmp(*Unknown24, **OtherName) != 0)
                return 0;
        }
        return 1;
    }
    return 0;
}
