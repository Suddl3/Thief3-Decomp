// Game/cBoneAimController.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cBoneAimController.h"

struct Struct_10A2C2F0_Unknown10
{
    void* Unknown00;
    char Unknown04[0x18];
    int Unknown1C;
    char Unknown20[0x5E];
    bool Unknown7E;
    char Unknown7F[0x31];
};

// FUNCTION: 0x10A2C200 ?FUN_10a2c200@cBoneAimController@@QAEXPAXPAH@Z
void cBoneAimController::FUN_10a2c200(void* A, int* B)
{
    for (int i = 0; i < Unknown08; i++)
    {
        if (m_Entries[i].Unknown00 == A && m_Entries[i].Unknown1C == *B)
        {
            m_Entries[i].Unknown7E = true;
            return;
        }
    }
}

// FUNCTION: 0x10A2C250 ?FUN_10a2c250@cBoneAimController@@QAEXPAXPAH@Z
void cBoneAimController::FUN_10a2c250(void* A, int* B)
{
    for (int i = 0; i < Unknown08; i++)
    {
        if (m_Entries[i].Unknown00 == A && m_Entries[i].Unknown1C == *B)
        {
            m_Entries[i].Unknown7E = false;
            return;
        }
    }
}
