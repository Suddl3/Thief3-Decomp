// Game/Unsorted_10B64DC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// The class map's names.
// Game/Options.h copied whole, with ApplyVideo (missing from the header) added.
class Options
{
public:
    int Get(int Index);
    void GetResolution(int* Width, int* Height);
    void FUN_10ab5c60(int Index);
    void FUN_10ab6420();
    void Save();
    void FUN_10ab66e0();
    int SetDefaults(int Index);
    unsigned int Load();
    void Set(int Name, int Value);
    void ApplyVideo();

          // +0x04, indexed by the names table; [11] is the resolution

    static int ResolutionWidths[];
    static int ResolutionHeights[];

    int Unknown00;
    int Values[21];
    char Unknown58;
    char Unknown59;
    char Pad5A[0x2];
};

Options* FUN_10929550();

class Class_10E84730
{
public:
    void FUN_10b650f0();
    void FUN_10b64ce0();

    char Unknown00[0x170];
    bool Unknown170;
    char Unknown171[0x3];
    int Unknown174;
    int Unknown178;
    char Unknown17C[0xC];
    int Unknown188;
    char Unknown18C[0x4];
    int** Unknown190;
    char Unknown194[0x8];
    int* Unknown19C;
};

// FUNCTION: 0x10B650F0 ?FUN_10b650f0@Class_10E84730@@QAEXXZ
void Class_10E84730::FUN_10b650f0()
{
    FUN_10929550()->Save();
    bool Dirty = false;
    for (int i = 0; i < Unknown188; i++)
    {
        if (Dirty)
            break;
        int Name = *Unknown190[i];
        int* Expected = Unknown19C + i;
        if (FUN_10929550()->Get(Name) != *Expected)
        {
            if (Name == 0xb || Name == 0xf || Name == 9)
                Dirty = true;
        }
    }
    if (Dirty)
        FUN_10929550()->ApplyVideo();
    if (!Unknown170)
    {
        Unknown174 = 2;
        Unknown178 = 0;
    }
    else
    {
        FUN_10b64ce0();
    }
}
