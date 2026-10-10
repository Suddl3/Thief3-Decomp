// Game/Unsorted_10932F00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10932F40_Item
{
public:
    virtual ~Class_10932F40_Item();
};

class Class_10E49D44
{
public:
    void FUN_10932f40();

    char Unknown00[0xC];
    unsigned int Unknown0C;
    Class_10932F40_Item** Unknown10;
};

// FUNCTION: 0x10932F40 ?FUN_10932f40@Class_10E49D44@@QAEXXZ
void Class_10E49D44::FUN_10932f40()
{
    if (Unknown10)
    {
        for (unsigned int i = 0; i < Unknown0C; i++)
        {
            delete Unknown10[i];
            Unknown10[i] = 0;
        }
        delete Unknown10;
        Unknown10 = 0;
        Unknown0C = 0;
    }
}
