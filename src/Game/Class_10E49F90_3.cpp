// Game/Class_10E49F90_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_109526D0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    void FUN_109526d0();

    char Unknown04[0x2C];
    int Unknown30;
    int Unknown34;
    char Unknown38[0x16];
    bool Unknown4E;
};

class Class_109361D0_Unknown2FC
{
public:
    char Unknown00[0x64];
    int Unknown64;
};

class Class_10E49F90
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual bool FUN_109361d0(Class_109526D0* A, int B);

    void ResetTextureStages();
    void SetRenderStates(int A, int B);
    void FUN_109353a0(int A, Class_109526D0* B, int C);

    char Unknown04[0x110];
    int m_VertexShader;
    char Unknown118[0x174];
    int Unknown28C;
    char Pad290[0x6c];
    int Unknown2FC;
};

// FUNCTION: 0x109361D0 ?FUN_109361d0@Class_10E49F90@@UAE_NPAVClass_109526D0@@H@Z
bool Class_10E49F90::FUN_109361d0(Class_109526D0* A, int B)
{
    if (A && Unknown2FC && !A->Unknown4E)
    {
        int Mode = ((Class_109361D0_Unknown2FC*)Unknown2FC)->Unknown64;
        if (Mode != 6 && (A->Unknown34 & 2))
        {
            ResetTextureStages();
            FUN_109353a0(Mode, A, B);
            A->FUN_109526d0();
            SetRenderStates(Unknown2FC, (int)A);
            return true;
        }
    }
    return false;
}
