// Game/Class_10E9B5C0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C3FF10.h"
#include "Game/Class_10C62A40.h"
#include "Game/Class_10C80360.h"
#include "Game/Class_10E9B5C0.h"

class Class_10C41420 : public Class_10C3FF10
{
public:
    void FUN_10c472d0(int A);
};

Class_10C41420* FUN_10c47d90();

Class_10C80360* FUN_10c5f280();

class FVector
{
public:
    float X, Y, Z;
};

class Class_10E9B5C0_Unknown1C;

// FUNCTION: 0x10C3F190 ?FUN_10c3f190@Class_10E9B5C0@@UAEX_N@Z
void Class_10E9B5C0::FUN_10c3f190(bool A)
{
    FUN_10c47d90()->FUN_10c472d0(1);
    Unknown21 = A;
    if (A)
    {
        FUN_10c5f280()->FUN_10c5e810();
        FUN_10c47d90()->FUN_10c3ff10(-1);
        return;
    }
    FUN_10c5f280()->FUN_10c5daf0();
    FUN_10c47d90()->FUN_10c3ff10(-1);
}
