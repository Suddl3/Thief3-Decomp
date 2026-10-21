// Game/Unsorted_10961800.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class Class_10B7C000
{
public:
    virtual void Virtual0();

    ~Class_10B7C000();

    void Destroy();

    char Unknown04[0x28];
};

class Class_10961640 : public Class_10B7C000
{
public:
    ~Class_10961640();
};

class Class_10E4B178
{
public:
    virtual void Virtual0();

    char Unknown04[0x8];
};

class Class_10961800 : public Class_10961640, public Class_10E4B178
{
public:
    ~Class_10961800();

    cIntArray Unknown38[8];
};

// FUNCTION: 0x10961800 ??1Class_10961800@@QAE@XZ
Class_10961800::~Class_10961800()
{
    Class_10B7C000::Destroy();
}
