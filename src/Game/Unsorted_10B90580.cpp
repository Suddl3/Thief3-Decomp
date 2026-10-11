// Game/Unsorted_10B90580.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10B90530;

extern Struct_10B90530 DAT_10f05c28;

extern Struct_10B90530 DAT_10f05c20;

void FUN_10a683d0(int A, int B, int C, int D, int E);

struct Struct_10B90750_Vec
{
    float X;
    float Y;
    float Z;
};

class Class_10B90750_Result
{
public:
    char Pad00[0x118];
    float Unknown118;
};

class Class_10B90750_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Class_10B90750_Result* Virtual6();

    Struct_10B90750_Vec* FUN_10da0840(char* Buffer);
};

class Class_10B90750_Arg1
{
public:
    Class_10B90750_Item* FUN_10d9af30(int Index);

    char Pad00[0x30];
    int Unknown30;
};

// FUNCTION: 0x10B90750 ?FUN_10b90750@@YGXPAVClass_10B90750_Arg1@@HH@Z
void __stdcall FUN_10b90750(Class_10B90750_Arg1* Param1, int Param2, int Param3)
{
    int Count = Param1->Unknown30;
    for (int i = 0; i < Count; i++)
    {
        Class_10B90750_Item* Item = Param1->FUN_10d9af30(i);
        char Buffer[0x30];
        Struct_10B90750_Vec Pos = *Item->FUN_10da0840(Buffer);
        Class_10B90750_Result* Result = Item->Virtual6();
        if (Result)
        {
            float Height = Result->Unknown118;
            Struct_10B90750_Vec Low;
            Low.X = Pos.X;
            Low.Z = Pos.Z - Height;
            Low.Y = Pos.Y;
            FUN_10a683d0(Param2, Param3, (int)&Pos, (int)&Low, (int)&DAT_10f05c28);
            Struct_10B90750_Vec High;
            High.Z = Pos.Z + Height;
            High.X = Pos.X;
            High.Y = Pos.Y;
            FUN_10a683d0(Param2, Param3, (int)&Pos, (int)&High, (int)&DAT_10f05c20);
        }
    }
}
