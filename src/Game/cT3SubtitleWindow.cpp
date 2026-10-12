// Game/cT3SubtitleWindow.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Config.h"
#include "Game/Class_10AF7F80.h"

class Class_10E80798
{
public:
    virtual void Virtual0();
    void FUN_10a65730(Class_10AF7F80* File, Class_10AF7F80* Section);
};

class cT3SubtitleWindow : public Class_10E80798
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section);

    char Unknown04[0x1DC];
    bool CalculateFixedCenter;
    float SubtitleCharsPerSecond;
    float SubtitleEndPauseSeconds;
    float MinSubtitleDuration;
    int NumLinesToShow;
};

// FUNCTION: 0x10B2A7D0 ?LoadConfig@cT3SubtitleWindow@@UAEXPAVClass_10AF7F80@@0@Z
void cT3SubtitleWindow::LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section)
{
    FUN_10a65730(File, Section);
    Config::Instance()->GetFloat("Cadence", "SubtitleCharsPerSecond", &SubtitleCharsPerSecond, 0);
    Config::Instance()->GetFloat("Cadence", "SubtitleEndPauseSeconds", &SubtitleEndPauseSeconds, 0);
    Config::Instance()->GetFloat("Cadence", "MinSubtitleDuration", &MinSubtitleDuration, 0);
    Config::Instance()->GetBool(Section->FUN_10af7f80(), "CalculateFixedCenter", &CalculateFixedCenter, File->FUN_10af7f80());
    Config::Instance()->FUN_10910a20(Section->FUN_10af7f80(), "NumLinesToShow", &NumLinesToShow, (int)File->FUN_10af7f80());
}
