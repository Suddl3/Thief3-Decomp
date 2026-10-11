// Game/Unsorted_10A88D40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/Class_10905A90_Member.h"

struct Struct_10C08690;

Class_10905A90_Member* FUN_10905aa0();

struct Struct_10A88D40
{
};

// The header's Class_10BFBD70 copied whole, with the union's pointer typed as the array of Struct_10A88D40 pointers
// and the first-element removal the destructor inlines.
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
    void RemoveFirst()
    {
        int Rest = Count - 1;
        if (Rest != 0)
            memmove(Data, Data + 1, Rest * 4);
        FUN_10bfbd70(Count - 1);
    }

    union
    {
        int Unknown00;
        int Count;
    };
    int Unknown04;
    union
    {
        Struct_10A88D40** Unknown08;
        int* Data;
    };
};

class Class_10A88D40
{
public:
    virtual ~Class_10A88D40();

    char Unknown04[0x7F8];
    Class_10BFBD70 Unknown7FC;
};

// FUNCTION: 0x10A88D40 ??1Class_10A88D40@@UAE@XZ
Class_10A88D40::~Class_10A88D40()
{
    while (Unknown7FC.Count > 0)
    {
        Struct_10A88D40* First = Unknown7FC.Unknown08[0];
        Unknown7FC.RemoveFirst();
        operator delete(First);
    }
}

// FUNCTION: 0x10A88E10 ??_GClass_10A88D40@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10A88D40's definition in this unit.
