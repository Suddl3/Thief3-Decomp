// Game/Unsorted_10C266F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109B6D50.h"
#include "Game/Class_10E9925C.h"

struct Struct_10C266F0_Item
{
};

struct Struct_10C266F0
{
    int Unknown00;
    int Unknown04;
    Struct_10C266F0_Item** Unknown08;
};

// FUNCTION: 0x10C266F0 ?DeleteAll@@YAXPAUStruct_10C266F0@@@Z
void DeleteAll(Struct_10C266F0* List)
{
    for (int i = 0; i < List->Unknown00; i++)
        delete List->Unknown08[i];
    List->Unknown00 = 0;
}

// FUNCTION: 0x10C26720 ?AddToRegistry@Class_10E9925C@@UAEXXZ
void Class_10E9925C::AddToRegistry()
{
    if (Virtual14())
    {
        Class_109B6D50* P = FUN_10c26490();
        if (P && !m_Registered && !P->FUN_109b6d50(m_RegistryId))
        {
            P->FUN_109bf7f0(m_RegistryId, Virtual13());
            m_Registered = true;
        }
    }
}
