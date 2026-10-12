// Game/Unsorted_10A66BC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// FUNCTION: 0x10A66C80 ?VectorsNearlyEqual@@YAHPAX0M@Z
int VectorsNearlyEqual(void* A, void* B, float R)
{
    float* Pa = (float*)A;
    float* Pb = (float*)B;

    float D0 = Pa[0] - Pb[0];
    int Limit = *(int*)&R & 0x7fffffff;
    if ((*(int*)&D0 & 0x7fffffff) <= Limit)
    {
        float D1 = Pa[1] - Pb[1];
        if ((*(int*)&D1 & 0x7fffffff) <= Limit)
        {
            float D2 = Pa[2] - Pb[2];
            if ((*(int*)&D2 & 0x7fffffff) <= Limit)
                return 1;
        }
    }
    return 0;
}
