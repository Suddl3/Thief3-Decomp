// Game/Class_10E97B00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"
#include "Game/Class_10E97B00.h"
#include "Game/cString.h"
#include "Game/Class_10C01990.h"
#include "Game/Class_10C01CE0.h"

void* FUN_10b232e0(void* A, void* B);

// FUNCTION: 0x10C013A0 ??0Class_10E97B00@@QAE@PBD@Z
Class_10E97B00::Class_10E97B00(const char* Name) : m_Name(Name)
{
}

// FUNCTION: 0x10C018C0 ??0Class_10E97B00@@QAE@ABVClass_1090A780@@@Z
Class_10E97B00::Class_10E97B00(const Class_1090A780& Name) : m_Name(Name)
{
}

// FUNCTION: 0x10C018E0 ??0Class_10E97B00@@QAE@ABV0@@Z
Class_10E97B00::Class_10E97B00(const Class_10E97B00& Other) : m_Name(Other.m_Name)
{
}

// FUNCTION: 0x10C01FF0 ?Serialize@Class_10E97B00@@UAEXPAX@Z
void Class_10E97B00::Serialize(void* A)
{
    FUN_10b232e0(A, &m_Name);
}
