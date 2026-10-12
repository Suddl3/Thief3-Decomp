// Game/Class_10E6C7FC_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5B578.h"
#include "Game/Object_10AAF580.h"

class Class_10AAB5C0
{
public:
    virtual void Virtual0();
    int GetUnknown08();

    int Unknown04;
    int Unknown08;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E5B578* A, int B, int C, int D);
};

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

// FUNCTION: 0x10B35450 ?FUN_10b35450@Class_10E6C7FC@@UAEXXZ
void Class_10E6C7FC::FUN_10b35450()
{
    DAT_10f46da0->Virtual1(this, 0x5a, -1, -1);
}
