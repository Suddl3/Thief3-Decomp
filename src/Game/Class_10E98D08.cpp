// Game/Class_10E98D08.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

extern float DAT_10eafbdc;

double GetTimeSeconds();

bool FUN_10c00680(void* Obj);

class Class_10C1B000_Unknown04
{
public:
    char Pad00[0x1c];
    unsigned int Unknown1C;
};

class Class_10E98D08
{
public:
    virtual int Virtual0() = 0;
    virtual bool Virtual1(FVector* V, float* Out);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual float FUN_10c1b000(bool B);
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual bool Virtual15();
    virtual bool Virtual16();

    ~Class_10E98D08() {}

    Class_10C1B000_Unknown04* Unknown04;
    char Pad08[0x4];
    FVector Unknown0C;
    char Pad18[0xc];
    float Unknown24;
    char Pad28[0x4];
    float m_Value;
    float Unknown30;
    float m_CachedValue;
    float m_LastTime;
};

// FUNCTION: 0x10C1B000 ?FUN_10c1b000@Class_10E98D08@@UAEM_N@Z
float Class_10E98D08::FUN_10c1b000(bool B)
{
    if (!B)
    {
        float Now = GetTimeSeconds();
        if (Now < Unknown30 + Unknown24)
            return DAT_10eafbdc;
        if (Now - m_LastTime < 0.01f)
            return m_CachedValue;
        m_LastTime = Now;
        Class_10C1B000_Unknown04* Obj = Unknown04;
        if (!Obj || (Obj->Unknown1C & 0x800000))
        {
            float Result = DAT_10eafbdc;
            m_CachedValue = 0;
            return Result;
        }
        if (!FUN_10c00680(Obj) && Virtual15())
        {
            float Result = DAT_10eafbdc;
            m_CachedValue = 0;
            return Result;
        }
        if (Virtual16())
        {
            float Result = DAT_10eafbdc;
            m_CachedValue = 0;
            return Result;
        }
        FVector Vec = Unknown0C;
        float Flag = 0.0f;
        if (!Virtual1(&Vec, &Flag))
        {
            float Result = DAT_10eafbdc;
            m_CachedValue = 0;
            return Result;
        }
        m_CachedValue = m_Value;
    }
    return m_Value;
}
