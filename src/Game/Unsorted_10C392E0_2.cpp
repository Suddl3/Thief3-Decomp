// Game/Unsorted_10C392E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C0A9A0.h"
#include "Game/Class_10C80360.h"
#include "Game/Class_10C20BC0.h"
#include "Game/Class_10C38EB0_Member.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10943600.h"
#include "Game/Item_10943600.h"
#include "Game/Struct_10C05A80.h"
#include "Game/Struct_10C37D30.h"
#include "Game/Struct_10C39220.h"
#include "Game/Class_10BA9EC0.h"
#include "Game/Class_10BA9EE0.h"
#include "Game/Class_10BB9FC0.h"
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BFF460.h"
#include "Game/Class_10DC1750.h"
#include "Game/Class_10DC1750_Result.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10C399C0.h"
#include "Game/Class_10C39E90.h"
#include "Game/Class_10C38E40.h"
#include "Game/Class_10C39220.h"

class Class_10FF667C
{
public:
    char Unknown00[0x1C];
    Class_10C0A9A0* Unknown1C;
};

extern Class_10FF667C* DAT_10ff667c;

class Class_10C39C90_Result
{
public:
    char Unknown00[0x2C];
    Item_10943600 Unknown2C;
};

extern float DAT_10e49684;

class Class_10C39D90_Result12;

class Class_10C39D90_Result39;

class Class_10C39D90_Unknown48
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
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual Class_10C39D90_Result39* Virtual39();
};

class Class_10C39D90_Result39
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
    virtual Class_10C39D90_Result12* Virtual12();
};

class Class_10C39D90_Result12
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
    virtual Struct_10C05A80* Virtual21();
};

void FUN_10c37cb0(void* A, Struct_10C05A80* B, int C, int D, int E, bool F);

bool FUN_10c37d30(void* A, int B, int C, float D, float E, int F, int G, Struct_10C37D30 H);

float DistanceSquared3D(const Struct_10C05A80* A, const Struct_10C05A80* B);

class AAIPawn;

class Class_10B39870;

class Class_10BAC050 : public Class_10C7D570
{
public:
    bool FUN_10bac050(int A);
};

class Class_10B9BCA0_Unknown118
{
public:
    char Unknown00[8];
    Class_10AA82D0* Unknown08;
};

class Class_10B9BCA0
{
public:
    char Unknown00[0x118];
    Class_10B9BCA0_Unknown118* Unknown118;
};

Class_10B9BCA0* GetAIPawnController(AAIPawn* A);

class Class_10C39E90_Unknown48
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
    virtual void* Virtual34();
};

inline int FindIndex(const Struct_10DC1750_Result_1C& List, int Item)
{
    for (int i = 0; i < List.Count; i++)
    {
        if (List.Items[i] == Item)
            return i;
    }
    return -1;
}

// FUNCTION: 0x10C399C0 ?FindTarget@Class_10C399C0@@QAEHXZ
int Class_10C399C0::FindTarget()
{
    int Start = m_PathIndex - 1;
    for (int i = Start > 0 ? Start : 0; i < m_ItemCount; i++)
    {
        Class_10C80360* Item = m_Items[i];
        if (Item->FUN_10c80360() & 8)
        {
            int Result = DAT_10ff667c->Unknown1C->FUN_10c099a0((int)Item);
            if (Result != 0)
                return CheckInRange(Result);
        }
    }
    return 0;
}

// FUNCTION: 0x10C39C90 ?Advance@Class_10C38E40@@QAEXXZ
void Class_10C38E40::Advance()
{
    Class_10943600* List = &m_Output;
    List->Unknown00 = 0;
    Class_10C20BC0* Pending = Unknown0B4;
    Unknown0AC = 0;
    if (Pending)
        Pending->FUN_10c20bc0();
    if (m_ObjectCount > ++m_Index)
    {
        Class_10C80360* Obj = m_Objects[m_Index];
        if (Obj->FUN_10c80360() & 8)
            Rebind((int)Obj);
        else if (m_ObjectCount > m_Index + 1)
        {
            Obj = m_Objects[m_Index + 1];
            if (Obj->FUN_10c80360() & 8)
                Rebind((int)Obj);
        }
    }
    if (m_Index < m_ItemCount)
    {
        Unknown3C = ((Class_10C39C90_Result*)Unknown48->Virtual34()->FUN_10c7d570())->Unknown2C;
        Item_10943600* Src = &m_Items[m_Index];
        int Count = List->Unknown00;
        List->FUN_10da4f50(Count + 1);
        List->Unknown08[Count] = *Src;
    }
}

// FUNCTION: 0x10C39D90 ?MoveToCurrent@Class_10C39220@@QAEXXZ
void Class_10C39220::MoveToCurrent()
{
    Struct_10C05A80 Pos;
    Class_10C39D90_Result39* Obj = Unknown48->Virtual39();
    if (Obj != 0)
    {
        Class_10C39D90_Result12* Sub = Obj->Virtual12();
        if (Sub != 0 && GetCurrent((int)&Pos) == 1)
        {
            Struct_10C05A80 Copy = *Sub->Virtual21();
            if (DistanceSquared3D(&Pos, &Copy) < DAT_10e49684)
            {
                return;
            }
        }
    }
    if (!GetCurrent((int)&Pos))
    {
        FUN_10c37d30(Unknown48, Unknown84, 1, -1.0f, 1.0f, 1, 1, Struct_10C37D30());
        return;
    }

    const bool& Flag = Unknown68 || FUN_10c38810();
    FUN_10c37cb0(Unknown48, &Pos, 0x15, Unknown80, 1, Flag);
}

// FUNCTION: 0x10C39E90 ?FUN_10c39e90@Class_10C39E90@@QAE_NPAH@Z
bool Class_10C39E90::FUN_10c39e90(int* Out)
{
    if (FindIndex(((Class_10DC1750*)Unknown48->Virtual34())->FUN_10dc1750()->Unknown1C, 0x11) != -1)
        return false;
    int Id = ((Class_10BA9EE0*)Unknown48->Virtual34())->FUN_10ba9ee0();
    *Out = Id;
    if (Id != 0)
    {
        Class_10BAC050* Check = (Class_10BAC050*)Unknown48->Virtual34();
        if (!Check->FUN_10bac050(*Out))
            return true;
    }
    Class_10B9BCA0* Obj = GetAIPawnController((AAIPawn*)((Class_10C7D570*)Unknown48->Virtual34())->FUN_10c7d570());
    Class_10AA82D0* Owner = Obj && Obj->Unknown118 ? Obj->Unknown118->Unknown08 : 0;
    Class_10BFF460* Item = ((Class_10BBB410*)Owner->GetLinkedObject())->GetCurrent();
    if (Item && Item->FUN_10bff2a0() && (int)Item->FUN_10bff2a0() == *Out && Item->FUN_10bff330())
        return true;
    return false;
}
