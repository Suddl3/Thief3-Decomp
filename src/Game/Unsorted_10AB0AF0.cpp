// Game/Unsorted_10AB0AF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string>
#include <string.h>

// FUNCTION: 0x10AB0AF0 ?FUN_10ab0af0@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV12@PBD@Z
std::string FUN_10ab0af0(const std::string& Other, const char* Str)
{
    std::string Temp(Other);
    return Temp.assign(Str, strlen(Str));
}
