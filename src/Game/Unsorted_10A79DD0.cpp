// Game/Unsorted_10A79DD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6bd88[];

class Class_10E6BD88;

struct Struct_10C08690;

class Class_10BFBD70
{
public:
    Class_10BFBD70() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    Class_10BFBD70(const Class_10BFBD70& Other)
    {
        Unknown00 = Unknown04 = 0;
        Unknown08 = 0;
        FUN_10a58cb0(Other);
    }

    void FUN_10a58c70(const Class_10BFBD70& Other);
    void FUN_10bfbd70(int Count);
    void FUN_109dff50(int Index);
    int FindIndex(int Item)
    {
        for (int i = 0; i < Count; i++)
        {
            if (Data[i] == Item)
                return i;
        }
        return -1;
    }
    int FUN_1092a330(const int* Item);
    void FUN_109dff00();
    void FUN_10a58cb0(const Class_10BFBD70& Other);
    void FUN_10a81b10(int Index, int* Value);
    Class_10BFBD70& operator=(const Class_10BFBD70& Other)
    {
        Unknown00 = 0;
        FUN_10a58c70(Other);
        return *this;
    }
    int FUN_10b9fa20(int* Item);
    void FUN_10b9f810();
    void FUN_10ba91a0(const int* Item);
    void FUN_10c08510(int Item);
    void FUN_10c08550(int Item);
    void FUN_10c08690(Struct_10C08690* Item);

    union
    {
        int Unknown00;
        int Count;
    };
    int Unknown04;
    union
    {
        Class_10E6BD88** Unknown08;
        int* Data;
    };
};

struct Struct_10A79DD0Part
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10E6BD88
{
public:
    Class_10E6BD88() { VTable = DAT_10e6bd88; }

    void** VTable;
    int Unknown04;
    int Unknown08;
    Struct_10A79DD0Part Unknown0C;
    Struct_10A79DD0Part Unknown18;
};

class Class_10A79DD0
{
public:
    void FUN_10a79dd0(Struct_10A79DD0Part* A, Struct_10A79DD0Part* B, int* C, int D);

    char Unknown00[4];
    Class_10BFBD70 Unknown04;
};

// FUNCTION: 0x10A79DD0 ?FUN_10a79dd0@Class_10A79DD0@@QAEXPAUStruct_10A79DD0Part@@0PAHH@Z
void Class_10A79DD0::FUN_10a79dd0(Struct_10A79DD0Part* A, Struct_10A79DD0Part* B, int* C, int D)
{
    Class_10E6BD88* Obj = new(0, 0, 0, 0, 0) Class_10E6BD88;
    Obj->Unknown0C = *A;
    Obj->Unknown18 = *B;
    int Value = *C;
    Obj->Unknown08 = D;
    Obj->Unknown04 = Value;
    Class_10BFBD70* Array = &Unknown04;
    int Index = Array->Count;
    Array->FUN_10bfbd70(Index + 1);
    Array->Unknown08[Index] = Obj;
}
