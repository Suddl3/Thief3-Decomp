// Game/Class_10E6CC0C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10978090.h"
#include "Game/Class_10C08940.h"

int appStricmp(const char* A, const char* B);

struct Struct_10A93240Result
{
    const char* Unknown00;
};

class Class_10AAB5C0Result
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual Struct_10A93240Result* Virtual5(int A);
};

struct Struct_10A93240
{
    char Unknown00[0x24];
    FString Unknown24;
    char Unknown30[0x10];
    int Unknown40;
};

class Class_10E6CE28 : public Class_10978090
{
public:
    int GetUnknown08();
};

class Class_10E5B578
{
public:
    virtual int Virtual0(int A, int B, Struct_10A93240* C, int D) = 0;
};

class Class_10E6CC0C : public Class_10E6CE28, public Class_10E5B578
{
public:
    virtual int Virtual0(int A, int B, Struct_10A93240* C, int D);
};

// FUNCTION: 0x10A93240 ?Virtual0@Class_10E6CC0C@@UAEHHHPAUStruct_10A93240@@H@Z
int Class_10E6CC0C::Virtual0(int A, int B, Struct_10A93240* C, int D)
{
    Class_10AAB5C0Result* Obj = (Class_10AAB5C0Result*)GetUnknown08();
    Struct_10A93240Result* Entry = Obj->Virtual5(1);
    const char* Str2 = Entry->Unknown00;
    if (!Str2)
        Str2 = "";
    if (appStricmp(**(C->Unknown40 ? &C->Unknown24 : 0), Str2) == 0)
        return FUN_10978090()->Virtual3(Virtual4(), GetUnknown08());
}
