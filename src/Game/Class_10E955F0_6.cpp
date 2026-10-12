// Game/Class_10E955F0_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

extern const char DAT_10e47660[];

class FRotator
{
public:
    int Pitch;
    int Yaw;
    int Roll;
};

class FCoords
{
public:
    FRotator OrthoRotation() const;
};

class FString
{
public:
    FString(const char* In);
    ~FString();

    char Unknown00[0xc];
};

Class_10905A90_Member* GetAllocator();

void GetWorldCoordinatesForBone(int A, int B, int C);

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class cString
{
public:
    operator const char*() const
    {
        return Unknown00 ? Unknown00 : DAT_10e47660;
    }
    ~cString()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

class FName
{
public:
    cString FUN_10af9730() const;

    unsigned int Value;
};

class Class_10E955F0
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
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void FUN_10bdfe10(const FCoords& Coords, FRotator& Out);

    char Unknown04[0x44];
    int Unknown48;
    char Unknown4C[0x10];
    FName Unknown5C;
};

// FUNCTION: 0x10BDFE10 ?FUN_10bdfe10@Class_10E955F0@@UAEXABVFCoords@@AAVFRotator@@@Z
void Class_10E955F0::FUN_10bdfe10(const FCoords& Coords, FRotator& Out)
{
    FString Text(Unknown5C.FUN_10af9730());
    GetWorldCoordinatesForBone(Unknown48, (int)&Text, (int)&Coords);
    Out = Coords.OrthoRotation();
    Out.Roll = 0;
    Out.Pitch = 0;
}
