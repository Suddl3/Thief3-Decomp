// Game/Class_10E49E50_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>

class Class_10E49E50 {
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int GetCount();

    char Unknown04[0x1C];
    std::vector<void*> m_vecItems;
};

// FUNCTION: 0x10939680 ?GetCount@Class_10E49E50@@UAEHXZ
int Class_10E49E50::GetCount()
{
    return m_vecItems.size();
}
