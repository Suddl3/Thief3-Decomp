// Game/Unsorted_10A2FCD0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A30530.h"
#include "Game/Class_10A30690.h"

bool FUN_1090f010(const int* A, const int* B);

class Class_10E663A0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10a2fcd0(Class_10E663A0* Other);
    virtual void Virtual3();
    virtual const int* Virtual4();
};

// FUNCTION: 0x10A2FCD0 ?FUN_10a2fcd0@Class_10E663A0@@UAEHPAV1@@Z
int Class_10E663A0::FUN_10a2fcd0(Class_10E663A0* Other)
{
    return FUN_1090f010(Other->Virtual4(), Virtual4());
}

// FUNCTION: 0x10A30690 ??1Class_10A30690@@QAE@XZ
Class_10A30690::~Class_10A30690()
{
}
