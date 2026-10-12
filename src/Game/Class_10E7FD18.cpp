// Game/cHUDLightGem.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10939570.h"

class Class_10953590;

extern Class_10939570* DAT_10f323fc;

class Class_10E67FD0
{
public:
    virtual ~Class_10E67FD0();

    char Unknown04[0x114];
};

class cHUDLightGem : public Class_10E67FD0
{
public:
    virtual ~cHUDLightGem();

    void ReleaseGems();

    char Unknown118[0x14];
    int m_Gems;
    char Unknown130[4];
    Class_10953590** Unknown134;
};

// FUNCTION: 0x10B550C0 ?ReleaseGems@cHUDLightGem@@QAEXXZ
void cHUDLightGem::ReleaseGems()
{
    for (int i = 0; i < m_Gems; i++)
    {
        DAT_10f323fc->FUN_1093bce0(Unknown134[i]);
        Unknown134[i] = 0;
    }
    m_Gems = 0;
}
