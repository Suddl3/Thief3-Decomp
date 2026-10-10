// Game/Unsorted_10BB7620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BC9D40
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
};

class Class_10B9CAC0
{
public:
    Class_10BC9D40* FUN_10b9cac0();
};

class Class_10BAA8A0
{
public:
    Class_10B9CAC0* FUN_10baa750();
};

class Class_10BB7620
{
public:
    bool FUN_10bb7620();

    char Unknown00[4];
    int Unknown04;
    char Unknown08[4];
    Class_10BAA8A0* Unknown0C;
};

// FUNCTION: 0x10BB7620 ?FUN_10bb7620@Class_10BB7620@@QAE_NXZ
bool Class_10BB7620::FUN_10bb7620()
{
    if (Unknown04 == 3)
        return false;
    if (Unknown04 == 0)
        return true;
    if (Unknown0C)
    {
        Class_10B9CAC0* P = Unknown0C->FUN_10baa750();
        if (P)
        {
            if (P->FUN_10b9cac0())
            {
                if (P->FUN_10b9cac0()->Virtual3() == 1)
                    return false;
            }
        }
    }
    return true;
}
