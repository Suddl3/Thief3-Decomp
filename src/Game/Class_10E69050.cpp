// Game/cSequence.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e69050[];

class cSequence
{
public:
    cSequence* Init();

    void** Unknown00;
    float Unknown04;
    int Unknown08;
    int m_Count;
    int Unknown10;
    int m_Items;
};

// FUNCTION: 0x10A58B90 ?Init@cSequence@@QAEPAV1@XZ
cSequence* cSequence::Init()
{
    Unknown04 = 1.0f;
    Unknown08 = 0;
    Unknown00 = DAT_10e69050;
    m_Count = 0;
    Unknown10 = 0;
    m_Items = 0;
    return this;
}
