// Game/Class_10E9AE88_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E98C8C.h"

class MoveCommand
{
public:
    ~MoveCommand();

    void** Unknown00;
    char Unknown04[0x48];
};

class MC_Follow : public MoveCommand
{
public:
    Class_10E98C8C Unknown4C;
    char Unknown54[0x40];
};

class MC_StayNear : public MC_Follow
{
public:
    ~MC_StayNear();
};

// FUNCTION: 0x10C37EF0 ??1MC_StayNear@@QAE@XZ
MC_StayNear::~MC_StayNear()
{
}
