// Game/Unsorted_10C5F540.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10e49684;

extern float DAT_10eafbdc;

class Class_10C5F9A0_Vec
{
public:
    float X;
    float Y;
    float Z;
};

class Class_10C5F9A0_Item
{
public:
    int Unknown00;
    int Unknown04;
    Class_10C5F9A0_Vec Unknown08;
};

class Class_10C5F9A0_Element
{
public:
    int Unknown00;
    int Unknown04;
    Class_10C5F9A0_Item* Unknown08;
    int Unknown0C;
    float Unknown10;
    float Unknown14;
};

class Class_10C5F9A0_Record
{
public:
    int Unknown00;
    int Unknown04;
    Class_10C5F9A0_Element* Unknown08;
};

class Class_10C5F9A0_Root
{
public:
    char Pad00[0x8];
    Class_10C5F9A0_Record* Unknown08;
};

class Class_10C5F9A0
{
public:
    bool FUN_10c5f9a0(Class_10C5F9A0_Vec* Out, float* Value, int Index);

    Class_10C5F9A0_Root* Unknown00;
};

// FUNCTION: 0x10C5F9A0 ?FUN_10c5f9a0@Class_10C5F9A0@@QAE_NPAVClass_10C5F9A0_Vec@@PAMH@Z
bool Class_10C5F9A0::FUN_10c5f9a0(Class_10C5F9A0_Vec* Out, float* Value, int Index)
{
    Class_10C5F9A0_Record* Record = &Unknown00->Unknown08[Index];
    int Count = Unknown00->Unknown08[Index].Unknown00;
    if (Count == 0)
        return false;

    float Best = Unknown00->Unknown08[Index].Unknown08[0].Unknown10 - (DAT_10e49684 - Unknown00->Unknown08[Index].Unknown08[0].Unknown14);
    int BestIndex = 0;
    for (int i = 1; i < Count; i++)
    {
        float V = Unknown00->Unknown08[Index].Unknown08[i].Unknown10 - (DAT_10e49684 - Unknown00->Unknown08[Index].Unknown08[i].Unknown14);
        if (V > Best)
        {
            Best = V;
            BestIndex = i;
        }
    }

    int Total = Record->Unknown08[BestIndex].Unknown00;
    Class_10C5F9A0_Item* Items = Record->Unknown08[BestIndex].Unknown08;
    Class_10C5F9A0_Vec* V = &Items[Total - 2].Unknown08;
    Out->X = V->X;
    Out->Y = V->Y;
    Out->Z = V->Z;
    *Value = Best;
    if (Best < DAT_10eafbdc)
        *Value = 0.0f;
    else if (Best > DAT_10e49684)
        *Value = 1.0f;
    return true;
}
