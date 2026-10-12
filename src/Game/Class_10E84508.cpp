// Game/Class_10E84508.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

extern void* DAT_10e84508[];

class Class_10E87B68
{
public:
    Class_10E87B68();

    void** Unknown00;
};

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

class Class_10E84508 : public Class_10E87B68
{
public:
    Class_10E84508* FUN_10b64410();
    cString GetTitle();
};

// FUNCTION: 0x10B642C0 ?GetTitle@Class_10E84508@@QAE?AVcString@@XZ
cString Class_10E84508::GetTitle()
{
    cString Local = FUN_1090a660("<string=T_TabScreenTitleLoadGameTitle>");
    return Local;
}

// FUNCTION: 0x10B64410 ?FUN_10b64410@Class_10E84508@@QAEPAV1@XZ
Class_10E84508* Class_10E84508::FUN_10b64410()
{
    this->Class_10E87B68::Class_10E87B68();
    Unknown00 = DAT_10e84508;
    return this;
}
