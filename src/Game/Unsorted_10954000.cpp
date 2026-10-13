// Game/Unsorted_10954000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10955750.h"
#include "Game/cShortArray.h"

struct Struct_10955000
{
    float X;
    float Y;
    float Z;
    char Pad0C[0x14];
};

// FUNCTION: 0x10955000 ?FUN_10955000@@YAHPAUStruct_10955000@@PAVcShortArray@@H@Z
int FUN_10955000(Struct_10955000* Verts, cShortArray* Items, int Index)
{
    int Count = Items->m_Count;
    for (int i = 0; i < Count; i++)
    {
        Struct_10955000* Other = &Verts[(unsigned short)Items->m_Items[i]];
        Struct_10955000* Target = &Verts[Index];
        if (Target->X == Other->X && Target->Y == Other->Y && Target->Z == Other->Z)
            return i;
    }
    Items->Resize(Count + 1);
    Items->m_Items[Count] = (short)Index;
    return Items->m_Count - 1;
}

// FUNCTION: 0x10955750 ?CheckAll@Class_10955750@@QAE_NH@Z
bool Class_10955750::CheckAll(int A)
{
    for (int i = 0; i < m_Count; i++)
    {
        if (!FUN_10955540(i, A))
            return false;
    }
    return true;
}
