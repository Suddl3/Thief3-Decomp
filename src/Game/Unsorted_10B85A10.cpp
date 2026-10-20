// Game/Unsorted_10B85A10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Allocator_10FFA700.h"

extern Allocator_10FFA700* DAT_10ffa700;

class Class_10B85940
{
public:
    virtual Class_10B85940* FUN_10b86bf0(unsigned int Flags);

    ~Class_10B85940();
};

// FUNCTION: 0x10B86BF0 ?FUN_10b86bf0@Class_10B85940@@UAEPAV1@I@Z
Class_10B85940* Class_10B85940::FUN_10b86bf0(unsigned int Flags)
{
    this->~Class_10B85940();
    if (Flags & 1)
        DAT_10ffa700->Free(this, 8, 0x17);
    return this;
}
