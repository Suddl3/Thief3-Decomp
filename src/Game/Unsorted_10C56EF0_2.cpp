// Game/Unsorted_10C56EF0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C5A160_Y;

// Copied whole from include/Game/Class_10C56E40_Field00.h with the slots this method calls added.
class Class_10C56E40_Field00
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
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
    virtual float Virtual16();
};

// Copied whole from include/Game/Class_10C56E40.h; the destructor is the game's (0x10C56E40).
class Class_10C56E40
{
public:
    Class_10C56E40(Class_10C56E40_Field00* P)
    {
        Unknown00 = P;
        if (Unknown00)
            Unknown00->Virtual1();
    }
    ~Class_10C56E40()
    {
        if (Unknown00)
            Unknown00->Virtual2();
    }
    Class_10C56E40() : Unknown00(0) {}
    Class_10C56E40(Class_10C5A160_Y*& A);

    Class_10C56E40_Field00* Unknown00;
};

class Class_10C56EF0
{
public:
    bool FUN_10c56ef0(Class_10C56E40 Obj);

    char Pad00[0x64];
    float Unknown64;
    float Unknown68;
};

// FUNCTION: 0x10C56EF0 ?FUN_10c56ef0@Class_10C56EF0@@QAE_NVClass_10C56E40@@@Z
bool Class_10C56EF0::FUN_10c56ef0(Class_10C56E40 Obj)
{
    switch (Obj.Unknown00->Virtual3())
    {
    case 8:
        if (Obj.Unknown00->Virtual16() < Unknown64)
            return true;
        break;
    case 2:
        if (Obj.Unknown00->Virtual16() < Unknown68)
            return true;
        break;
    }
    return false;
}
