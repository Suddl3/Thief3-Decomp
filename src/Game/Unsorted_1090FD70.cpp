// Game/Unsorted_1090FD70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_1090FE50.h"
#include "Game/Class_10AA9DA0.h"

typedef void* HANDLE;

extern "C" __declspec(dllimport) HANDLE __stdcall CreateFileA(const char* FileName, unsigned long Access, unsigned long Share, void* Security, unsigned long Disposition, unsigned long Flags, HANDLE Template);

extern "C" __declspec(dllimport) int __stdcall WriteFile(HANDLE File, const void* Buffer, unsigned long Count, unsigned long* Written, void* Overlapped);

extern "C" __declspec(dllimport) int __stdcall CloseHandle(HANDLE Object);

enum
{
    GENERIC_WRITE = 0x40000000,
    CREATE_ALWAYS = 2,
    FILE_ATTRIBUTE_NORMAL = 0x80
};

void FUN_10908440(char* Buffer, int Size, const char* Name);

// FUNCTION: 0x1090FE50 ?SaveToFile@Class_1090FE50@@QAE_NPAVClass_10AA9DA0@@AAVcString@@1@Z
bool Class_1090FE50::SaveToFile(Class_10AA9DA0* A, cString& B, cString& C)
{
    char Path[260];
    FUN_10908440(Path, 260, *B);
    HANDLE File = CreateFileA(Path, GENERIC_WRITE, 0, 0, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, 0);
    if (File == (HANDLE)-1)
        return false;
    unsigned long Written = 0;
    int Length = C.Unknown00 == 0 ? 0 : ((int*)C.Unknown00)[-1];
    if (WriteFile(File, *C, Length, &Written, 0))
    {
        if (Written == (C.Unknown00 == 0 ? 0 : ((int*)C.Unknown00)[-1]))
        {
            CloseHandle(File);
            bool Flag = false;
            A->FUN_10914470(B, Flag);
            A->RemoveByName(B);
            this->FUN_1090f400(B, A->FUN_10aa9da0(), 1, Flag);
            return true;
        }
    }
    CloseHandle(File);
    return false;
}
