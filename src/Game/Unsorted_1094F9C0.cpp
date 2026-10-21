// Game/Unsorted_1094F9C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10950310.h"
#include "Game/Class_10939570.h"

extern "C" __declspec(dllimport) void __stdcall _BinkSetVolume(void* Bink, unsigned Track, int Volume);

void ComputeMovieVolume(float Value, int* Out);

struct Struct_10950310
{
    void* Bink;
};

extern int DAT_10eff700;

// Ion Storm's memory manager (0x10905AA0).
class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void* Virtual3(void* Block, int Size, int A, int B, int C, int D);
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* GetAllocator();

// The game's cIntArray: a count, the bytes allocated and the block, grown
// and shrunk 16 entries at a time.
class cIntArray
{
public:
    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(void*);
        }
        else if (NewCount <= Capacity - 16)
        {
            if (NewCount == 0)
            {
                GetAllocator()->Virtual5(Unknown08);
                Unknown08 = 0;
                Unknown04 = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~15) + 16;
                Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                Unknown04 = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    ~cIntArray()
    {
        SetCount(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void** Unknown08;
};

// Class_1094F750 from include/Game/Class_1094F750.h, with its destructor and
// Free() inline.
class Class_1094F750
{
public:
    void FUN_1094f510(int A);
    void Free()
    {
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    ~Class_1094F750()
    {
        FUN_1094f510(0);
        Free();
    }

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

// The objects the array holds: deleted without a virtual call.
class Class_1094FB90_Element
{
public:
    Class_10953590* Unknown00;
};

// The members released through their virtual at slot 1.
class Class_1094FB90_UnknownE8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

// The base class: its destructor is the game's.
class Class_10E4A9C8
{
public:
    ~Class_10E4A9C8();

    virtual void FUN_10dca1b0();

    char Pad00[0xE4];
};

extern Class_10939570* DAT_10f323fc;

class Class_1094FB90 : public Class_10E4A9C8
{
public:
    ~Class_1094FB90();

    Class_1094FB90_UnknownE8* UnknownE8;
    Class_1094FB90_UnknownE8* UnknownEC;
    int UnknownF0;
    cIntArray UnknownF4;
    Class_1094F750 Unknown100;
    char Pad10C[0x8];
    Class_1094FB90_UnknownE8* Unknown114;
    Class_1094FB90_UnknownE8* Unknown118;
};

// FUNCTION: 0x1094FB90 ??1Class_1094FB90@@QAE@XZ
// attempt 4
Class_1094FB90::~Class_1094FB90()
{
    if (UnknownE8)
    {
        UnknownE8->Virtual1();
        UnknownE8 = 0;
    }
    if (UnknownEC)
    {
        UnknownEC->Virtual1();
        UnknownEC = 0;
    }
    if (Unknown114)
    {
        Unknown114->Virtual1();
        Unknown114 = 0;
    }
    if (Unknown118)
    {
        Unknown118->Virtual1();
        Unknown118 = 0;
    }
    for (int i = 0; i < UnknownF0; i++)
    {
        DAT_10f323fc->FUN_1093bce0(((Class_1094FB90_Element*)UnknownF4.Unknown08[i])->Unknown00);
        if (UnknownF4.Unknown08[i])
            delete (Class_1094FB90_Element*)UnknownF4.Unknown08[i];
        UnknownF4.Unknown08[i] = 0;
    }
}

// FUNCTION: 0x10950180 ?SetMovieFramerate@@YAXH@Z
void SetMovieFramerate(int Value)
{
    if (Value == 0x19 || Value == 0x1e)
        DAT_10eff700 = Value;
}

// FUNCTION: 0x10950310 ?SetVolume@Class_10950310@@QAEXM@Z
void Class_10950310::SetVolume(float Volume)
{
    ComputeMovieVolume(Volume, (int*)&Volume);
    _BinkSetVolume(Unknown00->Bink, 0, *(int*)&Volume);
}
