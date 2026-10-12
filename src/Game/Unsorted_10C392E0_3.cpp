// Game/Unsorted_10C392E0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10C05A80.h"

struct Struct_10C3D0A0
{
    char Unknown00[0x2C];
    Struct_10C05A80 Unknown2C;
};

float FUN_10c05a80(const Struct_10C05A80* A, const Struct_10C05A80* B);

// The object at this+0x48: its Virtual34 gives the Class_10C7D570 whose FUN_10c7d570 gives the actor's position.
class Class_10C3B570_Unknown48
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

class Class_10C399C0
{
public:
    bool TrackTarget(int* Obj);
    bool FUN_10c3a3f0(Struct_10C05A80* A, int* Obj, int B, int C);
    float FUN_10c38640(int Obj);

    char Unknown00[0x48];
    Class_10C3B570_Unknown48* Unknown48;
    char Unknown4C[0x4];
    int Unknown50;
    char Unknown54[0x40];
    int m_PathCount;
    char Unknown98[0x4];
    Struct_10C05A80* m_PathPoints;
    char UnknownA0[0x10];
    int Unknown0B0;
    char UnknownB4[0x40];
    int m_LastTarget;
    int m_SeenCount;
};

// FUNCTION: 0x10C3B570 ?TrackTarget@Class_10C399C0@@QAE_NPAH@Z
bool Class_10C399C0::TrackTarget(int* Obj)
{
    float Span = (float)Unknown50 + (float)Unknown50;
    if (Unknown0B0 >= m_PathCount)
        return true;
    Struct_10C3D0A0* Actor = (Struct_10C3D0A0*)Unknown48->Virtual34()->FUN_10c7d570();
    Struct_10C05A80 ActorPos = Actor->Unknown2C;
    Struct_10C05A80 Pos = m_PathPoints[Unknown0B0];
    if (*Obj == 0)
    {
        if (FUN_10c3a3f0(&Pos, Obj, 0, 0))
            return false;
        if (*Obj == 0)
            return false;
    }
    float Dist = FUN_10c05a80(&((Struct_10C3D0A0*)*Obj)->Unknown2C, &ActorPos);
    float Sum = FUN_10c38640(*Obj) + Span;
    if (Dist < Sum * Sum)
    {
        if (*Obj == m_LastTarget)
            m_SeenCount++;
        else
        {
            m_SeenCount = 0;
            m_LastTarget = *Obj;
        }
        if (m_SeenCount > 3)
            return true;
    }
    return false;
}
