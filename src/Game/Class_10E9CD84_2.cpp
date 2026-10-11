// Game/Class_10E9CD84_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10C60C60.h"
#include "Game/Class_10C64030_Member.h"

class Class_10EB7660
{
public:
    Class_10EB7660();
    virtual ~Class_10EB7660() {}

    int Unknown04;
};

class Class_10E9CD84 : public Class_10EB7660
{
public:
    Class_10E9CD84(Class_10C64030_Member* A);
    virtual ~Class_10E9CD84();

    Class_10C64030_Member* Unknown08;
    Class_10C60C60 Unknown0C;
    int Unknown10;
    bool Unknown14;
    bool Unknown15;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
};

// FUNCTION: 0x10C63C50 ??0Class_10E9CD84@@QAE@PAVClass_10C64030_Member@@@Z
Class_10E9CD84::Class_10E9CD84(Class_10C64030_Member* A)
    : Unknown0C(FVector(0.0f, 0.0f, 0.0f), FVector(0.0f, 0.0f, 0.0f)), Unknown10(0), Unknown14(false),
      Unknown15(false), Unknown18(0), Unknown1C(-1), Unknown20(0), Unknown24(0), Unknown28(0)
{
    Unknown08 = A->Virtual14();
}
