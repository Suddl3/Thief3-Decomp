// Game/Unsorted_10B3E3C0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A3C2E0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B396B0.h"
#include "Game/Struct_10AA3520.h"

extern Struct_10AA3520* DAT_10f35dec;

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();
};

class cLockPickController : public Class_10AA82D0
{
public:
    void Reset();
    void ClearSlots(int A);

    char Unknown04[0x48];
    char m_ResetPending;
};

// FUNCTION: 0x10B3EA80 ?Reset@cLockPickController@@QAEXXZ
void cLockPickController::Reset()
{
    m_ResetPending = 0;
    ((Class_10B39530*)GetLinkedObject())->Play(0xb5, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    ((Class_10B396B0*)GetLinkedObject())->ResetHandler(0xb9);
    ((Class_10B396B0*)GetLinkedObject())->ResetHandler(0xb8);
    DAT_10f35dec->Unknown94->Reset();
    ClearSlots(4);
}
