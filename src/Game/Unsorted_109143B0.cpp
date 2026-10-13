// Game/Unsorted_109143B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/cString.h"
#include "Game/Class_10AB37C0.h"
#include "Game/Class_10914D70.h"

class Class_10AA9DA0
{
public:
    void* FUN_10aa9da0();
    bool FUN_10914470(cString& Name, unsigned char& Found);

    char Unknown00[0x4];
    int Unknown04;
    char Unknown08[0x4];
    Class_10AB37C0** Unknown0C;
    void* Unknown10;
};

// FUNCTION: 0x10914470 ?FUN_10914470@Class_10AA9DA0@@QAE_NAAVcString@@AAE@Z
bool Class_10AA9DA0::FUN_10914470(cString& Name, unsigned char& Found)
{
    Found = false;
    for (int i = 0; i < Unknown04; i++)
    {
        cString* Record = (cString*)Unknown0C[i]->GetName();
        if (strcmp(**Record, *Name) == 0)
        {
            Found = ((Class_10914D70*)Unknown0C[i])->GetField09();
            return true;
        }
    }
    return false;
}
