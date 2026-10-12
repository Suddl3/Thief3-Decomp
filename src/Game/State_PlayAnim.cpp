// Game/State_PlayAnim.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E90D70.h"

Class_10905A90_Member* GetAllocator();

class Class_10BD1320
{
public:
    void FUN_10bd0410(int Count);

    ~Class_10BD1320()
    {
        FUN_10bd0410(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            Unknown04 = 0;
        }
    }

    int m_Count;
    int Unknown04;
    void* m_Items;
};

class State_PlayAnim : public Class_10E90D70
{
public:
    virtual ~State_PlayAnim();

    Class_10BD1320 m_Items;
};

// FUNCTION: 0x10BD09D0 ??1State_PlayAnim@@UAE@XZ
State_PlayAnim::~State_PlayAnim()
{
}
