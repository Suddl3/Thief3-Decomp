// Game/Class_10E97CB4_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "AICore/AICoreClasses.h"
#include "Game/cIntArray.h"
#include "Game/Struct_10AA3520.h"
#include "Game/Struct_109E3CB0.h"
#include "Game/ULevel.h"

class Class_10C0E5E0_Param
{
public:
    char Unknown00[0x8];
    int Unknown08;
};

UClass* FUN_10901650();

extern Struct_10AA3520* DAT_10f35dec;

class Class_10E97CB4
{
public:
    virtual void FUN_10c0e5e0(int Message, int A, Class_10C0E5E0_Param* Param, int B);

    cIntArray Unknown04;
    cIntArray Unknown10;
};

// FUNCTION: 0x10C0E5E0 ?FUN_10c0e5e0@Class_10E97CB4@@UAEXHHPAVClass_10C0E5E0_Param@@H@Z
void Class_10E97CB4::FUN_10c0e5e0(int Message, int A, Class_10C0E5E0_Param* Param, int B)
{
    if (Message == 0x5a && Param && Param->Unknown08 == 0)
    {
        ULevel* Level = DAT_10f35dec->UnknownCC->Unknown00;
        if (Level)
        {
            for (int i = 0; i < Level->Unknown30; i++)
            {
                UObject* Actor = Level->Unknown2C[i];
                if (Actor)
                {
                    if (Actor->IsA(AAIContextVolume::StaticClass()))
                    {
                        cIntArray* List = &Unknown04;
                        int Index = List->Count;
                        List->SetCount(Index + 1);
                        List->Data[Index] = (int)Actor;
                    }
                    else if (Actor->IsA(FUN_10901650()))
                    {
                        int Item = (int)Actor;
                        Unknown10.FUN_10b9fa20(&Item);
                    }
                }
            }
        }
    }
}
