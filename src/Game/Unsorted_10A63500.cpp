// Game/Unsorted_10A63500.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A63500.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

Class_10905A90_Member* FUN_10905aa0();

class Class_10919C40;

// Class_1091CB20 as include/Game/Class_1091CB20.h declares it, with the constructor
// and the Class_109081E0 at 0x10 that the header's padding hides.
class Class_1091CB20
{
public:
    Class_1091CB20(Class_10919C40* A, const Class_109081E0& B, float C, float D, bool E, int F);
    int FUN_1091cb20();
    void FUN_1091be70();
    int FUN_1091cb40();
    int FUN_1091cb80(unsigned int Index);
    int Count()
    {
        if (!Unknown0C)
            FUN_1091be70();
        return Unknown00;
    }

    int Unknown00;
    char Unknown04[4];
    int* Unknown08;
    bool Unknown0C;
    char Unknown0D[0x3];
    Class_109081E0 Unknown10;
    char Unknown14[0x4];
    float Unknown18;
    int Unknown1C;
    Class_10919C40* Unknown20;
};

bool FUN_1094c430(const Class_109081E0& A, const Class_109081E0& B);

// FUNCTION: 0x10A63500 ?FUN_10a63500@Class_10A63500@@QAEXABVClass_109081E0@@PAVClass_10919C40@@@Z
void Class_10A63500::FUN_10a63500(const Class_109081E0& Name, Class_10919C40* Value)
{
    FUN_10905aa0()->Virtual8(0, 0);
    if (Unknown0C == 0)
    {
        Unknown0C = new(0, 0, 0, 0, 0) Class_1091CB20(Value, Name, -1.0f, -1.0f, true, 8);
    }
    else
    {
        Class_1091CB20* Obj = Unknown0C;
        if (Value != Obj->Unknown20)
        {
            Obj->Unknown20 = Value;
            Obj->Unknown0C = false;
        }
        Obj = Unknown0C;
        if (FUN_1094c430(Name, Obj->Unknown10))
        {
            Obj->Unknown10 = Name;
            Obj->Unknown0C = false;
        }
    }
    FUN_10905aa0()->Virtual9();
}
