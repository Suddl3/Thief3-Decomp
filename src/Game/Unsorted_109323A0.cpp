// Game/Unsorted_109323A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_109323A0_Node.h"

struct Struct_109323A0_Entry
{
    char Unknown00[0xE4];
    int UnknownE4;
    int UnknownE8;
    int UnknownEC;
    int UnknownF0;
    int UnknownF4;
    int UnknownF8;
    int UnknownFC;
    int Unknown100;
    int Unknown104;
};

extern Struct_109323A0_Node* DAT_10f31bb8;

extern int DAT_10f31bd0;

extern Struct_109323A0_Entry** DAT_10f31bd8;

int GetMemoryUsage();

// FUNCTION: 0x109323A0 ?GetMemoryUsage@@YAHXZ
int GetMemoryUsage()
{
    Struct_109323A0_Node* Node = DAT_10f31bb8;
    int Total = 0;
    if (!Node)
        return Total;
    do
    {
        int Size = 0;
        if (!Node->Unknown40)
            Size = Node->Unknown04 * 32 + Node->Unknown0C * 2 + Node->Unknown14 * 2 + Node->Unknown1C * 16
                 + Node->UnknownB8 * 12 + Node->UnknownC4 * 12;
        Total += Size + sizeof(Struct_109323A0_Node);
        Node = Node->Next;
    } while (Node);
    for (int i = 0; i < DAT_10f31bd0; i++)
    {
        Struct_109323A0_Entry* Entry = DAT_10f31bd8[i];
        Total -= Entry->UnknownE4 * 32 + Entry->UnknownEC * 2 + Entry->UnknownFC * 2 + Entry->Unknown104 * 16;
    }
    return Total;
}
