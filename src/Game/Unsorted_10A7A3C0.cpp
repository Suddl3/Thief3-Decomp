// Game/Unsorted_10A7A3C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10AF7F80.h"
#include "Game/cRigidAttachmentManager.h"

class AActor
{
    DECLARE_CLASS(AActor, UObject, 0x800, Engine)
};

int FUN_10977fa0(int Unknown);

// FUNCTION: 0x10A7A770 ?FUN_10a7a770@@YG?AVFString@@PAVClass_10AF7F80@@PAH@Z
FString __stdcall FUN_10a7a770(Class_10AF7F80* Src, int* Pos)
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

// FUNCTION: 0x10A7A920 ?FUN_10a7a920@cRigidAttachmentManager@@UAEXPAVUObject@@HH@Z
void cRigidAttachmentManager::FUN_10a7a920(UObject* Obj, int Unknown04, int Unknown08)
{
    if (Obj && Obj->Class->ClassDefaultObject != Obj && Obj->IsA(AActor::StaticClass()))
    {
        int Result = FUN_10977fa0((int)Obj);
        Virtual17(Result, 0);
    }
}
