// Game/Unsorted_10C08B50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Game/Unsorted_10C089B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10E97B00.h"

extern void* DAT_10e97bbc[];

// Game/Item_10C091A0.h copied whole, with the constructor the element's code inlines.
struct Item_10C091A0
{
public:
    Item_10C091A0()
        : Field00((void*)DAT_10e97bbc), Unknown04(DAT_10e47660), Unknown0C(0), Unknown10(0),
          Unknown14(0), Unknown18(0), Unknown1C(0), Unknown20(0x11), Unknown24(false)
    {
    }

    union
    {
        void* Field00;
        void** Unknown00;     // +0x00: the vtable pointer (DAT_10e97bbc)
    };
    Class_10E97B00 Unknown04;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    bool Unknown24;
    char Pad25[0x3];
};

extern "C" void* memmove(void*,const void*,unsigned int);

class Class_10C08E90 {
public:
    void FUN_10c08b50(int Source,int Destination,int Count);
    int Unknown00,Unknown04;
    Item_10C091A0* Unknown08;
};

// FUNCTION: 0x10C08B50 ?FUN_10c08b50@Class_10C08E90@@QAEXHHH@Z
void Class_10C08E90::FUN_10c08b50(int Source,int Destination,int Count)
{
    if(Source==Destination) return;
    if(Count==0) return;
    if(Destination>Source) {
        for(int i=Source+Count;i<Destination+Count;i++)
            Unknown08[i].~Item_10C091A0();
    } else if(Destination<Source) {
        for(int i=Destination;i<Source;i++)
            Unknown08[i].~Item_10C091A0();
    }
    memmove(&Unknown08[Destination],&Unknown08[Source],Count*sizeof(Item_10C091A0));
    if(Source<Destination) {
        for(int i=Source;i<Destination;i++)
            new (&Unknown08[i]) Item_10C091A0;
    } else {
        for(int i=Destination+Count;i<Source+Count;i++)
            new (&Unknown08[i]) Item_10C091A0;
    }
}
