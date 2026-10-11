// Game/cConversation_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C00A60.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned int Count);

// A node of the table, and the entries it holds (an entry is a node too): deleted with delete, asked Virtual1.
// Its count sits at +8 and its entries at +0x10: the Class_10C00A60 layout starts at +8.
class Class_10A82840_Unknown10
{
public:
    virtual ~Class_10A82840_Unknown10();
    virtual int Virtual1();

    int Unknown04;
    int Unknown08;
    int Unknown0C;
    Class_10A82840_Unknown10** Unknown10;
};

class cConversation
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void DeleteChild(Class_10A82840_Unknown10* Table, Class_10A82840_Unknown10* Item);

    int m_ConEvents;
    int Unknown08;
    int Unknown0C;
    Class_10A82840_Unknown10* Unknown10;
};

// FUNCTION: 0x10A82840 ?DeleteChild@cConversation@@UAEXPAVClass_10A82840_Unknown10@@0@Z
void cConversation::DeleteChild(Class_10A82840_Unknown10* Table, Class_10A82840_Unknown10* Item)
{
    if (!Table)
        Table = Unknown10;
    Class_10C00A60* Array = (Class_10C00A60*)&Table->Unknown08;
    for (int i = 0; i < Array->Unknown00; i++)
    {
        Class_10A82840_Unknown10* Entry = Table->Unknown10[i];
        if (Entry == Item)
        {
            delete Table->Unknown10[i];
            if (i != Array->Unknown00 - 1)
            {
                int From = i + 1;
                int To = i;
                int Count = Array->Unknown00 - i - 1;
                if (From != To && Count)
                    memmove(Array->Unknown08 + To, Array->Unknown08 + From, Count * sizeof(int));
            }
            Array->FUN_10c00a60(Array->Unknown00 - 1);
            return;
        }
        if (!Entry->Virtual1())
            DeleteChild(Table->Unknown10[i], Item);
    }
}
