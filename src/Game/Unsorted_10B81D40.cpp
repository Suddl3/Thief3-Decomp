// Game/Unsorted_10B81D40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Deleting destructor of the class whose vtable is at 0x10E891C4:
// frees the object through the global allocator when the delete flag is set.
void FUN_10b81d70(void);

class Allocator_10FFA700
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Object, int Value, int Flag);
};

extern Allocator_10FFA700* DAT_10ffa700;

class Class_10E891C4
{
public:
    virtual Class_10E891C4* FUN_10b81d40(unsigned char Flags);

    unsigned short Unknown04;
};

// FUNCTION: 0x10B81D40 ?FUN_10b81d40@Class_10E891C4@@UAEPAV1@E@Z
Class_10E891C4* Class_10E891C4::FUN_10b81d40(unsigned char Flags)
{
    FUN_10b81d70();
    if (Flags & 1)
        DAT_10ffa700->Virtual5(this, Unknown04, 0xf);
    return this;
}
