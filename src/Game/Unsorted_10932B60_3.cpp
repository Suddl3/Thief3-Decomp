// Game/Unsorted_10932B60_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_10932760.h"
#include "Game/Node_10932350.h"

Class_10905A90_Member* GetAllocator();

extern const char DAT_10e47660[];

cString FUN_10932a70(const char* Param1);

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern Class_10932760 DAT_10f31bb8;

class Class_10E4A668
{
public:
    void FUN_10944a80(Node_10932350* A);
};

// FUNCTION: 0x10932C50 ?CreateNamedEntry@@YAHABVcString@@PAVClass_10E4A668@@@Z
int CreateNamedEntry(const cString& Param1, Class_10E4A668* B)
{
    Node_10932350* Node = DAT_10f31bb8.Alloc();
    if (Node)
    {
        Node->Unknown9C = 1;
        cString Name = FUN_10932a70(*Param1);
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
