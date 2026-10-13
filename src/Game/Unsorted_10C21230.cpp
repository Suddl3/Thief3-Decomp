// Game/Unsorted_10C21230.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10e49684;

extern float DAT_10eafbdc;

float __cdecl InterpolateLinear(float A, float B, float C, float D, float E);

float __cdecl FUN_10968dd0(float A, int B, float C);

class Object_10C21680
{
public:
    char Unknown00[4];
    int Unknown04;
};

// FUNCTION: 0x10C21680 ?FUN_10c21680@@YGMMMMPAVObject_10C21680@@@Z
float __stdcall FUN_10c21680(float A, float B, float C, Object_10C21680* D)
{
    if (A <= C)
        return 255.0f;
    if (A <= B)
    {
        C = (float)D->Unknown04 + C;
        float R = FUN_10968dd0(InterpolateLinear(A, C, 1.0f, C + C, 2.0f), 0x3f800000, 10000.0f);
        return DAT_10e49684 / (R * R) * 255.0f;
    }
    return DAT_10eafbdc;
}
