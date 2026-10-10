// Game/Unsorted_10A551C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class FVector
{
public:
    float X, Y, Z;
};

extern float DAT_10eafbdc;

extern float DAT_10e49684;

struct Struct_10A55380
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

struct Item_10A55380
{
    Struct_10A55380 Unknown00;
    float Unknown0C;
    int Unknown10;
};

class Class_10C4EDA0
{
public:
    void FUN_10a550b0(int Count);
    void FUN_10a55380(const Struct_10A55380& A);

    int Unknown00;
    int Unknown04;
    Item_10A55380* Unknown08;
    char Unknown0C[8];
    int Unknown14;
};

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
};

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class Class_109081E0
{
public:
    Class_109081E0(const char* In);
    Class_109081E0& operator=(const Class_109081E0& In);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

class Class_1090C880
{
public:
    Class_109081E0 FUN_1090c880(int A);

    char Unknown00[0xC];
};

class Class_10E684A8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void FUN_10a551c0(FVector* A);

    void FUN_10a556f0(int A);

    char Unknown04[0x18];
    FVector Unknown1C;
    char Unknown28[0xF8];
    bool Unknown120;
    char Unknown121[3];
    Class_109081E0 Unknown124;
    Class_1090C880 Unknown128;
    int Unknown134;
};

// FUNCTION: 0x10A551C0 ?FUN_10a551c0@Class_10E684A8@@UAEXPAVFVector@@@Z
void Class_10E684A8::FUN_10a551c0(FVector* A)
{
    FVector* Current = &Unknown1C;
    if (A->X != Current->X || A->Y != Current->Y || A->Z != Current->Z)
        Unknown120 = true;
    *Current = *A;
}

// FUNCTION: 0x10A55380 ?FUN_10a55380@Class_10C4EDA0@@QAEXABUStruct_10A55380@@@Z
void Class_10C4EDA0::FUN_10a55380(const Struct_10A55380& A)
{
    Item_10A55380 Item;
    Item.Unknown00 = A;
    if (A.Unknown08 != DAT_10eafbdc)
        Item.Unknown0C = DAT_10e49684 / A.Unknown08;
    else
        Item.Unknown0C = 0.0f;
    int Index = Unknown00;
    Item.Unknown10 = Unknown14;
    FUN_10a550b0(Index + 1);
    Unknown08[Index] = Item;
}

// FUNCTION: 0x10A556F0 ?FUN_10a556f0@Class_10E684A8@@QAEXH@Z
void Class_10E684A8::FUN_10a556f0(int A)
{
    Unknown124 = Unknown128.FUN_1090c880(A);
    Unknown134 = 0;
    Unknown120 = true;
}
