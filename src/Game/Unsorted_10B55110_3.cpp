// Game/Unsorted_10B55110_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10939570.h"

// Game/Class_10E67FD0.h makes the base 0x150 bytes, past this class's fields at 0x128: the base is declared here by its vtable only.
class Class_10E67FD0
{
public:
    virtual ~Class_10E67FD0();
};

class Class_10E7FD18 : public Class_10E67FD0
{
public:
    virtual ~Class_10E7FD18();
    void FUN_10b550c0();
    void FUN_10b55300();

    char Unknown04[0x124];
    Class_109081E0 Unknown128;
    Class_10BFBD70 Unknown12C;
};

extern Class_10939570* DAT_10f323fc;

void FUN_1093ee10(Class_109081E0* Out, const char* Format, ...);

// FUNCTION: 0x10B55300 ?FUN_10b55300@Class_10E7FD18@@QAEXXZ
void Class_10E7FD18::FUN_10b55300()
{
    FUN_10b550c0();
    int Gem = 0;
    Class_10BFBD70& Handles = Unknown12C;
    do
    {
        Class_109081E0 GemName;
        Gem++;
        FUN_1093ee10(&GemName, "HUDLightGem_%2.2d", Gem);
        void* Handle = DAT_10f323fc->FUN_1093bd40(reinterpret_cast<int*>(&GemName), 0, 0);
        int Index = Handles.Count;
        Handles.FUN_10bfbd70(Index + 1);
        Handles.Data[Index] = (int)Handle;
    } while (Gem < 16);
}
