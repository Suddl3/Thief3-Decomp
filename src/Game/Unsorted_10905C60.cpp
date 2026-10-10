// Game/Unsorted_10905C60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_11008978;

extern unsigned int DAT_10f29a6c;

extern unsigned int DAT_10f29a74;

extern "C" __declspec(dllimport) unsigned int __stdcall HeapSize(void* hHeap, unsigned long dwFlags, const void* lpMem);

extern "C" __declspec(dllimport) int __stdcall HeapFree(void* hHeap, unsigned long dwFlags, void* lpMem);

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Mem);
};

Class_10905A90_Member* FUN_10905aa0();

// FUNCTION: 0x10905CD0 ?FUN_10905cd0@@YAXPAX@Z
void FUN_10905cd0(void* Mem)
{
    if (Mem)
    {
        if (HeapSize(DAT_11008978, 0, Mem) == 0xffffffff)
        {
            FUN_10905aa0()->Virtual5(Mem);
            return;
        }
        DAT_10f29a6c -= HeapSize(DAT_11008978, 0, Mem);
        --DAT_10f29a74;
        HeapFree(DAT_11008978, 0, Mem);
    }
}
