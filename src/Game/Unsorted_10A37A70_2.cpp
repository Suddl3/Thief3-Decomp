// Game/Unsorted_10A37A70_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"
#include "Game/Class_10924E80.h"
#include "Game/Class_10E66530.h"
#include "Game/Class_10A37F30.h"
#include "Game/Class_10E666A0.h"
#include "Game/Struct_10A378B0.h"
#include "Game/cString.h"
#include "Engine/EngineClasses.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E666A0;

extern Class_10924E80* DAT_10f2c734;

class UClient
{
public:
    char Unknown00[0x70];
    float Unknown70;
};

extern UEngine* GEngine;

// FUNCTION: 0x10A37C10 ?Create@Class_10E666A0@@UAEPAVClass_10E66530@@H@Z
Class_10E66530* Class_10E666A0::Create(int A)
{
    return new(0, 0, 0, 0, 0) Class_10E66530(this, A);
}

// FUNCTION: 0x10A37F30 ?FUN_10a37f30@Class_10A37F30@@QAEXPAUStruct_10A378B0@@@Z
void Class_10A37F30::FUN_10a37f30(Struct_10A378B0* A)
{
    A->Unknown40 = false;
    DAT_10f2c734->RemoveItem(A->Unknown04);
    if (!Unknown59C)
    {
        GEngine->Client->Unknown70 = Virtual15();
        GEngine->Virtual35();
    }
}
