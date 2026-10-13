// Game/Unsorted_1092F3F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10e49c68;

class Class_1092F3F0_Item
{
public:
    char Unknown00[0xE4];
    int UnknownE4;
    char UnknownE8[0x70];
    int Unknown158;
};

class Object_1092F3F0
{
public:
    Class_1092F3F0_Item* Unknown00;
    float Unknown04;
    int Unknown08;
};

// FUNCTION: 0x1092F3F0 ?FUN_1092f3f0@@YAHPAVObject_1092F3F0@@0@Z
int FUN_1092f3f0(Object_1092F3F0* A, Object_1092F3F0* B)
{
    float FA = A->Unknown04;
    float FB = B->Unknown04;
    if (A->Unknown08 == 1 && B->Unknown08 == 1)
    {
        if (A->Unknown00->UnknownE4 == B->Unknown00->UnknownE4)
            FA -= (float)(A->Unknown00->Unknown158 - B->Unknown00->Unknown158) * DAT_10e49c68;
    }
    if (FA < FB)
        return 1;
    if (FA > FB)
        return -1;
    return 0;
}
