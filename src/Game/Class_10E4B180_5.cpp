// Game/Class_10E4B180_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E4B180_Unknown70;

class cIntArray
{
public:
    void SetCount(int NewCount);

    int Count;
    int m_CapacityBytes;
    Class_10E4B180_Unknown70** Data;
};

class Class_10E4B180
{
public:
    virtual void Virtual0();

    void AddToMaskedLists(int Mask, Class_10E4B180_Unknown70* Obj);

    char Unknown04[0x34];
    cIntArray m_MaskLists[8];
};

// FUNCTION: 0x10B7E620 ?AddToMaskedLists@Class_10E4B180@@QAEXHPAVClass_10E4B180_Unknown70@@@Z
void Class_10E4B180::AddToMaskedLists(int Mask, Class_10E4B180_Unknown70* Obj)
{
    unsigned int Bit = 1;
    for (int i = 0; i < 8; i++, Bit <<= 1)
    {
        if (Mask & Bit)
        {
            int Index = m_MaskLists[i].Count;
            m_MaskLists[i].SetCount(Index + 1);
            m_MaskLists[i].Data[Index] = Obj;
        }
    }
}
