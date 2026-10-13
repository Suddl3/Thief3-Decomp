// Game/Unsorted_10A4EFF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A243F0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A4EFB0.h"
#include "Game/cString.h"

Class_10905A90_Member* GetAllocator();

int appStricmp(const char* A, const char* B);

extern const char DAT_10e47660[];

// The count of the character buffer sits 4 bytes before the text.
struct Struct_10F3A0B4
{
    int Unknown00;
};

extern cString DAT_10f3a0b4;

class Class_10A4F2A0
{
public:
    void FUN_10a4eba0(int A, int B);
};

class Class_10A4FB00_Result
{
public:
    char Unknown00[0x1C];
    Class_10A4F2A0 Unknown1C;
};

Class_10A4FB00_Result* FUN_10a4df70(cString& A);

// FUNCTION: 0x10A4EFF0 ?FUN_10a4eff0@@YA_NAAVcString@@HH@Z
bool FUN_10a4eff0(cString& A, int B, int C)
{
    if (C == 0 && DAT_10f3a0b4.Unknown00 && ((Struct_10F3A0B4*)DAT_10f3a0b4.Unknown00)[-1].Unknown00)
    {
        const char* Name = A.Unknown00 ? A.Unknown00 : DAT_10e47660;
        if (appStricmp(DAT_10f3a0b4.Unknown00, Name) == 0)
            return false;
    }
    if (!FUN_10a4df70(A))
        return false;
    FUN_10a4df70(A)->Unknown1C.FUN_10a4eba0(B, C);
    return true;
}

// FUNCTION: 0x10A4F120 ?Reset@Class_10A4EFB0@@QAEXXZ
void Class_10A4EFB0::Reset()
{
    Resize(0);
    for (int i = 0; i < 0x42; i++)
    {
        unsigned Capacity;
        if (Unknown0C[i].m_Buffer == 0)
            Capacity = 0;
        else
            Capacity = (unsigned)Unknown0C[i].m_BufferBytes >> 2;
        GetAllocator()->Virtual8(0, 0);
        if ((int)Capacity < 0)
        {
            int Want = 0;
            if (Capacity)
                Want = 0x10;
            Unknown0C[i].m_Buffer = GetAllocator()->Virtual3(Unknown0C[i].m_Buffer, Want * 4, 0, 0, 0, 0);
            Unknown0C[i].m_BufferBytes = Want * 4;
        }
        else if ((int)(Capacity - 16) >= 0)
        {
            GetAllocator()->Virtual5(Unknown0C[i].m_Buffer);
            Unknown0C[i].m_Buffer = 0;
            Unknown0C[i].m_BufferBytes = 0;
        }
        GetAllocator()->Virtual9();
        Unknown0C[i].Unknown00 = 0;
    }
    for (int i = 0; i < 0xff; i++)
        Unknown324[i] = 0x40;
    for (int i = 0; i < 0xe; i++)
        Unknown720[i].Resize(0);
}
