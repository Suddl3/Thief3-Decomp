// Game/Class_10E4A9C8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B59770.h"
#include "Game/Class_10BFBD70.h"

class Class_1091E2E0
{
public:
    virtual void Virtual0() = 0;
    void FUN_1091e2e0();

    char Unknown04[0x40];
};

class Class_10E4A9C8 : public Class_1091E2E0
{
public:
    ~Class_10E4A9C8();
    Class_10E4A9C8* FUN_10948600();
    void FUN_10948680();

    int Unknown44;
    bool Unknown48;
    int Unknown4C;
    char Unknown50[0xC];
    int Unknown5C;
    char Unknown60[4];
    Class_10B59770 Unknown64;
    Class_10BFBD70 Unknown70;
    Class_10BFBD70 Unknown7C;
    float Unknown88;
    float Unknown8C;
    float Unknown90;
    int Unknown94;
    char Unknown98[0x18];
    int UnknownB0;
    char UnknownB4[0x28];
    int UnknownDC;
    bool UnknownE0;
};

// FUNCTION: 0x10948890 ??1Class_10E4A9C8@@QAE@XZ
Class_10E4A9C8::~Class_10E4A9C8()
{
    FUN_10948680();
}
