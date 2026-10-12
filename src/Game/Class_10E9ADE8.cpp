// Game/MC_Follow.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class MC_Follow
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int GetStateFromFlags();

    char Unknown04[0x14];
    unsigned int m_Flags;
};

// FUNCTION: 0x10C27140 ?GetStateFromFlags@MC_Follow@@UAEHXZ
int MC_Follow::GetStateFromFlags()
{
    unsigned int Flags = m_Flags;
    if (Flags & 0x2)
        return 0x15;
    if (Flags & 0x1)
        return 0x16;
    if (Flags & 0x4)
        return 0x14;
    if (Flags & 0x1000)
        return 0x1a;
    if (Flags & 0x2000)
        return 0x1b;
    if (Flags & 0x4000)
        return 0x18;
    return (Flags & 0x8000) ? 0x19 : 0x15;
}
