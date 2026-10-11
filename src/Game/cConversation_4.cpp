// Game/cConversation_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109081E0.h"
#include "Game/Class_10C00A60.h"

int FUN_10af36e0(const char* A, const char* B);

class FName
{
public:
    Class_109081E0 FUN_10af9730() const;

    unsigned long Value;
};

// Copied whole from include/Game/Class_10AA82C0.h, with its virtual table added.
class Class_10AA82C0
{
public:
    virtual void Virtual0();
    virtual int Virtual1();

    char Unknown04[0x4];
    void* Unknown8;
    void* FUN_10aa82c0();
};

// Copied whole from include/Game/cConversation.h; slot 28 is this function.
class Class_10E6C1F0_Unknown10;

class Member;

class cConversation
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void AddConEvent(int Value);
    virtual void ReplaceConEvent(int Item, int Param3);
    virtual void Virtual4();
    virtual int FUN_10a80bc0(int A);
    virtual int FUN_10a80c10();
    virtual void Virtual7();
    virtual int Virtual8();
    virtual int FUN_10a80c40();
    virtual unsigned FUN_10a81fc0();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual int GetConEvent(int index);
    virtual void Virtual20();
    virtual void Virtual21();
    virtual int Virtual22();
    virtual int IndexOfConEvent(int Value);
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual Class_10AA82C0* FindByName(FName Name);
    virtual void Virtual29();
    virtual bool FUN_10a80d90(int A);
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34(int A);
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void DispatchToConEvents(int A, int B);

    void FUN_10a80c70(unsigned char param);
    void FUN_10a80c80();

    Class_10C00A60 m_ConEvents;
    union
    {
        Member* Field10;
        Class_10E6C1F0_Unknown10* Unknown10;
    };
    int Unknown14;
    int Unknown18;
    char Unknown1C[4];
    int* Unknown20;
    char Pad24[0x28];
    unsigned char Field4c;
    char Pad4D[0x3];
};

// The name an element answers with, or the empty string.
static const char* NameOf(Class_10AA82C0* Item)
{
    const char* Text = *(char**)Item->FUN_10aa82c0();
    return Text ? Text : DAT_10e47660;
}

// FUNCTION: 0x10A81A10 ?FindByName@cConversation@@UAEPAVClass_10AA82C0@@VFName@@@Z
Class_10AA82C0* cConversation::FindByName(FName Name)
{
    for (int i = 0; i < m_ConEvents.Unknown00; i++)
    {
        if (((Class_10AA82C0**)m_ConEvents.Unknown08)[i]->Virtual1() == 11)
        {
            Class_10AA82C0* Item = ((Class_10AA82C0**)m_ConEvents.Unknown08)[i];
            if (Item)
            {
                bool Equal = FUN_10af36e0(*Name.FUN_10af9730(), NameOf(Item)) == 0;
                if (Equal)
                    return Item;
            }
        }
    }
    return 0;
}
