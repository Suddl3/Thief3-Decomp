// Game/Class_10E9CA9C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
// This module calls cString's destructor out of line where the rest of the game inlines it:
// the class as it compiles here.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090A780.h"

extern const char DAT_10e47660[];
Class_10905A90_Member* GetAllocator();

class cString : public Class_1090A780
{
public:
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }
    cString(const char* In);
    cString(const cString& Other);
    cString(const Class_1090A780& Other) : Class_1090A780(Other) {}

    void FUN_10907870(int Length, int Flag);
    cString& operator=(const cString& Other);
    cString& FUN_1090a590(const char* In);
    const char* operator*() const { return Unknown00 ? Unknown00 : DAT_10e47660; }
    bool IsEmpty() const
    {
        int Length = Unknown00 == 0 ? 0 : ((int*)Unknown00)[-1];
        return Length == 0;
    }
};


class Class_10C61C20_Param;

class Class_10E9CA9C
{
public:
    virtual void Virtual0();
    virtual void __stdcall SetText(const char* Text);
    virtual void FUN_10c61c20(Class_10C61C20_Param* p1);

    char Unknown04;
    char Pad05[0x3];
    cString m_Name;
};

// FUNCTION: 0x10C62760 ?SetText@Class_10E9CA9C@@UAGXPBD@Z
void __stdcall Class_10E9CA9C::SetText(const char* Text)
{
    m_Name = Text;
}
