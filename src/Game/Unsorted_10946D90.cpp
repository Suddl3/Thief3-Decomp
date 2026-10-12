// Game/Unsorted_10946D90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10946D90.h"

extern float DAT_10e4a750;

struct Struct_10946D90_Plane
{
    float X;
    float Y;
    float Z;
    float W;
};

struct Struct_10946D90_Node
{
    int Flags;
    int Next;
    int Unknown08;
    char Unknown0C[0x18];
};

// FUNCTION: 0x10946D90 ?CollectInSphere@Class_10946D90@@QAEXPAMMPAH1I@Z
void Class_10946D90::CollectInSphere(float* Point, float Radius, int* Out, int* Count, unsigned int Index)
{
    while (Index != 0xffffffff)
    {
        Struct_10946D90_Node* Node = &m_Nodes[Index];
        Struct_10946D90_Plane* Plane = &m_Planes[Node->Flags >> 2];
        float Dist = Plane->Z * Point[2] + Plane->Y * Point[1] + Point[0] * Plane->X + Plane->W;
        if (Dist - Radius < DAT_10e4a750)
        {
            if (Node->Flags & 2)
            {
                Out[*Count] = Node->Unknown08;
                (*Count)++;
            }
            else
                CollectInSphere(Point, Radius, Out, Count, Node->Unknown08);
        }
        if (!(Dist + Radius > DAT_10e4a750))
            return;
        if (Node->Flags & 1)
        {
            Out[*Count] = Node->Next;
            (*Count)++;
            break;
        }
        Index = Node->Next;
    }
}
