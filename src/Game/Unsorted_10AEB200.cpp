// Game/Unsorted_10AEB200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern "C" __declspec(dllimport) unsigned long __stdcall GetModuleFileNameA(void* Module, char* Name, unsigned long Size);

extern char DAT_10f3ec70[];

char* FUN_10af3640(const char* Str, int Ch);

int FUN_10af36e0(const char* A, const char* B);

void FUN_10af36f0(char* Dest, const char* Src);

// FUNCTION: 0x10AEB200 ?FUN_10aeb200@@YAHPBD@Z
int FUN_10aeb200(const char* Name)
{
    if (DAT_10f3ec70[0] == 0)
    {
        char Path[256];
        char* Str = Path;
        GetModuleFileNameA(0, Str, sizeof(Path));
        while (FUN_10af3640(Str, '\\'))
            Str = FUN_10af3640(Str, '\\') + 1;
        while (FUN_10af3640(Str, '/'))
            Str = FUN_10af3640(Str, '/') + 1;
        if (FUN_10af3640(Str, '.'))
            *FUN_10af3640(Str, '.') = 0;
        if (FUN_10af36e0(Str, "T3UnrealEd") == 0)
            Str = "Unreal";
        FUN_10af36f0(DAT_10f3ec70, Str);
    }
    return (int)DAT_10f3ec70;
}
