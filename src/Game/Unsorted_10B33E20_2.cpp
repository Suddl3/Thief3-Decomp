// Game/Unsorted_10B33E20_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

struct Item_10B34130;

class Class_10B34130
{
public:
    ~Class_10B34130()
    {
        FUN_10b330d0(0);
        if (Unknown04)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int FUN_10b34130(const Item_10B34130* Item);
    void FUN_10b330d0(int NewCount);

    int Unknown00;
    int Unknown04;
    Item_10B34130* Unknown08;
};

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

class Class_10E81130
{
public:
    virtual void Virtual0();
    ~Class_10E81130();
    Class_10E81130* FUN_10b46080();

    char Unknown04[0x160];
};

class Class_10E7BF50 : public Class_10E81130
{
public:
    virtual void Virtual0();
    ~Class_10E7BF50();
    Class_10E7BF50* FUN_10b33da0();

    int Unknown164;
    int Unknown168;
    int Unknown16C;
    Class_10BFBD70 Unknown170;
    float Unknown17C;
    int Unknown180;
    int Unknown184;
    int Unknown188;
    int Unknown18C;
    Class_10B34130 Unknown190;
    int Unknown19C;
    int Unknown1A0;
    bool Unknown1A4;
};

// FUNCTION: 0x10B33E20 ??1Class_10E7BF50@@QAE@XZ
Class_10E7BF50::~Class_10E7BF50()
{
}
