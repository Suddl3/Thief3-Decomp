// Game/Unsorted_10A36710.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A36450.h"

class Class_10AF8250 : public FString
{
};

struct Struct_10AA3520
{
    char Unknown00[8];
    int Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

extern FString DAT_10f39ff4;

extern int DAT_10f39fe4;

extern FString DAT_10f3a000;

extern int DAT_10f39fe8;

extern Class_10AF8250 DAT_10f3a00c;

extern int DAT_10f39fec;

extern int DAT_10f39ff0;

Class_10905A90_Member* GetAllocator();

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern Class_10A36450* DAT_10f39fd8;

// FUNCTION: 0x10A36710 ?FUN_10a36710@@YAPAVClass_10A36450@@XZ
Class_10A36450* FUN_10a36710()
{
    if (!DAT_10f39fd8)
    {
        GetAllocator()->Virtual8(0, 0);
        DAT_10f39fd8 = new(0, 0, 0, 0, 0) Class_10A36450;
        GetAllocator()->Virtual9();
    }
    return DAT_10f39fd8;
}

// FUNCTION: 0x10A36B00 ?FUN_10a36b00@@YAXHPAPAX0HHVFString@@H@Z
void FUN_10a36b00(int A, void** B, void** C, int D, int E, Class_10AF8250 F, int G)
{
    if (A == DAT_10f35dec->Unknown08)
    {
        DAT_10f39fe4 = A;
        DAT_10f39ff4 = *(FString*)B;
        DAT_10f3a000 = *(FString*)C;
        DAT_10f39fe8 = E;
        DAT_10f3a00c = F;
        DAT_10f39fec = G;
        DAT_10f39ff0 = D;
    }
}
