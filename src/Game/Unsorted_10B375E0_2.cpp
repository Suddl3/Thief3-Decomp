// Game/Unsorted_10B375E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B375E0.h"
#include "Game/Class_10F3A3D8.h"

class Class_10B1D500
{
public:
    void SetActive(bool A, bool B);
};

extern Class_10F3A3D8* DAT_10f3a3d8;

struct Struct_10B375E0
{
    char Unknown00[4];
    bool Unknown04;
};

// FUNCTION: 0x10B375E0 ?Activate@Class_10B375E0@@QAEXHPAUStruct_10B375E0@@H@Z
void Class_10B375E0::Activate(int A, Struct_10B375E0* B, int C)
{
    bool Flag = true;
    if (B != (Struct_10B375E0*)-1)
        Flag = B->Unknown04;
    DAT_10f3a3d8->Unknown0C->SetActive(true, Flag);
}
