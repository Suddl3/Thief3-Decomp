// Game/Class_10B152C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E7A9C0;

class cIntArray
{
public:
    void SetCount(int NewCount);

    int Count;
    int m_CapacityBytes;
    Class_10E7A9C0** Data;
};

class Class_10B152C0
{
public:
    void AddToLists(int Mask, Class_10E7A9C0* Obj);

    char Unknown00[0x3C];
    cIntArray BitLists[32];
};

// FUNCTION: 0x10B152C0 ?AddToLists@Class_10B152C0@@QAEXHPAVClass_10E7A9C0@@@Z
void Class_10B152C0::AddToLists(int Mask, Class_10E7A9C0* Obj)
{
    unsigned int Bit = 1;
    for (int i = 0; i < 32; i++, Bit <<= 1)
    {
        if (Mask & Bit)
        {
            int Index = BitLists[i].Count;
            BitLists[i].SetCount(Index + 1);
            BitLists[i].Data[Index] = Obj;
        }
    }
}
