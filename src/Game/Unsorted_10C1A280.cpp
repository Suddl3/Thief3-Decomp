// Game/Unsorted_10C1A280.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10AA3520.h"
#include "Game/Struct_109E3CB0.h"
#include "Game/Class_10974340.h"
#include "Game/cIntArray.h"
#include "Game/Class_10C1A170_Arg.h"

struct Struct_10C05A80;

class Class_10C1A170_Filter;

class Class_10C1A310_Result;

class Class_10C1A310_Result
{
public:
    char Unknown00[0x2C8];
    Class_10C1A170_Arg* Unknown2C8;
};

extern Struct_10AA3520* DAT_10f35dec;

bool FUN_10c1a170(Class_10C1A170_Arg* A, Struct_10C05A80* B, float C, Class_10C1A170_Filter* D, float E);

// FUNCTION: 0x10C1A310 ?FUN_10c1a310@@YGXPAVcIntArray@@PAUStruct_10C05A80@@MPAVClass_10C1A170_Filter@@M@Z
void __stdcall FUN_10c1a310(cIntArray* Out, Struct_10C05A80* Arg2, float Radius, Class_10C1A170_Filter* Filter, float Dist)
{
    if (DAT_10f35dec && DAT_10f35dec->UnknownCC && DAT_10f35dec->UnknownCC->m_Level)
    {
        Class_10C1A310_Result* Result = (Class_10C1A310_Result*)((Class_10974340*)DAT_10f35dec->UnknownCC->m_Level)->FUN_10974340();
        if (Result)
        {
            Radius = Radius * Radius;
            for (Class_10C1A170_Arg* Node = Result->Unknown2C8; Node; Node = Node->Unknown0CC)
            {
                if (FUN_10c1a170(Node, Arg2, Radius, Filter, Dist))
                {
                    int Index = Out->Count;
                    Out->SetCount(Index + 1);
                    Out->Data[Index] = (int)Node->Unknown0C0;
                }
            }
        }
    }
}
