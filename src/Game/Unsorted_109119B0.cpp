// Game/Unsorted_109119B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#define HKEY_CURRENT_USER ((HKEY)(unsigned long)0x80000001)
#define HKEY_LOCAL_MACHINE ((HKEY)(unsigned long)0x80000002)
#define ERROR_SUCCESS 0L
#include "Game/Class_10912800.h"
#include <stdarg.h>
#include <string.h>
#include "Game/Class_109081E0.h"

typedef struct HKEY__* HKEY;

extern "C" __declspec(dllimport) long __stdcall RegOpenKeyA(HKEY Key, const char* SubKey, HKEY* Result);

extern "C" __declspec(dllimport) long __stdcall RegQueryValueExA(HKEY Key, const char* ValueName, unsigned long* Reserved,
                                                                 unsigned long* Type, unsigned char* Data,
                                                                 unsigned long* DataSize);

extern "C" __declspec(dllimport) long __stdcall RegCloseKey(HKEY Key);

extern "C" __declspec(dllimport) void* __stdcall GetCurrentProcess(void);

extern "C" __declspec(dllimport) int __stdcall FreeLibrary(void* Module);

extern "C" __declspec(dllimport) int __stdcall IsBadReadPtr(const void* Pointer, unsigned int Size);

extern "C" void* memcpy(void* Dest, const void* Src, unsigned Count);

extern "C" int isprint(int C);

extern "C" int vsprintf(char* Buffer, const char* Format, va_list Args);

extern "C" int sprintf(char* Buffer, const char* Format, ...);

extern void* DAT_10e48f28[];

int FUN_10d1fec0(void* Table, int C);

// FUNCTION: 0x109119B0 ?FUN_109119b0@@YAHPAPADHHHPBDZZ
int FUN_109119b0(char** Out, int A, int B, int C, const char* Fmt, ...)
{
    char Buf[256];
    const char* Src = Fmt;
    char* Dst = Buf;
    char Ch;
    do
    {
        Ch = *Src;
        *Dst = Ch;
        Src++;
        Dst++;
    } while (Ch != 0);

    char* P = Buf;
    unsigned int N = 0;
    do
    {
        if (*P == 0)
            break;
        if (!isprint(*P) || FUN_10d1fec0(DAT_10e48f28, *P))
            *P = ' ';
        P++;
        N++;
    } while (N < 0x100);

    va_list Args;
    va_start(Args, Fmt);
    int Len = vsprintf(*Out, Buf, Args);
    sprintf(*Out += Len, "\n%d,%d,%d\n", A, B, C);
    int Count = strlen(*Out);
    *Out += Count;
    return Count + Len;
}

// FUNCTION: 0x10911A80 ?FUN_10911a80@@YA?AVClass_109081E0@@PBD0_N@Z
Class_109081E0 FUN_10911a80(const char* SubKey, const char* ValueName, bool LocalMachine)
{
    HKEY hKey;
    unsigned long dwSize;
    char szBuffer[512];
    if (RegOpenKeyA(LocalMachine ? HKEY_LOCAL_MACHINE : HKEY_CURRENT_USER, SubKey, &hKey) == ERROR_SUCCESS)
    {
        szBuffer[0] = 0;
        dwSize = sizeof(szBuffer);
        long Result = RegQueryValueExA(hKey, ValueName, 0, 0, (unsigned char*)szBuffer, &dwSize);
        RegCloseKey(hKey);
        if (Result == ERROR_SUCCESS)
            return Class_109081E0(szBuffer);
    }
    return Class_109081E0();
}

// FUNCTION: 0x10912800 ?FUN_10912800@Class_10912800@@QAEXXZ
void Class_10912800::FUN_10912800()
{
    if (Unknown1C)
        Unknown1C(GetCurrentProcess());
    if (Unknown24)
    {
        Unknown18(GetCurrentProcess(), 0);
        FreeLibrary(Unknown24);
        Unknown24 = 0;
    }
    if (Unknown28)
    {
        FreeLibrary(Unknown28);
        Unknown28 = 0;
    }
}

// FUNCTION: 0x10912850 ?FUN_10912850@@YGHPAXPBX0IPAI@Z
int __stdcall FUN_10912850(void* Process, const void* Address, void* Buffer, unsigned int Size, unsigned int* BytesRead)
{
    if (IsBadReadPtr(Address, Size))
        return 0;
    memcpy(Buffer, Address, Size);
    if (BytesRead)
        *BytesRead = Size;
    return 1;
}
