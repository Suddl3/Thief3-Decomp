// Game/Unsorted_10C43D60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C43E90_Obj
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10C43E90_Iter;

class Class_10C43E90_Visitor
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(Class_10C43E90_Iter* It);
};

class Class_10C43E90_Node
{
public:
    char Unknown00[0xC];
    Class_10C43E90_Obj* Unknown0C;
    Class_10C43E90_Visitor* Unknown10;
};

class Class_10C43E90_Iter
{
public:
    Class_10C43E90_Node* Unknown00;
    int Unknown04;
};

class Class_10C56E40
{
public:
    ~Class_10C56E40()
    {
        if (Unknown00)
            Unknown00->Virtual2();
    }

    Class_10C43E90_Obj* Unknown00;
};

class Class_10C43E90_Map
{
public:
    void FUN_10c5cda0(Class_10C43E90_Iter* It, Class_10C56E40* Key);
    Class_10C43E90_Node** FUN_10c42540(int* Slot, Class_10C43E90_Node* Node);
};

class Class_10C43E90
{
public:
    void FUN_10c43e90(Class_10C56E40 Key);

    char Unknown00[0x4C];
    Class_10C43E90_Map Unknown4C;
    char Unknown4D[0x1B];
    Class_10C43E90_Node* Unknown68;
};

// FUNCTION: 0x10C43E90 ?FUN_10c43e90@Class_10C43E90@@QAEXVClass_10C56E40@@@Z
void Class_10C43E90::FUN_10c43e90(Class_10C56E40 Key)
{
    Class_10C43E90_Iter It;
    Unknown4C.FUN_10c5cda0(&It, &Key);
    Class_10C43E90_Node* End = Unknown68;
    Class_10C43E90_Node* Node = It.Unknown00;
    if (Node != End)
    {
        do
        {
            if (Node->Unknown0C != Key.Unknown00)
                break;
            Class_10C43E90_Visitor* Visitor = Node->Unknown10;
            It.Unknown00 = 0;
            Visitor->Virtual3(&It);
            Node = *Unknown4C.FUN_10c42540(&It.Unknown04, Node);
        } while (Node != Unknown68);
    }
}
