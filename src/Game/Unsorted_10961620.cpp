// Game/Unsorted_10961620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

void FUN_10ad1dc0(void* Memory, int Size);

class Class_10E4B040
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual Class_10E4B040* FUN_10961620(unsigned int Flags);
    void FUN_109615b0();
};

// FUNCTION: 0x10961620 ?FUN_10961620@Class_10E4B040@@UAEPAV1@I@Z
Class_10E4B040* Class_10E4B040::FUN_10961620(unsigned int Flags)
{
    FUN_109615b0();
    if (Flags & 1)
        FUN_10ad1dc0(this, 0x30);
    return this;
}
