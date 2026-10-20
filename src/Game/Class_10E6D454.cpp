// Game/Class_10E6D454.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6D454.h"
#include "Game/Struct_10AA3520.h"

class UProperty;

class UStruct;

class Class_10A0C080;

class Class_10AA2D30_Unknown94;

class Class_10B21560
{
public:
    char Unknown00[0x94];
    Class_10AA2D30_Unknown94* Unknown94;
};

class Class_10AA2D30_Param
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
    virtual float Virtual8(int A);
};

extern Struct_10AA3520* DAT_10f35dec;

extern UStruct* DAT_10f349a0;

extern const char DAT_10e6d470[];

extern const char DAT_10e6d460[];

UStruct* FUN_10994700(const char* Name);

void FUN_10993360();

UProperty* FindProperty(UStruct* Struct, const char* Name);

Class_10A0C080* FUN_10a0b9e0();

class Class_10A0C080
{
public:
    void FUN_10a0c080(Class_10AA2D30_Unknown94* A, UProperty* B, float C, float D, int E);
};

// FUNCTION: 0x10AA2D30 ?FUN_10aa2d30@Class_10E6D454@@UAEHHHPAVClass_10AA2D30_Param@@@Z
int Class_10E6D454::FUN_10aa2d30(int A, int B, Class_10AA2D30_Param* C)
{
    float F1 = C->Virtual8(0);
    float F2 = C->Virtual8(1);
    float F3 = C->Virtual8(2);
    Class_10B21560* Obj = DAT_10f35dec->Unknown08;
    if (Obj != 0)
    {
        Class_10AA2D30_Unknown94* Sub = Obj->Unknown94;
        if (Sub != 0)
        {
            if (DAT_10f349a0 == 0)
            {
                DAT_10f349a0 = FUN_10994700("Engine");
                FUN_10993360();
            }
            UProperty* Start = FindProperty(DAT_10f349a0, DAT_10e6d470);
            if (DAT_10f349a0 == 0)
            {
                DAT_10f349a0 = FUN_10994700("Engine");
                FUN_10993360();
            }
            UProperty* End = FindProperty(DAT_10f349a0, DAT_10e6d460);
            FUN_10a0b9e0()->FUN_10a0c080(Sub, Start, F1, F3, 0);
            FUN_10a0b9e0()->FUN_10a0c080(Sub, End, F2, F3, 0);
        }
    }
    return 1;
}
