// Game/cFade.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AF7F80.h"
#include "Game/Config.h"

class cFade
{
public:
    void LoadFadeTime(Class_10AF7F80* File, Class_10AF7F80* Section);
    void FUN_10a65730(Class_10AF7F80* File, Class_10AF7F80* Section);

    char Unknown00[0x1e0];
    float FadeTime;
    int m_FadeElapsed;
};

// FUNCTION: 0x10B2A100 ?LoadFadeTime@cFade@@QAEXPAVClass_10AF7F80@@0@Z
void cFade::LoadFadeTime(Class_10AF7F80* File, Class_10AF7F80* Section)
{
    FUN_10a65730(File, Section);
    bool Loaded = Config::Instance()->GetFloat(Section->FUN_10af7f80(), "FadeTime", &FadeTime, File->FUN_10af7f80());
    m_FadeElapsed = 0;
    if (!Loaded)
        FadeTime = 1.0f;
}
