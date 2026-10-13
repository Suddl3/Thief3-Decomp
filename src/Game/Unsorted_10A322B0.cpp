// Game/Unsorted_10A322B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cRefArray.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A322B0.h"
#include "Game/Class_10A32AB0_Element.h"

class Class_10A322B0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10C56E40
{
public:
    Class_10C56E40() : Ptr(0) {}
    Class_10C56E40(const Class_10C56E40& Other)
    {
        Ptr = Other.Ptr;
        if (Ptr)
        {
            Ptr->Virtual1();
        }
    }
    ~Class_10C56E40()
    {
        if (Ptr)
        {
            Ptr->Virtual2();
        }
    }
    Class_10C56E40& operator=(const Class_10C56E40& Other)
    {
        Class_10A322B0_Unknown08* Old = Ptr;
        Ptr = Other.Ptr;
        if (Ptr)
        {
            Ptr->Virtual1();
        }
        if (Old)
        {
            Old->Virtual2();
        }
        return *this;
    }

    Class_10A322B0_Unknown08* Ptr;
};

// FUNCTION: 0x10A322B0 ?Swap@Class_10A322B0@@QAEXHH@Z
void Class_10A322B0::Swap(int A, int B)
{
    Class_10C56E40 Temp;
    Temp = m_Data[A];
    m_Data[A] = m_Data[B];
    m_Data[B] = Temp;
}
