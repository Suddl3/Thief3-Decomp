// Game/Unsorted_10BF2FE0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10FF667C.h"
#include "Game/Class_10B9BDA0_Member.h"
#include "Game/Class_10905A90_Member.h"

extern Class_10FF667C* DAT_10ff667c;

Class_10905A90_Member* GetAllocator();

class Class_10BEFA30;

class Class_10BF0A60
{
public:
    void FUN_10befb10(int Count);
    void FUN_10bf0a60();
    void FUN_10befc30(int A, int B, int C);
    void Empty()
    {
        FUN_10befb10(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            Unknown04 = 0;
        }
    }
    int Add(const Class_10BEFA30& Item);

    int m_Count;
    int Unknown04;
    Class_10BEFA30* m_Items;
};

class Class_10BF3320
{
public:
    bool FUN_10bf0900(Class_10BEFA30* A);
    bool FUN_10bf3320();

    char Pad00[0x1F0];
    Class_10BF0A60 Unknown1F0;
};

// FUNCTION: 0x10BF3320 ?FUN_10bf3320@Class_10BF3320@@QAE_NXZ
bool Class_10BF3320::FUN_10bf3320()
{
    while (Unknown1F0.m_Count > 0)
    {
        if (!DAT_10ff667c->Unknown14->Virtual6())
            return true;
        if (FUN_10bf0900(Unknown1F0.m_Items))
        {
            Unknown1F0.FUN_10befb10(0);
            return true;
        }
        if (Unknown1F0.m_Count - 1 != 0)
            Unknown1F0.FUN_10befc30(1, 0, Unknown1F0.m_Count - 1);
        Unknown1F0.FUN_10befb10(Unknown1F0.m_Count - 1);
    }
    return false;
}
