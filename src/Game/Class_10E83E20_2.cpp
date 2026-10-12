// Game/Class_10E83E20_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"

extern void* DAT_10e7edb8[];

class Class_10E69080
{
public:
    Class_10E69080();
    ~Class_10E69080();
    virtual void Virtual0();

    char Unknown04[0x114];
};

class Class_10E83E20 : public Class_10E69080
{
public:
    Class_10E83E20();
    virtual void Virtual0();

    void** Unknown118;
    char Unknown11C[0xB4];
    float m_Countdown;
    int Unknown1D4;
    int Unknown1D8;
    int Unknown1DC;
    bool Unknown1E0;
    Class_109081E0 Unknown1E4;
    bool Unknown1E8;
    int Unknown1EC;
    int Unknown1F0;
    int Unknown1F4;
    int Unknown1F8;
    int Unknown1FC;
};

// FUNCTION: 0x10B610A0 ??0Class_10E83E20@@QAE@XZ
Class_10E83E20::Class_10E83E20()
    : Class_10E69080(), Unknown118(DAT_10e7edb8), m_Countdown(0.3f), Unknown1D4(0), Unknown1D8(0), Unknown1DC(0),
      Unknown1E0(false), Unknown1E4(DAT_10e47660), Unknown1E8(false), Unknown1EC(0), Unknown1F8(0), Unknown1FC(0)
{
}
