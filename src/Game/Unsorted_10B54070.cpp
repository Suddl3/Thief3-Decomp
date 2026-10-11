// Game/Unsorted_10B54070.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

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

void* FUN_10b154c0();

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
    ~Class_10BFBD70()
    {
        FUN_10bfbd70(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
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
        int* Unknown08;
        int* Data;
    };
};

class Class_10B16D80
{
public:
    void FUN_10b16d80(int Value);
};

class Class_10B542D0
{
public:
    Class_10B542D0()
    {
        Unknown00 = 0;
        Unknown04 = 0;
        Unknown14 = 0;
        Unknown18 = 0;
        Unknown1C = 0;
    }
    ~Class_10B542D0();

    int Unknown00;
    int Unknown04;
    Class_10BFBD70 Unknown08;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
};

// FUNCTION: 0x10B542D0 ??1Class_10B542D0@@QAE@XZ
Class_10B542D0::~Class_10B542D0()
{
    ((Class_10B16D80*)FUN_10b154c0())->FUN_10b16d80(0);
    Unknown14 = 0;
    Unknown18 = 0;
}
