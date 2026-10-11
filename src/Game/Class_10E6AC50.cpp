// Game/Class_10E6AC50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E6AC50
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
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual int GetCurrentItem();

    char Unknown04[0xC];
    int m_CurrentIndex;
    char m_Count[8];
    int* m_Items;
};

// FUNCTION: 0x10A62AC0 ?GetCurrentItem@Class_10E6AC50@@UAEHXZ
int Class_10E6AC50::GetCurrentItem()
{
    if (m_CurrentIndex != -1)
        return m_Items[m_CurrentIndex];
    return 0;
}
