// Game/Unsorted_10BBE530.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Engine/EngineClasses.h"
#include "Game/Struct_10AA3520.h"

extern Struct_10AA3520* DAT_10f35dec;

class Class_10B21560 : public UObject
{
public:
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
    virtual int Virtual34();
};

class Class_10BBE5B0_Param
{
public:
    char Unknown00[0x2C];
    Class_10B21560** Unknown2C;
    int Unknown30;
};

// FUNCTION: 0x10BBE5B0 ?FUN_10bbe5b0@@YAPAVClass_10B21560@@PAVClass_10BBE5B0_Param@@@Z
Class_10B21560* FUN_10bbe5b0(Class_10BBE5B0_Param* Param)
{
    Class_10B21560* Result = DAT_10f35dec->Unknown08;
    if (!Result)
    {
        for (int i = 0; i < Param->Unknown30; i++)
        {
            Class_10B21560* Obj = Param->Unknown2C[i];
            if (Obj && Obj->IsA(APawn::StaticClass()) && Obj->Virtual34())
            {
                Result = Obj;
                break;
            }
        }
        return Result;
    }
    return Result;
}
