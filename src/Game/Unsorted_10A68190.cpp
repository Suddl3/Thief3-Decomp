// Game/Unsorted_10A68190.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B59770.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Struct_10B597B0.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_109EF3F0
{
public:
    Class_109EF3F0(int A, int B);

    char Pad00[0xb8];
};

class Class_10A68190_Param
{
public:
    char Pad00[0x190];
    int Unknown190;
};

extern Class_10B59770 DAT_10f3a12c;

// FUNCTION: 0x10A68190 ?FindOrAddIndex@@YAHH@Z
int FindOrAddIndex(int A)
{
    for (int i = 0; i < DAT_10f3a12c.Count; i++)
    {
        if (DAT_10f3a12c.Data[i].Unknown00 == A)
            return i;
    }
    Class_10A68190_Param* Param = (Class_10A68190_Param*)A;
    GetAllocator()->Virtual8(0, 0);
    Class_109EF3F0* Obj = new(0, 0, 0, 0, 0) Class_109EF3F0(A, Param->Unknown190);
    GetAllocator()->Virtual9();
    int Index = DAT_10f3a12c.Count;
    DAT_10f3a12c.Resize(Index + 1);
    DAT_10f3a12c.Data[Index].Unknown00 = A;
    DAT_10f3a12c.Data[Index].Unknown04 = (int)Obj;
    return Index;
}
