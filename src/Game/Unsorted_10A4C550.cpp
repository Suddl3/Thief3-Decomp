// Game/Unsorted_10A4C550.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern int DAT_10f3a084;

class Class_10BFBD70;

class Class_10E67938;

struct Struct_10A4C940_Owner
{
    char Unknown00[8];
    Class_10E67938* Unknown08;
};

struct Struct_10A4C940_Node
{
    Struct_10A4C940_Node* Unknown00;
    Struct_10A4C940_Node* Unknown04;
    unsigned int Unknown08;
    Struct_10A4C940_Owner* Unknown0C;
};

class Class_10A4C550_Iterator
{
public:
    Class_10A4C550_Iterator() {}

    Struct_10A4C940_Node* Unknown00;
};

class Class_10A4C550
{
public:
    Class_10A4C550_Iterator FUN_10a4c550(const unsigned int& Key);
};

extern Class_10A4C550 DAT_10f3a068;

class Class_10E67938
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual bool FUN_10a4c4d0(int A);
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void FUN_10a4c500(Class_10BFBD70* Array);
    virtual Struct_10A4C940_Owner* FUN_10a4c940(unsigned int Key);
};

// FUNCTION: 0x10A4C940 ?FUN_10a4c940@Class_10E67938@@UAEPAUStruct_10A4C940_Owner@@I@Z
Struct_10A4C940_Owner* Class_10E67938::FUN_10a4c940(unsigned int Key)
{
    Class_10A4C550_Iterator It = DAT_10f3a068.FUN_10a4c550(Key);
    for (Struct_10A4C940_Node* Node = It.Unknown00;
         Node != (Struct_10A4C940_Node*)DAT_10f3a084; Node = Node->Unknown00)
    {
        if (Node->Unknown08 != Key)
            break;
        Struct_10A4C940_Owner* Owner = Node->Unknown0C;
        if (Owner->Unknown08 == this)
            return Owner;
    }
    return 0;
}
