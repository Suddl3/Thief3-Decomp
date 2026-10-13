// Game/Unsorted_1091EFD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// FUNCTION: 0x1091EFD0 ?FUN_1091efd0@@YA_NPBM000@Z
bool FUN_1091efd0(const float* A, const float* B, const float* C, const float* D)
{
    if (A[0] > C[0] && A[0] > D[0])
        return false;
    if (C[0] > B[0])
        return false;
    if (A[1] > C[1] && A[1] > D[1])
        return false;
    if (C[1] > B[1])
        return false;
    if (A[2] > C[2] && A[2] > D[2])
        return false;
    if (C[2] > B[2])
        return false;
    return true;
}
