// Game/Class_10E9AE24_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

class MC_FollowAbsolute : public MC_Follow
{
public:
    ~MC_FollowAbsolute();

    int m_OffsetX;
    int m_OffsetY;
};

// FUNCTION: 0x10C37770 ??1MC_FollowAbsolute@@QAE@XZ
MC_FollowAbsolute::~MC_FollowAbsolute()
{
}
