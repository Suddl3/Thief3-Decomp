// Game/Unsorted_10ABB900.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10939570.h"

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
    void Add(int Item)
    {
        int Index = Count;
        FUN_10bfbd70(Index + 1);
        Data[Index] = Item;
    }

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

Class_10905A90_Member* FUN_10905aa0();

class Class_1090A780
{
public:
    Class_1090A780(const Class_1090A780& Other);

    char* Unknown00;
};

class Class_109081E0 : public Class_1090A780
{
public:
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }
};

Class_109081E0 FUN_1090a660(const char* Format, ...);

extern Class_10939570* DAT_10f323fc;

class Class_10ABB900
{
public:
    void FUN_10abb900();

    char Pad00[0x8];
    Class_10BFBD70 Unknown08;
};

// FUNCTION: 0x10ABB900 ?FUN_10abb900@Class_10ABB900@@QAEXXZ
void Class_10ABB900::FUN_10abb900()
{
    if (Unknown08.Count == 0)
    {
        int Index = 0;
        do
        {
            ++Index;
            Class_109081E0 Name = FUN_1090a660("MetaselectionFrob_M%03d", Index);
            void* Value = DAT_10f323fc->FUN_1093bd40((int*)&Name, 0, 0);
            Unknown08.Add((int)Value);
        } while (Index < 16);
    }
}
