// Game/cMotionControllerAnim_27.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C32A90_Obj
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();

    char Unknown04[0x18];
    char Unknown1C[0x14];
    char Unknown30[0xC];
    char Unknown3C[0x8];
};

class cMotionControllerAnim
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
    virtual bool Virtual9(Class_10C32A90_Obj* A);
    virtual bool FUN_10c32a90(Class_10C32A90_Obj* Obj);

    int FUN_10c32660(char* A, int B);

    char Unknown04[0xC8];
    int UnknownCC;
};

// FUNCTION: 0x10C32A90 ?FUN_10c32a90@cMotionControllerAnim@@UAE_NPAVClass_10C32A90_Obj@@@Z
bool cMotionControllerAnim::FUN_10c32a90(Class_10C32A90_Obj* Obj)
{
    if (Obj && Virtual9(Obj) == true)
    {
        Obj->Virtual8();
        char* Part;
        switch (Obj->Virtual5())
        {
        case 0:
            Part = Obj->Unknown30;
            break;
        case 1:
            Part = Obj->Unknown3C;
            break;
        case 2:
            Part = Obj->Unknown1C;
            break;
        default:
            return false;
        }
        if (Part)
        {
            UnknownCC = FUN_10c32660(Part, UnknownCC);
        }
    }
    return false;
}
