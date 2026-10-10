// Game/Unsorted_10AAE8B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class IDirectInput8A;

extern int DAT_10f3a374;

extern IDirectInput8A* DAT_10f3a36c;

extern char DAT_10eb840c[];

extern const char DAT_10e6dc68[];

extern const char DAT_10e6dc48[];

extern float DAT_10e49684;

extern "C" int __stdcall DirectInput8Create(int Instance, unsigned int Version, void* Iid, IDirectInput8A** Out, void* Outer);

class Config
{
public:
    static Config* Instance();

    bool GetFloat(const char* Section, const char* Key, float* Value, const char* File);
};

class Class_10E6DC54
{
public:
    bool FUN_10aaeb70(int A, float* Out);
    unsigned char FUN_10aae350(int A);
    void FUN_10aaeb00();

    char Unknown00[0x808];
    float Unknown808;
    float Unknown80C;
};

// FUNCTION: 0x10AAEB00 ?FUN_10aaeb00@Class_10E6DC54@@QAEXXZ
void Class_10E6DC54::FUN_10aaeb00()
{
    int Result = DirectInput8Create(DAT_10f3a374, 0x800, DAT_10eb840c, &DAT_10f3a36c, 0);
    if (Result < 0)
        DAT_10f3a36c = 0;
    if (Config::Instance()->GetFloat(DAT_10e6dc48, DAT_10e6dc68, &Unknown808, 0))
        Unknown80C = DAT_10e49684 / (DAT_10e49684 - Unknown808);
}

// FUNCTION: 0x10AAEB70 ?FUN_10aaeb70@Class_10E6DC54@@QAE_NHPAM@Z
bool Class_10E6DC54::FUN_10aaeb70(int A, float* Out)
{
    if ((A >= 200 && A <= 215) || (A >= 240 && A <= 243))
    {
        *Out = FUN_10aae350(A) * 0.003921569f;
        return true;
    }
    *Out = 0.0f;
    return false;
}
