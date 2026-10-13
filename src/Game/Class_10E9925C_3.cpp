// Game/Class_10E9925C_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

struct Struct_10C26890
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_109B6D50
{
public:
    void FUN_109bf5f0(int A, const cString& B);
    int FUN_109b6c50(int A);
    void FUN_109c33f0(int A, const cString& B);
    bool FUN_109b6d50(int A);
    void FUN_109bf7f0(int A, float B);
    void FUN_109b6d10(int A);
    void FUN_109bc5c0(int A, const Struct_10C26890& B, const cString& C);

    char Pad00[0x1];
};

class Class_10E9925C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void FUN_10c26890();
    virtual void AddToRegistry();
    virtual void FUN_10c26770();
    virtual bool Virtual8();
    virtual Struct_10C26890 Virtual9(int X, int Y, int Z);
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual float Virtual13();
    virtual bool Virtual14();

    ~Class_10E9925C();

    Class_109B6D50* FUN_10c26490();

    char Unknown04[8];
    int m_RegistryId;
    cString Unknown10;
    char Unknown14[0x10];
    float Unknown24;
    float Unknown28;
    float Unknown2C;
    char Unknown30[0x4];
    bool Unknown34;
    bool m_Registered;
    char Pad36[0x2];
};

// FUNCTION: 0x10C26890 ?FUN_10c26890@Class_10E9925C@@UAEXXZ
void Class_10E9925C::FUN_10c26890()
{
    if (Unknown34)
    {
        Class_109B6D50* Obj = FUN_10c26490();
        if (Obj)
        {
            int X = (int)(Unknown24 * 182.04f);
            if (X < 0)
                X += 0xffff;
            int Y = (int)(Unknown28 * 182.04f);
            if (Y < 0)
                Y += 0xffff;
            int Z = (int)(Unknown2C * 182.04f);
            if (Z < 0)
                Z += 0xffff;
            Obj->FUN_109bc5c0(m_RegistryId, Virtual9(X, Y, Z), Unknown10);
        }
    }
}
