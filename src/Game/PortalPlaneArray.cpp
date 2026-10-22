// Game/PortalPlaneArray.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

struct Struct_10920AE0_Vector { float X,Y,Z; };

struct Struct_10920AE0_Plane { Struct_10920AE0_Vector Normal; float W; };

Class_10905A90_Member* GetAllocator();

class PortalPlaneArray {
public:
    void FUN_1091f420(int NewCount);
    int Count,CapacityBytes;
    Struct_10920AE0_Plane* Data;
};

// FUNCTION: 0x1091F420 ?FUN_1091f420@PortalPlaneArray@@QAEXH@Z
void PortalPlaneArray::FUN_1091f420(int NewCount)
{
    int Capacity = !Data ? 0 : CapacityBytes / sizeof(Struct_10920AE0_Plane);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~3) + 4;
        Data = (Struct_10920AE0_Plane*)GetAllocator()->Virtual3(Data, NewCapacity * sizeof(Struct_10920AE0_Plane), 0, 0, 0, 0);
        CapacityBytes = NewCapacity * sizeof(Struct_10920AE0_Plane);
    }
    else if (NewCount <= Capacity - 4)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Data);
            Data = 0;
            CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~3) + 4;
            Data = (Struct_10920AE0_Plane*)GetAllocator()->Virtual3(Data, NewCapacity * sizeof(Struct_10920AE0_Plane), 0, 0, 0, 0);
            CapacityBytes = NewCapacity * sizeof(Struct_10920AE0_Plane);
        }
    }
    GetAllocator()->Virtual9();
    Count = NewCount;
}
