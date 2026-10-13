// Game/Unsorted_10C38F70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10C05A50.h"
#include "Game/Struct_10C05A80.h"

float Distance2D(const Struct_10C05A50* A, const Struct_10C05A50* B);

float DistanceSquared3D(const Struct_10C05A80* A, const Struct_10C05A80* B);

// The object at this+0x48: its Virtual34 gives the Class_10C7D570 whose FUN_10c7d570 gives the actor's position.
class Class_10C38D90_Unknown48
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
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual Class_10C7D570* Virtual34();
};

// The actor's position is a 3D point at +0x2C.
struct Struct_10C38F70_Actor
{
    char Unknown00[0x2C];
    Struct_10C05A80 Unknown2C;
};

class Class_10C38F70
{
public:
    bool FUN_10c38f70();

    char Unknown00[0x3C];
    Struct_10C05A80 Unknown3C;
    Class_10C38D90_Unknown48* Unknown48;
    char Unknown4C[0x5C];
    Struct_10C05A80* UnknownA8;
    int UnknownAC;
};

// FUNCTION: 0x10C38F70 ?FUN_10c38f70@Class_10C38F70@@QAE_NXZ
bool Class_10C38F70::FUN_10c38f70()
{
    Struct_10C05A80* Last = UnknownA8 + UnknownAC;
    Struct_10C05A80* Prev = UnknownAC == 0 ? &Unknown3C : UnknownA8 + (UnknownAC - 1);
    Struct_10C05A80 Ahead;
    FVector Dir;
    Dir.X = Last->Unknown00 - Prev->Unknown00;
    Dir.Y = Last->Unknown04 - Prev->Unknown04;
    Dir.Z = 0.0f;
    Dir.Normalize();
    Dir.X *= 8.0f;
    Dir.Y *= 8.0f;
    float Z8 = Dir.Z * 8.0f;
    float Wz = Last->Unknown08 + Z8;
    float Wy = Last->Unknown04 + Dir.Y;
    float Wx = Last->Unknown00 + Dir.X;
    Ahead.Unknown00 = Wx;
    Ahead.Unknown04 = Wy;
    Ahead.Unknown08 = Wz;
    float Vz = Last->Unknown08 - Z8;
    float Vy = Last->Unknown04 - Dir.Y;
    float Vx = Last->Unknown00 - Dir.X;
    Dir.X = Vx;
    Dir.Y = Vy;
    Dir.Z = Vz;
    Struct_10C38F70_Actor* Actor = (Struct_10C38F70_Actor*)Unknown48->Virtual34()->FUN_10c7d570();
    Struct_10C05A80* Pos = &Actor->Unknown2C;
    float Near = DistanceSquared3D(Pos, &Ahead);
    if (DistanceSquared3D(Pos, (const Struct_10C05A80*)&Dir) > Near)
        return true;
    return Distance2D((const Struct_10C05A50*)Pos, (const Struct_10C05A50*)Last) < 8.0f;
}
