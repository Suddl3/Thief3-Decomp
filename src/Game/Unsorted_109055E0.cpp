// Game/Unsorted_109055E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10905760.h"
#include "Game/Class_10AF4BB0.h"

class Class_10AF7F50 : public FArray
{
public:
    void FUN_10af7f50();
};

extern void* DAT_11008978;

extern unsigned int DAT_10f29a6c;

extern unsigned int DAT_10f29a70;

extern unsigned int DAT_10f29a74;

extern unsigned int DAT_10f29a78;

extern "C" __declspec(dllimport) void* __stdcall HeapAlloc(void* hHeap, unsigned long dwFlags, unsigned int dwBytes);

extern "C" __declspec(dllimport) unsigned int __stdcall HeapSize(void* hHeap, unsigned long dwFlags, const void* lpMem);

void FUN_109057d0();

// FUNCTION: 0x10905760 ?Empty@Class_10905760@@QAEXH@Z
void Class_10905760::Empty(int Slack)
{
    for (int i = 0; i < Unknown04; i++)
        ((Class_10AF7F50*)Unknown00)[i].FUN_10af7f50();
    for (int i = 0; i < Unknown04; i++)
        ((FString*)Unknown00)[i].~FString();
    Unknown04 = 0;
    Unknown08 = Slack;
    FUN_10af3b50(0xc);
}

// FUNCTION: 0x109059B0 ?FUN_109059b0@@YAPAXI@Z
void* FUN_109059b0(unsigned int Size)
{
    FUN_109057d0();
    void* Mem = HeapAlloc(DAT_11008978, 8, Size);
    unsigned int Bytes = (unsigned int)Mem;
    if (Mem)
        Bytes = HeapSize(DAT_11008978, 0, Mem);
    DAT_10f29a6c += Bytes;
    if (DAT_10f29a70 < DAT_10f29a6c)
        DAT_10f29a70 = DAT_10f29a6c;
    ++DAT_10f29a74;
    if (DAT_10f29a78 < DAT_10f29a74)
        DAT_10f29a78 = DAT_10f29a74;
    return Mem;
}

// FUNCTION: 0x10905A20 ?FUN_10905a20@@YAPAXHH@Z
void* FUN_10905a20(int Count, int Size)
{
    void* Mem = HeapAlloc(DAT_11008978, 8, Count * Size);
    unsigned int Bytes = (unsigned int)Mem;
    if (Mem)
        Bytes = HeapSize(DAT_11008978, 0, Mem);
    DAT_10f29a6c += Bytes;
    if (DAT_10f29a70 < DAT_10f29a6c)
        DAT_10f29a70 = DAT_10f29a6c;
    ++DAT_10f29a74;
    if (DAT_10f29a78 < DAT_10f29a74)
        DAT_10f29a78 = DAT_10f29a74;
    return Mem;
}
