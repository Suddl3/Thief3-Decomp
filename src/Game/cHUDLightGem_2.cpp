// Game/cHUDLightGem_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/cIntArray.h"

// Game/Class_10E67FD0.h makes the base 0x150 bytes, past this class's fields at 0x128: the base is declared here by its vtable only.
class Class_10E67FD0
{
public:
    virtual ~Class_10E67FD0();
};

struct Struct_10C08690;

class cHUDLightGem : public Class_10E67FD0
{
public:
    virtual ~cHUDLightGem();
    void ReleaseGems();

    char Unknown04[0x124];
    cString Unknown128;
    cIntArray m_Gems;
};

// FUNCTION: 0x10B55110 ??1cHUDLightGem@@UAE@XZ
cHUDLightGem::~cHUDLightGem()
{
    ReleaseGems();
}
