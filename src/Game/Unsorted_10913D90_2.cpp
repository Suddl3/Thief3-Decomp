// Game/Unsorted_10913D90_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_109140C0.h"
#include "Game/Class_10914D60.h"

// FUNCTION: 0x109140C0 ?DispatchToHandlers@Class_109140C0@@QAEXHAAVcString@@H@Z
void Class_109140C0::DispatchToHandlers(int A, cString& B, int C)
{
    for (int i = m_HandlerCount - 1; i >= 0; i--)
    {
        m_Handlers[i]->Dispatch(A, B, C);
        if (B.Unknown00 && ((int*)B.Unknown00)[-1])
            break;
    }
}
