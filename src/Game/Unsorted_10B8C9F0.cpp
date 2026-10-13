// Game/Unsorted_10B8C9F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B8C9B0.h"

extern float DAT_10eafbdc;

// The vector the arguments point to: three floats.
class Class_109671D0
{
public:
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

// Only the members this function uses; the object's +0x30 is a field the header lacks.
class Class_10D9FEE0
{
public:
    void FUN_10d9fee0(int A, int B);
    void FUN_10da0640(Class_109671D0* A, int B);
    void FUN_10da06b0(Class_109671D0* A);

    char Pad00[0x30];
    int Unknown30;
};

class Class_10B8CB20 : public Class_10B8C9B0
{
public:
    bool FUN_10b8cb20(int p1, int p2, int p3, int p4);

    char Unknown0C[0xD];
    bool Unknown19;
};

// FUNCTION: 0x10B8CB20 ?FUN_10b8cb20@Class_10B8CB20@@QAE_NHHHH@Z
bool Class_10B8CB20::FUN_10b8cb20(int A, int B, int C, int D)
{
    if (Unknown19)
    {
        for (int i = 0; i < m_Count; i++)
        {
            Class_10D9FEE0* Obj = (Class_10D9FEE0*)m_Items[i];
            Class_109671D0 Scaled = *(Class_109671D0*)A;
            if (Obj->Unknown30 != C)
            {
                Scaled.Unknown00 *= 0.1f;
                Scaled.Unknown04 *= 0.1f;
                Scaled.Unknown08 *= 0.1f;
            }
            else
            {
                Scaled.Unknown00 *= 0.25f;
                Scaled.Unknown04 *= 0.25f;
                Scaled.Unknown08 *= 0.25f;
            }
            Class_109671D0 Local = Scaled;
            if (Local.Unknown00 != DAT_10eafbdc || Local.Unknown04 != DAT_10eafbdc || Local.Unknown08 != DAT_10eafbdc)
            {
                Obj->FUN_10d9fee0(1, 1);
                if (Obj->Unknown30 != C)
                    Obj->FUN_10da06b0(&Local);
                else
                    Obj->FUN_10da0640(&Local, B);
            }
        }
    }
    return false;
}
