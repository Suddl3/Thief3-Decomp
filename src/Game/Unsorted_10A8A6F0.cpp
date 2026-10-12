// Game/Unsorted_10A8A6F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10A8A790.h"
#include "Game/Class_10B26930.h"
#include "Game/UByteProperty.h"

class UProperty;

// FUNCTION: 0x10A8A790 ?SetByteProperty@Class_10A8A790@@QAEXPAVUObject@@@Z
void Class_10A8A790::SetByteProperty(UObject* Src)
{
    if (Src)
    {
        if (Src->IsA(UByteProperty::StaticClass()))
            Unknown04->FUN_10b26930((int)Cast<UByteProperty>(Src));
    }
}
