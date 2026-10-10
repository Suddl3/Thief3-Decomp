// Game/Unsorted_10A4B790.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10E67938.h"
#include "Game/Class_10E77578.h"

class ULinkDataObject;

class UUserLinkDataObject
{
    DECLARE_CLASS(UUserLinkDataObject, ULinkDataObject, 0x0, Engine)
};

Class_10E77578* FUN_10b0b2b0();

// FUNCTION: 0x10A4C050 ?Virtual3@Class_10E67938@@UAEXHH@Z
void Class_10E67938::Virtual3(int A, int B)
{
    Virtual4(0x2f186b8, A);
    FUN_10b0b2b0()->Virtual1(A, B, UUserLinkDataObject::StaticClass(), 0x2f186b8);
}
