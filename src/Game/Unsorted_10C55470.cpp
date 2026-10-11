// Game/Unsorted_10C55470.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C56E40;

struct Struct_10C549A0;

struct Struct_10C549A0_Entry;

class Class_10C556D0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12(void* Arg);
};

class Class_10C556D0_Unknown1C
{
public:
    char Unknown00[8];
    Class_10C556D0_Unknown08* Unknown08;
};

class Class_10C55090
{
public:
    void FUN_10c55090();

    Class_10C55090* Unknown00;
    Class_10C55090* Unknown04;
    char Unknown08[0x14];
    Class_10C556D0_Unknown1C* Unknown1C;
};

class Class_10E9C330
{
public:
    virtual void Virtual0(Class_10C56E40 A);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void FUN_10c556d0();
    virtual void FUN_10c549a0(Struct_10C549A0* A);
    virtual void FUN_10c547b0(int p1);
    virtual void FUN_10c547d0();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void FUN_10c547f0(int p1);
    virtual void FUN_10c547e0();

    char Unknown04[0x1C];
    Class_10C55090* Unknown20;
    int Unknown24;
    char Unknown28[0x24];
    int Unknown4C;
    char Unknown50[4];
    Struct_10C549A0_Entry* Unknown54;
};

// FUNCTION: 0x10C556D0 ?FUN_10c556d0@Class_10E9C330@@UAEXXZ
void Class_10E9C330::FUN_10c556d0()
{
    Class_10C55090* Node = Unknown20->Unknown00;
    while (Node != Unknown20)
    {
        Node->Unknown1C->Unknown08->Virtual12(&Unknown04);
        Node->Unknown1C->Unknown08->Virtual10();
        Class_10C55090* Next = Node->Unknown00;
        if (Node != Unknown20)
        {
            Node->Unknown04->Unknown00 = Next;
            Node->Unknown00->Unknown04 = Node->Unknown04;
            Node->FUN_10c55090();
            delete Node;
            Unknown24--;
        }
        Node = Next;
    }
}
