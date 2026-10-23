// Game/Unsorted_10AB6ED0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <stdio.h>
#include "Core/Core.h"
#include "Game/Class_10E6F3EC.h"
#include "Game/Config.h"

// The AI's stats: its first virtual answers with a difficulty level for a name.
class Class_10A174E0
{
public:
    virtual int Virtual0(int Kind);
};

// The AI's difficulty multipliers.
class Class_10FF667C
{
public:
    char Unknown00[0x98];
    float Unknown98;
    float Unknown9C;
    float UnknownA0;
    float UnknownA4;
    float UnknownA8;
    float UnknownAC;
};

extern Class_10A174E0* GetStats();

extern Class_10FF667C* DAT_10ff667c;

extern const char DAT_10e6f0e4[];

   // "dif_AISenses"
extern const char DAT_10e6f0d4[];

   // "dif_AICombat"
extern const char DAT_10e6f0cc[];

   // "Easy"
extern const char DAT_10e6f0c4[];

   // "Hard"
extern const char DAT_10e6f0bc[];

   // "Expert"
extern const char DAT_10e6f0a0[];

   // "Difficulty_AIVisual_Mult_%s"
extern const char DAT_10e6f094[];

   // "Difficulty"
extern const char DAT_10e6f078[];

   // "Difficulty_AIAudio_Mult_%s"
extern const char DAT_10e6f058[];

   // "Difficulty_AITactile_Mult_%s"
extern const char DAT_10e6f038[];

   // "Difficulty_AIHitPoints_Mult_%s"
extern const char DAT_10e6f014[];

   // "Difficulty_AICombatSpeed_Mult_%s"
extern const char DAT_10e6eff0[];

// FUNCTION: 0x10AB70B0 ?LoadDifficultyMultipliers@Class_10E6F3EC@@QAEXXZ
void Class_10E6F3EC::LoadDifficultyMultipliers()
{
    char Buffer[0x80];
    int Senses = GetStats()->Virtual0(FName(DAT_10e6f0e4, FNAME_Add).Value);
    int Combat = GetStats()->Virtual0(FName(DAT_10e6f0d4, FNAME_Add).Value);
    const char* Level;

    switch (Senses)
    {
    case 0: Level = DAT_10e6f0cc; break;    // Easy
    case 1: Level = "Normal"; break;
    case 2: Level = DAT_10e6f0c4; break;    // Hard
    case 3: Level = DAT_10e6f0bc; break;    // Expert
    default: Level = "Normal"; break;
    }
    sprintf(Buffer, DAT_10e6f0a0, Level);
    Config::Instance()->GetFloat(DAT_10e6f094, Buffer, &DAT_10ff667c->Unknown98, 0);
    sprintf(Buffer, DAT_10e6f078, Level);
    Config::Instance()->GetFloat(DAT_10e6f094, Buffer, &DAT_10ff667c->Unknown9C, 0);
    sprintf(Buffer, DAT_10e6f058, Level);
    Config::Instance()->GetFloat(DAT_10e6f094, Buffer, &DAT_10ff667c->UnknownA0, 0);

    switch (Combat)
    {
    case 0: Level = DAT_10e6f0cc; break;    // Easy
    case 1: Level = "Normal"; break;
    case 2: Level = DAT_10e6f0c4; break;    // Hard
    case 3: Level = DAT_10e6f0bc; break;    // Expert
    default: Level = "Normal"; break;
    }
    sprintf(Buffer, DAT_10e6f038, Level);
    Config::Instance()->GetFloat(DAT_10e6f094, Buffer, &DAT_10ff667c->UnknownA4, 0);
    sprintf(Buffer, DAT_10e6f014, Level);
    Config::Instance()->GetFloat(DAT_10e6f094, Buffer, &DAT_10ff667c->UnknownA8, 0);
    sprintf(Buffer, DAT_10e6eff0, Level);
    Config::Instance()->GetFloat(DAT_10e6f094, Buffer, &DAT_10ff667c->UnknownAC, 0);
}
