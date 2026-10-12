// Game/Class_10E95780.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/cBoneAimController.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10E95780_Unknown04.h"

extern const char DAT_10e5052c[];

cBoneAimController* GetBoneAimController();

class Class_10E90D70
{
public:
    virtual void Virtual0();

    ~Class_10E90D70();
};

class Class_10E95780 : public Class_10E90D70
{
public:
    ~Class_10E95780();

    virtual void Virtual1();

    Class_10E95780_Unknown04* Unknown04;
};

// FUNCTION: 0x10BE1860 ??1Class_10E95780@@QAE@XZ
Class_10E95780::~Class_10E95780()
{
    FName Name(DAT_10e5052c, FNAME_Add);
    Class_10C7D570* Item = Unknown04->Unknown08;
    GetBoneAimController()->FUN_10a2c2a0(Item->FUN_10c7d570(), (int*)&Name);
}
