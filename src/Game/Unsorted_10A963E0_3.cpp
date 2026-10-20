// Game/Unsorted_10A963E0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10A7F5A0.h"
#include "Game/Class_10E6CEC4.h"

Class_10905A90_Member* GetAllocator();

// Game/cIntArray.h has no destructor and an out-of-line SetCount; this copy inlines both, as the function does.
class cIntArray
{
public:
    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(void*);
        }
        else if (NewCount <= Capacity - 16)
        {
            if (NewCount == 0)
            {
                GetAllocator()->Virtual5(Unknown08);
                Unknown08 = 0;
                Unknown04 = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~15) + 16;
                Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                Unknown04 = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    ~cIntArray()
    {
        SetCount(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void** Unknown08;
};

class Class_10A96E20_Param2
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual int Virtual8();
};

class Class_10A96E20_Param3
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual Class_10A7F5A0* Virtual4(int A);
};

struct Struct_10A96E20_Node
{
    Struct_10A96E20_Node* Next;
    int Unknown04;
    Class_1098E330* Unknown08;
};

class Class_10A96E20_Result
{
public:
    char Pad00[8];
    Struct_10A96E20_Node* Unknown08;
};

class Class_10A96E20_Unknown1C
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* Item, int A, int B);
};

class Class_10A96E20_Unknown4C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual Class_10A96E20_Result* Virtual16(void* Item);
};

// Copied from include/Game/Struct_10AA3520.h, with the field the call site uses.
struct Struct_10AA3520
{
    char Unknown00[0x1c];
    Class_10A96E20_Unknown1C* Unknown1C;
    char Unknown20[0x2c];
    Class_10A96E20_Unknown4C* Unknown4C;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10A96E20 ?FUN_10a96e20@Class_10E6CEC4@@UAEHHPAVClass_10A96E20_Param2@@PAVClass_10A96E20_Param3@@@Z
int Class_10E6CEC4::FUN_10a96e20(int A, Class_10A96E20_Param2* B, Class_10A96E20_Param3* C)
{
    cIntArray Local = C->Virtual4(0)->FUN_10a7f5a0(B->Virtual8(), 0);
    for (int i = 0; i < Local.Unknown00; i++)
    {
        void* Item = Local.Unknown08[i];
        Class_10A96E20_Result* Result = DAT_10f35dec->Unknown4C->Virtual16(Item);
        for (Struct_10A96E20_Node* Node = Result->Unknown08->Next; Node != Result->Unknown08; Node = Node->Next)
        {
            int Found;
            if (Node->Unknown08->FUN_1098e330(0x40800056, &Found) == 0 || Found == 0)
                DAT_10f35dec->Unknown1C->Virtual1(Node->Unknown08, 0, 0);
        }
    }
    return 1;
}
