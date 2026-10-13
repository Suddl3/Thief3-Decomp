// Game/cConversationManager_12.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stdio.h>
#include "Game/cString.h"

extern const char DAT_10e5d510[];

extern const char DAT_10e5d514[];

class Object_10A80D30;

// Class_10A80D30 copied whole from include/Game/Class_10A80D30.h with FUN_10a83da0 added.
class Class_10A80D30
{
public:
    bool WriteLines(FILE* File, int A);
    bool FUN_10a83da0(FILE* File, int A);

    char Unknown00[4];
    int ChildCount;
    char Unknown08[4];
    Object_10A80D30** Children;
    char Unknown10[0x24];
    char* Subject;
};

class Class_109022E0;

class Class_10919B80;

class cFlagElementLogic;

class Class_10E5D548_Unknown10;

struct Struct_10A13110;

// cConversationManager copied from its header: slot 7 is FUN_10a13660 here, and the children are Class_10A80D30 objects.
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
    virtual int FUN_10a13660(const cString& Name);
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

    int Unknown04;
    int m_ChildCount;
    char Pad0C[0x4];
    Class_10A80D30** m_Children;
    int Unknown14;
    char Pad18[0x4];
    int* Unknown1C;
    int m_EntryCount;
    char Unknown24[4];
    Struct_10A13110* m_Entries;
};

// FUNCTION: 0x10A13660 ?FUN_10a13660@cConversationManager@@UAEHABVcString@@@Z
int cConversationManager::FUN_10a13660(const cString& Name)
{
    FILE* File = fopen(*Name, DAT_10e5d514);
    if (!File)
        return 0;
    int Value;
    fscanf(File, DAT_10e5d510, &Value);
    for (int i = 0; i < m_ChildCount; i++)
    {
        if (!m_Children[i]->FUN_10a83da0(File, Value))
        {
            fclose(File);
            return 0;
        }
    }
    fclose(File);
    return 1;
}
