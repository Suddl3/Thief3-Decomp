// Game/Class_10E98CA4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BA9EE0.h"
#include "Game/Class_10C184F0.h"
#include "Game/Class_10C19FD0.h"
#include "Game/Class_10E98CA4.h"
#include "Game/Struct_10C17BC0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10DC1750.h"
#include "Game/Struct_10B9F810.h"
#include "Game/Struct_10DC1750_Result_1C.h"
#include "Game/Class_10DC1750_Result.h"

void FUN_10c17bc0(void* A, Struct_10C17BC0* B);

struct Struct_10AA3520
{
    char Unknown00[8];
    int Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10C17C10 ?ClearReferences@Class_10E98CA4@@UAEXPAX@Z
void Class_10E98CA4::ClearReferences(void* A)
{
    FUN_10c17bc0(A, &Unknown10);
    FUN_10c17bc0(A, &Unknown1C);
    FUN_10c17bc0(A, &Unknown28);
    if (UnknownA4 == A)
        UnknownA4 = 0;
}

// FUNCTION: 0x10C19B90 ?FUN_10c19b90@Class_10E98CA4@@QAEXXZ
void Class_10E98CA4::FUN_10c19b90()
{
    int Value = DAT_10f35dec->Unknown08;
    if (Value)
    {
        Class_10DC1750_Result* Result = Unknown04->FUN_10dc1750();
        Struct_10DC1750_Result_1C* List = &Result->Unknown1C;
        int Index = -1;
        for (int i = 0; i < List->Count; i++)
        {
            if (List->Items[i] == 0x11)
            {
                Index = i;
                break;
            }
        }
        if (Index != -1)
            return;
        FUN_10c19810(Value);
    }
}
