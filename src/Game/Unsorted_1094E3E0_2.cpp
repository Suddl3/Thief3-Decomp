// Game/Unsorted_1094E3E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

// The render device (its Virtual3 creates a vertex buffer and returns a status).
class Class_10F2C744
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3(int A, int B, int C, const char* Name, void* Out);
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
};

extern Class_10F2C744* DAT_10f2c744;

// One vertex-buffer object: its Virtual1 releases it.
class Class_1094E3E0_Unknown0E8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

// One element of Unknown108: 0x28 bytes.
struct Elem_1094E3A0
{
    int Unknown00;
    float Unknown04;
    char Unknown08[0x20];
};

class Class_1094E3A0
{
public:
    Elem_1094E3A0* FUN_1094e3a0();
    void FUN_1094e3c0(int Index, float Value);
    bool FUN_1094e3e0(int Index, int Value);

    char Unknown00[0xE8];
    Class_1094E3E0_Unknown0E8* Unknown0E8;
    Class_1094E3E0_Unknown0E8* Unknown0EC;
    char Unknown0F0[0x18];
    Elem_1094E3A0* Unknown108;
    char Unknown10C[4];
    int Unknown110;
};

// FUNCTION: 0x1094E3E0 ?FUN_1094e3e0@Class_1094E3A0@@QAE_NHH@Z
bool Class_1094E3A0::FUN_1094e3e0(int Index, int Value)
{
    Unknown108[Index].Unknown00 = Value;
    if (Index == 0)
    {
        FUN_10905aa0()->Virtual8(0, 0);
        if (Unknown0E8)
        {
            Unknown0E8->Virtual1();
            Unknown0E8 = 0;
        }
        if (Unknown0EC)
        {
            Unknown0EC->Virtual1();
            Unknown0EC = 0;
        }
        int Result0 = DAT_10f2c744->Virtual3(0, 0x20, 0, "BlendMesh::m_Vertex", &Unknown0E8);
        int Result1 = DAT_10f2c744->Virtual3(1, 0x20, 0, "BlendMesh::m_Vertex", &Unknown0EC);
        FUN_10905aa0()->Virtual9();
        if (Result0 < 0 || Result1 < 0)
        {
            if (Unknown0E8)
            {
                Unknown0E8->Virtual1();
                Unknown0E8 = 0;
            }
            if (Unknown0EC)
            {
                Unknown0EC->Virtual1();
                Unknown0EC = 0;
            }
            return false;
        }
    }
    return true;
}
