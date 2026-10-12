// Game/Unsorted_10AB5AE0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AB5AE0.h"

class Object_10AB5AE0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

// FUNCTION: 0x10AB5AE0 ?Assign@Class_10AB5AE0@@QAEPAV1@PAV1@@Z
Class_10AB5AE0* Class_10AB5AE0::Assign(Class_10AB5AE0* Other)
{
    m_Object = Other->m_Object;
    if (m_Object)
        m_Object->Virtual1();
    return this;
}
