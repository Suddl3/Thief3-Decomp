// Game/cBoneAimController_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10A2C2A0
{
    void* Unknown00;
    char Unknown04[0x18];
    int Unknown1C;
    char Unknown20[0x5D];
    char Unknown7D;
    char Unknown7E[0x32];
};

class cBoneAimController
{
public:
    void FUN_10a2c2a0(void* A, int* B);

    char Unknown00[8];
    int Unknown08;
    char Unknown0C[4];
    Struct_10A2C2A0* m_Entries;
};

// FUNCTION: 0x10A2C2A0 ?FUN_10a2c2a0@cBoneAimController@@QAEXPAXPAH@Z
void cBoneAimController::FUN_10a2c2a0(void* A, int* B)
{
    for (int i = 0; i < Unknown08; i++)
    {
        if (m_Entries[i].Unknown00 == A && m_Entries[i].Unknown1C == *B)
        {
            m_Entries[i].Unknown7D = 1;
            return;
        }
    }
}
