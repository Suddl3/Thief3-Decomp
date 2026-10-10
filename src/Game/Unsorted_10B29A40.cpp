// Game/Unsorted_10B29A40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10AF7F80
{
public:
    const char* FUN_10af7f80();
};

class Config
{
public:
    static Config* Instance();

    bool GetFloat(const char* Section, const char* Key, float* Value, const char* File);
};

class Class_10E80798
{
public:
    void FUN_10b2a100(Class_10AF7F80* File, Class_10AF7F80* Section);
    void FUN_10a65730(Class_10AF7F80* File, Class_10AF7F80* Section);

    char Unknown00[0x1e0];
    float FadeTime;
    int Unknown1E4;
};

// FUNCTION: 0x10B2A100 ?FUN_10b2a100@Class_10E80798@@QAEXPAVClass_10AF7F80@@0@Z
void Class_10E80798::FUN_10b2a100(Class_10AF7F80* File, Class_10AF7F80* Section)
{
    FUN_10a65730(File, Section);
    bool Loaded = Config::Instance()->GetFloat(Section->FUN_10af7f80(), "FadeTime", &FadeTime, File->FUN_10af7f80());
    Unknown1E4 = 0;
    if (!Loaded)
        FadeTime = 1.0f;
}
