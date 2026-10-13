// Game/Unsorted_10A3A9D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A3AC50.h"
#include "Game/Class_10A3AC50_Primary.h"
#include "Game/Class_10A3ACD0.h"
#include "Game/Class_10E667AC.h"

class Class_10A3AC50_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual bool Virtual3();
    virtual void Virtual4(int A);
};

// FUNCTION: 0x10A3AC50 ?UpdateItems@Class_10A3AC50@@UAEXH@Z
void Class_10A3AC50::UpdateItems(int A)
{
    for (int i = 0; i < m_ItemCount; i++)
    {
        Class_10A3AC50_Item* Item = m_Items[i];
        Item->Virtual4(A);
        if (Item->Virtual3())
            FUN_10a3abd0(i);
    }
}
