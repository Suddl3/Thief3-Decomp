// Game/Unsorted_1095CF50_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1095CF00.h"
#include "Game/Class_1095D090.h"
#include "Game/Struct_1095CF00.h"

class Class_1095D090_Item
{
public:
    char Unknown00[0xC];
    int Unknown0C;
};

struct Struct_1095D090
{
    char Unknown00[8];
    Class_1095D090_Item** Unknown08;
    Class_1095D090_Item** Unknown0C;
};

// FUNCTION: 0x1095D090 ?FUN_1095d090@Class_1095D090@@QAEPAVClass_1095D090_Item@@PAUStruct_1095D090@@H@Z
Class_1095D090_Item* Class_1095D090::FUN_1095d090(Struct_1095D090* Param1, int Param2)
{
    Class_1095D090_Item* Result = 0;
    int Count;
    if (Param1->Unknown08 == 0)
        Count = 0;
    else
        Count = Param1->Unknown0C - Param1->Unknown08;
    int Index;
    if (Unknown20)
    {
        Index = FUN_1095cf50(Param1, Param2);
        Unknown20 = false;
    }
    else
        Index = (int)(((float)Count - 1.0f) * Unknown1C);
    if (Index == -1)
        Index = (int)(((float)Count - 1.0f) * Unknown1C);
    if (Count)
    {
        int i = Index;
        do
        {
            if (Param1->Unknown08[i]->Unknown0C < 0)
            {
                Result = Param1->Unknown08[i];
                break;
            }
            i++;
            if (i >= Count)
                i = 0;
        } while (i != Index);
    }
    Unknown1C += 0.1f;
    if (Unknown1C > 1.0f)
        Unknown1C = 0.05f;
    return Result;
}

// FUNCTION: 0x1095D150 ?FUN_1095d150@@YG_NPAVClass_1095CF00@@PAUStruct_1095CF00@@@Z
bool __stdcall FUN_1095d150(Class_1095CF00* Set, Struct_1095CF00* Key)
{
    bool Found2 = false;
    bool Found1 = false;
    bool Found0 = false;
    for (int i = 0; i < (Set->Unknown08 == 0 ? 0 : Set->Unknown0C - Set->Unknown08); i++)
    {
        if (!Found0)
        {
            Struct_1095CF00* Item = Set->Unknown08[i];
            if (Item->Unknown00 == Key->Unknown00 || Item->Unknown04 == Key->Unknown00 || Item->Unknown08 == Key->Unknown00)
                Found0 = true;
        }
        if (!Found1)
        {
            Struct_1095CF00* Item = Set->Unknown08[i];
            if (Item->Unknown00 == Key->Unknown04 || Item->Unknown04 == Key->Unknown04 || Item->Unknown08 == Key->Unknown04)
                Found1 = true;
        }
        if (!Found2)
        {
            Struct_1095CF00* Item = Set->Unknown08[i];
            if (Item->Unknown00 == Key->Unknown08 || Item->Unknown04 == Key->Unknown08 || Item->Unknown08 == Key->Unknown08)
                Found2 = true;
        }
        if (Found0 && Found1 && Found2)
            return false;
    }
    return true;
}
