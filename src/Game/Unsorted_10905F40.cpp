// Game/Unsorted_10905F40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>

struct Info_10906070
{
    char Unknown00[4];
    int Unknown04;
    char Unknown08[0x101];
    char Unknown109;
};

void FUN_1090dcb0(int p1, char* p2);

extern "C" __declspec(dllimport) void* __stdcall CreateSemaphoreA(void* Attributes, long InitialCount, long MaximumCount, const char* Name);

extern "C" __declspec(dllimport) int __stdcall CloseHandle(void* Object);

extern "C" __declspec(dllimport) unsigned long __stdcall GetLastError(void);

void FUN_10905eb0(char* Name, int Length);

class Class_10905F40
{
public:
    bool FUN_10905f40(const char* Name);

    char SemaphoreName[0x10A];
    char Pad10A[2];
    void* Semaphore;
    bool AlreadyExists;
};

// FUNCTION: 0x10905F40 ?FUN_10905f40@Class_10905F40@@QAE_NPBD@Z
bool Class_10905F40::FUN_10905f40(const char* Name)
{
    memset(SemaphoreName, 0, 0x10A);
    strcpy(SemaphoreName, "$$s$$");
    strcpy(SemaphoreName + 5, Name);
    FUN_10905eb0(SemaphoreName + 5, strlen(SemaphoreName) - 5);
    Semaphore = CreateSemaphoreA(0, 0, 1, SemaphoreName);
    if (Semaphore != 0)
    {
        if (GetLastError() == 183)
        {
            AlreadyExists = true;
            CloseHandle(Semaphore);
            Semaphore = (void*)-1;
        }
    }
    return !AlreadyExists;
}

// FUNCTION: 0x10906070 ?FUN_10906070@@YAXPAUInfo_10906070@@@Z
void FUN_10906070(Info_10906070* Info)
{
    FUN_1090dcb0(Info->Unknown04, &Info->Unknown109);
}
