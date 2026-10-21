// Game/Unsorted_10A6B180.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cActorManager.h"
#include "Game/Config.h"

extern const char DAT_10e6b924[];

extern const char DAT_10e6b934[];

extern const char DAT_10e6b8c0[];

extern const char DAT_10e6b8a4[];

extern const char DAT_10e6b888[];

extern const char DAT_10e6b86c[];

extern const char DAT_10e6b854[];

extern const char DAT_10e6b83c[];

extern const char DAT_10e6b828[];

extern const char DAT_10e6b80c[];

extern const char DAT_10e6b7f4[];

extern const char DAT_10e6b7e0[];

extern const char DAT_10e6b7c0[];

extern const char DAT_10e6b7a8[];

extern void* DAT_10e6b8c8[];

// Class_10E6B8C8: the actor manager it holds is the first member, so the
// manager's constructor runs on this object and the class's own table is
// stored over it.
class Class_10E6B8C8
{
public:
    Class_10E6B8C8();

    cActorManager Base;

    int Unknown04;
    int Unknown08;
    void* Unknown0C;
    float Unknown10;
    float Unknown14;
    float Unknown18;
    float Unknown1C;
    float Unknown20;
    float Unknown24;
    float Unknown28;
    float Unknown2C;
    float Unknown30;
    float Unknown34;
    float Unknown38;
    float Unknown3C;
    float Unknown40;
};

// FUNCTION: 0x10A6B180 ??0Class_10E6B8C8@@QAE@XZ
Class_10E6B8C8::Class_10E6B8C8()
{
    *(void**)this = (void*)&DAT_10e6b8c8;

    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
    Unknown20 = 0;
    Unknown24 = 0;
    Unknown28 = 0;
    Unknown2C = 0;
    Unknown30 = 0;
    Unknown34 = 0;
    Unknown38 = 0;
    Unknown3C = 0;
    Unknown40 = 0;

    Config::Instance()->GetFloat(DAT_10e6b924, DAT_10e6b934, &Unknown10, 0);
    Unknown10 *= 16.0f;

    Config::Instance()->GetFloat(DAT_10e6b924, DAT_10e6b8c0, &Unknown14, 0);
    Unknown14 *= 16.0f;

    Config::Instance()->GetFloat(DAT_10e6b924, DAT_10e6b8a4, &Unknown18, 0);
    Unknown18 *= 16.0f;

    Config::Instance()->GetFloat(DAT_10e6b924, DAT_10e6b888, &Unknown1C, 0);
    Unknown1C *= 16.0f;

    Config::Instance()->GetFloat(DAT_10e6b924, DAT_10e6b86c, &Unknown20, 0);
    Unknown20 *= 182.04445f;

    Config::Instance()->GetFloat(DAT_10e6b924, DAT_10e6b854, &Unknown24, 0);

    Config::Instance()->GetFloat(DAT_10e6b924, DAT_10e6b83c, &Unknown28, 0);

    Config::Instance()->GetFloat(DAT_10e6b924, DAT_10e6b828, &Unknown2C, 0);
    Unknown2C *= 16.0f;

    Config::Instance()->GetFloat(DAT_10e6b924, DAT_10e6b80c, &Unknown30, 0);

    Config::Instance()->GetFloat(DAT_10e6b924, DAT_10e6b7f4, &Unknown34, 0);
    Unknown34 *= 16.0f;

    Config::Instance()->GetFloat(DAT_10e6b924, DAT_10e6b7e0, &Unknown38, 0);
    Unknown38 *= 16.0f;

    Config::Instance()->GetFloat(DAT_10e6b924, DAT_10e6b7c0, &Unknown3C, 0);

    Config::Instance()->GetFloat(DAT_10e6b924, DAT_10e6b7a8, &Unknown40, 0);
}
