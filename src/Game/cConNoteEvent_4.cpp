// Game/cConNoteEvent_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stdio.h>
#include "Game/Class_1090A780.h"

extern const char DAT_10e47660[];

extern char DAT_10e6d9e0[];

// Copy of include/Game/Class_109081E0.h: adds FUN_1095b160, which returns a string by value.
class Class_109081E0 : public Class_1090A780
{
public:
    Class_109081E0() {}
    Class_109081E0(const char* In);
    Class_109081E0(const Class_109081E0& Other);
    Class_109081E0(const Class_1090A780& Other) : Class_1090A780(Other) {}

    void FUN_10907870(int Length, int Flag);
    Class_109081E0& operator=(const Class_109081E0& Other);
    Class_109081E0& FUN_1090a590(const char* In);
    Class_109081E0 FUN_1095b160(char Sep);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }
};

Class_109081E0 FUN_10a83850(FILE* File, int A);

int FUN_10af3690(const char* A, const char* B);

class cConNoteEvent
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int ReadNoteLine(FILE* File, int Arg2);

    Class_109081E0 Unknown04;
    Class_109081E0 m_Note;
};

// FUNCTION: 0x10AAAD70 ?ReadNoteLine@cConNoteEvent@@UAEHPAU_iobuf@@H@Z
int cConNoteEvent::ReadNoteLine(FILE* File, int Arg2)
{
    Class_109081E0 Line = FUN_10a83850(File, Arg2);
    Class_109081E0 Value = Line.FUN_1095b160('=');
    if (FUN_10af3690(*Value, DAT_10e6d9e0) != 0)
        return 0;
    m_Note = Line;
    return 1;
}
