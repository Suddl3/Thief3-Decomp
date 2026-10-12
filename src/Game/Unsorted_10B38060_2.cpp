// Game/Unsorted_10B38060_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B38060.h"

Class_10905A90_Member* GetAllocator();

extern const char DAT_10e47660[];

int FUN_10af3690(const char* A, const char* B);

class FString
{
public:
    FString(const char* In);
    ~FString();
    const char* FUN_10af7f80();

    char Unknown00[0xc];
};

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
// This copy has no base and the destructor's body, which computes Unknown00 - 4 before GetAllocator().
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

class Class_10B38060_Arg2
{
public:
    char Unknown00[4];
    FName Unknown04;
};

class Class_10B38060_Unknown04
{
public:
    char Pad00[0x4D0];
    unsigned int Unknown4D0 : 1;
};

// FUNCTION: 0x10B38060 ?FUN_10b38060@Class_10B38060@@QAEXHPAVClass_10B38060_Arg2@@PAH@Z
void Class_10B38060::FUN_10b38060(int A, Class_10B38060_Arg2* B, int* C)
{
    FString Text(B->Unknown04.FUN_10af9730());
    if (FUN_10af3690(Text.FUN_10af7f80(), "CS_PlayerIsIntruding") == 0)
        Unknown04->Unknown4D0 = (*C == 0);
}
