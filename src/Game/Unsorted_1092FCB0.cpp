// Game/Unsorted_1092FCB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10e49c68;

class Class_1092FD50_Item
{
public:
    char Unknown00[0xE4];
    int UnknownE4;
    char UnknownE8[0x5C];
    float Unknown144;
    float Unknown148;
    char Unknown14C[0xC];
    int Unknown158;
};

// FUNCTION: 0x1092FD50 ?CompareItems@@YAHPAPAVClass_1092FD50_Item@@0@Z
int CompareItems(Class_1092FD50_Item** A, Class_1092FD50_Item** B)
{
    float FA = (*A)->Unknown148 - (*A)->Unknown144;
    float FB = (*B)->Unknown148 - (*B)->Unknown144;
    if ((*A)->UnknownE4 == (*B)->UnknownE4)
        FA -= (float)((*A)->Unknown158 - (*B)->Unknown158) * DAT_10e49c68;
    if (FA < FB)
        return 1;
    if (FA > FB)
        return -1;
    return 0;
}
