// Game/Unsorted_10C36F40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E98C8C.h"

class MC_Follow
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int GetState();

    int GetStateFromFlags();

    char Unknown04[0x88];
    unsigned char Unknown8C;
};

class MoveCommand
{
public:
    ~MoveCommand();

    void** Unknown00;
    char Unknown04[0x48];
};

class Class_10C37390 : public MoveCommand
{
public:
    ~Class_10C37390();

    Class_10E98C8C Unknown4C;
};

// FUNCTION: 0x10C36F40 ?GetState@MC_Follow@@UAEHXZ
int MC_Follow::GetState()
{
    int Result = GetStateFromFlags();
    if (Result == 0x15 && Unknown8C == 1)
        return 0x16;
    return Result;
}

// FUNCTION: 0x10C37490 ??1Class_10C37390@@QAE@XZ
Class_10C37390::~Class_10C37390()
{
}
