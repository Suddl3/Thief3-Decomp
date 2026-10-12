// Game/Class_10E49EB8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>

class Class_10E49EB8
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

    char Unknown04[0x3C];
    std::vector<void*> m_Items;
};

// FUNCTION: 0x10933970 ?Remove@Class_10E49EB8@@UAEXPAX@Z
void Class_10E49EB8::Remove(void* Item)
{
    for (unsigned int i = 0; i < m_Items.size(); i++)
    {
        if (m_Items[i] == Item)
        {
            m_Items.erase(m_Items.begin() + i);
            return;
        }
    }
}
