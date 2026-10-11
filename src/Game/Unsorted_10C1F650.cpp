// Game/Unsorted_10C1F650.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10DBD510.h"
#include "Game/Class_10FF667C.h"
#include "Game/Class_10971570.h"
#include "Game/Class_10978090.h"
#include "Game/Class_Field04.h"
#include "Game/Class_10C1F650.h"

extern void* DAT_10e991d4[];

extern Class_10FF667C* DAT_10ff667c;

class Class_10AF4BB0
{
public:
    Class_10AF4BB0* FUN_10af4bb0(int A, int B, int C, int D);
    void FUN_10af3b50(int A);
    void FUN_10af3bd0(int A, int B, int C);

    void* Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_1096A980
{
public:
    Class_1096A980()
    {
        ((Class_10AF4BB0*)this)->FUN_10af4bb0(3, (int)DAT_10e991d4, 0, 1);
    }
    ~Class_1096A980();

    char* Unknown00;
    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10C1F650 ?FUN_10c1f650@Class_10C1F650@@QAE_NPAVClass_10971570@@PAH@Z
bool Class_10C1F650::FUN_10c1f650(Class_10971570* Target, int* Obj)
{
    if (Target && *Obj == DAT_10ff667c->Unknown40)
    {
        Class_1096A980 Names;
        if (((Class_Field04*)((Class_10978090*)Unknown04->FUN_10dbd510())->FUN_10978090())->FUN_1098e290(0x40006c0, (FString*)&Names))
        {
            bool Key = false;
            if (Target->FUN_10971570(0x20006bf, &Key))
            {
                for (int i = 0; i < Names.Unknown04; i++)
                {
                    if (Names.Unknown00[i] == (char)Key)
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
