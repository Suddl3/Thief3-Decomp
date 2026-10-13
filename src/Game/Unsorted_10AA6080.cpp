// Game/Unsorted_10AA6080.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first
class FVector
{
public:
    float X, Y, Z;
};

class Class_10AA6080_Member
{
public:
    char Pad00[0x4];
    float Unknown04;
    float Unknown08;
    float Unknown0C;
    float Unknown10;
    float Unknown14;
    float Unknown18;
    char Pad1C[0x4];
    int Unknown20;
};

class Class_10AA6080
{
public:
    bool FUN_10aa6080(FVector* A, float B);

    char Pad00[0x1];
    char Unknown01[0x3];
    int m_Count;
    char Unknown08[0x4];
    Class_10AA6080_Member** m_Items;
};

// FUNCTION: 0x10AA6080 ?FUN_10aa6080@Class_10AA6080@@QAE_NPAVFVector@@M@Z
bool Class_10AA6080::FUN_10aa6080(FVector* A, float B)
{
    for (int i = 0; i < m_Count; i++)
    {
        Class_10AA6080_Member* Item = m_Items[i];
        if (Item->Unknown20 == 0)
            continue;
        if (Item->Unknown04 - B > A->X)
            continue;
        if (Item->Unknown08 - B > A->Y)
            continue;
        if (Item->Unknown0C - B > A->Z)
            continue;
        if (B + Item->Unknown10 < A->X)
            continue;
        if (B + Item->Unknown14 < A->Y)
            continue;
        if (!(B + Item->Unknown18 < A->Z))
            return true;
    }
    return false;
}
