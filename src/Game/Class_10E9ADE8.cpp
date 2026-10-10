// Game/Unsorted_10C27140.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E9ADE8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int FUN_10c27140();

    char Unknown04[0x14];
    unsigned int Unknown18;
};

// FUNCTION: 0x10C27140 ?FUN_10c27140@Class_10E9ADE8@@UAEHXZ
int Class_10E9ADE8::FUN_10c27140()
{
    unsigned int Flags = Unknown18;
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
