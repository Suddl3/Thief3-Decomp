// Game/CadenceManager_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C3FF10.h"
#include "Game/Class_10C62A40.h"
#include "Game/Class_10C80360.h"
#include "Game/CadenceManager.h"
#include "Game/Class_10E9B5C0_Unknown1C.h"

class FVector
{
public:
    float X, Y, Z;
};

class Class_10C41420 : public Class_10C3FF10
{
public:
    void FUN_10c472d0(int A);
};

Class_10C41420* FUN_10c47d90();

Class_10C80360* FUN_10c5f280();

// FUNCTION: 0x10C3F220 ?FUN_10c3f220@CadenceManager@@UAEXE@Z
void CadenceManager::FUN_10c3f220(unsigned char A)
{
    FUN_10c47d90()->FUN_10c472d0(1);
    Unknown22 = A;
    FUN_10c5f280()->FUN_10c62a40(A);
    FUN_10c47d90()->FUN_10c3ff10(-1);
}
