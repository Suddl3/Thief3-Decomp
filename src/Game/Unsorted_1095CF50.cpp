// Game/Unsorted_1095CF50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_1095CAA0.h"
#include "Game/Class_1095CAA0.h"
#include "Game/Class_1095D090.h"

struct Struct_1095CEC0
{
    int Unknown00;
    Struct_1095CAA0* Unknown04;
    Struct_1095CAA0* Unknown08;
};

Struct_1095CEC0* FUN_1095cec0(void* Set, int A, int B);

// The items the set holds: three keys.
class Class_1095D090_Item
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

// The set: the items between Unknown08 and Unknown0C.
struct Struct_1095D090
{
    int Unknown00;
    int Unknown04;
    char* Unknown08;
    char* Unknown0C;
};

// The node of the map's tree: the item it stands for, its next and its children.
class Class_1095CF50_Node
{
public:
    int Unknown00;
    Class_1095D090_Item* Unknown04;
    Class_1095D090_Item* Unknown08;
    int Unknown0C;
    int Unknown10;
    Class_1095CF50_Node* Unknown14;
    Class_1095CF50_Node* Unknown18;
};

// The map: the root of each key's tree.
class Class_1095CF50_Map
{
public:
    char Unknown00[8];
    Class_1095CF50_Node** Unknown08;
    Class_1095CF50_Node** Unknown0C;
};

// The tree walk: the node whose keys are A and B, in either order.
static Class_1095CF50_Node* FindNode(Class_1095CF50_Node* Root, int A, int B)
{
    while (Root)
    {
        if (Root->Unknown0C == A)
        {
            if (Root->Unknown10 == B)
                return Root;
            Root = Root->Unknown14;
        }
        else
        {
            if (Root->Unknown0C == B)
                return Root;
            Root = Root->Unknown18;
        }
    }
    return 0;
}

// FUNCTION: 0x1095CF50 ?FUN_1095cf50@Class_1095D090@@QAEHPAUStruct_1095D090@@H@Z
int Class_1095D090::FUN_1095cf50(Struct_1095D090* Set, int Param2)
{
    Class_1095CF50_Map* Map = (Class_1095CF50_Map*)Param2;
    int Index = 0;
    char* Base = Set->Unknown08;
    while (Index < (!Base ? 0 : ((Set->Unknown0C - Base) >> 2)))
    {
        Class_1095D090_Item* Item = ((Class_1095D090_Item**)Base)[Index];
        int Found = 0;
        Class_1095CF50_Node* Node = FindNode(Map->Unknown08[Item->Unknown00], Item->Unknown00, Item->Unknown04);
        Class_1095D090_Item* Next = Node->Unknown04 == Item ? Node->Unknown08 : Node->Unknown04;
        if (!Next)
            Found++;
        Node = FindNode(Map->Unknown08[Item->Unknown04], Item->Unknown04, Item->Unknown08);
        Next = Node->Unknown04 == Item ? Node->Unknown08 : Node->Unknown04;
        if (!Next)
            Found++;
        Node = FindNode(Map->Unknown08[Item->Unknown08], Item->Unknown08, Item->Unknown00);
        Next = Node->Unknown04 == Item ? Node->Unknown08 : Node->Unknown04;
        if (!Next)
            Found++;
        if (Found > 1)
            return Index;
        Index++;
    }
    return -1;
}

// FUNCTION: 0x1095D210 ?FUN_1095d210@Class_1095CAA0@@QAE_NPAHPAX@Z
bool Class_1095CAA0::FUN_1095d210(int* Key, void* Set)
{
    bool Match;
    int B = Key[1];
    int A = Key[0];
    Struct_1095CEC0* Node = FUN_1095cec0(Set, A, B);
    Struct_1095CEC0* Node2;
    Struct_1095CEC0* Node3;
    int C;
    if ((Node->Unknown04 && (Match = Unknown24 >= 0 ? Node->Unknown04->Unknown10 == Unknown20 : Node->Unknown04->Unknown0C == Unknown20))
        || (Node->Unknown08 && (Match = Unknown24 >= 0 ? Node->Unknown08->Unknown10 == Unknown20 : Node->Unknown08->Unknown0C == Unknown20))
        || ((Node2 = FUN_1095cec0(Set, B, C = Key[2]))->Unknown04 && (Match = Unknown24 >= 0 ? Node2->Unknown04->Unknown10 == Unknown20 : Node2->Unknown04->Unknown0C == Unknown20))
        || FUN_1095caa0(Node2->Unknown08)
        || FUN_1095caa0((Node3 = FUN_1095cec0(Set, C, A))->Unknown04)
        || FUN_1095caa0(Node3->Unknown08))
        return true;
    return false;
}
