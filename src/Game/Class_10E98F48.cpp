// Game/Class_10E98F48.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E98F48.h"
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
#include "Game/Class_10E98F00.h"
#include "Game/Class_10E99020.h"
#include "Game/Class_10E992D4.h"
#include "Game/Class_10E8D7AC.h"
#include "Engine/EngineClasses.h"

// FUNCTION: 0x10C1ACF0 ?FUN_10c1acf0@Class_10E98F48@@UAE_NH@Z
bool Class_10E98F48::FUN_10c1acf0(int A)
{
    if (A == Unknown54)
        return true;
    return Unknown04 == A;
}

// FUNCTION: 0x10C1AD20 ?GetLocation@Class_10E98F48@@QAE_NPAUStruct_10C1AD20@@PAM@Z
bool Class_10E98F48::GetLocation(Struct_10C1AD20* Out, float* Value)
{
    *Out = Unknown48;
    *Value = 0.0f;
    return true;
}

// FUNCTION: 0x10C1AD50 ?FUN_10c1ad50@Class_10E98F48@@UAEHPAV1@@Z
int Class_10E98F48::FUN_10c1ad50(Class_10E98F48* Other)
{
    return (Unknown54 - Other->Unknown54) == 0;
}

// FUNCTION: 0x10C1AD70 ?FUN_10c1ad70@Class_10E98F48@@UAE_NXZ
bool Class_10E98F48::FUN_10c1ad70()
{
    return Unknown54 != Unknown04;
}

// FUNCTION: 0x10C1B580 ?FUN_10c1b580@Class_10E98F48@@QAEPAVAPawn@@XZ
APawn* Class_10E98F48::FUN_10c1b580()
{
    return Cast<APawn>(Cast<UObject>((UObject*)Unknown54));
}
