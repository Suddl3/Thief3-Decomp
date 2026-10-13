// Game/cMovieSubtitles_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10A55050.h"
#include "Game/Class_10A55080.h"
#include "Game/Class_10A55090.h"
#include "Game/Class_1091ABB0.h"

extern const char DAT_10e7bda0[];

cString FUN_10950e50(const cString& Text);

cString FUN_1090a660(const char* Format, ...);

class cMovieSubtitles
{
public:
    void LoadSubtitles();

    char Pad00[0x12C];
    Class_1091ABB0 Unknown12C;
    char Pad130[0x4];
    Class_10A55050* Unknown134;
    unsigned char Unknown138;
    char Pad139[0x3];
    float Unknown13C;
    int Unknown140;
};

// FUNCTION: 0x10B31850 ?LoadSubtitles@cMovieSubtitles@@QAEXXZ
void cMovieSubtitles::LoadSubtitles()
{
    if (Unknown134 == 0)
    {
        Unknown138 = 0;
        return;
    }
    cString Movie = FUN_10950e50(FUN_1090a660(DAT_10e7bda0, Unknown12C.FUN_1091abb0().Unknown00));
    ((Class_10A55050*)Unknown134)->FUN_10a55780((int)&Movie);
    ((Class_10A55080*)Unknown134)->FUN_10a55080(1);
    ((Class_10A55090*)Unknown134)->FUN_10a55090(0);
    Unknown140 = 0;
    Unknown13C = 1.0f;
}
