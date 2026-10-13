// Game/Unsorted_10BAA470_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B9BCA0.h"
#include "AICore/AICoreClasses.h"

class AAIController;

class AController;

// FUNCTION: 0x10BAA660 ?GetAIPawnController@@YAPAVClass_10B9BCA0@@PAVAAIPawn@@@Z
Class_10B9BCA0* GetAIPawnController(AAIPawn* Pawn)
{
    return (Class_10B9BCA0*)Cast<AAIPawnController>(Pawn->Controller);
}
