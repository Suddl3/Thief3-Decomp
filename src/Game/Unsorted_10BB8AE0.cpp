// Game/Unsorted_10BB8AE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9BCA0.h"
#include "Game/Class_10B9CAC0.h"
#include "Game/Class_10BB8BC0.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10B9BCA0.h"

class AAIPawn;

Class_10B9BCA0* GetAIPawnController(AAIPawn* Pawn);

struct Struct_10BB8BC0
{
    int Unknown00;
    int Unknown04;
    int* Unknown08;
};

// FUNCTION: 0x10BB8BC0 ?GetFirst@Class_10BB8BC0@@QAEHXZ
int Class_10BB8BC0::GetFirst()
{
    Class_10B9BCA0* Controller = GetAIPawnController((AAIPawn*)Unknown08->FUN_10c7d570());
    if (Controller && Controller->Unknown118 && Controller->Unknown118->Unknown08)
    {
        Struct_10BB8BC0* List = (Struct_10BB8BC0*)Controller->Unknown118->Unknown08->FUN_10aa9da0();
        if (List->Unknown00)
            return List->Unknown08[0];
    }
    return 0;
}
