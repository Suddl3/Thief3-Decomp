// Game/Unsorted_10A2F030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10E66320.h"
#include "Game/Class_10E66350.h"

int appStricmp(const char* A, const char* B);

// FUNCTION: 0x10A2F030 ?FUN_10a2f0c0@Class_10E66350@@UAEHPAVClass_10E66320@@@Z
int Class_10E66350::FUN_10a2f0c0(Class_10E66320* Other)
{
    Class_10E66350* Rhs = (Class_10E66350*)Other;
    if (Class_10E66320::FUN_10a2f0c0(Other))
    {
        if (Unknown30 && Rhs->Unknown30)
        {
            FString* Name = &Rhs->Unknown18;
            if (Name && appStricmp(*Unknown18, **Name) != 0)
                return 0;
        }
        if (Unknown34 && Rhs->Unknown34)
        {
            FString* Name = &Rhs->Unknown24;
            if (Name && appStricmp(*Unknown24, **Name) != 0)
                return 0;
        }
        return 1;
    }
    return 0;
}
