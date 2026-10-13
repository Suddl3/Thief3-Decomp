// Game/cMenu.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_1090A780.h"
#include "Game/cMenu.h"
#include "Core/Core.h"
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
#include "Game/Class_10E98F00.h"
#include "Game/Class_10E99020.h"
#include "Game/Class_10E992D4.h"
#include "Game/Class_10E8D7AC.h"
#include "Game/Class_10E98F48.h"

// FUNCTION: 0x10A634D0 ?FUN_10a634d0@cMenu@@UAEXABVcString@@@Z
void cMenu::FUN_10a634d0(const cString& A)
{
    GetAllocator()->Virtual8(0, 0);
    Unknown10 = A;
    GetAllocator()->Virtual9();
}

// FUNCTION: 0x10C26A40 ?FUN_10c26a40@cMenu@@UAE?AVClass_1090A780@@XZ
Class_1090A780 cMenu::FUN_10c26a40()
{
    return Class_1090A780(Unknown10);
}
