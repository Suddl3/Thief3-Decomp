// Game/Unsorted_1097B0B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"

extern const char DAT_10e47660[];

Class_10905A90_Member* FUN_10905aa0();

class Class_109081E0 : public Class_1090A780
{
public:
    Class_109081E0() {}
    Class_109081E0(const char* In);
    Class_109081E0(const Class_109081E0& Other);
    Class_109081E0(const Class_1090A780& Other) : Class_1090A780(Other) {}
    ~Class_109081E0();

    void FUN_10907870(int Length, int Flag);
    Class_109081E0& operator=(const Class_109081E0& Other);
    Class_109081E0& FUN_1090a590(const char* In);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }
};

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr);

// A bucket entry (24 bytes).
struct Class_1097B240_Node
{
    Class_109081E0 Key;
    int Value;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    Class_1097B240_Node* Next;
};

class Class_1097B240
{
public:
    void FUN_1097b240(int Size);
    unsigned int FUN_109792b0(const Class_109081E0& Key, const int& Value);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
    Class_1097B240_Node** Unknown14;
};

// FUNCTION: 0x1097B240 ?FUN_1097b240@Class_1097B240@@QAEXH@Z
void Class_1097B240::FUN_1097b240(int Size)
{
    int OldSize = Unknown0C;
    Class_1097B240_Node** OldTable = Unknown14;
    Unknown14 = (Class_1097B240_Node**)operator new(Size * sizeof(Class_1097B240_Node*), 0, 0, 0, 0, 0);
    Unknown0C = Size;
    Unknown08 = 0;
    while (Size >>= 1)
        Unknown08++;
    Unknown04 = 0;
    Unknown00 = 0;
    for (int i = 0; i < Unknown0C; i++)
        Unknown14[i] = 0;
    for (int j = 0; j < OldSize; j++)
    {
        Class_1097B240_Node* Node = OldTable[j];
        while (Node)
        {
            FUN_109792b0(Node->Key, Node->Value);
            Class_1097B240_Node* Next = Node->Next;
            Node->Key.~Class_109081E0();
            ::operator delete(Node);
            Node = Next;
        }
    }
    ::operator delete(OldTable);
}
