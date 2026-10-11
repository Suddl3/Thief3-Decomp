// Game/Class_10E6AEA0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Window.h"
#include "Game/Class_10AF7F80.h"

class Config
{
public:
    Config();
    ~Config();

    static Config* Instance();
    bool FUN_10910a20(const char* Section, const char* Key, int* Value, int D);
    bool GetBool(const char* Section, const char* Key, bool* Value, const char* File);
    bool GetFloat(const char* Section, const char* Key, float* Value, const char* File);
    bool GetString(const char* Section, const char* Key, char** Value, const char* File);

    char Pad00[0x1];
};

class Class_10E6AEA0 : public Window
{
public:
    virtual void LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section);
    virtual void Virtual110();
    virtual void Virtual111();
    virtual void Virtual112();

    char Unknown118[0x24];
    float BorderWidth;
    char* TextureMid;
    char* TextureCorner;
    char* TextureVert;
    char* TextureHoriz;
};

// FUNCTION: 0x10A66470 ?LoadConfig@Class_10E6AEA0@@UAEXPAVClass_10AF7F80@@0@Z
void Class_10E6AEA0::LoadConfig(Class_10AF7F80* File, Class_10AF7F80* Section)
{
    Window::LoadConfig(File, Section);
    Config::Instance()->GetFloat(Section->FUN_10af7f80(), "BorderWidth", &BorderWidth, File->FUN_10af7f80());
    Config::Instance()->GetString(Section->FUN_10af7f80(), "Texture_Mid", &TextureMid, File->FUN_10af7f80());
    Config::Instance()->GetString(Section->FUN_10af7f80(), "Texture_Corner", &TextureCorner, File->FUN_10af7f80());
    Config::Instance()->GetString(Section->FUN_10af7f80(), "Texture_Vert", &TextureVert, File->FUN_10af7f80());
    Config::Instance()->GetString(Section->FUN_10af7f80(), "Texture_Horiz", &TextureHoriz, File->FUN_10af7f80());
    Virtual112();
}
