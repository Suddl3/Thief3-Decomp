// Game/Unsorted_10B8AB90_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B8AB90_Unknown50_Unknown00.h"
#include "Game/Class_10B8AB90_Unknown50.h"

class Class_10990D10;

class Class_10E894C8
{
public:
    virtual void FUN_10b92cb0(int p1);

    Class_10990D10* Unknown04;
};

class Class_10E89AA0 : public Class_10E894C8
{
public:
    ~Class_10E89AA0();

    int Unknown08;
};

class Class_10E89540_Unknown2C;

class Class_10E89540 : public Class_10E89AA0
{
public:
    ~Class_10E89540();

    char Unknown0C[0xC];
    bool Unknown18;
    char Unknown19[0x13];
    Class_10E89540_Unknown2C* Unknown2C;
};

class Class_10B8AB90 : public Class_10E89540
{
public:
    ~Class_10B8AB90();

    char Unknown30[0x20];
    Class_10B8AB90_Unknown50 Unknown50;
};

// FUNCTION: 0x10B8AB90 ??1Class_10B8AB90@@QAE@XZ
Class_10B8AB90::~Class_10B8AB90()
{
}
