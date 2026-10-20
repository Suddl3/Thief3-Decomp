// Game/Class_10940180.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10940180.h"
#include "Game/Struct_10940180.h"

void FUN_109573a0(char* Unknown, FVector* Start, FVector* Direction);

void __stdcall FUN_10d690fe(char* Unknown, float A, float B, float C, float D);

// FUNCTION: 0x1093FF60 ?FUN_1093ff60@Class_10940180@@QAEXPAUStruct_10940180@@@Z
void Class_10940180::FUN_1093ff60(Struct_10940180* P)
{
    FVector Start;
    Start.X = P->Start.X;
    Start.Y = P->Start.Y;
    Start.Z = P->Start.Z;
    FVector Direction;
    Direction.X = -P->Direction.X;
    Direction.Y = -P->Direction.Y;
    Direction.Z = -P->Direction.Z;
    float Radius = P->Radius + P->Radius;
    FUN_109573a0(P->Unknown144, &Start, &Direction);
    FUN_10d690fe(&P->Unknown184, Radius, Radius, 1.0f, 50.0f);
}
