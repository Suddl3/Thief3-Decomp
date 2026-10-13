// Game/Unsorted_10BBB8D0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10AAF570.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10E9925C.h"
#include "Game/cString.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BAA580.h"
#include "Game/Class_10E992D4.h"

class Class_109BC840;

class Class_10BAA580;

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10BBB440
{
public:
    int Find(int Key);

    char Pad00[0x8];
    Class_10BAA580* Unknown08;
    Class_10AAF570* Unknown0C;
    char Pad10[0x4];
    cIntArray Unknown14;
};

// FUNCTION: 0x10BBC190 ?FindOrCreate@@YAHPAVClass_10BBB440@@HPAVcString@@@Z
int FindOrCreate(Class_10BBB440* Self, int Key, cString* Name)
{
    int Found = Self->Find(Key);
    if (Found)
        return Found;
    int Info;
    Class_10BAA580* Table = Self->Unknown08;
    Table->FUN_10babab0(&Info, Name);
    if (Info == 0)
        return 0;
    GetAllocator()->Virtual8(0, 0);
    Class_10E992D4* Obj = new(0, 0, 0, 0, 0) Class_10E992D4(Self->Unknown0C->GetLinkType(), Self->Unknown08, &Info, Key);
    GetAllocator()->Virtual9();
    int Index = Self->Unknown14.Count;
    cIntArray* List = &Self->Unknown14;
    List->SetCount(Index + 1);
    List->Data[Index] = (int)Obj;
    return (int)Obj;
}
