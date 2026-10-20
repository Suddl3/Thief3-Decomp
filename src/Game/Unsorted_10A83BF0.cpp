// Game/Unsorted_10A83BF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stdio.h>
#include "Game/Class_1090A780.h"

extern const char DAT_10e47660[];

extern void* DAT_10e6c0f8[];

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

int appStricmp(const char* A, const char* B);

// The child objects: their sixth virtual takes the file and the line number.
class Object_10A80D30
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int Virtual6(FILE* File, int A);
};

// Copy of include/Game/Class_10A80D30.h: the subject is a string, not a char*.
class Class_10A80D30
{
public:
    bool WriteLines(FILE* File, int A);
    bool FUN_10a83da0(FILE* File, int A);

    char Unknown00[4];
    int ChildCount;
    char Unknown08[4];
    Object_10A80D30** Children;
    char Unknown10[0x24];
    cString Subject;
};

// FUNCTION: 0x10A83DA0 ?FUN_10a83da0@Class_10A80D30@@QAE_NPAU_iobuf@@H@Z
bool Class_10A80D30::FUN_10a83da0(FILE* File, int A)
{
    cString Line = FUN_10a83850(File, A);
    cString Value = Line.FUN_1095b160('=');
    if (appStricmp(*Value, (const char*)DAT_10e6c0f8) != 0)
        return false;
    Subject = Line;
    for (int i = 0; i < ChildCount; i++)
    {
        if (!Children[i]->Virtual6(File, A))
            return false;
    }
    return true;
}
