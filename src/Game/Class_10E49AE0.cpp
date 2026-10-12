// Game/Class_10E49AE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10929510.h"

class Class_10E49AE0
{
public:
    virtual void GetPixel(Struct_10929510* p1, int p2, int p3, int* p4);
};

// FUNCTION: 0x10929510 ?GetPixel@Class_10E49AE0@@UAEXPAUStruct_10929510@@HHPAH@Z
void Class_10E49AE0::GetPixel(Struct_10929510* p1, int p2, int p3, int* p4)
{
    *p4 = ((int*)(p1->Bits + p1->Pitch * p3))[p2];
}
