// Game/Class_10E85AD8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"

class Class_10E67FD0
{
public:
    Class_10E67FD0();

    virtual ~Class_10E67FD0();

    char Unknown04[0xC0];
    int UnknownC4;
    char UnknownC8[0x20];
    int Unknown0E8;
    char Unknown0EC[0x2C];
};

class Class_10E85AD8 : public Class_10E67FD0
{
public:
    Class_10E85AD8();

    virtual ~Class_10E85AD8();

    int FindCurrentIndex();

    int Unknown118;
    int Unknown11C;
    int Unknown120;
    int Unknown124;
    int Unknown128;
    int Unknown12C;
    int Unknown130;
    int Unknown134;
    int Unknown138;
    int Unknown13C;
    int Unknown140;
    int Unknown144;
    int Unknown148;
    cIntArray Unknown14C;
    int m_CurrentIndex;
    int Unknown15C;
    int Unknown160;
    int Unknown164;
    int Unknown168;
    int Unknown16C;
    char Unknown170[0xC];
    int Unknown17C;
    int m_State;
};

// FUNCTION: 0x10B69640 ?FindCurrentIndex@Class_10E85AD8@@QAEHXZ
int Class_10E85AD8::FindCurrentIndex()
{
    int i;
    for (i = 0; i < Unknown14C.Unknown00; i++)
    {
        if (Unknown14C.Unknown08[i] == UnknownC4)
        {
            m_CurrentIndex = i;
            break;
        }
    }
    return i;
}
