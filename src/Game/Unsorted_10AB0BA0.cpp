// Game/Unsorted_10AB0BA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string>

// FUNCTION: 0x10AB0BA0 ?FUN_10ab0ba0@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV12@0@Z
std::string FUN_10ab0ba0(const std::string& A, const std::string& B)
{
    std::string Temp(A, 0, std::string::npos);
    return std::string(Temp.append(B, 0, std::string::npos), 0, std::string::npos);
}
