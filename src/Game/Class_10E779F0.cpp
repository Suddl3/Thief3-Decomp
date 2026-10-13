// Game/Class_10E779F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string>
#include "Game/Class_10B10A70.h"
#include "Game/Class_10B10B80.h"
#include "Game/Class_10B10C30.h"
#include "Game/Class_10E6D4F0.h"
#include "Game/Class_10E77978.h"
#include "Game/Class_10E779F0.h"

inline Class_10E6D4F0::~Class_10E6D4F0() {}

// The object FUN_10b101b0 constructs: a Class_10E77978 whose own vtable folded into its base's.
class Class_10B101B0 : public Class_10E77978
{
public:
    Class_10B101B0(std::string A);
};

// FUNCTION: 0x10B10790 ??0Class_10E779F0@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
Class_10E779F0::Class_10E779F0(std::string A, int B) : Class_10E77978(A), Unknown20(B)
{
    Unknown24 = new Class_10B101B0(A);
}

// FUNCTION: 0x10B10870 ??_GClass_10E779F0@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B10790's definition in this unit.
