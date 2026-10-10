// Game/Unsorted_10A2EEB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

extern const char DAT_10e47660[];

class Class_10AF7F80
{
public:
    const char* FUN_10af7f80();
};

class Class_10E66320
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a2f0c0(Class_10E66320* Other);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual Class_10AF7F80* Virtual5();

    Class_10AF7F80 Unknown04;
    char Unknown05[0xB];
    int Unknown10;
};

int FUN_10af36e0(const char* A, const char* B);

// FUNCTION: 0x10A2EEB0 ?FUN_10a2eeb0@@YGXPAVFString@@PAH0@Z
void __stdcall FUN_10a2eeb0(FString* Name, UBOOL* Found, FString* Source)
{
    UBOOL Valid = Source != 0;
    *Found = Valid;
    if (Valid)
        *Name = *Source;
    else
        *Name = FString(DAT_10e47660);
}

// FUNCTION: 0x10A2EF40 ?FUN_10a2f0c0@Class_10E66320@@UAEHPAV1@@Z
int Class_10E66320::FUN_10a2f0c0(Class_10E66320* Other)
{
    if (Unknown10 != 0)
    {
        if (Other->Virtual5() != 0)
        {
            if (FUN_10af36e0(Unknown04.FUN_10af7f80(), Other->Virtual5()->FUN_10af7f80()))
                return 0;
        }
    }
    return 1;
}
