// Game/Unsorted_10A8D350_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E6C7B4.h"

Class_10905A90_Member* FUN_10905aa0();

void FUN_10d3ddc0(void* Reader, int* Out);

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

// FUNCTION: 0x10A8D3C0 ?FUN_10a8d3c0@Class_10E6C7B4@@UAE_NHPAX@Z
bool Class_10E6C7B4::FUN_10a8d3c0(int A, void* Reader)
{
    Class_109081E0 Text;
    FUN_10d3ddc0(Reader, (int*)&Text);
    Virtual4(&Text);
    return true;
}
