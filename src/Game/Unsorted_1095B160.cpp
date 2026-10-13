// Game/Unsorted_1095B160.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10DB58F0.h"
#include "Game/cString.h"
#include "Game/Class_1091ABB0.h"

extern const char DAT_10e4af34[];

extern "C" char* _strupr(char* String);

extern "C" char* strstr(const char* Haystack, const char* Needle);

Class_10DB58F0* FUN_10db58f0();

// FUNCTION: 0x1095B2E0 ?FUN_1095b2e0@@YA_NPAVClass_1091ABB0@@@Z
bool FUN_1095b2e0(Class_1091ABB0* Arg)
{
    cString Str;
    if (FUN_10db58f0()->Virtual24(*Arg->Unknown00, 9, &Str, 0))
        return false;
    cString Name = Arg->FUN_1091abb0();
    int Index;
    if (!Name.Unknown00)
        Index = -1;
    else
    {
        _strupr(Name.Unknown00);
        if (!Name.Unknown00)
            Index = -1;
        else
        {
            char* Found = strstr(Name.Unknown00, DAT_10e4af34);
            Index = Found ? Found - Name.Unknown00 : -1;
        }
    }
    return Index == 0;
}
