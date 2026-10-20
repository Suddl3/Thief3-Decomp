// Game/Unsorted_10B1F550_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

// The object's class, with the flag byte the code tests.
class Class_1098E0F0
{
public:
    void FUN_1098e0f0(int A);

    char Unknown00[0x78];
    bool Unknown78;
    char Unknown79[0x3B];
    void* Unknown0B4;
};

class Class_10E6D208;

// The manager the object is registered with.
class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, void* B, Class_10E6D208* C, int* D);
};

extern Class_10F46DA0* DAT_10f46da0;

// The base of the scratch object the manager is given.
class Class_10E50610
{
public:
    Class_10E50610() : Unknown04(0) {}
    virtual ~Class_10E50610() {}

    void* Unknown04;
};

class Class_10E6D208 : public Class_10E50610
{
public:
    Class_10E6D208() : Unknown08(0) {}

    int Unknown08;
};

class AGarrett
{
public:
    char Unknown00[0x2C];
    void* Unknown2C;
    char Unknown30[0x2EC];
    Class_1098E0F0* Unknown31C;
};

bool FUN_10b1f550(Class_1098E0F0* A, void** B);

// FUNCTION: 0x10B1F6A0 ?FUN_10b1f6a0@@YAXPAVAGarrett@@H@Z
void __cdecl FUN_10b1f6a0(AGarrett* Garrett, int Param)
{
    Class_1098E0F0* Obj = (Class_1098E0F0*)Param;
    if (Obj != 0 && !(Obj->Unknown78 & 1))
    {
        if (Garrett->Unknown31C != 0 && Garrett->Unknown31C != Obj)
        {
            Garrett->Unknown31C->FUN_1098e0f0(0);
            int Out = 0;
            Class_10E6D208 Local;
            DAT_10f46da0->Virtual5(0x34, Garrett->Unknown31C, &Local, &Out);
            Garrett->Unknown31C = 0;
        }
        if (FUN_10b1f550(Obj, &Garrett->Unknown2C))
        {
            int Out = 0;
            Class_10E6D208 Local;
            Local.Unknown04 = Garrett;
            DAT_10f46da0->Virtual5(0x33, Obj, &Local, &Out);
            Garrett->Unknown31C = Obj;
            return;
        }
        if (Garrett->Unknown31C != 0)
        {
            int Out = 0;
            Class_10E6D208 Local;
            DAT_10f46da0->Virtual5(0x34, Garrett->Unknown31C, &Local, &Out);
            Garrett->Unknown31C = 0;
        }
    }
    else
    {
        if (Garrett->Unknown31C != 0)
        {
            int Out = 0;
            Class_10E6D208 Local;
            DAT_10f46da0->Virtual5(0x34, Garrett->Unknown31C, &Local, &Out);
            Garrett->Unknown31C = 0;
        }
    }
}
