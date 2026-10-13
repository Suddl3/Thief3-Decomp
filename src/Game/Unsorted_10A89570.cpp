// Game/Unsorted_10A89570.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

extern UClass* DAT_10f3eda0;

UClass* FUN_10af1d40(const char* Name);

void FUN_10aef840();

UClass* FUN_10901290();

UClass* FUN_10901230();

UClass* FUN_109012c0();

UClass* FUN_10901350();

UClass* FUN_10901320();

UClass* FUN_10901380();

// FUNCTION: 0x10A895D0 ?IsOfFlaggedClass@@YA_NPAVUObject@@I@Z
bool IsOfFlaggedClass(UObject* Object, unsigned int Flags)
{
    if (Flags != 0xffffffff)
    {
        if (DAT_10f3eda0 == 0)
        {
            DAT_10f3eda0 = FUN_10af1d40("Core");
            FUN_10aef840();
        }
        if (!Object->IsA(DAT_10f3eda0))
        {
            if (Flags & 0x1)
            {
                if (Object->IsA(FUN_10901290()))
                    return true;
            }
            if (Flags & 0x2)
            {
                if (Object->IsA(FUN_10901230()))
                    return true;
            }
            if (Flags & 0x4)
            {
                if (Object->IsA(FUN_109012c0()))
                    return true;
            }
            if (Flags & 0x8)
            {
                if (Object->IsA(FUN_10901350()))
                    return true;
            }
            if (Flags & 0x10)
            {
                if (Object->IsA(FUN_10901320()))
                    return true;
            }
            if (Flags & 0x20)
            {
                if (Object->IsA(FUN_10901380()))
                    return true;
            }
            return false;
        }
    }
    return true;
}
