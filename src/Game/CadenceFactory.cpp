// Game/CadenceFactory.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10D3F830.h"

extern "C" char* _strlwr(char* String);

struct Struct_10C48970
{
    char Unknown00[4];
    union
    {
        char Inline[0x10];
        char* Heap;
    };
    int Unknown14;
    unsigned int Capacity;
};

class CadenceFactory
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual bool FUN_10c48970(Struct_10C48970& Name);

    char Unknown04[0x5c];
    Class_10D3F830 Unknown60;
};

// FUNCTION: 0x10C48970 ?FUN_10c48970@CadenceFactory@@UAE_NAAUStruct_10C48970@@@Z
bool CadenceFactory::FUN_10c48970(Struct_10C48970& Name)
{
    cString Key(Name.Capacity >= 0x10 ? Name.Heap : Name.Inline);
    if (Key.Unknown00)
        _strlwr(Key.Unknown00);
    bool Result = Unknown60.FUN_10d3f830((int*)&Key);
    return Result;
}
