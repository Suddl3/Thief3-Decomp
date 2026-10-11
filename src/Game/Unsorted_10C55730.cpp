// Game/Unsorted_10C55730.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C54DA0
{
public:
    void FUN_10c54da0();

    char Pad00[0x14];
};

class Class_10C55730_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10C55730_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();

    char Pad04[0x4];
    Class_10C55730_Unknown08* Unknown08;
};

struct Struct_10C55730_Node1
{
    Struct_10C55730_Node1* Next;
    Struct_10C55730_Node1* Prev;
    Class_10C54DA0 Unknown08;
    Class_10C55730_Param* Unknown1C;
};

struct Struct_10C55730_Node2
{
    Struct_10C55730_Node2* Next;
    Struct_10C55730_Node2* Prev;
    Class_10C55730_Unknown08* Unknown08;
};

class Class_10E9C32C
{
public:
    virtual void FUN_10c55730(Class_10C55730_Param* Arg);

    char Pad04[0x18];
    Struct_10C55730_Node1* Unknown1C;
    int Unknown20;
    char Pad24[0xC];
    Struct_10C55730_Node2* Unknown30;
    int Unknown34;
    bool Unknown38;
};

// FUNCTION: 0x10C55730 ?FUN_10c55730@Class_10E9C32C@@UAEXPAVClass_10C55730_Param@@@Z
void Class_10E9C32C::FUN_10c55730(Class_10C55730_Param* Arg)
{
    Struct_10C55730_Node1* P = Unknown1C->Next;
    while (P != Unknown1C)
    {
        if (Arg)
            Arg->Virtual1();
        bool Match = P->Unknown1C == Arg;
        if (Arg)
            Arg->Virtual2();
        if (Match)
        {
            Struct_10C55730_Node1* Next = P->Next;
            if (P != Unknown1C)
            {
                P->Prev->Next = Next;
                P->Next->Prev = P->Prev;
                P->Unknown08.FUN_10c54da0();
                delete P;
                Unknown20--;
            }
            P = Next;
        }
        else
            P = P->Next;
    }
    if (!Unknown38)
    {
        Struct_10C55730_Node2* Q = Unknown30->Next;
        while (Q != Unknown30)
        {
            if (Q->Unknown08 == Arg->Unknown08)
            {
                Struct_10C55730_Node2* Next = Q->Next;
                if (Q != Unknown30)
                {
                    Q->Prev->Next = Next;
                    Q->Next->Prev = Q->Prev;
                    Class_10C55730_Unknown08* Obj = Q->Unknown08;
                    if (Obj)
                        Obj->Virtual2();
                    delete Q;
                    Unknown34--;
                }
                Q = Next;
            }
            else
                Q = Q->Next;
        }
    }
}
