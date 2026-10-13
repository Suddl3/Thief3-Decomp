// Game/Unsorted_10BBB8D0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB10.h"
#include "Game/cIntArray.h"
#include "Game/Class_10BFF460.h"
#include "Game/Class_10C26E80.h"
#include "Game/Class_10C28570.h"
#include "Game/Class_10DBD510.h"
#include "Game/Class_10BFD710.h"
#include "Game/Class_10C276C0.h"

class Class_10C29540
{
public:
    void FUN_10c29540();
};

class Class_10BBB410
{
public:
    void FUN_10bb9f60(int A, int B);
    Class_10BFF460* GetCurrent();
    void CancelCurrent();
    void RemoveItem(int Item);
    int FUN_10bbb730();
    void FUN_10bb7c10();
    void UpdateReprimand();
    void FUN_10bb88a0();
    void FUN_10bbc590();
    void FUN_10bbb8d0();
    void FUN_10bb8ae0();
    void FUN_10bba260();
    void FUN_10bb8740();
    void Update();

    char Unknown00[8];
    Class_10DBD510* m_Owner;
    char Unknown0C[4];
    Class_10C29540* Unknown10;
    cIntArray Unknown14;
    char Unknown20[0xC];
    Class_10C28570* Unknown2C;
    Class_10BFD710 Unknown30;
    Class_10C276C0 Unknown94;
    Class_10BFF460* m_Current;
};

// FUNCTION: 0x10BBD0A0 ?Update@Class_10BBB410@@QAEXXZ
void Class_10BBB410::Update()
{
    if (((Class_10BBDB10*)m_Owner->FUN_10dbd510())->GetInt(0x40800544) == 0)
    {
        Unknown30.FUN_10bfd710();
        Unknown94.FUN_10c276c0();
        FUN_10bb7c10();
    }
    Unknown2C->Update();
    UpdateReprimand();
    if (m_Current)
    {
        if (m_Current->FUN_10bff460() != 1)
            CancelCurrent();
    }
    Class_10BFF460* Obj = m_Current;
    if (Obj && !Obj->FUN_10bff460())
    {
        void* P = Obj->FUN_10bff2a0();
        if (P)
            Unknown30.FUN_10bfcd40(P);
    }
    for (int i = 0; i < Unknown14.Count; i++)
        ((Class_10C26E80*)Unknown14.Data[i])->Update();
    FUN_10bb88a0();
    FUN_10bbc590();
    Unknown10->FUN_10c29540();
    FUN_10bbb8d0();
    FUN_10bb8ae0();
    FUN_10bba260();
    FUN_10bb8740();
}
