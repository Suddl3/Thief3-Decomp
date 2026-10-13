// Game/cConGoalCompleteEvent_7.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stdio.h>
#include "Game/Class_1090A780.h"

extern const char DAT_10e47660[];

extern char DAT_10e6da0c[];

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

int FUN_10af3690(const char* A, const char* B);

class cConGoalCompleteEvent
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int FUN_10aab410(FILE* File, int Arg2);

    char Unknown04[0xC];
    Class_10AB37F0 Unknown10;
};

// FUNCTION: 0x10AAB410 ?FUN_10aab410@cConGoalCompleteEvent@@UAEHPAU_iobuf@@H@Z
int cConGoalCompleteEvent::FUN_10aab410(FILE* File, int Arg2)
{
    cString Line = FUN_10a83850(File, Arg2);
    cString Value = Line.FUN_1095b160('=');
    if (FUN_10af3690(DAT_10e6da0c, *Value) != 0)
        return 0;
    Unknown10.FUN_10ab37f0(Line);
    Unknown10.FUN_10ab3ab0();
    return 1;
}
