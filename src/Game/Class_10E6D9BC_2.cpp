// Game/Class_10E6D9BC_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

extern const char DAT_10e6c100[];

class Class_10E6C104
{
public:
    Class_10E6C104();
    ~Class_10E6C104();
    virtual void Virtual0();

    int Unknown04;
};

class Class_10E6D9BC : public Class_10E6C104
{
public:
    Class_10E6D9BC();
    virtual void Virtual0();

    cString Unknown08;
    cString Unknown0C;
    cString Unknown10;
    cString Unknown14;
    cString Unknown18;
    cString Unknown1C;
    cString Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    int Unknown30;
};

// FUNCTION: 0x10AA9DF0 ??0Class_10E6D9BC@@QAE@XZ
Class_10E6D9BC::Class_10E6D9BC()
    : Class_10E6C104(), Unknown08(DAT_10e6c100), Unknown0C(DAT_10e6c100), Unknown10(DAT_10e6c100),
      Unknown14(DAT_10e6c100), Unknown18(DAT_10e6c100), Unknown1C(DAT_10e6c100), Unknown20(DAT_10e6c100),
      Unknown24(-1), Unknown28(0), Unknown2C(0), Unknown30(1)
{
}
