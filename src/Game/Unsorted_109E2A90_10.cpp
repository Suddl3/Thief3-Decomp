// Game/Unsorted_109E2A90_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_109E2A90_Node
{
    Struct_109E2A90_Node* Next;
    Struct_109E2A90_Node* Prev;
    int Unknown08;
};

class Class_109E2A90
{
public:
    void FUN_109e2a90(Struct_109E2A90_Node* Item);

    int Count;
    Struct_109E2A90_Node* Head;
    Struct_109E2A90_Node* Tail;
};

struct Struct_109E2AE0_Node
{
    Struct_109E2AE0_Node* Next;
};

struct Struct_109E2AE0_Item
{
    int Unknown00;
    Struct_109E2AE0_Node* Unknown04;
};

class Class_109E2AE0
{
public:
    void FUN_109e2ae0();

    char Unknown00[4];
    int Unknown04;
    char Unknown08[4];
    Struct_109E2AE0_Item** Unknown0C;
};

class Class_109E2BD0
{
public:
    int FUN_109e2bd0(int Value);

    char Unknown00[4];
    int Unknown04;
    char Unknown08[4];
    Class_109E2A90** Unknown0C;
};

class Class_10905A90_Member
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
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e5b2a8[];

class Class_10E5B2A8
{
public:
    Class_10E5B2A8()
    {
        VTable = DAT_10e5b2a8;
        Unknown04 = 0;
        Unknown08 = 0;
        Unknown0C = 0;
        Unknown10 = 0;
    }

    void** VTable;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
};

extern Class_10E5B2A8* DAT_10f35dbc;

class Class_10E5B2AC;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E5B2AC* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E5B2AC
{
public:
    virtual void FUN_109e3510(int Msg, int A, int B, int C);

    void FUN_109e32b0();
    void FUN_109e3320(int A, int B, int C);
    void FUN_109e3420(int A, int B, int C);
};

class FVector
{
public:
    float X, Y, Z;
};

// What FUN_10947090 returns: the record for the point, with a field at 0x30.
class Struct_10947090
{
public:
    char Unknown00[0x30];
    int Unknown30;
};

class Class_10947090
{
public:
    Struct_10947090* FUN_10947090(const FVector* Point);
};

class Class_10924100
{
public:
    char Unknown00[0xC];
    Class_10947090* Unknown0C;
};

extern Class_10924100* DAT_10f2c740;

// FUNCTION: 0x109E2A90 ?FUN_109e2a90@Class_109E2A90@@QAEXPAUStruct_109E2A90_Node@@@Z
void Class_109E2A90::FUN_109e2a90(Struct_109E2A90_Node* Item)
{
    if (Head == Item)
        Head = Item->Next;
    if (Tail == Item)
        Tail = Item->Prev;
    if (Item->Next)
        Item->Next->Prev = Item->Prev;
    if (Item->Prev)
        Item->Prev->Next = Item->Next;
    Item->Next = (Struct_109E2A90_Node*)-1;
    Item->Prev = (Struct_109E2A90_Node*)-1;
    Count--;
}

// FUNCTION: 0x109E2AE0 ?FUN_109e2ae0@Class_109E2AE0@@QAEXXZ
void Class_109E2AE0::FUN_109e2ae0()
{
    for (int i = 0; i < Unknown04; i++)
    {
        Struct_109E2AE0_Item* Item = Unknown0C[i];
        if (Item && Item->Unknown04)
        {
            Struct_109E2AE0_Node* Node = Item->Unknown04;
            do
            {
                Struct_109E2AE0_Node* Next = Node->Next;
                delete Node;
                Node = Next;
            } while (Node);
        }
        delete Unknown0C[i];
        Unknown0C[i] = 0;
    }
}

// FUNCTION: 0x109E2BD0 ?FUN_109e2bd0@Class_109E2BD0@@QAEHH@Z
int Class_109E2BD0::FUN_109e2bd0(int Value)
{
    for (int i = 0; i < Unknown04; i++)
    {
        Class_109E2A90* List = Unknown0C[i];
        if (List)
        {
            for (Struct_109E2A90_Node* Node = List->Head; Node; Node = Node->Next)
            {
                if (Node->Unknown08 == Value)
                    return i;
            }
        }
    }
    return -1;
}

// FUNCTION: 0x109E2C70 ?FUN_109e2c70@@YAPAVClass_10E5B2A8@@XZ
Class_10E5B2A8* FUN_109e2c70()
{
    if (DAT_10f35dbc == 0)
    {
        FUN_10905aa0()->Virtual8(0, 0);
        Class_10E5B2A8* Result = new(0, 0, 0, 0, 0) Class_10E5B2A8;
        DAT_10f35dbc = Result;
        FUN_10905aa0()->Virtual9();
    }
    return DAT_10f35dbc;
}

// FUNCTION: 0x109E32B0 ?FUN_109e32b0@Class_10E5B2AC@@QAEXXZ
void Class_10E5B2AC::FUN_109e32b0()
{
    if (DAT_10f46da0)
    {
        DAT_10f46da0->Virtual1(this, 0x24, -1, -1);
        DAT_10f46da0->Virtual1(this, 0x25, -1, -1);
        DAT_10f46da0->Virtual1(this, 5, -1, -1);
    }
}

// FUNCTION: 0x109E32F0 ?FUN_109e32f0@@YGHVFVector@@@Z
int __stdcall FUN_109e32f0(FVector Point)
{
    if (DAT_10f2c740 && DAT_10f2c740->Unknown0C)
    {
        Struct_10947090* Record = DAT_10f2c740->Unknown0C->FUN_10947090(&Point);
        if (Record)
            return Record->Unknown30;
    }
    return -1;
}
