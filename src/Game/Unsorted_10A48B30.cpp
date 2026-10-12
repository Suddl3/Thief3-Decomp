// Game/Unsorted_10A48B30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

int FindBoneIndex(int A, int B);

void GetBoneCoords(int A, int B, int C);

// FUNCTION: 0x10A48FF0 ?GetWorldCoordinatesForBone@@YAXHHH@Z
void GetWorldCoordinatesForBone(int A, int B, int C)
{
    int Value = FindBoneIndex(A, B);
    GetBoneCoords(A, Value, C);
}
