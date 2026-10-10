// Game/Class_10E95AC8_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8BE68.h"
#include "Game/Class_10FF667C.h"

struct Struct_10BC4C10;

class Class_10978090
{
public:
    int FUN_10978090();
};

class Class_10C08E80 : public Class_10978090
{
public:
    void FUN_10c08e80();
};

extern Class_10FF667C* DAT_10ff667c;

// The flags of the object Unknown24 refers to, 0 when it refers to none.
inline int GetFlags()
{
    if (!DAT_10ff667c->Unknown24->FUN_10978090())
        return 0;
    return ((Class_10978090*)DAT_10ff667c->Unknown24->FUN_10978090())->FUN_10978090();
}

class Class_10E95AC8 : public Class_10E8BE68
{
public:
    virtual void FUN_10be1ea0(Struct_10BC4C10* A, int B);
};

// FUNCTION: 0x10BE1EA0 ?FUN_10be1ea0@Class_10E95AC8@@UAEXPAUStruct_10BC4C10@@H@Z
void Class_10E95AC8::FUN_10be1ea0(Struct_10BC4C10* A, int B)
{
    Class_10E8BE68::FUN_10bc4c10(A, B);
    if (GetFlags() & 8)
        DAT_10ff667c->Unknown24->FUN_10c08e80();
}
