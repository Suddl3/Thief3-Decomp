// Game/Unsorted_10A48580.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10C66590.h"
#include "Game/USkeletalMesh.h"

class ULodMesh;

// An item with a value the list is sorted by.
class Class_10A48580_Item
{
public:
    char Unknown00[0x34];
    float Unknown34;
};

// A list of items: the count and the array of pointers to them.
struct Struct_10A48580
{
    int Unknown00;
    int Unknown04;
    Class_10A48580_Item** Unknown08;
};

// FUNCTION: 0x10A48580 ?FUN_10a48580@@YAXPAUStruct_10A48580@@@Z
void FUN_10a48580(Struct_10A48580* List)
{
    int Limit = List->Unknown00 - 1;
    while (Limit >= 0)
    {
        bool Swapped = false;
        for (int i = 0; i < Limit; i++)
        {
            Class_10A48580_Item* First = List->Unknown08[i];
            Class_10A48580_Item* Second = List->Unknown08[i + 1];
            if (First->Unknown34 > Second->Unknown34)
            {
                List->Unknown08[i] = Second;
                List->Unknown08[i + 1] = First;
                Swapped = true;
            }
        }
        if (!Swapped)
            break;
        --Limit;
    }
}

// FUNCTION: 0x10A486D0 ?GetSkeletalMesh@@YAPAVUSkeletalMesh@@PAVClass_10C66590@@@Z
USkeletalMesh* GetSkeletalMesh(Class_10C66590* A)
{
    return Cast<USkeletalMesh>((UObject*)A->FUN_10c66590());
}
