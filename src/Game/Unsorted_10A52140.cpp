// Game/Unsorted_10A52140.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Config.h"

extern const ANSICHAR DAT_10e67fac[];

extern const ANSICHAR DAT_10e67fa8[];

extern const ANSICHAR DAT_10e67fa4[];

extern const ANSICHAR DAT_10e67fa0[];

// The four bytes the config values land in.
class Class_10A52140
{
public:
    char Unknown00;
    char Unknown01;
    char Unknown02;
    char Unknown03;
};

// FUNCTION: 0x10A52140 ?FUN_10a52140@@YAXPAVClass_10A52140@@ABVFString@@PBV2@2@Z
void __cdecl FUN_10a52140(Class_10A52140* Out, const FString& Base, const FString* File, const FString* Section)
{
    int V1;
    int V2;
    int V3;
    int V4;
    FString Key1(Base);
    Key1 += DAT_10e67fac;
    if (Config::Instance()->FUN_10910a20(Section->operator*(), Key1.operator*(), &V1, (int)File->operator*()))
        Out->Unknown02 = (char)V1;
    FString Key2(Base);
    Key2 += DAT_10e67fa8;
    if (Config::Instance()->FUN_10910a20(Section->operator*(), Key2.operator*(), &V2, (int)File->operator*()))
        Out->Unknown00 = (char)V2;
    FString Key3(Base);
    Key3 += DAT_10e67fa4;
    if (Config::Instance()->FUN_10910a20(Section->operator*(), Key3.operator*(), &V3, (int)File->operator*()))
        Out->Unknown01 = (char)V3;
    FString Key4(Base);
    Key4 += DAT_10e67fa0;
    if (Config::Instance()->FUN_10910a20(Section->operator*(), Key4.operator*(), &V4, (int)File->operator*()))
        Out->Unknown03 = (char)V4;
}
