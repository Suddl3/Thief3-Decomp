// Game/Class_10E4B180_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

void FUN_10ad1dc0(void* Memory, unsigned int Size);

class Class_10E4B180
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual Class_10E4B180* FUN_10961870(unsigned int Flags);

    void FUN_10961800();
};

// FUNCTION: 0x10961870 ?FUN_10961870@Class_10E4B180@@UAEPAV1@I@Z
Class_10E4B180* Class_10E4B180::FUN_10961870(unsigned int Flags)
{
    FUN_10961800();
    if (Flags & 1)
        FUN_10ad1dc0(this, 0xac);
    return this;
}
