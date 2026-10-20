// Game/Class_10E99350_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10E99340.h"
#include "Game/Class_10E99348.h"

extern void* DAT_10e99350[];

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E99350
{
public:
    Class_10E99350(int Value);

    void* Unknown00;
    int Unknown04;
    cIntArray m_Objects;
    int Unknown14;
};

// FUNCTION: 0x10C27540 ??0Class_10E99350@@QAE@H@Z
Class_10E99350::Class_10E99350(int Value) : Unknown00(DAT_10e99350), Unknown04(0), m_Objects(), Unknown14(Value)
{
    GetAllocator()->Virtual8(0, 0);
    int Tag = 0;
    Class_10E99340* First = new(Tag, 0, 0, 0, 0) Class_10E99340;
    cIntArray* List = &m_Objects;
    int Index = List->Count;
    List->SetCount(Index + 1);
    List->Data[Index] = (int)First;
    Class_10E99348* Second = new(0, 0, 0, 0, 0) Class_10E99348;
    Index = List->Count;
    List->SetCount(Index + 1);
    List->Data[Index] = (int)Second;
    GetAllocator()->Virtual9();
}
