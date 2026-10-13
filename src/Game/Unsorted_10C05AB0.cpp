// Game/Unsorted_10C05AB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/FCoords.h"
#include "Game/cLineSegment.h"

extern FCoords DAT_10f46de8;

bool IsNearlyEqual(float A, float B, float C);

struct Struct_10D38640
{
    int Unknown00;
    char Unknown04[4];
    int* Unknown08;
};

int FUN_10c05880(int* A, int* B, int C, float D);

// FUNCTION: 0x10C05AB0 ?FUN_10c05ab0@@YADPAUStruct_10D38640@@HM@Z
char FUN_10c05ab0(Struct_10D38640* Table, int B, float C)
{
    int Count = Table->Unknown00;
    if (Count < 3)
        return 0;
    int First = FUN_10c05880(Table->Unknown08 + (Count - 1) * 3, Table->Unknown08, B, C);
    int i = 0;
    if (0 < Count)
    {
        int* Items = Table->Unknown08;
        int Prev = (Count - 1) * 3;
        int Cur = 0;
        do
        {
            int R = FUN_10c05880(Items + Prev, Items + Cur, B, C);
            if (R != First && R != 0)
            {
                if (First != 0)
                    return 0;
                First = R;
            }
            i++;
            Prev = Cur;
            Cur += 3;
        } while (i < Count);
    }
    return 1;
}

// FUNCTION: 0x10C05BC0 ?FUN_10c05bc0@@YAMHHHM@Z
float FUN_10c05bc0(int A, int B, int Rot, float Distance)
{
    FCoords Coords = FCoords(DAT_10f46de8).FUN_10961af0(*(const FRotator*)Rot);
    FVector Dir = Coords.XAxis;
    Dir.X *= Distance;
    Dir.Y *= Distance;
    Dir.Z = Distance * 0.0f;
    Dir.Normalize();
    const FVector* PA = (const FVector*)A;
    const FVector* PB = (const FVector*)B;
    FVector Delta(PA->X - PB->X, PA->Y - PB->Y, 0.0f);
    Delta.Normalize();
    return Delta.X * Dir.Y - Delta.Y * Dir.X;
}

// FUNCTION: 0x10C05E30 ??0cLineSegment@@QAE@HH@Z
cLineSegment::cLineSegment(int A, int B)
{
    const FVector* First = (const FVector*)A;
    const FVector* Second = (const FVector*)B;
    if (First->X < Second->Y)
    {
        Unknown0C = *First;
        Unknown18 = *Second;
    }
    else if (!(First->X > First->X) && First->Y <= Second->Y)
    {
        Unknown0C = *First;
        Unknown18 = *Second;
    }
    else
    {
        Unknown0C = *Second;
        Unknown18 = *First;
    }
    float DY = Unknown18.Y - Unknown0C.Y;
    m_DeltaY = DY;
    float DX = Unknown18.X - Unknown0C.X;
    m_DeltaX = DX;
    if (!IsNearlyEqual(DX, 0.0f, 3.4028235e+38f))
        m_Slope = DY / DX;
    else
        m_Slope = 3.4028235e+38f;
}
