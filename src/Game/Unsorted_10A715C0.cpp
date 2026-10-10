// Game/Unsorted_10A715C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <vector>
#include "Game/Class_10A111B0.h"
#include "Game/Class_10A4C550.h"
#include "Game/Class_10AB0400.h"
#include "Game/Struct_10AB0400.h"
#include "Game/Class_10A71C40.h"
#include "Game/Class_10E6BAB0.h"

class Class_10A72DB0 : public Class_10A111B0
{
public:
    void FUN_10a72db0();

    char Unknown00[0x18];
    void* Unknown18;
};

struct Struct_10A4C550_Node
{
    Struct_10A4C550_Node* Unknown00;
    Struct_10A4C550_Node* Unknown04;
    unsigned int Unknown08;
    int Unknown0C;
};

class Class_10A4C550_Iterator
{
public:
    Class_10A4C550_Iterator() {}

    Struct_10A4C550_Node* Unknown00;
};

// FUNCTION: 0x10A71C40 ?FUN_10a71c40@Class_10A71C40@@QAEXXZ
void Class_10A71C40::FUN_10a71c40()
{
    Unknown14.~vector();
    Unknown08.FUN_10ab0400();
}

// FUNCTION: 0x10A73200 ?FUN_10a73200@Class_10E6BAB0@@UAEPAHI@Z
int* Class_10E6BAB0::FUN_10a73200(unsigned int Key)
{
    Class_10A4C550_Iterator It = Unknown04.FUN_10a4c550(Key);
    return &It.Unknown00->Unknown0C;
}
