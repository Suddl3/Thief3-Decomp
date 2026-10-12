// Game/Class_10E83230.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

class Class_1090A780
{
public:
    Class_1090A780(const Class_1090A780& Other);

    char* Unknown00;
};

class cString : public Class_1090A780
{
public:
    ~cString()
    {
        if (Unknown00)
        {
            int* Obj = (int*)Unknown00 - 1;
            GetAllocator()->Virtual5(Obj);
        }
    }
};

cString FUN_1090a660(const char* Text);

class Class_10E83230
{
public:
    cString GetTitle();
};

// FUNCTION: 0x10B5C2A0 ?GetTitle@Class_10E83230@@QAE?AVcString@@XZ
cString Class_10E83230::GetTitle()
{
    cString Local = FUN_1090a660("<string=T_TabScreenMissionFailedTitle>");
    return Local;
}
