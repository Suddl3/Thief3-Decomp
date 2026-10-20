// Game/Class_10E991C4_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10E99370.h"
#include "Game/Class_10E991C0.h"
#include "Game/Class_10C28280_Param.h"
#include "Game/Class_10E991C4.h"

class Class_10C28280_Param;

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10C1F760 ?FUN_10c28280@Class_10E991C4@@UAEXPAVClass_10C28280_Param@@@Z
void Class_10E991C4::FUN_10c28280(Class_10C28280_Param* Ar)
{
    Class_10E99370::FUN_10c28280(Ar);
    int Count = Unknown10.Count;
    Ar->Virtual1(&Count, 4);
    if (Ar->Unknown14)
        Unknown10.SetCount(Count);
    for (int i = 0; i < Count; i++)
    {
        if (Ar->Unknown14)
            Unknown10.Data[i] = (int)new(0, 0, 0, 0, 0) Class_10E991C0();
        ((Class_10E991C0*)Unknown10.Data[i])->Serialize(*(FArchive*)Ar);
    }
}
