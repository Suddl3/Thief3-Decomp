// Game/Unsorted_10BC49B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BAA9D0.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"
#include "Game/Struct_10AA3520.h"

extern float DAT_10eafbdc;

extern Struct_10AA3520* DAT_10f35dec;

struct Class_10BFC190
{
};

struct Class_10BFD210
{
};

struct Struct_10A36570
{
    float Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class Class_10A36450
{
public:
    Struct_10A36570* GetVulnerability(Struct_10A36570* Out, int A, int B);
};

Class_10A36450* FUN_10a36710();

class Class_10BE3FF0
{
public:
    virtual void Virtual0(), Virtual1(), Virtual2();
    virtual int Virtual3();
};

class Class_10BC9D40
{
public:
    virtual void Virtual0(), Virtual1(), Virtual2();
    virtual int Virtual3();
};

// A copy of include/Game/Class_10BB8300.h
class Class_10BB8300
{
public:
    bool FUN_10bb8c00();
    void ClearEntry();
    bool IsExpired();
    void RollInterval();

    char Unknown00[8];
    Class_10C7D570* m_Owner;
    char Unknown0C[0x278];
    int m_Entry;
};

// A copy of include/Game/Class_10BB89D0.h: it derives from Class_10BB8300.
class Class_10BB89D0 : public Class_10BB8300
{
public:
    Class_10BE3FF0* FUN_10bb89d0();
    void FUN_10bbc0f0(int A);

    char Unknown00[0x30];
    Class_10BFC190 Unknown30;
    char Pad50[0x2ec];
    float Unknown33C;
    char Pad340[0x20];
};

// A copy of include/Game/Class_10BB8A30.h: it derives from Class_10BB89D0.
class Class_10BB8A30 : public Class_10BB89D0
{
public:
    Class_10BC9D40* GetCurrent();
    void FUN_10bb8b50(int A);

    char Unknown00[8];
    Class_10C7D570* Unknown08;
    char Unknown0C[0x24];
    Class_10BFD210 Unknown30;
    char Pad31[3];
};

struct Struct_10BC49B0_Param
{
    char Unknown00[0x1C];
    char Unknown1C;
};

class Class_10E8BE68
{
public:
    virtual void Virtual0(), Virtual1(), Virtual2(), Virtual3(), Virtual4(), Virtual5(), Virtual6(), Virtual7();
    virtual void Virtual8(), Virtual9(), Virtual10(), Virtual11(), Virtual12(), Virtual13(), Virtual14(), Virtual15();
    virtual void Virtual16(), Virtual17(), Virtual18(), Virtual19(), Virtual20(), Virtual21(), Virtual22(), Virtual23();
    virtual void Virtual24(), Virtual25(), Virtual26(), Virtual27(), Virtual28(), Virtual29(), Virtual30(), Virtual31();
    virtual void Virtual32(), Virtual33(), Virtual34(), Virtual35(), Virtual36(), Virtual37(), Virtual38(), Virtual39();
    virtual void Virtual40(), Virtual41(), Virtual42(), Virtual43(), Virtual44(), Virtual45(), Virtual46(), Virtual47();
    virtual void Virtual48(), Virtual49(), Virtual50(), Virtual51(), Virtual52(), Virtual53(), Virtual54(), Virtual55();
    virtual bool FUN_10bc49b0(Struct_10BC49B0_Param* A);

    Class_10BB8A30* Unknown04;
};

// FUNCTION: 0x10BC49B0 ?FUN_10bc49b0@Class_10E8BE68@@UAE_NPAUStruct_10BC49B0_Param@@@Z
bool Class_10E8BE68::FUN_10bc49b0(Struct_10BC49B0_Param* A)
{
    if (A->Unknown1C == 0x18)
    {
        Struct_10A36570 Buf;
        FUN_10a36710()->GetVulnerability(&Buf, (int)Unknown04->m_Owner->FUN_10c7d570(), 0x18);
        if (Buf.Unknown00 != DAT_10eafbdc)
        {
            Class_10BBDB40* Entry = Unknown04->m_Owner->FUN_10dbd510(0x2000638);
            int Flag = Entry->FUN_10bbdb80();
            Class_10BE3FF0* Obj = Unknown04->FUN_10bb89d0();
            switch (Flag)
            {
            case 0:
                if (Obj)
                {
                    if (Obj->Virtual3() == 2 || Obj->Virtual3() == 3 || Obj->Virtual3() == 4)
                        return false;
                }
                break;
            case 1:
                if (Obj)
                {
                    if (Obj->Virtual3() == 3 || Obj->Virtual3() == 4)
                        return false;
                }
                break;
            case 2:
                if (Obj)
                {
                    if (Obj->Virtual3() == 4)
                        return false;
                }
                break;
            }

            if (Unknown04->FUN_10bb8c00())
                return false;

            Class_10BAA9D0* Owner = (Class_10BAA9D0*)Unknown04->m_Owner;
            if (Owner->FUN_10baa9d0(DAT_10f35dec->Unknown08, 0.0f, true))
                return false;

            Class_10BC9D40* Current = Unknown04->GetCurrent();
            if (Current)
            {
                int State = Current->Virtual3();
                if (State == 8)
                    return false;
                if (State == 0x13)
                    return false;
                if (State == 0x25)
                    return false;
            }
            return true;
        }
    }
    return false;
}
