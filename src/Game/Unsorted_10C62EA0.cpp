// Game/Unsorted_10C62EA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10926730
{
public:
    void FUN_109263e0(const char* Param1, int Param2);

    char Unknown00[0x14];
};

class Class_10C63530_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();
};

void FUN_10c62e70(int Param1, Class_10926730* Param2);

extern const char DAT_10e47660[];

class Class_10C63530
{
public:
    bool FUN_10c63530(Class_10C63530_Param* Param1);

    char Unknown00[0x54];
    int Unknown54;
    char Unknown58[0x1];
    bool Unknown59;
    char Unknown5A[0x2];
    Class_10926730 Unknown5C;
    void* Unknown70;
};

// FUNCTION: 0x10C63530 ?FUN_10c63530@Class_10C63530@@QAE_NPAVClass_10C63530_Param@@@Z
bool Class_10C63530::FUN_10c63530(Class_10C63530_Param* Param1)
{
    if (Unknown59)
        return true;
    if (!Unknown70)
        return false;
    if (!Param1)
        return false;
    FUN_10c62e70(Param1->Virtual3(), &Unknown5C);
    Unknown54 = Param1->Virtual5();
    Unknown5C.FUN_109263e0(DAT_10e47660, 0);
    Unknown59 = true;
    return true;
}
