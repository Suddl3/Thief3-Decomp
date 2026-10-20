// Game/cConChoiceEvent_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stdio.h>
#include "Game/Class_1090A780.h"

extern const char DAT_10e47660[];

extern char DAT_10e6d9b4[];

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

cString FUN_10a83850(FILE* File, int A);

int FUN_10af3690(const char* A, const char* B);

// One choice of the array: a cString and 20 more bytes.
class Class_10AA9B10_Unknown10
{
public:
    cString Unknown00;
    char Unknown04[0x14];
};

class cConChoiceEvent
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int FUN_10aa9b10(FILE* File, int Arg2);

    char Unknown04[0x4];
    int Unknown08;
    char Unknown0C[0x4];
    Class_10AA9B10_Unknown10* Unknown10;
};

// FUNCTION: 0x10AA9B10 ?FUN_10aa9b10@cConChoiceEvent@@UAEHPAU_iobuf@@H@Z
// Reads one choice per line and stores it in the event's array.
int cConChoiceEvent::FUN_10aa9b10(FILE* File, int Arg2)
{
    for (int i = 0; i < Unknown08; i++)
    {
        cString Line = FUN_10a83850(File, Arg2);
        cString Value = Line.FUN_1095b160('=');
        if (FUN_10af3690(DAT_10e6d9b4, *Value) != 0)
            return 0;
        Unknown10[i].Unknown00 = Line;
    }
    return 1;
}
