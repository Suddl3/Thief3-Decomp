// Game/cConversationManager_14.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern const char DAT_10e47660[];

int appStricmp(const char* A, const char* B);

void FUN_10a87a70(int A);

// Copied whole from include/Game/Class_10E5D548_Unknown10.h, with the two slots this method reads given their results.
class Class_10E5D548_Unknown10
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
    virtual const char** Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual unsigned char Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29(int Param);
    virtual void Virtual30(int Param);
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34(int Param);
};

class Class_109022E0;

class Class_10919B80;

class cFlagElementLogic;

struct Struct_10A13110;

// Copied whole from include/Game/cConversationManager.h, with slot 28 named for this method.
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
    virtual void FUN_10a13990(const char** Name);
    virtual void FUN_10a13480(int Param);

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
};

// FUNCTION: 0x10A13990 ?FUN_10a13990@cConversationManager@@UAEXPAPBD@Z
void cConversationManager::FUN_10a13990(const char** Name)
{
    for (int i = 0; i < m_ChildCount; i++)
    {
        if (m_Children[i]->Virtual22() & 1)
        {
            Class_10E5D548_Unknown10* Entry = m_Children[i];
            const char* Want = DAT_10e47660;
            if (*Name)
                Want = *Name;
            const char* Have = *Entry->Virtual15();
            if (!Have)
                Have = DAT_10e47660;
            if (appStricmp(Have, Want) == 0)
                FUN_10a87a70((int)m_Children[i]);
        }
    }
}
