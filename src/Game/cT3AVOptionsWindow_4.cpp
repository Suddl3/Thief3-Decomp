// Game/cT3AVOptionsWindow_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

Options* GetOptions();

class cT3AVOptionsWindow
{
public:
    void ApplyOptions();
    void ShowMainMenu();

    char Unknown00[0x170];
    bool Unknown170;
    char Unknown171[0x3];
    int Unknown174;
    int Unknown178;
    char Unknown17C[0xC];
    int m_OptionCount;
    char Unknown18C[0x4];
    int** m_Options;
    char Unknown194[0x8];
    int* m_OriginalValues;
};

// FUNCTION: 0x10B650F0 ?ApplyOptions@cT3AVOptionsWindow@@QAEXXZ
void cT3AVOptionsWindow::ApplyOptions()
{
    GetOptions()->Save();
    bool Dirty = false;
    for (int i = 0; i < m_OptionCount; i++)
    {
        if (Dirty)
            break;
        int Name = *m_Options[i];
        int* Expected = m_OriginalValues + i;
        if (GetOptions()->Get(Name) != *Expected)
        {
            if (Name == 0xb || Name == 0xf || Name == 9)
                Dirty = true;
        }
    }
    if (Dirty)
        GetOptions()->ApplyVideo();
    if (!Unknown170)
    {
        Unknown174 = 2;
        Unknown178 = 0;
    }
    else
    {
        ShowMainMenu();
    }
}
