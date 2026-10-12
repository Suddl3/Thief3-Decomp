// Game/Class_10E5B7C8_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_109E5180_Item
{
public:
    virtual bool Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int Param);
};

class Class_10E5B7C8
{
public:
    void UpdateItems(int Param);

    char Unknown00[0x1E8];
    int m_ItemCount;
    char Unknown1EC[4];
    Class_109E5180_Item** m_Items;
};

// FUNCTION: 0x109E5180 ?UpdateItems@Class_10E5B7C8@@QAEXH@Z
void Class_10E5B7C8::UpdateItems(int Param)
{
    for (int i = 0; i < m_ItemCount; i++)
    {
        Class_109E5180_Item* Child = m_Items[i];
        if (Child)
        {
            Child->Virtual2(Param);
            if (m_Items[i]->Virtual0())
            {
                delete m_Items[i];
                m_Items[i] = 0;
            }
        }
    }
}
