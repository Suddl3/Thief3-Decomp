// Game/Class_10E93020_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E90D70.h"
#include "Game/Class_10BD0270.h"

class Class_10E93020 : public Class_10E90D70
{
public:
    ~Class_10E93020();

    int Unknown40;
    Class_10BD0270* Unknown44[4];
    bool Unknown54;
    bool Unknown55;
    bool Unknown56;
    char Pad57[0x1];
};

// FUNCTION: 0x10BD0730 ??1Class_10E93020@@QAE@XZ
Class_10E93020::~Class_10E93020()
{
    for (int i = 0; i < 4; i++)
    {
        if (Unknown44[i])
        {
            delete Unknown44[i];
            Unknown44[i] = 0;
        }
    }
}
