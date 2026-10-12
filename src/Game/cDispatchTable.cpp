// Game/cDispatchTable.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10C49740.h"
#include "Game/cDispatchTable.h"

struct Group_10BA14C0;

struct Struct_10C32C30;

struct Entry_10C32C30
{
public:
    union
    {
        Entry_10C32C30* Next;
        Struct_10C32C30* Unknown00;
        int Count;
    };
    union
    {
        Entry_10C32C30* Prev;
        int Unknown04;
    };
    Group_10BA14C0* Data;

    void FUN_10916440(cString& B, int C);
};

extern "C" char* _strupr(char* String);

// FUNCTION: 0x10915160 ?Dispatch@cDispatchTable@@QAEXHAAVcString@@H@Z
void cDispatchTable::Dispatch(int A, cString& B, int C)
{
    cString Name(*(const cString*)A);
    if (Name.Unknown00)
    {
        _strupr(Name.Unknown00);
    }
    Entry_10C32C30* Found = 0;
    m_Entries.FUN_10c49740((int*)&Name, &Found);
    if (Found)
    {
        Found->FUN_10916440(B, C);
    }
}
