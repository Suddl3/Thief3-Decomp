// Game/Unsorted_10911F90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Game/Unsorted_10911F90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

extern "C" void* memset(void* Destination, int Value, unsigned int Count);

typedef void* HMODULE;

typedef void* HANDLE;

extern "C" __declspec(dllimport) int __stdcall MessageBoxA(void* Window, const char* Text, const char* Caption, unsigned int Type);

extern "C" __declspec(dllimport) HMODULE __stdcall LoadLibraryA(const char* FileName);

extern "C" __declspec(dllimport) void* __stdcall GetProcAddress(HMODULE Module, const char* ProcName);

extern "C" __declspec(dllimport) int __stdcall FreeLibrary(HMODULE Module);

extern "C" __declspec(dllimport) HANDLE __stdcall CreateThread(void* Attributes, unsigned long StackSize, void* StartAddress, void* Parameter, unsigned long CreationFlags, unsigned long* ThreadId);

extern "C" __declspec(dllimport) unsigned long __stdcall WaitForSingleObject(HANDLE Object, unsigned long Milliseconds);

enum
{
    MB_YESNO = 4,
    IDYES = 6,
    INFINITE = 0xFFFFFFFF
};

enum
{
    OFN_OVERWRITEPROMPT = 0x2,
    OFN_HIDEREADONLY = 0x4,
    OFN_STRICTTYPES = 0x8,
    OFN_PATHMUSTEXIST = 0x800,
    OFN_EXPLORER = 0x80000,
    OFN_DONTADDTORECENT = 0x200000
};

enum
{
    MiniDumpWithDataSegs = 1,
    MiniDumpWithFullMemory = 2
};

// Ion Storm's string: a char pointer to a block allocated 4 bytes before it.
// This copy has no base and the destructor's body, which computes Unknown00 - 4 before GetAllocator().
// The two fields after the pointer ride along in the same local, so the block the thread gets
// (the file name, the kind of dump, whether it worked) is the local itself.
class cString
{
public:
    cString() : Unknown00(0) {}
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
        }
    }
    cString& FUN_1090a590(const char* In);

    char* Unknown00;
    int DumpType;
    bool Succeeded;
};

// What the dump thread is given: the file name, the kind of dump and whether it worked.
struct Struct_10911EC0
{
    const char* FileName;
    int DumpType;
    bool Succeeded;
};

// The file dialog the game fills in: the fields it uses sit at these offsets.
struct Struct_10911F90
{
    unsigned int Size;
    void* Owner;
    void* Instance;
    const char* Filter;
    char Unknown10[0xC];
    char* File;
    unsigned int MaxFile;
    char Unknown24[0xC];
    const char* Title;
    unsigned int Flags;
    char Unknown38[4];
    const char* DefaultExt;
    void* Unknown40[3];
};

typedef int (__stdcall *GetSaveFileNameAFn)(Struct_10911F90* Dialog);

int __stdcall WriteMiniDump(Struct_10911EC0* Param);

extern "C" Struct_10911F90 DAT_10f2c688;

extern "C" char DAT_10f2c580[260];

extern "C" GetSaveFileNameAFn DAT_10f2c41c;

extern "C" void* DAT_10f2beac;

// FUNCTION: 0x10911F90 ?FUN_10911f90@@YA_NXZ
bool FUN_10911f90()
{
    bool bFullHeap = false;
    if (MessageBoxA(DAT_10f2beac, "Do you want to write out extra information with the dump?\r\n(If you answer 'no' the file will be roughly 50K.  If you answer 'yes' it can be hundreds of megabytes.", "Dump Full Heap?", MB_YESNO) == IDYES)
        bFullHeap = true;
    HMODULE Module = LoadLibraryA("comdlg32.dll");
    if (!Module)
        return false;
    GetSaveFileNameAFn SaveFileName = (GetSaveFileNameAFn)GetProcAddress(Module, "GetSaveFileNameA");
    memset(&DAT_10f2c688, 0, sizeof(DAT_10f2c688));
    DAT_10f2c41c = SaveFileName;
    DAT_10f2c688.Size = sizeof(DAT_10f2c688);
    DAT_10f2c688.Owner = 0;
    DAT_10f2c688.Filter = "Memory Dump file (*.mdmp)";
    DAT_10f2c688.Title = "Save Memory Dump";
    DAT_10f2c688.DefaultExt = "mdmp";
    DAT_10f2c688.Flags = OFN_OVERWRITEPROMPT | OFN_HIDEREADONLY | OFN_STRICTTYPES | OFN_PATHMUSTEXIST | OFN_EXPLORER | OFN_DONTADDTORECENT;
    DAT_10f2c688.File = DAT_10f2c580;
    DAT_10f2c688.MaxFile = 260;
    bool bResult = true;
    if (SaveFileName(&DAT_10f2c688))
    {
        cString FileName;
        FileName.DumpType = bFullHeap ? (MiniDumpWithDataSegs | MiniDumpWithFullMemory) : 0;
        FileName.FUN_1090a590(DAT_10f2c688.File);
        unsigned long ThreadId;
        HANDLE Thread = CreateThread(0, 0, WriteMiniDump, (Struct_10911EC0*)&FileName, 0, &ThreadId);
        WaitForSingleObject(Thread, INFINITE);
        if (!FileName.Succeeded)
            bResult = false;
    }
    FreeLibrary(Module);
    return bResult;
}
