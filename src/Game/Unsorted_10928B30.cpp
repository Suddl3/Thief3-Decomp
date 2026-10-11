// Game/Unsorted_10928B30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern "C" __declspec(dllimport) int __stdcall BinkWait(void* Bink);

extern "C" __declspec(dllimport) void __stdcall BinkDoFrame(void* Bink);

extern "C" __declspec(dllimport) void __stdcall BinkNextFrame(void* Bink);

extern "C" __declspec(dllimport) void __stdcall BinkCopyToBuffer(void* Bink, void* Dest, int DestPitch, int DestHeight, int DestX, int DestY, int Flags);

class Class_10928B50_Unknown30
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual int __stdcall Virtual16(void* A, void* B, int C, int D);
    virtual int __stdcall Virtual17(void* A);
};

class Class_10928B50_Unknown34
{
public:
    char Unknown00[4];
    int Unknown04;
};

struct Struct_10928B50_Locked
{
    int Unknown00;
    void* Unknown04;
};

struct Struct_10928B50
{
    char Unknown00[0x30];
    Class_10928B50_Unknown30* Unknown30;
    Class_10928B50_Unknown34* Unknown34;
};

// FUNCTION: 0x10928B50 ?FUN_10928b50@@YAXPAUStruct_10928B50@@@Z
void FUN_10928b50(Struct_10928B50* A)
{
    Class_10928B50_Unknown34* Bink = A->Unknown34;
    if (Bink)
    {
        if (BinkWait(Bink) == 0)
        {
            BinkDoFrame(Bink);
            Class_10928B50_Unknown30* Surface = A->Unknown30;
            Struct_10928B50_Locked Locked;
            Surface->Virtual16(0, &Locked, 0, 0x2000);
            BinkCopyToBuffer(Bink, Locked.Unknown04, Locked.Unknown00, Bink->Unknown04, 0, 0, 0x80000005);
            Surface->Virtual17(0);
            BinkNextFrame(Bink);
        }
    }
}
