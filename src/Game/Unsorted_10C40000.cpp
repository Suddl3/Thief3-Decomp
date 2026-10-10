// Game/Unsorted_10C40000.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Object_10C40120
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

// FUNCTION: 0x10C40120 ?FUN_10c40120@@YAXPAPAVObject_10C40120@@00@Z
void FUN_10c40120(Object_10C40120** Begin, Object_10C40120** End, Object_10C40120** Src)
{
    for (; Begin != End; Begin++)
    {
        Object_10C40120* New = *Src;
        Object_10C40120* Old = *Begin;
        *Begin = New;
        if (New)
            New->Virtual1();
        if (Old)
            Old->Virtual2();
    }
}

// FUNCTION: 0x10C402A0 ?FUN_10c402a0@@YAPAPAVObject_10C40120@@PAPAV1@00@Z
Object_10C40120** FUN_10c402a0(Object_10C40120** Begin, Object_10C40120** End, Object_10C40120** Dest)
{
    if (Begin != End)
    {
        do
        {
            Object_10C40120* New = *Begin;
            Object_10C40120* Old = *Dest;
            *Dest = New;
            if (New)
                New->Virtual1();
            if (Old)
                Old->Virtual2();
            Begin++;
            Dest++;
        } while (Begin != End);
        return Dest;
    }
    return Dest;
}
