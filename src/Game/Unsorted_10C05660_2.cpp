// Game/Unsorted_10C05660_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10eafbdc;

class Class_10C057A0_Unknown08
{
public:
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

struct Struct_10D38640
{
    int Unknown00;
    int Unknown04;
    Class_10C057A0_Unknown08* Unknown08;
};

// FUNCTION: 0x10C057A0 ?FUN_10c057a0@@YAMPAUStruct_10D38640@@H@Z
float FUN_10c057a0(Struct_10D38640* A, int B)
{
    float Best = DAT_10eafbdc;
    bool Found = false;
    for (int i = 0; i < A->Unknown00; i++)
    {
        float V;
        switch (B)
        {
        case 0:
            V = A->Unknown08[i].Unknown00;
            break;
        case 1:
            V = A->Unknown08[i].Unknown04;
            break;
        case 2:
            V = A->Unknown08[i].Unknown08;
            break;
        }
        if (!Found || V > Best)
        {
            Found = true;
            Best = V;
        }
    }
    return Best;
}
