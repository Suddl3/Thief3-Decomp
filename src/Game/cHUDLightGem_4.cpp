// Game/cHUDLightGem_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Window.h"
#include "Game/Config.h"
#include "Game/cString.h"
#include "Game/Class_10AF7F80.h"

class cHUDLightGem : public Window
{
public:
    virtual void LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section);
    void FUN_10b55030();
    void CreateGems();

    char Pad118[0x8];
    float MaxLightRange;
    char Pad124[0x4];
    cString GemMaterialBaseName;
};

// FUNCTION: 0x10B553B0 ?LoadConfig@cHUDLightGem@@UAEXPAVClass_10AF7F80@@0@Z
void cHUDLightGem::LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section)
{
    Window::LoadConfig(File, Section);
    if (!Config::Instance()->GetFloat(Section->operator*(), "MaxLightRange", &MaxLightRange, File->operator*()))
        MaxLightRange = 500.0f;
    if (!Config::Instance()->GetString(Section->operator*(), "GemMaterialBaseName", &GemMaterialBaseName.Unknown00, File->operator*()))
        GemMaterialBaseName.FUN_1090a590("HUDLightGem_");
    FUN_10b55030();
    CreateGems();
}
