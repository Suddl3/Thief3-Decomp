// Game/Class_10E96EB0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10C05A50.h"
#include "Game/Struct_10C3D0A0.h"

float Distance2D(const Struct_10C05A50* A, const Struct_10C05A50* B);

struct Struct_10BE91B0_Pos : public Struct_10C05A50
{
    float Unknown08;
};

struct Struct_10BE91B0
{
    char Unknown00[0x2C];
    Struct_10BE91B0_Pos Unknown2C;
};

struct Struct_10BE91B0_Member
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

class Class_10E8BE68
{
public:
    virtual void Virtual0();

    void PopState();
};

class Class_10E96EB0 : public Class_10E8BE68
{
public:
    virtual void Virtual1();
    virtual void FUN_10be91b0();

    Struct_10BE91B0_Member* Unknown04;
    char Unknown08[0x38];
    Struct_10BE91B0* Unknown40;
    char Unknown44[4];
    float Unknown48;
};

// FUNCTION: 0x10BE91B0 ?FUN_10be91b0@Class_10E96EB0@@UAEXXZ
void Class_10E96EB0::FUN_10be91b0()
{
    if (Unknown40)
    {
        Struct_10BE91B0_Pos Local = Unknown40->Unknown2C;
        Struct_10C3D0A0* Actor = (Struct_10C3D0A0*)Unknown04->Unknown08->FUN_10c7d570();
        float Dist = Distance2D(&Local, (const Struct_10C05A50*)&Actor->m_Position);
        if (!(Dist < Unknown48))
            return;
    }
    PopState();
}
