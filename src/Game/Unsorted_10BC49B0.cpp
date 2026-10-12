// Game/Unsorted_10BC49B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10AAF570.h"
#include "Game/Class_10AAF570_Field10.h"
#include "Game/Class_10BC4B80.h"

class Class_10BC4B80_Field04
{
public:
    char Unknown00[0xC];
    Class_10AAF570* Unknown0C;
};

// FUNCTION: 0x10BC4B80 ?FindPosition@Class_10BC4B80@@QAE_NPAVFVector@@HH@Z
bool Class_10BC4B80::FindPosition(FVector* Out, int B, int C)
{
    Class_10AAF570_Field10* Obj = (Class_10AAF570_Field10*)Unknown04->Unknown0C->GetLinkType();
    int Id = Obj->Virtual16(B, C, 1);
    if (!Id)
        return false;
    FVector Result;
    FVector* Source = Obj->Virtual17(&Result, Id);
    *Out = *Source;
    return true;
}
