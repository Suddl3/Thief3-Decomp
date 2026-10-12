// Game/Unsorted_10BC20B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "AICore/AICoreClasses.h"
#include "Game/Class_10BBF5D0.h"
#include "Game/Class_10C25770.h"
#include "Game/Class_10BC20B0.h"

extern float DAT_10ff6698;

double FUN_10c00670();

class Class_10BC20B0_Field00
{
public:
    Class_10C25770 Unknown00;
    char Pad0C[0xC];
    Class_10C25770 Unknown18;
    Class_10C25770 Unknown24;
};

// FUNCTION: 0x10BC20B0 ?FUN_10bc20b0@Class_10bc20b0@@QAEXPAVAAIPathPoint@@H@Z
void Class_10BC20B0::FUN_10bc20b0(AAIPathPoint* A, int B)
{
    if ((int)A != B && A->IsA(AAIPathPoint::StaticClass()) && ((AAIPathPoint*)B)->IsA(AAIPathPoint::StaticClass()))
    {
        double Now = DAT_10ff6698 + 0.25f;
        if (!(FUN_10c00670() < Now))
        {
            DAT_10ff6698 = (float)FUN_10c00670();
            Class_10BC20B0_Field00* Owner = (Class_10BC20B0_Field00*)Field00;
            int K1 = B;
            int K2 = B;
            int K3 = B;
            if (Owner->Unknown00.IndexOf(&K1) == -1 && Owner->Unknown18.IndexOf(&K2) == -1 && Owner->Unknown24.IndexOf(&K3) == -1)
                FUN_10bc0f50(A, B);
            else
                FUN_10bc0150(A, (AAIPathPoint*)B);
        }
    }
}
