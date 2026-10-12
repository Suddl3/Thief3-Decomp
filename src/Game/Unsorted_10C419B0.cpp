// Game/Unsorted_10C419B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <map>
#include "Game/Class_10C63AD0.h"
#include "Game/Class_10C63EE0.h"

class Class_10C41420
{
public:
    virtual void OnMessage(int A, int B, int C, int D);

    void FUN_10c41b10();
    void FUN_10c41ab0(bool Flag);

    char Unknown04[0x3C];
    std::map<int, Class_10C63AD0*> Unknown40;
};

// FUNCTION: 0x10C41AB0 ?FUN_10c41ab0@Class_10C41420@@QAEX_N@Z
void Class_10C41420::FUN_10c41ab0(bool Flag)
{
    for (std::map<int, Class_10C63AD0*>::iterator It = Unknown40.begin(); It != Unknown40.end(); ++It)
    {
        if (Flag || (It->second->FUN_10c63ee0() != 3 && It->second->FUN_10c63ee0() != 5))
            It->second->FUN_10daa100();
    }
}
