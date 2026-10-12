// Game/Class_10E7FD18_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/cIntArray.h"
#include "Game/Class_10939570.h"

// Game/Class_10E67FD0.h makes the base 0x150 bytes, past this class's fields at 0x128: the base is declared here by its vtable only.
class Class_10E67FD0
{
public:
    virtual ~Class_10E67FD0();
};

class cHUDLightGem : public Class_10E67FD0
{
public:
    virtual ~cHUDLightGem();
    void ReleaseGems();
    void CreateGems();

    char Unknown04[0x124];
    cString Unknown128;
    cIntArray m_Gems;
};

extern Class_10939570* DAT_10f323fc;

void FormatString(cString* Out, const char* Format, ...);

// FUNCTION: 0x10B55300 ?CreateGems@cHUDLightGem@@QAEXXZ
void cHUDLightGem::CreateGems()
{
    ReleaseGems();
    int Gem = 0;
    cIntArray& Handles = m_Gems;
    do
    {
        cString GemName;
        Gem++;
        FormatString(&GemName, "HUDLightGem_%2.2d", Gem);
        void* Handle = DAT_10f323fc->FUN_1093bd40(reinterpret_cast<int*>(&GemName), 0, 0);
        int Index = Handles.Count;
        Handles.SetCount(Index + 1);
        Handles.Data[Index] = (int)Handle;
    } while (Gem < 16);
}
