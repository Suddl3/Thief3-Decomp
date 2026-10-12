// Game/Unsorted_109128A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern "C" __declspec(dllimport) void* __stdcall GetCurrentThread(void);

extern "C" __declspec(dllimport) void* __stdcall GetCurrentProcess(void);

int __stdcall ReadLocalMemory(void* A, const void* B, void* C, unsigned int D, unsigned int* E);

typedef int (__stdcall* Class_109128A0_Proc)(int A, void* B, void* C, unsigned int* D, unsigned int E,
    int (__stdcall* F)(void*, const void*, void*, unsigned int, unsigned int*), void* G, unsigned int H, unsigned int I);

class Class_109128A0
{
public:
    unsigned int GetCallerAddress();

    void* Unknown00;
    Class_109128A0_Proc m_StackWalk;
    unsigned int Unknown08;
    char Unknown0C[0x1C];
    int Unknown28;
    unsigned int Unknown2C;
};

// FUNCTION: 0x109128A0 ?GetCallerAddress@Class_109128A0@@QAEIXZ
unsigned int Class_109128A0::GetCallerAddress()
{
    if (Unknown28)
    {
        if (m_StackWalk(0x14c, GetCurrentProcess(), GetCurrentThread(), &Unknown2C, 0, ReadLocalMemory, Unknown00, Unknown08, 0) == 1)
        {
            unsigned int Value = Unknown2C;
            return Value < 0x400000 ? 0 : Value;
        }
    }
    return 0;
}
