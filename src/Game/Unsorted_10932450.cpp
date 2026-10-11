// Game/Unsorted_10932450.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10932350.h"
#include "Game/Class_10932760.h"

class Item_10943600;

Class_10905A90_Member* FUN_10905aa0();

class Class_10943600
{
public:
    ~Class_10943600()
    {
        Empty();
    }

    int FUN_10943600(const Item_10943600* Item);
    void FUN_10da4f50(int NewCount);
    void Empty()
    {
        FUN_10da4f50(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    Item_10943600* Unknown08;
};

class Class_10E49D14
{
public:
    virtual ~Class_10E49D14();

    void FUN_10954ce0();

    char Unknown04[0xB4];
    Class_10943600 Unknown0B8;
    Class_10943600 Unknown0C4;
};

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

struct Node_10932350
{
    char Unknown00[0xA8];
    Node_10932350* UnknownA8;
    Node_10932350* UnknownAC;
};

class Class_109324C0 : public Node_10932350
{
public:
    Class_109324C0();

    char Unknown0B0[0x20];
};

// FUNCTION: 0x10932690 ??_GClass_10E49D14@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x109326B0's definition in this unit.

// FUNCTION: 0x109326B0 ??1Class_10E49D14@@UAE@XZ
Class_10E49D14::~Class_10E49D14()
{
    FUN_10954ce0();
}

// FUNCTION: 0x10932760 ?FUN_10932760@Class_10932760@@QAEPAUNode_10932350@@XZ
Node_10932350* Class_10932760::FUN_10932760()
{
    Node_10932350* Node = Unknown0C.Unknown00;
    if (Node)
        Unknown0C.FUN_10932350(Node);
    FUN_10905aa0()->Virtual8(0, 0);
    if (!Node)
    {
        Node = new(0, 0, 0, 0, 0) Class_109324C0;
    }
    FUN_10905aa0()->Virtual9();
    if (Node)
    {
        Node_10932350* Last = Unknown04;
        Unknown04 = Node;
        if (!Last)
            Unknown00 = Node;
        else
            Last->UnknownAC = Node;
        Node->UnknownA8 = Last;
        Node->UnknownAC = 0;
        Unknown08++;
    }
    return Node;
}
