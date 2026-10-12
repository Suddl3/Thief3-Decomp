// Game/Unsorted_1092F130.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10928760.h"
#include "Game/Class_1092F130.h"
#include "Game/Vocabulary.h"
#include "Game/cIntArray.h"

Class_10905A90_Member* GetAllocator();

extern cIntArray DAT_10f31b9c;

extern Class_1092F130** DAT_10f31ba4;

// FUNCTION: 0x1092F130 ?FUN_1092f130@Class_1092F130@@QAEXXZ
void Class_1092F130::FUN_1092f130()
{
    for (int i = 0; i < m_ChildCount; i++)
        m_Children[i]->FUN_1092f130();
    GetAllocator()->Virtual8(0, 0);
    int Index = DAT_10f31b9c.Unknown00;
    DAT_10f31b9c.SetCount(DAT_10f31b9c.Unknown00 + 1);
    DAT_10f31ba4[Index] = this;
    GetAllocator()->Virtual9();
}

// FUNCTION: 0x1092F830 ??0Vocabulary@@QAE@XZ
Vocabulary::Vocabulary()
{
}

// FUNCTION: 0x10930630 ??_GVocabulary@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x1092F830's definition in this unit.
