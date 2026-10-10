// Game/Unsorted_10B33260.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

bool FUN_1090f010(const int* A, const int* B);

struct Struct_10B33260
{
    int Unknown00;
    int Unknown04;
    char Unknown08[8];
};

class Class_10B33260
{
public:
    bool FUN_10b33260(int A, int* B);

    char Unknown00[0x190];
    int Unknown190;
    char Unknown194[4];
    Struct_10B33260* Unknown198;
};

// FUNCTION: 0x10B33260 ?FUN_10b33260@Class_10B33260@@QAE_NHPAH@Z
bool Class_10B33260::FUN_10b33260(int A, int* B)
{
    for (int i = 0; i < Unknown190; i++)
    {
        if (Unknown198[i].Unknown00 == A)
        {
            if (FUN_1090f010(&Unknown198[i].Unknown04, B))
                return true;
        }
    }
    return false;
}
