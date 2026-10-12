// Game/Unsorted_10C3FF40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <vector>
#include "Game/Class_10C3FF40.h"
#include "Game/Class_10C40580.h"
#include "Game/Struct_10C3FF40_Item.h"

class Class_10C40580_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

// FUNCTION: 0x10C3FF40 ?GetItemCount@Class_10C3FF40@@QAEHXZ
int Class_10C3FF40::GetItemCount()
{
    return m_Items.size();
}

// FUNCTION: 0x10C40580 ?FUN_10c40580@Class_10C40580@@QAEXXZ
void Class_10C40580::FUN_10c40580()
{
    Class_10C40580_Member* P = Unknown18;
    if (P)
        P->Virtual2();
}
