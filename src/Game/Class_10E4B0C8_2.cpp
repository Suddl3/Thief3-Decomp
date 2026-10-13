// Game/Class_10E4B0C8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

void FUN_10ad1dc0(void* Memory, unsigned int Size);

class Class_10E4B0C8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual Class_10E4B0C8* FUN_109616d0(unsigned int Flags);

    void FUN_10961640();
};

// FUNCTION: 0x109616D0 ?FUN_109616d0@Class_10E4B0C8@@UAEPAV1@I@Z
Class_10E4B0C8* Class_10E4B0C8::FUN_109616d0(unsigned int Flags)
{
    FUN_10961640();
    if (Flags & 1)
        FUN_10ad1dc0(this, 0x38);
    return this;
}
