// Game/Class_10E6C7FC_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10E5B578.h"
#include "Game/Class_10F46DA0.h"
#include "Game/Object_10AAF580.h"

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E6C7FC : public Class_10AAB5C0, public Class_10E5B578
{
public:
    virtual void Virtual1();
    virtual void FUN_10b35450();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual int FUN_10a98bf0(int p1);
    virtual int FUN_10aaf580(int A, Object_10AAF580* B);
};

// FUNCTION: 0x10AAF580 ?FUN_10aaf580@Class_10E6C7FC@@UAEHHPAVObject_10AAF580@@@Z
int Class_10E6C7FC::FUN_10aaf580(int A, Object_10AAF580* B)
{
    if (A == Virtual4())
        return B->Virtual1(GetUnknown08());
    return 0;
}
