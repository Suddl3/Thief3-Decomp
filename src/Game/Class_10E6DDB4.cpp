// Game/Class_10E6DDB4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <string>
#include "Game/Class_10E6D4F0.h"
#include "Game/Class_10E6DDB4.h"
#include "Game/Class_10E77978.h"

inline Class_10E6D4F0::~Class_10E6D4F0() {}

// The object FUN_10ab04a0 constructs: a Class_10E77978 whose own vtable folded into its base's.
class Class_10AB04A0 : public Class_10E77978
{
public:
    Class_10AB04A0(std::string A);
};

// FUNCTION: 0x10AB0570 ??0Class_10E6DDB4@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
Class_10E6DDB4::Class_10E6DDB4(std::string A, int B) : Class_10E77978(A), Unknown20(B)
{
    Unknown24 = new Class_10AB04A0(A);
}

// FUNCTION: 0x10AB0650 ??_GClass_10E6DDB4@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10AB0570's definition in this unit.
