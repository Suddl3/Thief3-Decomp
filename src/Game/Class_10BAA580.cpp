// Game/Class_10BAA580.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_109BC840.h"
#include "Game/Class_10B9C030.h"
#include "Game/Class_10BAA580.h"
#include "Game/Class_10BAA930.h"

class Class_109BC840;

class Class_1098E330
{
public:
    int GetPropertyValue(int Id, int* Out);
};

class FName
{
public:
    cString FUN_10af9730() const;

    unsigned long Value;
};

// FUNCTION: 0x10BABDD0 ?GetCachedIndex@Class_10BAA580@@QAEPAHPAH@Z
int* Class_10BAA580::GetCachedIndex(int* Out)
{
    // The registry pointer sits in the base class, at offset 0x34.
    if (m_CachedIndex == 0 && *(Class_1098E330**)&((Class_10C7D570*)this)->Unknown00[0x34] != 0)
    {
        FName Name;
        Name.Value = 0;
        if ((*(Class_1098E330**)&((Class_10C7D570*)this)->Unknown00[0x34])->GetPropertyValue(0x10005d0, (int*)&Name.Value))
        {
            cString Str = Name.FUN_10af9730();
            int Index;
            m_CachedIndex = *FUN_10babab0(&Index, &Str);
        }
    }
    *Out = m_CachedIndex;
    return Out;
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
