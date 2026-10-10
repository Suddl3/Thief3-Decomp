// Game/Unsorted_10A3BB00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A3BA50.h"
#include "Game/Class_10E67938.h"

class Class_10E667AC
{
public:
    virtual ~Class_10E667AC();
    virtual void FUN_10a3ac50(int A) = 0;
};

struct Struct_10A3BD30
{
    int Unknown00;
    int Unknown04;
};

class Class_10E667C4 : public Class_10E67938, public Class_10E667AC
{
public:
    Class_10E667C4();
    virtual void FUN_10a4c470(int A, int B, int C, int D);
    virtual void FUN_10a3ac50(int A);

    Class_10A3BA50 Unknown08;
    int Unknown48;
    int Unknown4C;
    int Unknown50;
    int Unknown54;
    int Unknown58;
    int Unknown5C;
    int Unknown60;
    int Unknown64;
    int Unknown68;
};

// FUNCTION: 0x10A3BD30 ??0Class_10E667C4@@QAE@XZ
Class_10E667C4::Class_10E667C4()
    : Class_10E67938(), Class_10E667AC()
{
    char Flag;
    Struct_10A3BD30 Param;
    Param.Unknown00 = 0x25;
    Param.Unknown04 = 0;
    Unknown08.FUN_10a3ba50(&Flag, &Param);
    Unknown48 = 0;
    Unknown4C = 0;
    Unknown50 = 0;
    Unknown54 = 0;
    Unknown58 = 0;
    Unknown5C = 0;
    Unknown60 = 0;
    Unknown64 = 0;
    Unknown68 = 0;
}
