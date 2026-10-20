// Game/Unsorted_10912110.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern "C" void* memset(void* Dest, int Value, unsigned int Count);

extern "C" __declspec(dllimport) void* __stdcall LoadLibraryA(const char* FileName);

extern "C" __declspec(dllimport) void* __stdcall GetProcAddress(void* Module, const char* ProcName);

extern "C" __declspec(dllimport) void* __stdcall GetCurrentProcess(void);

extern const char DAT_10e492b8[];

extern const char DAT_10e492a8[];

extern const char DAT_10e4929c[];

extern const char DAT_10e49284[];

extern const char DAT_10e49270[];

extern const char DAT_10e4925c[];

extern const char DAT_10e49248[];

extern const char DAT_10e49238[];

extern const char DAT_10e4922c[];

extern const char DAT_10e4921c[];

class Class_109126B0_Arg
{
public:
    char Unknown00[0xB4];
    int UnknownB4;
    int UnknownB8;
    char UnknownBC[0x8];
    int UnknownC4;
};

class Class_109126B0
{
public:
    typedef int (__stdcall *PFN_SymFunctionTableAccess)(void* Process, unsigned long Address);
    typedef int (__stdcall *PFN_SymInitialize)(void* Process, unsigned long Symbols, unsigned long invade);
    typedef int (__stdcall *PFN_SymSetOptions)(unsigned long Options);

    Class_109126B0* FUN_109126b0(Class_109126B0_Arg* A);

    PFN_SymFunctionTableAccess pSymFunctionTableAccess;
    void* pStackWalk;
    void* pSymGetModuleBase;
    void* pSymGetLineFromAddr;
    void* pSymGetSymFromAddr;
    PFN_SymInitialize pSymInitialize;
    void* pSymUnloadModule;
    void* pSymCleanup;
    PFN_SymSetOptions pSymSetOptions;
    void* hImageHlp;
    void* hDbgHelp;

    struct Data
    {
        int Unknown2C;
        int Unknown30;
        int Unknown34;
        int Unknown38;
        int Unknown3C;
        int Unknown40;
        int Unknown44;
        int Unknown48;
        int Unknown4C;
        int Unknown50;
        int Unknown54;
        int Unknown58;
        int Unknown5C;
        char Unknown60[0x70];
    } Data;

    Class_109126B0_Arg* UnknownD0;
};

// FUNCTION: 0x109126B0 ?FUN_109126b0@Class_109126B0@@QAEPAV1@PAVClass_109126B0_Arg@@@Z
Class_109126B0* Class_109126B0::FUN_109126b0(Class_109126B0_Arg* A)
{
    UnknownD0 = A;
    pSymFunctionTableAccess = 0;
    pStackWalk = 0;
    pSymGetModuleBase = 0;
    pSymGetLineFromAddr = 0;
    pSymGetSymFromAddr = 0;
    pSymInitialize = 0;
    pSymUnloadModule = 0;
    pSymCleanup = 0;
    pSymSetOptions = 0;
    hImageHlp = 0;
    hDbgHelp = 0;
    memset(&Data, 0, sizeof(Data));
    Data.Unknown2C = UnknownD0->UnknownB8;
    Data.Unknown50 = UnknownD0->UnknownC4;
    Data.Unknown44 = UnknownD0->UnknownB4;
    Data.Unknown34 = 3;
    Data.Unknown58 = 3;
    Data.Unknown4C = 3;
    hDbgHelp = LoadLibraryA("dbghelp.dll");
    hImageHlp = LoadLibraryA(DAT_10e492b8);
    if (hImageHlp)
    {
        pSymInitialize = (PFN_SymInitialize)GetProcAddress(hImageHlp, DAT_10e492a8);
        pStackWalk = GetProcAddress(hImageHlp, DAT_10e4929c);
        pSymFunctionTableAccess = (PFN_SymFunctionTableAccess)GetProcAddress(hImageHlp, DAT_10e49284);
        pSymGetModuleBase = GetProcAddress(hImageHlp, DAT_10e49270);
        pSymGetSymFromAddr = GetProcAddress(hImageHlp, DAT_10e4925c);
        pSymGetLineFromAddr = GetProcAddress(hImageHlp, DAT_10e49248);
        pSymUnloadModule = GetProcAddress(hImageHlp, DAT_10e49238);
        pSymCleanup = GetProcAddress(hImageHlp, DAT_10e4922c);
        pSymSetOptions = (PFN_SymSetOptions)GetProcAddress(hImageHlp, DAT_10e4921c);
        pSymSetOptions(0);
        pSymSetOptions(0x37);
        pSymInitialize(GetCurrentProcess(), 0, 1);
        if (hDbgHelp)
        {
            Data.Unknown5C = pSymFunctionTableAccess(GetCurrentProcess(), UnknownD0->UnknownB8);
        }
    }
    return this;
}
