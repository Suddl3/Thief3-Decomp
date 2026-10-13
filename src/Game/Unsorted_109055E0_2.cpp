// Game/Unsorted_109055E0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10AF4BB0.h"

inline void* operator new(unsigned int Size, FString* Mem) { return Mem; }

class Class_10905760 : public Class_10AF4BB0
{
public:
    void Empty(int Slack);
    int FUN_10905680(int A);
    Class_10905760& FUN_109056f0(const Class_10905760& Other);
};

// FUNCTION: 0x109056F0 ?FUN_109056f0@Class_10905760@@QAEAAV1@ABV1@@Z
Class_10905760& Class_10905760::FUN_109056f0(const Class_10905760& Other)
{
    if (this != &Other)
    {
        Empty(Other.Unknown04);
        for (int i = 0; i < Other.Unknown04; i++)
        {
            FString* Dest = (FString*)Unknown00 + FUN_10905680(1);
            new (Dest) FString(((FString*)Other.Unknown00)[i]);
        }
    }
    return *this;
}
