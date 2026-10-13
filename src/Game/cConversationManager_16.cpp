// Game/cConversationManager_16.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A86210_Arg.h"

class Class_109022E0;

class Class_10919B80;

class cFlagElementLogic;

class Class_10E5D548_Unknown10;

struct Struct_10A13110;

struct Struct_10A14400;

class Class_10A86210_Arg;

class cConversationManager
{
public:
    virtual Class_10919B80* Virtual0();
    virtual Class_10919B80* FUN_10a12e60(int A);
    virtual void Virtual2();
    virtual cFlagElementLogic* CreateFlagElement(const Class_109022E0& A, float B);
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Clear();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void FUN_10a12fd0(int Param);
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14(int A, int* B);
    virtual void Virtual15();
    virtual int AddChild(int Value);
    virtual void Virtual17();
    virtual int FUN_10a13090(int Param);
    virtual int FUN_10a130d0(int Param);
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual Class_10E5D548_Unknown10* FindChildByKey(int A);
    virtual Struct_10A13110* FindEntryByKey(int Key);
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void FUN_10a13480(int Param);
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void FUN_10a14400();

    void ResolvePending();

    int Unknown04;
    int m_ChildCount;
    char Pad0C[0x4];
    Class_10E5D548_Unknown10** m_Children;
    int Unknown14;
    char Pad18[0x4];
    int* Unknown1C;
    int m_EntryCount;
    char Unknown24[4];
    Struct_10A13110* m_Entries;
    bool Unknown2C;
    Struct_10A14400* Unknown30;
    int Unknown34;
    int Unknown38;
};

struct Struct_10A14400
{
};

void FUN_10a87ad0(Class_10A86210_Arg* A);

void SerializeObjects(Class_10A86210_Arg* Arg);

// FUNCTION: 0x10A14400 ?FUN_10a14400@cConversationManager@@UAEXXZ
void cConversationManager::FUN_10a14400()
{
    if (Unknown2C)
    {
        if (Unknown30 && Unknown34)
        {
            Class_10A86210_Arg Arg(Unknown30, Unknown34);
            Arg.Unknown10 = Unknown38;
            FUN_10a87ad0(&Arg);
            SerializeObjects(&Arg);
            delete Unknown30;
        }
        Unknown30 = 0;
        Unknown34 = 0;
        Unknown38 = 0;
        ResolvePending();
    }
}
