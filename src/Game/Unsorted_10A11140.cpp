// Game/Unsorted_10A11140.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <list>
#include <vector>

class Class_10A11140
{
public:
    Class_10A11140(const Class_10A11140& Other);

    void FUN_10a10d60(const Class_10A11140& Other);

    bool Unknown00;
    std::list<int> Unknown04;
    std::vector<int> Unknown10;
    int Unknown20;
    int Unknown24;
};

// FUNCTION: 0x10A11140 ??0Class_10A11140@@QAE@ABV0@@Z
Class_10A11140::Class_10A11140(const Class_10A11140& Other)
    : Unknown00(Other.Unknown00)
{
    FUN_10a10d60(Other);
}
