// Game/Unsorted_10BA9F50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BA9F50.h"
#include "Game/Struct_10BA9F50.h"

class Class_10BA9F50_Member
{
public:
    void GetPosition(Struct_10BA9F50* Out) { *Out = Unknown38; }

    char Unknown00[0x38];
    Struct_10BA9F50 Unknown38;
};

// FUNCTION: 0x10BA9F50 ?CopyPosition@Class_10BA9F50@@QAE_NPAUStruct_10BA9F50@@@Z
bool Class_10BA9F50::CopyPosition(Struct_10BA9F50* Out)
{
    Unknown34->GetPosition(Out);
    return true;
}
