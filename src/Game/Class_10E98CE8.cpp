// Game/Class_10E98CE8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C7D570.h"

class Class_10BAC050 : public Class_10C7D570
{
public:
    int FUN_10baac90(int A);
};

class Class_10E98CE8
{
public:
    virtual bool FUN_10c1a3a0(int Param);

    Class_10BAC050* Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10C1A3A0 ?FUN_10c1a3a0@Class_10E98CE8@@UAE_NH@Z
bool Class_10E98CE8::FUN_10c1a3a0(int Param)
{
    if (Param == (int)Unknown04->FUN_10c7d570())
        return false;
    return Unknown04->FUN_10baac90(Param) == Unknown08;
}
