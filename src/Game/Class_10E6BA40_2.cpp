// Game/Class_10E6BA40_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10A6F0C0.h"
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10F46DA0.h"

class Class_10B697A0;

extern Class_10F46DA0* DAT_10f46da0;

// The list node the head's Next links: Next at 0, the item at 8 (compared with the array, passed to the listener), the flag at 0x10.
class Class_10A6F010_Unknown0C
{
public:
    Class_10A6F010_Unknown0C* Next;
    int Unknown04;
    int Item;
    int Unknown0C;
    int Flag;
};

// Class_10E6D208: a polymorphic base of Class_10E66500 (its vtable 0x10E6D208 holds the destructor and FUN_10a2f220).
class Class_10E6D208
{
public:
    Class_10E6D208() : Unknown04(0) {}
    virtual ~Class_10E6D208() {}
    virtual Class_10E6D208* FUN_10a2f220();

    int Unknown04;
};

// A local with a virtual destructor and a vtable: its base's constructor clears Unknown04, its own clears Unknown08.
class Class_10E66500 : public Class_10E6D208
{
public:
    Class_10E66500() : Unknown08(0) {}
    virtual ~Class_10E66500() {}
    virtual int FUN_10a2f1a0(Class_10E66500* Other);

    BYTE Unknown08;
    char Unknown09[0xc];
};

// Class_10E6BA40 copied whole from include/Game/Class_10E6BA40.h, with the two slots and the list head at 0xC that this function uses.
class Class_10E6BA40
{
public:
    virtual void Virtual0();
    virtual int FUN_10a6f160(int Key, float Value);
    virtual void Virtual2();
    virtual void FUN_10a6f010(int A, Class_10BFBD70* Arr);

    Class_10A6F0C0 Unknown04;
    char Pad05[0x7];
    Class_10A6F010_Unknown0C* Unknown0C;
};

// FUNCTION: 0x10A6F010 ?FUN_10a6f010@Class_10E6BA40@@UAEXHPAVClass_10BFBD70@@@Z
void Class_10E6BA40::FUN_10a6f010(int A, Class_10BFBD70* Arr)
{
    Class_10E66500 Local;
    Class_10A6F010_Unknown0C* Node = this->Unknown0C->Next;
    if (Node != this->Unknown0C)
    {
        do
        {
            int Item = Node->Item;
            if (Node->Flag != 0)
            {
                if (Arr->FindIndex(Item) < 0)
                {
                    Node->Flag = 0;
                    Local.Unknown04 = A;
                    DAT_10f46da0->Virtual5(0x29, (Class_10B697A0*)Item, (int)&Local, 0);
                }
            }
            Node = Node->Next;
        } while (Node != this->Unknown0C);
    }
}
