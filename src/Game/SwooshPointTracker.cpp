// Game/SwooshPointTracker.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Entry_10AA5390
{
    char Unknown00[0x1C];
};

class SwooshPointTracker
{
public:
    virtual void Virtual0();
    virtual void AddPoint(const Entry_10AA5390& Item);
    virtual void Virtual2(int A);

    int m_Head;
    int m_Capacity;
    int m_Count;
    Entry_10AA5390* m_Points;
};

// FUNCTION: 0x10AA5390 ?AddPoint@SwooshPointTracker@@UAEXABUEntry_10AA5390@@@Z
void SwooshPointTracker::AddPoint(const Entry_10AA5390& Item)
{
    if (m_Count == m_Capacity)
        Virtual2(1);
    m_Points[(m_Head + m_Count) % m_Capacity] = Item;
    m_Count++;
}
