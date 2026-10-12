// Game/Vocabulary_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10928760.h"
#include "Game/Vocabulary.h"

extern bool DAT_10f2c754;

extern int DAT_10f34130;

extern int DAT_10f34134;

extern int DAT_10f34138;

// FUNCTION: 0x1092FF60 ?FUN_1092ff60@Vocabulary@@QAEXHH@Z
void Vocabulary::FUN_1092ff60(int A, int B)
{
    if (!DAT_10f2c754 && FUN_10925130(1))
    {
        FUN_1092fcb0(DAT_10f34130, DAT_10f34134, DAT_10f34138);
        for (int i = 0; i < m_ItemCount; i++)
            FUN_1092fae0(A, 1, m_Items[i]);
        FUN_10925190(1);
    }
}
