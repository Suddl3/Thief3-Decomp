// Game/Class_10E6D990_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stdio.h>
#include "Game/Class_1090A780.h"
#include "Game/Class_10905A90_Member.h"

extern const char DAT_10e47660[];

// Copy of include/Game/cString.h: adds FUN_1095b160, which returns a string by value.
class cString : public Class_1090A780
{
public:
    cString() {}
    cString(const char* In);
    cString(const cString& Other);
    cString(const Class_1090A780& Other) : Class_1090A780(Other) {}

    void FUN_10907870(int Length, int Flag);
    cString& operator=(const cString& Other);
    cString& FUN_1090a590(const char* In);
    cString FUN_1095b160(char Sep);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }
};

// Copy of include/Game/Class_10AB37F0.h: adds FUN_10ab3ab0, which is called on the same object.
class Class_10AB37F0
{
public:
    void FUN_10ab37f0(const cString& Value);
    void FUN_10ab3ab0();

    cString Unknown00;
};

cString FUN_10a83850(FILE* File, int A);

bool FUN_1094c430(const cString& A, const cString& B);

class Class_10E6D990
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int FUN_10aa8a40(FILE* File, int Arg2);

    char Unknown04[0x4];
    cString Unknown08;
    char Unknown0C[0x14];
    Class_10AB37F0 Unknown20;
};

// FUNCTION: 0x10AA8A40 ?FUN_10aa8a40@Class_10E6D990@@UAEHPAU_iobuf@@H@Z
int Class_10E6D990::FUN_10aa8a40(FILE* File, int Arg2)
{
    cString Line = FUN_10a83850(File, Arg2);
    cString Value = Line.FUN_1095b160('=');
    if (FUN_1094c430(Value, Unknown08))
        return 0;
    Unknown20.FUN_10ab37f0(Line);
    Unknown20.FUN_10ab3ab0();
    return 1;
}
