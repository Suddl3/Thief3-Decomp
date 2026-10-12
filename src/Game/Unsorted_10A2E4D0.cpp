// Game/Unsorted_10A2E4D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10A2E520
{
    int Unknown00;
    char Unknown04[4];
    int Unknown08;
    char Unknown0C[4];
    Struct_10A2E520** Unknown10;
    bool Unknown14;
};

// FUNCTION: 0x10A2E4D0 ?FUN_10a2e4d0@@YAPAUStruct_10A2E520@@PAU1@@Z
Struct_10A2E520* FUN_10a2e4d0(Struct_10A2E520* A)
{
    if (!A)
        return 0;
    int Count = A->Unknown08;
    if (Count == 0 && !A->Unknown14)
        return A;
    for (int i = 0; i < Count; i++)
    {
        Struct_10A2E520* Found = FUN_10a2e4d0(A->Unknown10[i]);
        if (Found)
            return Found;
    }
    return 0;
}

// FUNCTION: 0x10A2E520 ?SubtreeContains@@YA_NPAUStruct_10A2E520@@H@Z
bool SubtreeContains(Struct_10A2E520* A, int B)
{
    if (B == A->Unknown00)
        return true;
    int Count = A->Unknown08;
    for (int i = 0; i < Count; i++)
    {
        if (SubtreeContains(A->Unknown10[i], B))
            return true;
    }
    return false;
}
