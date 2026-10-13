// Game/cHighlightMgr_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10ABB300.h"
#include "Game/Struct_10ABB300.h"

class cHighlightMgr : public Class_10ABB300
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4(int A);
    virtual bool FUN_10abb5c0(int A);

    char Unknown14[0x8];
    Struct_10ABB300* m_Entries;
};

// FUNCTION: 0x10ABB5C0 ?FUN_10abb5c0@cHighlightMgr@@UAE_NH@Z
bool cHighlightMgr::FUN_10abb5c0(int A)
{
    int Index = Virtual4(A);
    if (Index >= 0 && m_Entries[Index].Unknown10)
    {
        FUN_10abb300(&m_Entries[Index]);
        return true;
    }
    return false;
}
