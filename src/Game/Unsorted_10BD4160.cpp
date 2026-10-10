// Game/Unsorted_10BD4160.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10BD4600
{
    Struct_10BD4600() : Unknown00(0.0f), Unknown04(0.0f), Unknown08(0.0f) {}

    float Unknown00;
    float Unknown04;
    float Unknown08;
};

class Object_10BD4600
{
public:
    virtual void Virtual0();
    virtual unsigned char Virtual1(Struct_10BD4600* A, int* B);
};

class Class_10BD4600
{
public:
    int FUN_10bd39e0(int A, Struct_10BD4600* B, int C, int D);
    int FUN_10bd4600(int A, Object_10BD4600* Obj, int C);
};

struct Struct_10BD4670
{
    Struct_10BD4670() : Unknown00(0.0f), Unknown04(0.0f), Unknown08(0.0f) {}

    float Unknown00;
    float Unknown04;
    float Unknown08;
};

class Object_10BD4670
{
public:
    virtual void Virtual0();
    virtual unsigned char Virtual1(Struct_10BD4670* A, int* B);
};

class Class_10BD4670
{
public:
    int FUN_10bd36d0(int A, Struct_10BD4670* B, int C, int D);
    int FUN_10bd4670(int A, Object_10BD4670* Obj, int C);
};

struct Struct_10BAEC40_Unknown08
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    bool Unknown0C;
};

class Class_10BAEC40
{
public:
    void FUN_10bae1d0(int NewCount);
    void FUN_10bd4160(const Class_10BAEC40& Other);

    int Unknown00;
    int Unknown04;
    Struct_10BAEC40_Unknown08* Unknown08;
};

// FUNCTION: 0x10BD4160 ?FUN_10bd4160@Class_10BAEC40@@QAEXABV1@@Z
void Class_10BAEC40::FUN_10bd4160(const Class_10BAEC40& Other)
{
    FUN_10bae1d0(Other.Unknown00);
    for (int i = 0; i < Unknown00; i++)
    {
        const Struct_10BAEC40_Unknown08& Source = Other.Unknown08[i];
        Struct_10BAEC40_Unknown08& Item = Unknown08[i];
        Item.Unknown04 = Source.Unknown04;
        Item.Unknown08 = Source.Unknown08;
        Item.Unknown0C = Source.Unknown0C;
    }
}

// FUNCTION: 0x10BD4600 ?FUN_10bd4600@Class_10BD4600@@QAEHHPAVObject_10BD4600@@H@Z
int Class_10BD4600::FUN_10bd4600(int A, Object_10BD4600* Obj, int C)
{
    Struct_10BD4600 Vec;
    int Count = 0;
    if (Obj && Obj->Virtual1(&Vec, &Count) == 1)
        return FUN_10bd39e0(A, &Vec, C, Count);
    return 0;
}

// FUNCTION: 0x10BD4670 ?FUN_10bd4670@Class_10BD4670@@QAEHHPAVObject_10BD4670@@H@Z
int Class_10BD4670::FUN_10bd4670(int A, Object_10BD4670* Obj, int C)
{
    Struct_10BD4670 Vec;
    int Count = 0;
    if (Obj && Obj->Virtual1(&Vec, &Count) == 1)
        return FUN_10bd36d0(A, &Vec, C, Count);
    return 0;
}
