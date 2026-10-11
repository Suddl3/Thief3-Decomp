// Game/cHighlightMgr.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10ABB2D0
{
    int Unknown00;
    char Unknown04[0x10];
};

class cHighlightMgr
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int FindIndex(int Value);

    char Unknown04[0x10];
    int m_EntryCount;
    char Unknown18[4];
    Struct_10ABB2D0* m_Entries;
};

// FUNCTION: 0x10ABB2D0 ?FindIndex@cHighlightMgr@@UAEHH@Z
int cHighlightMgr::FindIndex(int Value)
{
    for (int i = 0; i < m_EntryCount; i++)
    {
        if (m_Entries[i].Unknown00 == Value)
            return i;
    }
    return -1;
}
