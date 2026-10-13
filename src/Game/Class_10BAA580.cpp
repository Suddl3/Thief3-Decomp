// Game/Class_10BAA580.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_109BC840.h"
#include "Game/Class_10B9C030.h"
#include "Game/Class_10BAA930.h"

class Class_109BC840;

class Class_1098E330;

class FName
{
public:
    cString FUN_10af9730() const;

    unsigned long Value;
};

class Class_1098E330
{
public:
    int FUN_1098e330(int Id, int* Out);
};

// Game/Class_10BAA580.h has a base and padding that cannot hold the fields at 0x34 and 0x84;
// this copy keeps the layout the accepted Unsorted_10BAA930.cpp matched, with the two fields named.
class Class_10BAA580
{
public:
    Class_109BC840* FUN_10baa580();
    int* GetCachedIndex(int* Out);
    int GetCachedValue();
    int* FUN_10babab0(int* A, cString* B);

    char Unknown00[0x34];
    Class_1098E330* Unknown34;
    char Unknown38[0x4c];
    int m_CachedIndex;
    char Unknown88[0x4];
    int m_CachedValue;
    char Unknown90[0x24];
    bool m_CacheValid;
};

// FUNCTION: 0x10BABDD0 ?GetCachedIndex@Class_10BAA580@@QAEPAHPAH@Z
int* Class_10BAA580::GetCachedIndex(int* Out)
{
    if (m_CachedIndex == 0 && Unknown34 != 0)
    {
        FName Name;
        Name.Value = 0;
        if (Unknown34->FUN_1098e330(0x10005d0, (int*)&Name.Value))
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
