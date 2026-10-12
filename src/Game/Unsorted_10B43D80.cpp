// Game/Unsorted_10B43D80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B787F0.h"
#include "Game/Class_10B2AB30.h"

extern void* DAT_10e81130[];

class cBorderWindow
{
public:
    cBorderWindow();

    void** Unknown00;
    char Unknown04[0xE4];
    int Unknown0E8;
    char Unknown0EC[0x64];
};

class Class_10E81130 : public cBorderWindow
{
public:
    Class_10E81130* FUN_10b46080();

    int Unknown150;
    int Unknown154;
    int Unknown158;
    int Unknown15C;
    int Unknown160;
};

class Class_10E80C78 : public Class_10B787F0
{
public:
    virtual void Virtual1();
    ~Class_10E80C78();

    char Unknown04[0x194];
    Class_10B2AB30 Unknown198;
};

// FUNCTION: 0x10B43D80 ??1Class_10E80C78@@QAE@XZ
Class_10E80C78::~Class_10E80C78()
{
}

// FUNCTION: 0x10B46080 ?FUN_10b46080@Class_10E81130@@QAEPAV1@XZ
Class_10E81130* Class_10E81130::FUN_10b46080()
{
    this->cBorderWindow::cBorderWindow();
    Unknown150 = 0;
    Unknown154 = 0;
    Unknown158 = 0;
    Unknown15C = 0;
    Unknown160 = 0;
    Unknown00 = DAT_10e81130;
    Unknown0E8 = 6;
    return this;
}
