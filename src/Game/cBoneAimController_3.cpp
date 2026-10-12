// Game/cBoneAimController_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10A2C2F0
{
    void* Unknown00;
    char Unknown04[0x7C];
    int Unknown80;
    char Unknown84[0x2C];
};

class cBoneAimController
{
public:
    int FindEntry(void* A, void* B);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    Struct_10A2C2F0* m_Entries;
};

// FUNCTION: 0x10A2C2F0 ?FindEntry@cBoneAimController@@QAEHPAX0@Z
int cBoneAimController::FindEntry(void* A, void* B)
{
    for (int i = 0; i < Unknown08; i++)
    {
        if (m_Entries[i].Unknown00 == A && m_Entries[i].Unknown80 == *(int*)B)
            return (int)&m_Entries[i];
    }
    return 0;
}
