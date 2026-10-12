// Game/Unsorted_10924B70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1094D700.h"
#include "Game/Class_1094D9A0.h"

extern void** DAT_10f3199c;

class Class_10924B70_Base
{
public:
    ~Class_10924B70_Base()
    {
        DAT_10f3199c = 0;
    }

    char Unknown00[0x30];
};

class Class_10924B70 : public Class_10924B70_Base
{
public:
    ~Class_10924B70();

    void Release();

    Class_1094D700 Unknown30;
    Class_1094D9A0 Unknown48[3];
};

// FUNCTION: 0x10924B70 ??1Class_10924B70@@QAE@XZ
Class_10924B70::~Class_10924B70()
{
    Release();
}
