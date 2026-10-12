// Game/Unsorted_10A50780.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/FArchive.h"

// FUNCTION: 0x10A50780 ?SerializeRecord@@YAPAVFArchive@@PAV1@PAH@Z
FArchive* SerializeRecord(FArchive* Ar, int* Data)
{
    int Key = *Data;
    Ar->Serialize(&Key, 4);
    if (Ar->Unknown14)
        *Data = Key;
    Ar->Serialize(&Data[1], 4);
    Ar->Serialize(&Data[3], 4);
    Ar->Serialize(&Data[4], 4);
    Ar->Serialize(&Data[5], 4);
    Ar->Serialize(&Data[6], 4);
    Ar->Serialize(&Data[7], 4);
    Ar->Serialize(&Data[8], 4);
    int Tmp = Data[2];
    Ar->Serialize(&Tmp, 4);
    if (Ar->Unknown14)
        Data[2] = Tmp;
    return Ar;
}
