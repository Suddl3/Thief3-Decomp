// Game/Unsorted_10BAA930.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109BC840.h"
#include "Game/Class_10B9C030.h"
#include "Game/Class_10BAA930.h"

class Class_10BAA580
{
public:
    Class_109BC840* FUN_10baa580();
    int* GetCachedIndex(int* Out);
    int GetCachedValue();

    char Unknown00[0x8C];
    int m_CachedValue;
    char Unknown90[0x24];
    bool m_CacheValid;
};

struct Struct_10BAA930
{
    char Unknown00[0x1C];
    Class_10B9C030 UnknownA;
    Class_10B9C030 UnknownB;
};

// FUNCTION: 0x10BAA930 ?FUN_10baa930@Class_10BAA930@@QAE_NXZ
bool Class_10BAA930::FUN_10baa930()
{
    Struct_10BAA930* S = Unknown3C;
    if (S->UnknownA.FindIndex(0x59) != -1)
    {
        int Key = Unknown34;
        return S->UnknownB.FindIndex(Key) != -1;
    }
    if (S->UnknownA.FindIndex(0x57) != -1)
        return true;
    if (S->UnknownA.Contains(0x58) == true)
        return false;
    return Unknown50;
}

// FUNCTION: 0x10BABE80 ?GetCachedValue@Class_10BAA580@@QAEHXZ
int Class_10BAA580::GetCachedValue()
{
    Class_109BC840* Obj = FUN_10baa580();
    if (!Obj)
        return -1;
    if (!m_CacheValid)
    {
        int Value;
        int* Ptr = GetCachedIndex(&Value);
        m_CachedValue = Obj->FUN_109b5860(*Ptr);
        m_CacheValid = true;
    }
    return m_CachedValue;
}
