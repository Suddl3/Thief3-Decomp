// Game/Class_10E89A10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E88D60.h"
#include "Game/Class_10E88D64.h"
#include "Game/Class_10E89818.h"
#include "Game/Class_10E89824.h"
#include "Game/Class_10E8984C.h"

extern void* DAT_10e89a10[];

class Class_10E89AA0
{
public:
    Class_10E89AA0(int A, int B, int C);

    void** Unknown00;
};

class Class_10E89A10 : public Class_10E89AA0
{
public:
    Class_10E89A10* Init(int A, int B);
};

// FUNCTION: 0x10B92660 ?Init@Class_10E89A10@@QAEPAV1@HH@Z
Class_10E89A10* Class_10E89A10::Init(int A, int B)
{
    this->Class_10E89AA0::Class_10E89AA0(0, A, B);
    Unknown00 = DAT_10e89a10;
    return this;
}
