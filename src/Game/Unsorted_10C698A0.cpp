// Game/Unsorted_10C698A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string>

// FUNCTION: 0x10C698A0 ?FUN_10c698a0@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV12@H@Z
std::string FUN_10c698a0(const std::string& Other, int Arg)
{
    std::string Temp(Other);
    return Temp.append(1u, Arg);
}
