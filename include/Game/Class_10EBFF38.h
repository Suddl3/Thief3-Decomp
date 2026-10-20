// Class_10EBFF38: the traits object cIntHashTable holds in m_KeyTraits.
#ifndef GAME_CLASS_10EBFF38_H
#define GAME_CLASS_10EBFF38_H

#include "Game/Class_10E9BB80.h"

// The class whose vtable is DAT_10ebff38: a Class_10E9BB80 whose slot 1 (FUN_10daf820) overrides
// CompareUnsigned and whose slot 2 (FUN_10daf850) is its own. Slot 0 is the key hasher the table
// calls (Class_10C30DD0_Field18 gives that interface).
class Class_10EBFF38 : public Class_10E9BB80
{
public:
    virtual int CompareUnsigned(unsigned int* A, unsigned int* B);
    virtual void Virtual2();
};

#endif // GAME_CLASS_10EBFF38_H
