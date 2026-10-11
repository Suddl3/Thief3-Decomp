// Game/Unsorted_10C033B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>

struct Struct_10C033B0
{
    int Count;
    int Unknown04;
    float* Unknown08;
};

// FUNCTION: 0x10C033B0 ?FUN_10c033b0@@YAXPAUStruct_10C033B0@@PAV?$vector@HV?$allocator@H@std@@@std@@PA_NMM@Z
void FUN_10c033b0(Struct_10C033B0* Items, std::vector<int>* Result, bool* Out, float A, float B)
{
    for (int i = 0; i < Items->Count; i++)
    {
        if (B - Items->Unknown08[i] < A)
        {
            int Value = i;
            Result->push_back(Value);
        }
    }
    *Out = Result->size() == Items->Count;
    if (Items->Count == 0)
        *Out = false;
}
