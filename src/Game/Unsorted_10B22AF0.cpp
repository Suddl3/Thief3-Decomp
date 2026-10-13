// Game/Unsorted_10B22AF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

class Class_10B22AF0
{
public:
    void SetLength(int Length);

    int* Unknown00;
};

// FUNCTION: 0x10B22AF0 ?SetLength@Class_10B22AF0@@QAEXH@Z
void Class_10B22AF0::SetLength(int Length)
{
    if (Length == 0)
    {
        if (Unknown00)
        {
            int* Header = Unknown00 - 1;
            GetAllocator()->Virtual5(Header);
            Unknown00 = 0;
        }
        return;
    }
    bool WasEmpty = Unknown00 == 0;
    int* Header = Unknown00 == 0 ? 0 : Unknown00 - 1;
    int* Block = (int*)GetAllocator()->Virtual3(Header, Length * 2 + 6, 0, 0, 0, 0);
    Unknown00 = Block + 1;
    *Block = Length;
    if (WasEmpty)
        *(unsigned short*)Unknown00 = 0;
}
