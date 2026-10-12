// Game/cConversation_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/cIntArray.h"
#include "Game/Class_1096A960.h"

bool FUN_1090f010(const int* A, const int* B);

class Class_10A82680_Param
{
public:
    char Unknown00[0x24];
    Class_1096A960* Unknown24;
};

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
    virtual const int* Virtual16();
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
    virtual void Virtual28();
    virtual bool FUN_10a82680(Class_10A82680_Param* Z);
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

    cIntArray m_ConEvents;
    union
    {
        Member* Field10;
        Class_10E6C1F0_Unknown10* Unknown10;
    };
    Class_10A82680_Param* Unknown14;
    int Unknown18;
    char Unknown1C[4];
    int* Unknown20;
    char Pad24[0x28];
    unsigned char Field4c;
    char Pad4D[0x3];
};

// FUNCTION: 0x10A82680 ?FUN_10a82680@cConversation@@UAE_NPAVClass_10A82680_Param@@@Z
bool cConversation::FUN_10a82680(Class_10A82680_Param* Z)
{
    if (Unknown14 == 0)
    {
        bool Same;
        {
            Same = FUN_1090f010((const int*)&Z->Unknown24->FUN_1096a960(), Virtual16());
        }
        if (Same)
        {
            Unknown14 = Z;
            return true;
        }
    }
    return false;
}
