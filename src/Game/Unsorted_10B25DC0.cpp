// Game/Unsorted_10B25DC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AA9D90.h"
#include "Game/cListReverseCursor.h"
#include "Game/cListCursor.h"

class FArchive;

// Class_10B255F0 as include/Game/Class_10B255F0.h has it, except FUN_10b25dc0 returns the
// void* that FUN_10b24f70 gives (the function returns it on the -1, 0 and 1 paths).
class Class_10B255F0 : public Class_10AA9D90
{
public:
    virtual int Virtual0();

    Class_10B255F0();

    void FUN_10b24dd0(FArchive& Ar);
    void* FUN_10b24f70();
    int GetEntryValue();
    int GetSelectedValue();
    int FUN_10b25030();
    int GetEntryCount();
    int FUN_10dc1760();
    void FUN_10b25700(int p1);
    void* FUN_10b25dc0(int p1);
    int GetItemCount();

    int Unknown30;
    union
    {
        int m_ItemIndex;
        int Unknown34;
    };
    union
    {
        int Unknown08;
        int Unknown38;
    };
    int Unknown0C;
    union
    {
        int m_UseListA;
        float Unknown40;
    };
    union
    {
        int Unknown14;
        int Unknown44;
    };
    union
    {
        int Unknown18;
        int Unknown48;
    };
    bool Unknown1C;
    char Pad4D[0x3];
    float Unknown20;
    int Unknown24;
    int Unknown28;
    int m_EntryIndex;
    char Pad60[0xc];
    bool Unknown3C;
    char Pad3D[0x3];
    char Pad70[0xc];
    int Unknown4C;
    bool Unknown50;
    bool Unknown51;
    bool Unknown52;
    char Pad53[0x1];
};

// FUNCTION: 0x10B25DC0 ?FUN_10b25dc0@Class_10B255F0@@QAEPAXH@Z
void* Class_10B255F0::FUN_10b25dc0(int A)
{
    cListReverseCursor* Obj = (cListReverseCursor*)this;
    switch (A)
    {
    case -1:
    {
        if (Obj->m_InListA != 0)
            Obj->m_Index = ((cListCursor*)this)->FindNextFromListA(&Obj->m_InListA);
        else
            Obj->m_Index = ((cListCursor*)this)->FindNextFromListB(&Obj->m_InListA);
        void* Result = FUN_10b24f70();
        if (Obj->m_InListA != 0)
            Obj->m_Index = Obj->FindPrevFromListA(&Obj->m_InListA);
        else
            Obj->m_Index = Obj->FindPrevFromListB(&Obj->m_InListA);
        return Result;
    }
    case 0:
        return FUN_10b24f70();
    case 1:
    {
        if (Obj->m_InListA != 0)
            Obj->m_Index = Obj->FindPrevFromListA(&Obj->m_InListA);
        else
            Obj->m_Index = Obj->FindPrevFromListB(&Obj->m_InListA);
        void* Result = FUN_10b24f70();
        if (Obj->m_InListA != 0)
            Obj->m_Index = ((cListCursor*)this)->FindNextFromListA(&Obj->m_InListA);
        else
            Obj->m_Index = ((cListCursor*)this)->FindNextFromListB(&Obj->m_InListA);
        return Result;
    }
    }
    return 0;
}
