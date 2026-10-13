// Game/Unsorted_10A1FA00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10AE7460;

class Class_10AD26E0
{
public:
    int FUN_10ad26e0();

    char Unknown00[0x24];
    Class_10AE7460* Unknown24;
};

struct Struct_10A1FA00
{
    int* Unknown00;
    int Unknown04;
};

class cIntArray
{
public:
    int m_Count;
    int m_CapacityBytes;
    int* m_Data;
};

class Class_10E65590
{
public:
    virtual void FUN_10a1fa00(int A, Class_10AD26E0* B, int C, Struct_10A1FA00* D);
    void FUN_10a1f950(Class_10AE7460* Obj);

    cIntArray Unknown04;
};

// FUNCTION: 0x10A1FA00 ?FUN_10a1fa00@Class_10E65590@@UAEXHPAVClass_10AD26E0@@HPAUStruct_10A1FA00@@@Z
void Class_10E65590::FUN_10a1fa00(int A, Class_10AD26E0* B, int C, Struct_10A1FA00* D)
{
    if (D->Unknown04 != 0)
    {
        if (B->FUN_10ad26e0())
            FUN_10a1f950(B->Unknown24);
    }
    else
    {
        if (B->FUN_10ad26e0())
        {
            int* Key = D->Unknown00;
            if (Key)
            {
                int Index = *Key;
                if (Unknown04.m_Count > Index && Index >= 0 && Unknown04.m_Data[Index] == (int)B->Unknown24)
                    Unknown04.m_Data[Index] = 0;
            }
        }
    }
}
