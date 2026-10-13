// Game/Unsorted_10B88900.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B88A80_Field18.h"
#include "Game/Class_10B89820.h"
#include "Game/Class_10B88A80.h"

Class_10905A90_Member* GetAllocator();

extern bool DAT_10ffc854;

extern char const* const DAT_10e47660;

struct Struct_10B88900_Entry
{
    int Unknown00;
    void* Unknown04;
    int Unknown08;
};

class Class_10B88900_Arg1
{
public:
    char const* Unknown00;
};

class Class_10B88900_Arg2
{
public:
    Struct_10B88900_Entry Unknown00[4];
    bool Unknown30;
};

class Class_10D393D0
{
public:
    ~Class_10D393D0();
    void FUN_10d393d0(void* A, int B, char const* C);
    void FUN_10d393b0();

    char Unknown00[0xC];
};

Class_10D393D0 FUN_10d39cf0(char const* File, int Line, char const* Name, int A, Class_10B88900_Arg1* B, int C, int D, int E, int F, unsigned G);

// FUNCTION: 0x10B88900 ?WriteBlockData@@YGXPAVClass_10B88900_Arg1@@PAVClass_10B88900_Arg2@@H@Z
void __stdcall WriteBlockData(Class_10B88900_Arg1* A, Class_10B88900_Arg2* B, int C)
{
    if (B)
    {
        char const* Name = A->Unknown00;
        if (!Name)
            Name = (char const*)&DAT_10e47660;
        Class_10D393D0 Writer = FUN_10d39cf0(".\\RagdollBlockDataManager.cpp", 300, Name, -1, A, 6, C, 2, 0, 0xdeadbeef);
        for (int i = 0; i < 4; i++)
        {
            int Count = B->Unknown00[i].Unknown00;
            void* Data = B->Unknown00[i].Unknown04;
            if (DAT_10ffc854)
            {
                Writer.FUN_10d393d0(&Count, 4, "uint32");
                if (DAT_10ffc854)
                    Writer.FUN_10d393d0(Data, Count, 0);
            }
        }
        if (DAT_10ffc854)
            Writer.FUN_10d393b0();
        B->Unknown30 = true;
    }
}

// FUNCTION: 0x10B89820 ?Free@Class_10B89820@@QAEXXZ
void Class_10B89820::Free()
{
    FUN_10b89460(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        Unknown04 = 0;
    }
}
