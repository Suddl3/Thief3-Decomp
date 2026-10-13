// Game/CadenceManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C80360.h"
#include "Game/CadenceManager.h"
#include "Game/TimeManager.h"
#include "Game/Class_10C562C0.h"
#include "Game/Struct_10C3F0E0.h"
#include "Game/Class_10C3F110.h"
#include "Game/Class_10C3D050.h"
#include "Game/Class_10C3D0D0.h"
#include "Game/Class_10C3D340.h"
#include "Game/Class_10C3D350.h"
#include "Game/Class_10C3D3B0.h"
#include "Game/Class_10C3D3C0.h"
#include "Game/Class_10C3D3E0.h"
#include "Game/Class_10C3D3F0.h"
#include "Game/Class_10C3D420.h"
#include "Game/Class_10C3D440.h"
#include "Game/Class_10C3D560.h"
#include "Game/Class_10C3DD60.h"
#include "Game/Class_10C3DFE0.h"
#include "Game/Class_10C3F170.h"
#include "Game/Class_10E9B580.h"

class Class_10C41420
{
public:
    void FUN_10c462c0(float A);
};

Class_10C41420* GetSoundBufferPool();

Class_10C562C0* FUN_10c562c0();

Class_10C80360* FUN_10c5f280();

// FUNCTION: 0x10C3EFF0 ?Update@CadenceManager@@UAEXM@Z
void CadenceManager::Update(float Dt)
{
    Dt = (TimeManager::Instance()->FUN_10d3edc0() + Dt) / TimeManager::Instance()->GetTimeScale();
    GetSoundBufferPool()->FUN_10c462c0(Dt);
    FUN_10c562c0()->FUN_10c56780(Dt);
    FUN_10c5f280()->FUN_10c5dc60(Dt);
}

// FUNCTION: 0x10C3F0E0 ?GetPosition@CadenceManager@@UAE?AUStruct_10C3F0E0@@XZ
Struct_10C3F0E0 CadenceManager::GetPosition()
{
    return m_Position;
}

// FUNCTION: 0x10C3F100 ?FUN_10c3f100@CadenceManager@@UAEXE@Z
void CadenceManager::FUN_10c3f100(unsigned char param)
{
    Unknown28 = param;
    Unknown29 = 1;
}

// FUNCTION: 0x10C3F180 ?FUN_10c3f180@CadenceManager@@UAEEXZ
unsigned char CadenceManager::FUN_10c3f180()
{
    return FUN_10c5f280()->FUN_10c80360();
}

// FUNCTION: 0x10C3F1F0 ?FUN_10c3f1f0@CadenceManager@@QAEEXZ
unsigned char CadenceManager::FUN_10c3f1f0()
{
    return Field21;
}

// FUNCTION: 0x10C3F260 ?FUN_10c3f260@CadenceManager@@QAEEXZ
unsigned char CadenceManager::FUN_10c3f260()
{
    return Field22;
}
