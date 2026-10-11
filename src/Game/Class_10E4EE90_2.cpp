// Game/Class_10E4EE90_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

void FUN_10ad1dc0(void* Memory, unsigned int Size);

class Class_10E4EE90
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual Class_10E4EE90* FUN_1097d720(unsigned int Flags);

    void FUN_1097d750();
};

// FUNCTION: 0x1097D720 ?FUN_1097d720@Class_10E4EE90@@UAEPAV1@I@Z
Class_10E4EE90* Class_10E4EE90::FUN_1097d720(unsigned int Flags)
{
    FUN_1097d750();
    if (Flags & 1)
        FUN_10ad1dc0(this, 0x10c);
    return this;
}
