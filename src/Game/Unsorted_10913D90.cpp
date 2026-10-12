// Game/Unsorted_10913D90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10914150.h"
#include "Game/Class_10914380.h"

class Class_1090A780;

class Class_1090FD40;

class Class_109159B0
{
public:
    void FUN_109159b0(Class_1090FD40* Out);
};

// FUNCTION: 0x10914150 ?CollectAll@Class_10914150@@QAEXPAVClass_1090FD40@@@Z
void Class_10914150::CollectAll(Class_1090FD40* Out)
{
    for (int i = 0; i < m_ChildCount; i++)
        m_Children[i]->FUN_109159b0(Out);
}

// FUNCTION: 0x10914380 ?FindEntry@Class_10914380@@QAE_NABVClass_1090A780@@0AAVcString@@PAX@Z
bool Class_10914380::FindEntry(const Class_1090A780& A, const Class_1090A780& B, cString& Out, void* Filter)
{
    cString* Found = FUN_10913fc0(A, B, Filter, 0);
    if (!Found)
        return false;
    Out = *Found;
    return true;
}
