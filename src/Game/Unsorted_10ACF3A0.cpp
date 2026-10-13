// Game/Unsorted_10ACF3A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10ACF9A0.h"
#include "Game/Class_10AAB5C0.h"
#include "Game/cIntArray.h"
#include "Game/Class_10ACF3A0.h"
#include "Game/Class_10978090.h"

class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, int C, cIntArray* D);
};

cUObjectLinkManager* GetUObjectLinkManager();

// FUNCTION: 0x10ACF3A0 ?FUN_10acf3a0@Class_10ACF3A0@@QAEHH@Z
int Class_10ACF3A0::FUN_10acf3a0(int A)
{
    cIntArray Items;
    GetUObjectLinkManager()->Virtual4(0, A, 0x281b9d0, &Items);
    return (int)((Class_10978090*)Items.Data[0])->FUN_10978090();
}
