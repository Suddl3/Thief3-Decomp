// Game/Unsorted_1092D9F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1092D990.h"
#include "Game/Class_10D3C2A0.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_1092D9F0 : public Class_1092D990
{
public:
    Class_1092D9F0();

    void FUN_1092d700();

    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    float Unknown1C;
    int Unknown20;
    float Unknown24;
    float Unknown28;
    float Unknown2C;
    Class_10D3C2A0 Unknown30;
    bool Unknown3C;
    char Unknown3D[3];
    Class_10D3C2A0 Unknown40;
    Class_10D3C2A0 Unknown4C;
    Class_10D3C2A0 Unknown58;
    Class_10D3C2A0 Unknown64;
    Class_10D3C2A0 Unknown70;
    bool Unknown7C;
    bool Unknown7D;
};

// FUNCTION: 0x1092D9F0 ??0Class_1092D9F0@@QAE@XZ
Class_1092D9F0::Class_1092D9F0()
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0.25f;
    Unknown20 = 0;
    Unknown24 = 0.41f;
    Unknown28 = 1.0f;
    Unknown30.FUN_10d3c300(0x3e99999a);
    Unknown40.FUN_10d3c300(0x3da3d70a);
    Unknown4C.FUN_10d3c300(0x3e23d70a);
    Unknown3C = true;
    Unknown7C = true;
    Unknown70.FUN_10d3c300(0x3e4ccccd);
    Unknown2C = 0.003f;
    Unknown58.FUN_10d3c300(0x40000000);
    Unknown64.FUN_10d3c300(0x41000000);
    Unknown7D = true;
    FUN_1092d990();
    FUN_1092d700();
    FUN_10905aa0()->Virtual9();
}
