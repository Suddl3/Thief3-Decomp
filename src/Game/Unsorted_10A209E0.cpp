// Game/Unsorted_10A209E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// A point: three coordinates.
struct Class_10A20BD0_Vector
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

// A point of a bounds list.
struct Class_10A20BD0_Item
{
    Class_10A20BD0_Vector Position;
    char Unknown0C[0x50];
};

// An entry of the bounds list: a count of points and the points themselves.
struct Class_10A20BD0_Entry
{
    char Unknown00[0x14];
    int Unknown14;
    char Unknown18[0x04];
    Class_10A20BD0_Item* Unknown1C;
    char Unknown20[0x04];
};

class Class_10A20BD0
{
public:
    void FUN_10a20bd0(int Index, int EndIndex, Class_10A20BD0_Vector* Min, Class_10A20BD0_Vector* Max);

    char Unknown00[0x30];
    Class_10A20BD0_Entry* Unknown30;
};

// FUNCTION: 0x10A20BD0 ?FUN_10a20bd0@Class_10A20BD0@@QAEXHHPAUClass_10A20BD0_Vector@@0@Z
void Class_10A20BD0::FUN_10a20bd0(int Index, int EndIndex, Class_10A20BD0_Vector* Min, Class_10A20BD0_Vector* Max)
{
    if (Index == EndIndex)
    {
        Max->Unknown00 = 0.0f;
        Max->Unknown04 = 0.0f;
        Max->Unknown08 = 0.0f;
        Min->Unknown00 = 0.0f;
        Min->Unknown04 = 0.0f;
        Min->Unknown08 = 0.0f;
        return;
    }

    Class_10A20BD0_Item* Items = Unknown30[Index].Unknown1C;

    *Max = Items[0].Position;
    *Min = *Max;

    for (int E = Index; E < EndIndex; E++)
    {
        for (int I = 0; I < Unknown30[E].Unknown14; I++)
        {
            if (Min->Unknown00 > Unknown30[E].Unknown1C[I].Position.Unknown00)
                Min->Unknown00 = Unknown30[E].Unknown1C[I].Position.Unknown00;
            if (Min->Unknown04 > Unknown30[E].Unknown1C[I].Position.Unknown04)
                Min->Unknown04 = Unknown30[E].Unknown1C[I].Position.Unknown04;
            if (Min->Unknown08 > Unknown30[E].Unknown1C[I].Position.Unknown08)
                Min->Unknown08 = Unknown30[E].Unknown1C[I].Position.Unknown08;
            if (Max->Unknown00 < Unknown30[E].Unknown1C[I].Position.Unknown00)
                Max->Unknown00 = Unknown30[E].Unknown1C[I].Position.Unknown00;
            if (Max->Unknown04 < Unknown30[E].Unknown1C[I].Position.Unknown04)
                Max->Unknown04 = Unknown30[E].Unknown1C[I].Position.Unknown04;
            if (Max->Unknown08 < Unknown30[E].Unknown1C[I].Position.Unknown08)
                Max->Unknown08 = Unknown30[E].Unknown1C[I].Position.Unknown08;
        }
    }
}
