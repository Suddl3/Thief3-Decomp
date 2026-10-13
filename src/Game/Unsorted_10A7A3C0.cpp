// Game/Unsorted_10A7A3C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10AF7F80.h"
#include "Game/cRigidAttachmentManager.h"
#include "Engine/EngineClasses.h"

// FUNCTION: 0x10A7A770 ?ReadField@@YG?AVFString@@PAVClass_10AF7F80@@PAH@Z
FString __stdcall ReadField(Class_10AF7F80* Src, int* Pos)
{
    char Buf[128];
    int Count = 0;
    const char* Text = Src->FUN_10af7f80();
    while (*Pos < Src->Len())
    {
        char C = Text[*Pos];
        if (C == '|')
            break;
        Buf[Count] = C;
        Count++;
        (*Pos)++;
    }
    (*Pos)++;
    Buf[Count] = 0;
    return FString(Buf);
}
