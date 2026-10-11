// Game/Unsorted_10932B60_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

Class_10905A90_Member* FUN_10905aa0();

extern const char DAT_10e47660[];

Class_109081E0 FUN_10932a70(const char* Param1);

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

struct Node_10932350
{
    char Pad00[0x9C];
    int Unknown9C;
    char Pad0A0[0x10];
    char* UnknownB0;
};

class Class_10932760
{
public:
    Node_10932350* FUN_10932760();
};

extern Class_10932760 DAT_10f31bb8;

class Class_10E4A668
{
public:
    void FUN_10944a80(Node_10932350* A);
};

// FUNCTION: 0x10932C50 ?FUN_10932c50@@YAHABVClass_109081E0@@PAVClass_10E4A668@@@Z
int FUN_10932c50(const Class_109081E0& Param1, Class_10E4A668* B)
{
    Node_10932350* Node = DAT_10f31bb8.FUN_10932760();
    if (Node)
    {
        Node->Unknown9C = 1;
        Class_109081E0 Name = FUN_10932a70(*Param1);
        int Tag = 0;
        int Length = Name.Unknown00 == 0 ? 0 : ((int*)Name.Unknown00)[-1];
        char* Buffer = (char*)::operator new(Length + 1, Tag, 0, 0, 0, 0);
        Node->UnknownB0 = Buffer;
        const char* Src = *Name;
        char* Dst = Buffer;
        char C;
        do
        {
            C = *Src++;
            *Dst++ = C;
        } while (C != 0);
        B->FUN_10944a80(Node);
    }
    return (int)Node;
}
