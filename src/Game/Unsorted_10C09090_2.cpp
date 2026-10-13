// Game/Unsorted_10C09090_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BAA6B0_Param;

struct Struct_10C09090
{
    char Unknown00[0x10];
    int Unknown10;
    char Unknown14[0x14];
};

class Class_10C08DE0
{
public:
    void FUN_10c08de0();
    void FUN_10c08d60();

    char Unknown00[8];
    int Unknown08;
    char Unknown0C[4];
    Struct_10C09090* Unknown10;
    int m_Count;
    int Unknown18;
    Class_10BAA6B0_Param** m_Params;
    bool Unknown20;
    char Pad21[0x3];
};

class Class_10C09090 : public Class_10C08DE0
{
public:
    void FUN_10c09090(int Key);
};

// FUNCTION: 0x10C09090 ?FUN_10c09090@Class_10C09090@@QAEXH@Z
void Class_10C09090::FUN_10c09090(int Key)
{
    for (int i = 0; i < m_Count; i++)
    {
        if (m_Params[i] == (Class_10BAA6B0_Param*)Key)
        {
            m_Params[i] = 0;
            FUN_10c08d60();
            return;
        }
    }
    for (int j = 0; j < Unknown08; j++)
    {
        if (Unknown10[j].Unknown10 == Key)
            Unknown10[j].Unknown10 = 0;
    }
}
