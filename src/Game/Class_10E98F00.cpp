// Game/Class_10E98F00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BAC050.h"
#include "Game/Class_10E98F00.h"
#include "Core/Core.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10C1A940.h"
#include "Game/Class_10C1A950.h"
#include "Game/Class_10C1AAC0.h"
#include "Game/Class_10E98D08.h"
#include "Game/Class_10C28EF0.h"
#include "Game/Class_10C28F00.h"
#include "Game/SoundNotifier.h"
#include "Game/Class_10E99370.h"
#include "Game/Struct_10C1AAD0.h"
#include "Game/Struct_10C1ACA0.h"
#include "Game/Struct_10C1AD20.h"
#include "Game/Struct_10C1AF80.h"
#include "Game/Class_10C1AAD0.h"
#include "Game/Class_10C1AF80.h"
#include "Game/cMenu.h"
#include "Game/Class_10E99020.h"
#include "Game/Class_10E992D4.h"
#include "Game/Class_10E8D7AC.h"
#include "Game/Class_10E98F48.h"

// FUNCTION: 0x10C1ACA0 ?FUN_10c1aca0@Class_10E98F00@@QAE_NPAUStruct_10C1ACA0@@PAM@Z
bool Class_10E98F00::FUN_10c1aca0(Struct_10C1ACA0* Out, float* Value)
{
    *Out = Unknown4C;
    *Value = 0.0f;
    return true;
}

// FUNCTION: 0x10C1ACD0 ?FUN_10c1acd0@Class_10E98F00@@UAE_NXZ
bool Class_10E98F00::FUN_10c1acd0()
{
    int Value = Unknown04;
    if (Value)
        Unknown08->FUN_10bac050(Value);
    return false;
}
