// Game/Unsorted_10BC6BA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <string.h>
#include "Game/cIntArray.h"
#include "Game/cString.h"
#include "Game/Class_10AB37C0.h"
#include "Game/Class_10C02030.h"

bool FUN_1090f010(const int* A, const int* B);

// FUNCTION: 0x10BC6F60 ?FUN_10bc6f60@@YAXABVcString@@PBHPAVcIntArray@@@Z
void FUN_10bc6f60(const cString& Name, const int* Arg2, cIntArray* Array)
{
    for (int i = 0; i < Array->Count; i++)
    {
        Class_10C02030* Item = (Class_10C02030*)Array->Data[i];
        cString* ItemName = (cString*)Item->GetName();
        if (strcmp(**ItemName, *Name) == 0 || FUN_1090f010((const int*)Item->GetName(), Arg2))
        {
            delete Item;
            if (i != Array->Count - 1)
            {
                int From = i + 1;
                int To = i;
                int Count = Array->Count - i - 1;
                if (From != To && Count)
                    memmove(Array->Data + To, Array->Data + From, Count * sizeof(int));
            }
            Array->SetCount(Array->Count - 1);
            return;
        }
    }
}
