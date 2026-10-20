// Game/Unsorted_10A64F70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>
#include <stdlib.h>

extern float DAT_10eafbdc;

// The header's Class_10A64F70 copied whole, with the fields the code uses and the float parameter it shows.
class Class_10A64F70
{
public:
    void FUN_10a64f70(float A);

    float Unknown00;
    float Unknown04;
    float Unknown08;
    float Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    unsigned char Unknown20;
    unsigned char Unknown21;
    unsigned char Unknown22;
};

// FUNCTION: 0x10A64F70 ?FUN_10a64f70@Class_10A64F70@@QAEXM@Z
void Class_10A64F70::FUN_10a64f70(float Delta)
{
    if (Unknown00 != DAT_10eafbdc)
    {
        float Value;
        if (Unknown08 < Unknown00)
            Value = (Unknown14 - Unknown10) / Unknown00 * Unknown08 + Unknown10;
        else
            Value = (Unknown08 - Unknown00) / Unknown00 * (Unknown10 - Unknown14) + Unknown14;

        int Result = (int)Value;
        if (abs(Unknown18 - Result) >= Unknown1C)
            Unknown18 = Result;

        if (Unknown08 < Unknown00)
        {
            Unknown08 = Delta + Unknown08;
        }
        else
        {
            if (Unknown22 == 0)
                Unknown21 = 1;
            if (Unknown21)
            {
                Unknown0C = Delta + Unknown0C;
                if (Unknown0C > Unknown04)
                {
                    Unknown0C = 0;
                    Unknown21 = 0;
                    Unknown22 = 1;
                }
                if (Unknown21)
                    return;
            }

            float NewValue = Delta + Unknown08;
            Unknown08 = NewValue;
            if (Unknown20)
            {
                if (NewValue > Unknown00 * 2.0f)
                {
                    Unknown08 = fmodf(NewValue, Unknown00 * 2.0f);
                    Unknown22 = 0;
                }
            }
            else
            {
                Unknown00 = 0;
                Unknown22 = 0;
            }
        }
    }
}
