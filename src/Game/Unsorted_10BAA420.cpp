// Game/Unsorted_10BAA420.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B9CAC0.h"
#include "Game/Class_10BAA8A0.h"
#include "Game/Class_10BC9D40.h"
#include "Game/Class_10E98C8C.h"
#include "AICore/AICoreClasses.h"

struct Struct_10BAA8F0
{
    int Count;
    int Unknown04;
    Class_10E98C8C** Items;
};

// FUNCTION: 0x10BAA420 ??$Cast@VAAIPawnController@@@@YAPAVAAIPawnController@@PAVUObject@@@Z
template AAIPawnController* Cast<AAIPawnController>(UObject* Src);

// FUNCTION: 0x10BAA8F0 ?ClearItems@@YAXPAUStruct_10BAA8F0@@@Z
void ClearItems(Struct_10BAA8F0* Array)
{
    for (int i = 0; i < Array->Count; i++)
        delete Array->Items[i];
    Array->Count = 0;
}
