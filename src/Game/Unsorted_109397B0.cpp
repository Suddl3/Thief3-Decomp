// Game/Unsorted_109397B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1093AED0.h"

int __stricmp(const char* A, const char* B);

extern const char DAT_10e47660[];

// FUNCTION: 0x1093AED0 ?FUN_1093aed0@Class_1093AED0@@QAEHPAPBD@Z
int Class_1093AED0::FUN_1093aed0(const char** Name)
{
    const char** Item = Unknown24;
    const char** End = Unknown28;
    int Index = 0;
    for (; Item != End; Item++, Index++)
    {
        const char* Str2 = DAT_10e47660;
        if (*Name)
            Str2 = *Name;
        const char* Str1 = *Item;
        if (Str1 == 0)
            Str1 = DAT_10e47660;
        if (__stricmp(Str1, Str2) == 0)
            return Index;
    }
    return -1;
}
