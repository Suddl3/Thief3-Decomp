// Game/Unsorted_109333B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <vector>
#include "Game/Class_10933420.h"

class VBPoolStaticPermanent {
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int GetCount();

    char Unknown04[0x3C];
    std::vector<void*> m_Items;
};

// FUNCTION: 0x109333B0 ?GetCount@VBPoolStaticPermanent@@UAEHXZ
int VBPoolStaticPermanent::GetCount()
{
    return m_Items.size();
}

// FUNCTION: 0x10933420 ?Erase@Class_10933420@@QAE?AViterator@?$vector@PAXV?$allocator@PAX@std@@@std@@V234@@Z
std::vector<void*>::iterator Class_10933420::Erase(std::vector<void*>::iterator Where)
{
    return Unknown04.erase(Where);
}
