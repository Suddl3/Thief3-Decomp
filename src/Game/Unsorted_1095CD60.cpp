// Game/Unsorted_1095CD60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1095CF00.h"
#include "Game/Struct_1095CF00.h"
#include <stdio.h>

class Class_1095CD60
{
public:
    char Pad00[0x8];
    unsigned short* Begin;
    unsigned short* End;
};

extern const char DAT_10e4afa8[];

extern const char DAT_10e4af6c[];

extern const char DAT_10e4af44[];

// FUNCTION: 0x1095CD60 ?FUN_1095cd60@@YAIPAVClass_1095CD60@@PAI@Z
unsigned int FUN_1095cd60(Class_1095CD60* Strip, unsigned int* Tri)
{
    unsigned short* Begin = Strip->Begin;
    int Count;
    if (Begin == 0)
        Count = 0;
    else
        Count = Strip->End - Begin;
    unsigned int V6 = Begin[Count - 2];
    unsigned int V7 = Begin[Count - 1];
    unsigned int V2 = Tri[2];
    unsigned int V3 = Tri[0];
    unsigned int V4 = Tri[1];
    if (V3 != V6 && V3 != V7)
    {
        if ((V4 != V6 && V4 != V7) || (V2 != V6 && V2 != V7))
        {
            printf(DAT_10e4afa8);
            printf(DAT_10e4af6c);
        }
        return V3;
    }
    if (V4 != V6 && V4 != V7)
    {
        if ((V3 != V6 && V3 != V7) || (V2 != V6 && V2 != V7))
        {
            printf(DAT_10e4afa8);
            printf(DAT_10e4af6c);
        }
        return V4;
    }
    if (V2 != V6 && V2 != V7)
    {
        if ((V3 != V6 && V3 != V7) || (V4 != V6 && V4 != V7))
        {
            printf(DAT_10e4afa8);
            printf(DAT_10e4af6c);
        }
        return V2;
    }
    printf(DAT_10e4af44);
    return 0xffffffff;
}

// FUNCTION: 0x1095CF00 ?ContainsExact@@YG_NPAUStruct_1095CF00@@PAVClass_1095CF00@@@Z
bool __stdcall ContainsExact(Struct_1095CF00* Key, Class_1095CF00* Set)
{
    for (int i = 0; i < (Set->Unknown08 == 0 ? 0 : Set->Unknown0C - Set->Unknown08); i++)
    {
        Struct_1095CF00* Element = Set->Unknown08[i];
        if (Element->Unknown00 == Key->Unknown00 && Element->Unknown04 == Key->Unknown04 && Element->Unknown08 == Key->Unknown08)
            return true;
    }
    return false;
}
