// Game/cAISpeech_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/cIntArray.h"
#include "Game/Class_10AB37C0.h"
#include "Game/Class_10BA9FD0.h"
#include "Game/Class_10BAA000.h"
#include "Game/Class_10BB7570.h"
#include "Game/Class_10BB8BC0.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_1098E330.h"
#include <string.h>

class Class_10E97B00;

// Class_10BEFAB0: the speaker at +0x04 is a Class_10BB8BC0, so the class is
// copied here with the field typed.
class Class_10BEFAB0
{
public:
    float GetRandomInRange();

    char Unknown00[4];
    Class_10BB8BC0* Unknown04;
};

// cAISpeech: the header lacks the fields this function uses (the flags at
// +0x18, the int array at +0x28) and the four helpers it calls.
class cAISpeech : public Class_10BEFAB0
{
public:
    int FUN_10bc7d70(Class_10E97B00* Name, int Flags, int Count, cString* Out, bool Flag);

    void FUN_10bc75c0(cString* A);
    void FUN_10bc79e0(cString* A);
    void FUN_10bc7a70(cString* A);
    void FUN_10bc7b10(cString* A);

    char Pad08[0x10];
    int Unknown18;
    char Pad1C[0xc];
    cIntArray Unknown28;
    char Pad34[0x22c];
    float m_SummonCooldown;
    float m_SummonRange;
};

// The class the speech owner comes from; it also holds the routine that
// builds the speech.
class Class_10BA9EC0
{
public:
    void* FUN_10ba9ec0();
    int FUN_10c041b0(cString* A, void* B, float C, int D, int E, int F, cString* G);

    char Unknown00[0xf0];
    void* UnknownF0;
};

// FUNCTION: 0x10BC7D70 ?FUN_10bc7d70@cAISpeech@@QAEHPAVClass_10E97B00@@HHPAVcString@@_N@Z
int cAISpeech::FUN_10bc7d70(Class_10E97B00* Name, int Flags, int Count, cString* Out, bool Flag)
{
    void* Object = ((Class_10BA9FD0*)Unknown04->Unknown08)->FUN_10ba9fd0();
    if (!((Class_10BB7570*)Object)->FUN_10bb7570())
    {
        if (!(Count & 0x10))
            return 0;
    }

    int First = Unknown04->GetFirst();
    if (First != 0 && First != (int)this)
    {
        return ((cAISpeech*)First)->FUN_10bc7d70(Name, Flags, Count, Out, true);
    }

    cString Local(*(cString*)((Class_10AB37C0*)Name)->GetName());
    if (Local.Unknown00)
    {
        char* Plus = strchr(Local.Unknown00, '+');
        if (Plus && (int)(Plus - Local.Unknown00) != -1)
        {
            FUN_10bc75c0(&Local);
            FUN_10bc79e0(&Local);
            FUN_10bc7a70(&Local);
            FUN_10bc7b10(&Local);
        }
    }

    if (Flag)
    {
        int Found = 0;
        Class_10C7D570* Speaker = Unknown04->Unknown08;
        ((Class_1098E330*)Speaker->FUN_10c7d570())->GetPropertyValue(0x800846, &Found);
        if (Found)
            Count |= 0x40;
    }

    Class_10C7D570* Speaker = Unknown04->Unknown08;
    int Result = ((Class_10BA9EC0*)((Class_10BA9EC0*)Speaker)->FUN_10ba9ec0())
        ->FUN_10c041b0(&Local,
                       ((Class_10C7D570*)Speaker)->FUN_10c7d570(),
                       ((Class_10BAA000*)Speaker)->GetDistanceFalloff(),
                       Flags, Count, Unknown18, Out);
    if (Result)
    {
        cIntArray& Array = Unknown28;
        int Index = Array.Count;
        Array.SetCount(Index + 1);
        Array.Data[Index] = Result;
    }
    return Result;
}
