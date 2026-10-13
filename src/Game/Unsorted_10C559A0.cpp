// Game/Unsorted_10C559A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C56000.h"
#include "Game/Class_10C559A0.h"

// The pointee: an object whose slots 1 and 2 are AddRef and Release.
class Object_10C40120
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

// FUNCTION: 0x10C56270 ?Append@Class_10C56000@@QAEHPBVClass_10C559A0@@@Z
int Class_10C56000::Append(const Class_10C559A0* Src)
{
    int Index = m_Count;
    FUN_10c56000(Index + 1);
    Class_10C559A0* Dest = &m_Data[Index];
    Dest->FUN_10c559a0(Src);
    Object_10C40120* Old = Dest->Unknown4C;
    Object_10C40120* New = Src->Unknown4C;
    Dest->Unknown4C = New;
    if (New)
        New->Virtual1();
    if (Old)
        Old->Virtual2();
    return Index;
}
