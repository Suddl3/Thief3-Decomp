// Game/Unsorted_10B88870.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B88870.h"
#include "Game/Struct_10B88870.h"

extern "C" void* memcpy(void* Dest, const void* Src, unsigned Count);

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10B88870 ?SetChunk@Class_10B88870@@QAEXHPBXH@Z
void Class_10B88870::SetChunk(int Index, const void* Data, int Size)
{
    if (Size)
    {
        void* Block = operator new(Size, 0, 0, 0, 0, 0);
        Unknown00[Index].Unknown04 = Block;
        memcpy(Block, Data, Size);
        Unknown00[Index].Unknown00 = Size;
        Unknown00[Index].Unknown08 = true;
    }
}
