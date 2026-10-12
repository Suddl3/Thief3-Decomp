// Game/Unsorted_10906090.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10906090.h"

Class_10905A90_Member* GetAllocator();

int FUN_10901770();

void RunShutdownCallbacks();

void RelaunchForLevelChange();

void FUN_10918880(int A);

extern "C" __declspec(dllimport) void* __stdcall GetCurrentProcess(void);

extern "C" __declspec(dllimport) int __stdcall TerminateProcess(void* Process, unsigned int ExitCode);

extern "C" __declspec(dllimport) int __stdcall VirtualFree(void* Address, unsigned long Size, unsigned long FreeType);

extern unsigned char DAT_10f2bfec;

extern void* DAT_10f2bfe4;

extern unsigned char DAT_10f2bfed;

extern void* DAT_10f2bfe8;

extern "C" __declspec(dllimport) void __stdcall Sleep(unsigned long dwMilliseconds);

struct Struct_10906CB0
{
    void (*Unknown00)(void*);
    void* Unknown04;
};

extern bool DAT_10f2bfdc;

extern int DAT_10f2bfd8;

extern Struct_10906CB0 DAT_10f2bec8[];

typedef void* HMODULE;

typedef int (__stdcall* FARPROC)();

extern "C" __declspec(dllimport) HMODULE __stdcall GetModuleHandleA(const char* lpModuleName);

extern "C" __declspec(dllimport) FARPROC __stdcall GetProcAddress(HMODULE hModule, const char* lpProcName);

extern void* DAT_10e48084[];

extern void* DAT_10e48070[];

extern FARPROC DAT_10f2bfe0;

// FUNCTION: 0x10906090 ?Init@Class_10906090@@QAEPAV1@HPBD0H@Z
Class_10906090* Class_10906090::Init(int A, const char* B, const char* C, int D)
{
    Unknown00 = A;
    Unknown04 = D;

    char* Dst = Unknown08;
    const char* Src = B;
    for (int Count = 0x101; Count != 0; Count--)
    {
        if (Src)
        {
            *Dst = *Src;
            if (*Src == 0)
                Src = 0;
            else
                Src++;
        }
        Dst++;
    }

    Dst = Unknown109;
    Src = C;
    for (int Count = 0xC01; Count != 0; Count--)
    {
        if (Src)
        {
            *Dst = *Src;
            if (*Src == 0)
                Src = 0;
            else
                Src++;
        }
        Dst++;
    }

    return this;
}

// FUNCTION: 0x10906CB0 ?RunShutdownCallbacks@@YAXXZ
void RunShutdownCallbacks()
{
    while (DAT_10f2bfdc)
        Sleep(50);
    DAT_10f2bfdc = true;
    for (int i = 0; i < DAT_10f2bfd8; i++)
    {
        DAT_10f2bec8[i].Unknown00(DAT_10f2bec8[i].Unknown04);
        DAT_10f2bec8[i].Unknown00 = 0;
        DAT_10f2bec8[i].Unknown04 = 0;
    }
    DAT_10f2bfd8 = 0;
    DAT_10f2bfdc = false;
}

// FUNCTION: 0x10906D20 ?IsDebuggerAttached@@YA_NXZ
bool IsDebuggerAttached()
{
    if (!DAT_10f2bfe0)
    {
        HMODULE Module = GetModuleHandleA((const char*)DAT_10e48084);
        if (Module)
            DAT_10f2bfe0 = GetProcAddress(Module, (const char*)DAT_10e48070);
    }
    if (!DAT_10f2bfe0)
        DAT_10f2bfe0 = (FARPROC)0xffffffff;
    if (DAT_10f2bfe0 == (FARPROC)0xffffffff)
        return false;
    return DAT_10f2bfe0() == 1;
}

// FUNCTION: 0x10906D80 ?ForceExit@@YAXXZ
void ForceExit()
{
    if (FUN_10901770())
        GetAllocator()->Virtual7(0);
    RunShutdownCallbacks();
    RelaunchForLevelChange();
    FUN_10918880(1);
    TerminateProcess(GetCurrentProcess(), -1);
}

// FUNCTION: 0x10907190 ?FUN_10907190@@YAXXZ
void FUN_10907190()
{
    if (DAT_10f2bfec)
    {
        VirtualFree(DAT_10f2bfe4, 0, 0x8000);
        DAT_10f2bfe4 = 0;
        DAT_10f2bfec = 0;
    }
    if (DAT_10f2bfed)
    {
        VirtualFree(DAT_10f2bfe8, 0, 0x8000);
        DAT_10f2bfe8 = 0;
        DAT_10f2bfed = 0;
    }
}
