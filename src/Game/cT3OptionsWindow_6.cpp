// Game/cT3OptionsWindow_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B73900_Unknown188.h"
#include "Game/Class_10B73900_Unknown1CC.h"

class Class_10B73810
{
public:
    void FUN_10b73810();
};

class Class_10B781E0 : public Class_10B73810
{
public:
    void FUN_10b781e0();
};

class cT3OptionsWindow : public Class_10B781E0
{
public:
    void FUN_10b73900();

    char Unknown00[0x188];
    Class_10B73900_Unknown188* Unknown188;
    char Unknown18C[0x40];
    Class_10B73900_Unknown1CC* Unknown1CC;
};

// FUNCTION: 0x10B73900 ?FUN_10b73900@cT3OptionsWindow@@QAEXXZ
void cT3OptionsWindow::FUN_10b73900()
{
    if (Unknown1CC)
    {
        switch (Unknown1CC->Unknown12C)
        {
        case 0:
            FUN_10b73810();
            break;
        case 1:
            if (Unknown188)
            {
                Unknown188->Virtual121(0);
                Unknown188->Unknown1F4 = Unknown188->Unknown1F0;
            }
            break;
        case 2:
            FUN_10b781e0();
            break;
        }
    }
}
