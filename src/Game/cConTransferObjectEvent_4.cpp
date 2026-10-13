// Game/cConTransferObjectEvent_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stdio.h>
#include "Game/Class_1090A780.h"

extern const char* const DAT_10e47660;

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

bool FUN_1094c430(const cString& A, const cString& B);

class cConTransferObjectEvent
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int FUN_10aa7620(FILE* File, int Arg2);

    char Unknown04[0x8];
    cString Unknown0C;
    char Unknown10[0x10];
    cString Unknown20;
};

// FUNCTION: 0x10AA7620 ?FUN_10aa7620@cConTransferObjectEvent@@UAEHPAU_iobuf@@H@Z
int cConTransferObjectEvent::FUN_10aa7620(FILE* File, int Arg2)
{
    cString Line = FUN_10a83850(File, Arg2);
    cString Value = Line.FUN_1095b160('=');
    if (FUN_1094c430(Value, Unknown0C))
        return 0;
    Unknown20 = Line;
    return 1;
}
