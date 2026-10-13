// Game/Unsorted_10906DC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>

extern void* DAT_10f2bfe4;

extern void* DAT_10f2bfe8;

extern unsigned char DAT_10f2bfec;

extern unsigned char DAT_10f2bfed;

extern int DAT_10efeed4;

extern int DAT_10efeed8;

int FUN_10907030(void** Handle, const char* Name);

extern char DAT_10e480a0[];

extern char DAT_10f2bfef[];

extern char DAT_10f2bff0[];

extern "C" __declspec(dllimport) unsigned long __stdcall GetFileAttributesA(const char* FileName);

typedef void* HANDLE;

extern "C" __declspec(dllimport) unsigned long __stdcall GetFileSize(HANDLE File, unsigned long* SizeHigh);

extern "C" __declspec(dllimport) void* __stdcall VirtualAlloc(void* Address, unsigned int Size, unsigned long Type, unsigned long Protect);

extern "C" __declspec(dllimport) int __stdcall CloseHandle(HANDLE Object);

HANDLE FUN_1090e750(const char* Path, unsigned long Access, unsigned long Share, void* Security, unsigned long Disposition, unsigned long Flags, void* Template);

int FUN_1090e890(HANDLE File, void* Buffer, unsigned long Size, int* Result, int Flags);

// FUNCTION: 0x10906DC0 ?FUN_10906dc0@@YA_NPAD@Z
bool FUN_10906dc0(char* Path)
{
    strcpy(DAT_10f2bff0, Path);
    if (DAT_10f2bfef[strlen(DAT_10f2bff0)] != '\\')
        strcat(DAT_10f2bff0, "\\");
    strcat(DAT_10f2bff0, DAT_10e480a0);
    return GetFileAttributesA(DAT_10f2bff0) != 0xffffffff;
}

// FUNCTION: 0x10907030 ?FUN_10907030@@YAHPAPAXPBD@Z
int FUN_10907030(void** Out, const char* Path)
{
    *Out = 0;
    unsigned long Attributes = GetFileAttributesA(Path);
    if (Attributes == 0xffffffff || (Attributes & 0x454))
        return 0;
    HANDLE File = FUN_1090e750(Path, 0x80000000, 1, 0, 3, 0x8000080, 0);
    int Result = 0;
    if (File == (HANDLE)-1)
        return 0;
    unsigned long Size = GetFileSize(File, 0);
    void* Buffer = VirtualAlloc(0, Size, 0x1000, 4);
    *Out = Buffer;
    if (!FUN_1090e890(File, Buffer, Size, &Result, 0))
        Result = 0;
    CloseHandle(File);
    return Result;
}

// FUNCTION: 0x109070D0 ?GetIniFile@@YA_NPBDPAPAXPAH@Z
bool GetIniFile(const char* Name, void** Out, int* Out2)
{
    *Out = 0;
    *Out2 = 0;
    if (strstr(Name, "default.ini"))
    {
        if (!DAT_10f2bfec)
        {
            DAT_10efeed4 = FUN_10907030(&DAT_10f2bfe4, Name);
            if (DAT_10efeed4)
                DAT_10f2bfec = 1;
        }
        *Out = DAT_10f2bfe4;
        *Out2 = DAT_10efeed4;
        return false;
    }
    if (strstr(Name, "user.ini"))
    {
        if (!DAT_10f2bfed)
        {
            DAT_10efeed8 = FUN_10907030(&DAT_10f2bfe8, Name);
            if (DAT_10efeed8)
                DAT_10f2bfed = 1;
        }
        *Out = DAT_10f2bfe8;
        *Out2 = DAT_10efeed8;
    }
    return false;
}
