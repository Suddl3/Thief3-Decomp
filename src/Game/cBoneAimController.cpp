// Game/cBoneAimController.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cBoneAimController.h"
#include "Core/Core.h"
#include "Game/Class_10A2C350.h"
#include "Game/Struct_10A2C500.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A2C610.h"

struct Struct_10A2C2F0_Unknown10
{
    void* Unknown00;
    char Unknown04[0x18];
    int Unknown1C;
    char Unknown20[0x5E];
    bool Unknown7E;
    char Unknown7F[0x31];
};

extern float DAT_10eafbdc;

struct Struct_10A2C580
{
    char Unknown00[8];
    void* Unknown08;
    char Unknown0C[0x71];
    char Unknown7D;
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

// FUNCTION: 0x10A2C500 ?FUN_10a2c500@cBoneAimController@@QAE_NPAX0@Z
bool cBoneAimController::FUN_10a2c500(void* A, void* B)
{
    Struct_10A2C500* Entry = (Struct_10A2C500*)FindEntry(A, B);
    if (Entry && !Entry->Unknown7D)
        return true;
    return false;
}

// FUNCTION: 0x10A2C530 ?IsAngleBelow@cBoneAimController@@QAE_NPAXPAHM@Z
bool cBoneAimController::IsAngleBelow(void* A, int* B, float C)
{
    Struct_10A2C500* Entry = (Struct_10A2C500*)FindEntry(A, B);
    if (Entry && !Entry->Unknown7D)
    {
        float Value = Entry->UnknownAC * 180.0f * 0.3183098861837907;
        if (!(Value >= DAT_10eafbdc))
            Value = -Value;
        if (Value < C)
            return true;
    }
    return false;
}

// FUNCTION: 0x10A2C580 ?FUN_10a2c580@cBoneAimController@@QAE_NPAX00@Z
bool cBoneAimController::FUN_10a2c580(void* A, void* B, void* C)
{
    Struct_10A2C580* Entry = (Struct_10A2C580*)FindEntry(A, C);
    if (Entry && !Entry->Unknown7D && Entry->Unknown08 == B)
        return true;
    return false;
}
