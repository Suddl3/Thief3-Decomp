// Game/cMovieSubtitles_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A55090.h"

class cMovieSubtitles
{
public:
    void UpdateSecond(float A);

    char Unknown00[0x134];
    Class_10A55090* Unknown134;
    char Unknown138[4];
    float Unknown13C;
    int Unknown140;
};

// FUNCTION: 0x10B31520 ?UpdateSecond@cMovieSubtitles@@QAEXM@Z
void cMovieSubtitles::UpdateSecond(float A)
{
    Unknown13C += A;
    if (Unknown13C >= 1.0f)
    {
        Unknown13C = 0.0f;
        if (Unknown134)
            Unknown134->FUN_10a55090(Unknown140);
    }
}
