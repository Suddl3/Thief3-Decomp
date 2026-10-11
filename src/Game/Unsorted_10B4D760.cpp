// Game/Unsorted_10B4D760.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B22020.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B396B0.h"

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int FUN_10aa82d0();

    char Unknown04[4];
    int Unknown08;
    int Unknown0C;
};

class Class_10B4D800 : public Class_10AA82D0
{
public:
    void FUN_10b4d800(Class_10B22020* A);

    char Unknown10;
    bool Unknown11;
};

// FUNCTION: 0x10B4D800 ?FUN_10b4d800@Class_10B4D800@@QAEXPAVClass_10B22020@@@Z
void Class_10B4D800::FUN_10b4d800(Class_10B22020* A)
{
    int Value = Unknown08;
    Unknown11 = true;
    if (Value != 0x101)
    {
        ((Class_10B396B0*)FUN_10aa82d0())->FUN_10b396b0(Value);
        Unknown08 = 0x101;
    }
    A->Unknown460 = 0;
    A->Unknown4BC = 0;
    if (Unknown10 == 10)
    {
        switch (Value)
        {
        case 200:
        case 204:
            Unknown08 = 0xd0;
            break;
        case 201:
        case 205:
            Unknown08 = 0xd1;
            break;
        case 202:
        case 206:
            Unknown08 = 0xd2;
            break;
        case 203:
        case 207:
            Unknown08 = 0xd3;
            break;
        }
    }
    else
    {
        switch (Value)
        {
        case 125:
        case 129:
            Unknown08 = 0x85;
            break;
        case 126:
        case 130:
            Unknown08 = 0x86;
            break;
        case 127:
        case 131:
            Unknown08 = 0x87;
            break;
        case 128:
        case 132:
            Unknown08 = 0x88;
            break;
        }
    }
    if (Unknown08 != 0x101)
        ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(Unknown08, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
}
