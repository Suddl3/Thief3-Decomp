// Game/cMotionControllerAnim_20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class cIntArray
{
public:
    void SetCount(int NewCount);

    void Append(int Item)
    {
        int Index = Unknown00;
        SetCount(Index + 1);
        Unknown08[Index] = Item;
    }

    int Unknown00;
    int m_CapacityBytes;
    int* Unknown08;
};

class cMotionControllerAnim
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
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void AddMotionCallback(int Item);

    char Unknown04[0x134];
    cIntArray m_MotionCallbacks;
};

// FUNCTION: 0x10C32AF0 ?AddMotionCallback@cMotionControllerAnim@@UAEXH@Z
void cMotionControllerAnim::AddMotionCallback(int Item)
{
    for (int i = 0; i < m_MotionCallbacks.Unknown00; i++)
    {
        if (m_MotionCallbacks.Unknown08[i] == Item)
            return;
    }
    m_MotionCallbacks.Append(Item);
}
