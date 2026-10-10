// Game/Unsorted_1093F180.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct FVector
{
    float X;
    float Y;
    float Z;
};

struct Struct_10940180
{
    char Unknown00[0x24];
    FVector Unknown24;
    char Unknown30[4];
    FVector Unknown34;
    char Unknown40[0x38];
    float Unknown78;
    char Unknown7C[0xC8];
    char Unknown144[0x40];
    char Unknown184;
};

void FUN_109573a0(char* Unknown, FVector* Start, FVector* Direction);

void __stdcall FUN_10d690fe(char* Unknown, float A, float B, float C, float D);

class Class_10940180
{
public:
    void FUN_1093ff60(Struct_10940180* P);
};

// FUNCTION: 0x1093FF60 ?FUN_1093ff60@Class_10940180@@QAEXPAUStruct_10940180@@@Z
void Class_10940180::FUN_1093ff60(Struct_10940180* P)
{
    FVector Start;
    Start.X = P->Unknown34.X;
    Start.Y = P->Unknown34.Y;
    Start.Z = P->Unknown34.Z;
    FVector Direction;
    Direction.X = -P->Unknown24.X;
    Direction.Y = -P->Unknown24.Y;
    Direction.Z = -P->Unknown24.Z;
    float Radius = P->Unknown78 + P->Unknown78;
    FUN_109573a0(P->Unknown144, &Start, &Direction);
    FUN_10d690fe(&P->Unknown184, Radius, Radius, 1.0f, 50.0f);
}
