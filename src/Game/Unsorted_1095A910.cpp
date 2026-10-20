// Game/Unsorted_1095A910.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/Class_1095A760.h"
#include "Game/Class_1095AE50_Elem.h"

struct Struct_1095A910_Vec3
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

struct Struct_1095A910_Vec2
{
    float Unknown00;
    float Unknown04;
};

struct Struct_1095A910_Element
{
    Struct_1095A910_Vec3 Unknown00;
    Struct_1095A910_Vec3 Unknown0C;
    Struct_1095A910_Vec2 Unknown18;
    Struct_1095A910_Vec3 Unknown20;
    Struct_1095A910_Vec3 Unknown2C;
    Struct_1095A910_Vec3 Unknown38;
    Struct_1095A910_Vec2 Unknown44;
    Struct_1095A910_Vec2 Unknown4C;
    Struct_1095A910_Vec2 Unknown54;
};

class Class_1095A910
{
public:
    void FUN_1095a910(Struct_1095A910_Vec3* A, Struct_1095A910_Vec3* B, Struct_1095A910_Vec2* C,
                       Struct_1095A910_Vec3* D, Struct_1095A910_Vec3* E, Struct_1095A910_Vec3* F);

    char Unknown00[0x14];
    Class_1095A760 Unknown14;
};

// FUNCTION: 0x1095A910 ?FUN_1095a910@Class_1095A910@@QAEXPAUStruct_1095A910_Vec3@@0PAUStruct_1095A910_Vec2@@000@Z
void Class_1095A910::FUN_1095a910(Struct_1095A910_Vec3* A, Struct_1095A910_Vec3* B, Struct_1095A910_Vec2* C,
                                  Struct_1095A910_Vec3* D, Struct_1095A910_Vec3* E, Struct_1095A910_Vec3* F)
{
    Struct_1095A910_Element Element;
    Element.Unknown00 = *A;
    if (B)
        Element.Unknown0C = *B;
    else
    {
        Element.Unknown0C.Unknown00 = 0.0f;
        Element.Unknown0C.Unknown04 = 0.0f;
        Element.Unknown0C.Unknown08 = 0.0f;
    }
    if (C)
    {
        Element.Unknown18 = *C;
        Element.Unknown44 = *C;
        Element.Unknown4C = *C;
        Element.Unknown54 = *C;
    }
    else
    {
        Element.Unknown18.Unknown00 = 0.0f;
        Element.Unknown18.Unknown04 = 0.0f;
        Element.Unknown44.Unknown00 = 0.0f;
        Element.Unknown44.Unknown04 = 0.0f;
        Element.Unknown4C.Unknown00 = 0.0f;
        Element.Unknown4C.Unknown04 = 0.0f;
        Element.Unknown54.Unknown00 = 0.0f;
        Element.Unknown54.Unknown04 = 0.0f;
    }
    if (D)
        Element.Unknown20 = *D;
    else
    {
        Element.Unknown20.Unknown00 = 0.0f;
        Element.Unknown20.Unknown04 = 0.0f;
        Element.Unknown20.Unknown08 = 0.0f;
    }
    if (E)
        Element.Unknown2C = *E;
    else
    {
        Element.Unknown2C.Unknown00 = 0.0f;
        Element.Unknown2C.Unknown04 = 0.0f;
        Element.Unknown2C.Unknown08 = 0.0f;
    }
    if (F)
        Element.Unknown38 = *F;
    else
    {
        Element.Unknown38.Unknown00 = 0.0f;
        Element.Unknown38.Unknown04 = 0.0f;
        Element.Unknown38.Unknown08 = 0.0f;
    }
    Class_1095A760* Array = &Unknown14;
    int Count = Array->m_Count;
    Array->SetCount(Count + 1);
    memcpy((char*)Array->m_Elements + Count * sizeof(Struct_1095A910_Element),
           &Element, sizeof(Struct_1095A910_Element));
}

// FUNCTION: 0x1095AE50 ?LoadElements@@YAXPAVClass_1095AE50_Elem@@HPADH@Z
void LoadElements(Class_1095AE50_Elem* Elems, int Count, char* Data, int Flags)
{
    char Buffer[1024];
    int Pos = 0;
    for (int i = 0; i < Count; ++i)
    {
        short Value = *(short*)(Data + Pos);
        Pos += 2;
        Elems[i].Unknown14.SetCount(Value);
        int Size = Elems[i].Unknown14.m_Count * 0x5c;
        memcpy(Elems[i].Unknown14.m_Elements, Data + Pos, Size);
        Pos += Size;
        int Len = *(int*)(Data + Pos);
        Pos += 4;
        if (Len != 0)
        {
            memcpy(Buffer, Data + Pos, Len);
            Pos += Len;
            Buffer[Len] = 0;
            Elems[i].FUN_1095a510(Buffer);
        }
        if (Flags > 2)
        {
            int Field = *(int*)(Data + Pos);
            Pos += 4;
            Elems[i].Unknown20 = Field;
        }
        Elems[i].FUN_1095aab0();
    }
}
