// Game/Class_10E49E50_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>

class Class_10E49E50
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Remove(void* Item);

    char Unknown04[0x1C];
    std::vector<void*> m_vecItems;
};

// FUNCTION: 0x10933730 ?Remove@Class_10E49E50@@UAEXPAX@Z
void Class_10E49E50::Remove(void* Item)
{
    for (unsigned int i = 0; i < m_vecItems.size(); i++)
    {
        if (m_vecItems[i] == Item)
        {
            m_vecItems.erase(m_vecItems.begin() + i);
            return;
        }
    }
}
