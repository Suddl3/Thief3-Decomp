// Game/Unsorted_10B69930.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC99D0.h"
#include "Game/Class_10B69930.h"
#include "Game/Class_10F3A3D8.h"

class Class_10E50610
{
public:
    Class_10E50610() : Unknown04(0) {}
    virtual ~Class_10E50610() {}

    int Unknown04;
};

class Class_10E6D208 : public Class_10E50610
{
public:
    Class_10E6D208() : Unknown08(0) {}

    int Unknown08;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, Class_10E6D208* C, int* D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10B69930 ?FUN_10b69930@Class_10B69930@@QAEXXZ
void Class_10B69930::FUN_10b69930()
{
    Release();
    for (int Index = 0; Index < Unknown14C; Index++)
    {
        if (Unknown154[Index] == Unknown0C4)
        {
            int Result = DAT_10f3a3d8->Unknown138->GetNext(Index);
            if (Result != 0)
            {
                int Out = 0;
                Class_10E6D208 Local;
                DAT_10f46da0->Virtual5(0x33, Result, &Local, &Out);
                Unknown17C = Result;
            }
        }
    }
}
