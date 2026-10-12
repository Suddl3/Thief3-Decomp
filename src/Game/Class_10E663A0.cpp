// Game/Class_10E663A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A30060.h"

class cString
{
public:
    cString() : Unknown00(0) {}
    ~cString();

    cString& operator=(const cString& Other);

    char* Unknown00;
};

class Class_10E663A0 : public Class_10A30060
{
public:
    Class_10E663A0(const cString& A);

    cString Unknown04;
};

// FUNCTION: 0x10A30060 ??0Class_10E663A0@@QAE@ABVcString@@@Z
Class_10E663A0::Class_10E663A0(const cString& A)
{
    Unknown04 = A;
}
