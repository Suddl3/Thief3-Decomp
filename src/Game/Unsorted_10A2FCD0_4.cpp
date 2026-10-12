// Game/Unsorted_10A2FCD0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// Ion Storm's growable array (0x10A30530): count, capacity, block.
class Class_10A30530
{
public:
    Class_10A30530() : m_Count(0), m_CapacityBytes(0), m_Data(0) {}

    int m_Count;
    int m_CapacityBytes;
    void* m_Data;
};

class Class_10E663B4
{
public:
    Class_10E663B4() : Unknown10(false) {}

    virtual void Virtual0();

    Class_10A30530 Unknown04;
    bool Unknown10;
};

extern Class_10E663B4* DAT_10f39f38;

// FUNCTION: 0x10A30AB0 ?FUN_10a30ab0@@YAPAVClass_10E663B4@@XZ
Class_10E663B4* FUN_10a30ab0()
{
    if (DAT_10f39f38 == 0)
        DAT_10f39f38 = new(0, 0, 0, 0, 0) Class_10E663B4;
    return DAT_10f39f38;
}
