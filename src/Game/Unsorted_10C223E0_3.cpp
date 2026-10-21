// Game/Unsorted_10C223E0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern "C" void* memset(void* Dest, int Value, unsigned int Count);

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* GetAllocator();

class Class_10BAE0C0
{
public:
    void Resize(int Count);

    void Empty()
    {
        Resize(0);
        if (m_CapacityBytes)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_CapacityBytes = 0;
        }
    }

    int m_Count;
    int m_CapacityBytes;
    void* m_Data;
};

class Class_10C223E0
{
public:
    void FUN_10c223e0();

    char Unknown00[0xC];
    Class_10BAE0C0 Unknown0C;
    char Unknown18[0x5A];
};

// FUNCTION: 0x10C223E0 ?FUN_10c223e0@Class_10C223E0@@QAEXXZ
void Class_10C223E0::FUN_10c223e0()
{
    for (int i = 0; i < 0x5A; i++)
        Unknown18[i] = 0;
    Unknown0C.m_Count = 0;
    Unknown0C.Empty();
}
