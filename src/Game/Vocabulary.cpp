// Game/Vocabulary.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Vocabulary.h"

extern bool DAT_10f2c759;

extern unsigned int DAT_10efef9c;

extern unsigned int DAT_10efefa0;

// FUNCTION: 0x1092FF00 ?FUN_1092ff00@Vocabulary@@QAEXHH@Z
void Vocabulary::FUN_1092ff00(int A, int B)
{
    if (!DAT_10f2c759 && DAT_10efef9c < DAT_10efefa0 && FUN_10925130(6))
    {
        for (int i = 0; i < m_ItemCount; i++)
            FUN_1092fae0(A, 6, m_Items[i]);
        FUN_10925190(6);
    }
}
