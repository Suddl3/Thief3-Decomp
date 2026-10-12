// Game/Unsorted_10B16780.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E5B7C8.h"
#include "Game/WindowManager.h"
#include "Game/Class_10B175C0.h"
#include "Game/cString.h"

class Class_10E79228 : public Class_10E5B7C8
{
public:
    virtual void FUN_10b170f0();

    void LayoutTitleBar();
};

class Class_10B314F0;

// FUNCTION: 0x10B16FB0 ?FUN_10b16fb0@Class_10B175C0@@QAEPAVClass_10B314F0@@XZ
Class_10B314F0* Class_10B175C0::FUN_10b16fb0()
{
    cString Name("FMVWindow");
    int Result = FindWindowByName(Name);
    return (Class_10B314F0*)Result;
}

// FUNCTION: 0x10B170F0 ?FUN_10b170f0@Class_10E79228@@UAEXXZ
void Class_10E79228::FUN_10b170f0()
{
    LayoutTitleBar();
    Class_10E5B7C8::FUN_109e64e0();
}
