// Game/Unsorted_10B32200_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "AICore/AICoreClasses.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B32B50.h"
#include "Game/Class_10BAA6F0.h"
#include "Game/Class_10BBA080.h"

Class_10905A90_Member* GetAllocator();

// The item class the code walks: it passes the field at +0x2C and reads the byte flag at +0x78.
class Class_10B21340
{
public:
    char Pad00[0x2C];
    void* Unknown2C;
    char Pad30[0x48];
    unsigned char Unknown78;
};

class Class_10BAA6B0_Param;

class Class_10BABED0 : public Class_10BAA6F0
{
};

// Game/cIntArray.h copied whole, with SetCount inline as this unit compiles it.
class cIntArray
{
public:
    cIntArray() : Unknown00(0), m_CapacityBytes(0), Unknown08(0) {}

    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : m_CapacityBytes / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(void*);
        }
        else if (NewCount <= Capacity - 16)
        {
            if (NewCount == 0)
            {
                GetAllocator()->Virtual5(Unknown08);
                Unknown08 = 0;
                m_CapacityBytes = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~15) + 16;
                Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                m_CapacityBytes = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    ~cIntArray()
    {
        SetCount(0);
        if (m_CapacityBytes)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            m_CapacityBytes = 0;
        }
    }

    union
    {
        int Unknown00;
        int Count;
    };
    int m_CapacityBytes;
    union
    {
        int* Unknown08;
        int* Data;
    };
};

void __cdecl FUN_10a49da0(cIntArray* Out, void* In, float Value, int A, int B, int C);

class Class_10BABED0* __cdecl FUN_10baa6b0(Class_10BAA6B0_Param* A);

// FUNCTION: 0x10B32200 ?FUN_10b32200@Class_10B32B50@@QAE_NPAVClass_10B21340@@@Z
bool Class_10B32B50::FUN_10b32200(Class_10B21340* A)
{
    cIntArray Array;
    FUN_10a49da0(&Array, &A->Unknown2C, 112.0f, 1, 0, 7);
    for (int i = 0; i < Array.Count; i++)
    {
        Class_10B21340* Item = (Class_10B21340*)Array.Data[i];
        if (Item != A && (Item->Unknown78 & 4))
        {
            Class_10BABED0* Found = FUN_10baa6b0((Class_10BAA6B0_Param*)Item);
            if (Found)
            {
                Class_10BBA080* Sub = (Class_10BBA080*)Found->FUN_10baa6f0();
                if (Sub->FUN_10bb8c60() == 3)
                    return true;
            }
        }
    }
    return false;
}
