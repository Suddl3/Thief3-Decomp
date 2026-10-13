// Game/GState_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAF570.h"
#include "Game/Class_10B19300.h"
#include "Game/Class_10B193E0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B39870.h"
#include "Game/Class_10B46F10.h"

Class_10B19300* FUN_10b190e0();

class Object_10B4BB80
{
public:
    char Unknown00[0x3C];
    int Unknown3C;
    char Unknown40[0x304];
    int Unknown344;
    char Unknown348[0xBC];
    int Unknown404;
    char Unknown408[0x8];
    float Unknown410;
};

// Copied from include/Game/Class_10B39670.h with the return type the symbol has.
class Class_10B39670
{
public:
    bool FUN_10b39670(int A);

    char Unknown00[0xC];
    Class_10B46F10* Unknown0C[1];
};

// Copied from include/Game/Class_10AA82D0.h with the return type the symbol has.
class Class_10AA82D0 : public Class_10AAF570
{
public:
    virtual void Virtual0();

    Class_10B39870* GetLinkedObject();

    char Pad01[0x3];
    char Unknown04[4];
    int Unknown08;
    union
    {
        int unknown_0c;
        int m_LinkedObject;
    };
};

// Copied from include/Game/GState.h with the slots this function sits at added.
class GState : public Class_10AA82D0
{
public:
    virtual void Virtual0();
    virtual void Update(int p1);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void FUN_10b4bb80(Object_10B4BB80* A);

    bool ApplyAnimMotion(int A);
};

// FUNCTION: 0x10B4BB80 ?FUN_10b4bb80@GState@@UAEXPAVObject_10B4BB80@@@Z
void GState::FUN_10b4bb80(Object_10B4BB80* A)
{
    ((Class_10B193E0*)FUN_10b190e0())->FUN_10b19260((Struct_10B193E0*)A, 1.0f);
    int Diff = A->Unknown3C - A->Unknown404;
    if (Diff > 0x3fff || Diff < -0x3fff)
        A->Unknown404 = (int)((float)A->Unknown404 - A->Unknown410);
    if (!((Class_10B39670*)GetLinkedObject())->FUN_10b39670(A->Unknown344))
        ((Class_10B39530*)GetLinkedObject())->Play(A->Unknown344, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    Virtual4();
}
