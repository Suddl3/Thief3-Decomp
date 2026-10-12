// Game/Unsorted_10C3F120.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C3F110.h"
#include "Game/Class_10C3FF10.h"
#include "Game/CadenceManager.h"

class Class_10C41420 : public Class_10C3FF10
{
public:
    void FUN_10c472d0(int A);
};

Class_10C41420* GetSoundBufferPool();

// FUNCTION: 0x10C3F120 ?FUN_10c3f120@Class_10C3F110@@QAEXHM@Z
void Class_10C3F110::FUN_10c3f120(int Index, float Value)
{
    Unknown2C[Index] = (int)(Value * 100.0f);
}

// FUNCTION: 0x10C3F140 ?FUN_10c3f140@CadenceManager@@UAEX_N@Z
void CadenceManager::FUN_10c3f140(bool A)
{
    GetSoundBufferPool()->FUN_10c472d0(1);
    Unknown20 = A;
    GetSoundBufferPool()->CommitPending(-1);
}
