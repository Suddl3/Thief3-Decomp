// Game/Unsorted_10BB8C00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BB8300.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10B9BCA0.h"
#include "Game/Class_10B9BCA0.h"
#include "Game/cStateStack.h"

class AAIPawn;

Class_10B9BCA0* GetAIPawnController(AAIPawn* Pawn);

class Class_10BC9D40;

class Class_10B9CAC0 : public cStateStack
{
public:
    bool FUN_10b9d0c0(int A);
    bool FUN_10b9d0e0(int A);
    Class_10BC9D40* GetCurrent(int A);
    Class_10BC9D40* GetCurrent();
    int FUN_10b9d040(int A, int B);
    void NotifyAllyKilled(int A);
    void* FUN_10aa9da0();

    char Pad01[0xb];
    char Pad47[0x1];
    Class_10BB8300* Unknown0C;
    int m_Count;
    char Unknown14[4];
    Class_10BC9D40** m_Stack;
};

class Class_10BB8C00_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
};

struct Struct_10BB8C00
{
    int Unknown00;
    char Unknown04[4];
    Class_10BB8C00_Unknown08** Unknown08;
};

// FUNCTION: 0x10BB8C00 ?FUN_10bb8c00@Class_10BB8300@@QAE_NXZ
bool Class_10BB8300::FUN_10bb8c00()
{
    Class_10B9BCA0* Controller = GetAIPawnController((AAIPawn*)m_Owner->FUN_10c7d570());
    if (Controller && Controller->Unknown118 && Controller->Unknown118->Unknown08)
    {
        Struct_10BB8C00* List = (Struct_10BB8C00*)Controller->Unknown118->Unknown08->FUN_10aa9da0();
        for (int i = 0; i < List->Unknown00; i++)
        {
            Class_10BB8C00_Unknown08* Item = List->Unknown08[i];
            if (Item && Item->Virtual3() == 0x33)
                return true;
        }
    }
    return false;
}
