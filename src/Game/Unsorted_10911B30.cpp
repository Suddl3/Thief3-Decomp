// Game/Unsorted_10911B30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>

extern "C" char * _strncpy(char *, const char *, int);

extern "C" unsigned char * _mbschr(const unsigned char *, unsigned int);

extern "C" __declspec(dllimport) unsigned int __stdcall GetACP(void);

extern "C" __declspec(dllimport) int __stdcall MultiByteToWideChar(unsigned int CodePage, unsigned long dwFlags, const char* lpMultiByteStr, int cbMultiByte, wchar_t* lpWideCharStr, int cchWideChar);

typedef void* HMODULE;

typedef void* HANDLE;

extern "C" __declspec(dllimport) HMODULE __stdcall LoadLibraryA(const char* FileName);

extern "C" __declspec(dllimport) void* __stdcall GetProcAddress(HMODULE Module, const char* ProcName);

extern "C" __declspec(dllimport) int __stdcall FreeLibrary(HMODULE Module);

extern "C" __declspec(dllimport) HANDLE __stdcall CreateFileA(const char* FileName, unsigned long Access, unsigned long Share, void* Security, unsigned long Disposition, unsigned long Flags, HANDLE Template);

extern "C" __declspec(dllimport) int __stdcall CloseHandle(HANDLE Object);

extern "C" __declspec(dllimport) HANDLE __stdcall GetCurrentProcess();

extern "C" __declspec(dllimport) unsigned long __stdcall GetCurrentProcessId();

enum
{
    GENERIC_WRITE = 0x40000000,
    FILE_SHARE_WRITE = 2,
    CREATE_ALWAYS = 2,
    FILE_ATTRIBUTE_NORMAL = 0x80
};

struct Struct_10911EC0
{
    const char* FileName;
    int DumpType;
    bool Succeeded;
};

typedef int (__stdcall *MiniDumpWriteDumpFn)(HANDLE Process, unsigned long ProcessId, HANDLE File, int DumpType, void* ExceptionParam, void* UserStreamParam, void* CallbackParam);

extern const char DAT_10e47660[];

extern MiniDumpWriteDumpFn DAT_10f2c418;

// FUNCTION: 0x10911C40 ?ConvertFontName@@YGHPBDPAG@Z
int __stdcall ConvertFontName(const char* Name, wchar_t* Out)
{
    char Buf[33];
    if (Name)
        _strncpy(Buf, Name, 32);
    else
        _strncpy(Buf, "MS Sans Serif", 13);
    Buf[32] = 0;
    char* Dot = (char*)_mbschr((const unsigned char*)Buf, '.');
    if (Dot)
        *Dot = 0;
    int Length = strlen(Buf);
    return MultiByteToWideChar(GetACP(), 1, Buf, Length, Out, Length) + 1;
}

// FUNCTION: 0x10911EC0 ?WriteMiniDump@@YGHPAUStruct_10911EC0@@@Z
int __stdcall WriteMiniDump(Struct_10911EC0* Param)
{
    HMODULE Module = LoadLibraryA("dbghelp.dll");
    if (!Module)
    {
        Param->Succeeded = false;
        return 0;
    }
    DAT_10f2c418 = (MiniDumpWriteDumpFn)GetProcAddress(Module, "MiniDumpWriteDump");
    if (!DAT_10f2c418)
    {
        Param->Succeeded = false;
        FreeLibrary(Module);
        return 0;
    }
    const char* FileName = Param->FileName;
    if (!FileName)
        FileName = DAT_10e47660;
    HANDLE File = CreateFileA(FileName, GENERIC_WRITE, FILE_SHARE_WRITE, 0, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, 0);
    if (File == (HANDLE)-1)
    {
        Param->Succeeded = false;
        FreeLibrary(Module);
        return 0;
    }
    DAT_10f2c418(GetCurrentProcess(), GetCurrentProcessId(), File, Param->DumpType, 0, 0, 0);
    CloseHandle(File);
    FreeLibrary(Module);
    Param->Succeeded = true;
    return 0;
}
