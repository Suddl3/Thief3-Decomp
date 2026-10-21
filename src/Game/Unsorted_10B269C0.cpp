// Game/Unsorted_10B269C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// attempt 7: the removal block with the last index in a local.
#define FString FStringCore
#include "Core/Core.h"
#undef FString
#include "Game/cIntArray.h"

// FString, as Core.h declares it, plus the method the game calls on it.
class FString : public FStringCore
{
public:
    int FUN_10da91a0();
};

// A traced broadhead: a string that carries the trace data.
class Class_10B42370 : public FString
{
public:
    void FUN_10b42370();
};

struct Struct_10B42300;

class Class_10B42340 : public Class_10B42370
{
public:
    Class_10B42340(int A, int B);

    int Unknown0C;
    Struct_10B42300** m_Entries;
    float Unknown14;
};

// The world object the command handler reads a field of.
class Class_10B26AD0_Unknown04
{
public:
    char Pad00[0x10C];
    int Unknown10C;
};

// The console command handler: slot 6 of the table at 0x10E7AAE8.
class Class_10E7AAE8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int FUN_10b26ad0(const TCHAR* Cmd, int Arg2);

    Class_10B26AD0_Unknown04* Unknown04;
    cIntArray Unknown08;
};

class Class_10B9D4B0_Result;

// Ion Storm's tagged new.
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr);

Class_10B9D4B0_Result* __cdecl FUN_10adc3b0(void* Class, int A, const TCHAR* Name, int B);

// FUNCTION: 0x10B26AD0 ?FUN_10b26ad0@Class_10E7AAE8@@UAEHPBDH@Z
int Class_10E7AAE8::FUN_10b26ad0(const TCHAR* Cmd, int Arg2)
{
    if (ParseCommand(&Cmd, "TRACE BROADHEADS ON"))
    {
        Class_10B9D4B0_Result* Res = FUN_10adc3b0(UClass::StaticClass(), -1, "T3Object.Broadhead", 0);
        int Tag = 0;
        int& TagRef = Tag;
        Class_10B42340* Entry = new(TagRef, 0, 0, 0, 0) Class_10B42340((int)Res, Unknown04->Unknown10C);
        int Count = Unknown08.Count;
        cIntArray& Arr = Unknown08;
        Arr.SetCount(Count + 1);
        Arr.Data[Count] = (int)Entry;
        return 2;
    }

    if (ParseCommand(&Cmd, "TRACE BROADHEADS OFF"))
    {
        Class_10B9D4B0_Result* Res = FUN_10adc3b0(UClass::StaticClass(), -1, "T3Object.Broadhead", 0);
        cIntArray& Arr = Unknown08;
        for (int i = 0; i < Arr.Count; i++)
        {
            FString* S = (FString*)Unknown08.Data[i];
            if (S->FUN_10da91a0() == (int)Res)
            {
                Class_10B42370* Entry = (Class_10B42370*)Unknown08.Data[i];
                if (Entry)
                {
                    Entry->FUN_10b42370();
                    operator delete(Entry);
                }
                Unknown08.Data[i] = 0;
                int Last = Arr.Count - 1;
                int Tmp = Arr.Data[i];
                Arr.Data[i] = Arr.Data[Last];
                Arr.Data[Last] = Tmp;
                Arr.SetCount(Arr.Count - 1);
            }
        }
        return 2;
    }

    return 0;
}
