// Game/cSequence_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A53220
{
public:
    virtual void Virtual0();
    virtual bool Virtual1();

    void FUN_10a53220(float A);
};

class cSequence
{
public:
    virtual void Virtual0();
    virtual int IsFinished();
    virtual void FUN_10a58be0();
    virtual int FUN_10a58c10(int A);
    virtual void Virtual4();
    virtual void UpdateCurrent(float A);

    char Unknown04[8];
    int m_Count;
    int Unknown10;
    Class_10A53220** m_Items;
    int m_Current;
};

// FUNCTION: 0x10A58C30 ?UpdateCurrent@cSequence@@UAEXM@Z
void cSequence::UpdateCurrent(float A)
{
    m_Items[m_Current]->FUN_10a53220(A);
    if (m_Items[m_Current]->Virtual1())
    {
        if (m_Current + 1 < m_Count)
            m_Current++;
    }
}
