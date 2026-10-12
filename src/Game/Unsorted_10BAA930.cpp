// Game/Unsorted_10BAA930.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109BC840.h"

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
