// Game/Unsorted_1095B160.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

extern const char DAT_10e47660[];

extern const char DAT_10e4af34[];

extern "C" char* _strupr(char* String);

extern "C" char* strstr(const char* Haystack, const char* Needle);

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class cString
{
public:
    cString() : Unknown00(0) {}

    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }

    char* Unknown00;
};

class Class_10DB58F0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual bool Virtual24(const char* Name, int Type, cString* Out, int C);
};

Class_10DB58F0* FUN_10db58f0();

// Copied from include/Game/Class_1091ABB0.h with the field at offset 0 that this function reads.
class Class_1091ABB0
{
public:
    cString FUN_1091abb0();

    cString Unknown00;
};

// FUNCTION: 0x1095B2E0 ?FUN_1095b2e0@@YA_NPAVClass_1091ABB0@@@Z
bool FUN_1095b2e0(Class_1091ABB0* Arg)
{
    cString Str;
    if (FUN_10db58f0()->Virtual24(*Arg->Unknown00, 9, &Str, 0))
        return false;
    cString Name = Arg->FUN_1091abb0();
    int Index;
    if (!Name.Unknown00)
        Index = -1;
    else
    {
        _strupr(Name.Unknown00);
        if (!Name.Unknown00)
            Index = -1;
        else
        {
            char* Found = strstr(Name.Unknown00, DAT_10e4af34);
            Index = Found ? Found - Name.Unknown00 : -1;
        }
    }
    return Index == 0;
}
