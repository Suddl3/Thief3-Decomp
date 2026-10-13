// Game/Class_10E6B764_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10971570.h"
#include "Game/Class_Field04.h"
#include "Game/Class_1098E330.h"

class Object_10A6AEA0_B;

class Object_10A6AEA0_C;

class Class_10E6B764
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(AActor* A, int B, int C, int D);
    virtual void Virtual6();
    virtual void Virtual7(AActor* A);
    virtual void FUN_10a6aea0(AActor* A, Object_10A6AEA0_B* B, Object_10A6AEA0_C* C);

    Class_10E6B764();

    void FUN_10a6ae00(AActor* A, int B);
};

class Class_10A6AE00_Unknown0C
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10A6AE00 ?FUN_10a6ae00@Class_10E6B764@@QAEXPAVAActor@@H@Z
void Class_10E6B764::FUN_10a6ae00(AActor* A, int B)
{
    char Flag;
    ((Class_10971570*)A)->FUN_10971570(0x2000533, (bool*)&Flag);
    if (B != 0 || !Flag)
    {
        Class_10A6AE00_Unknown0C Value;
        if (((Class_Field04*)A)->FUN_1098e290(0x80017, (FString*)&Value) &&
            ((Value.Unknown00 & 0xffff) != 0 || (Value.Unknown04 & 0xffff) != 0 || (Value.Unknown08 & 0xffff) != 0))
        {
            char Flag2;
            int Ok = ((Class_10971570*)A)->FUN_10971570(0x2000533, (bool*)&Flag2);
            if (Ok == 0 || Flag2 != 0x16)
            {
                int Key;
                ((Class_1098E330*)A)->FUN_1098e330(0x8003e8, &Key);
                Virtual5(A, 0, 1, 0);
            }
        }
    }
}
