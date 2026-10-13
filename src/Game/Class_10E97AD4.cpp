// Game/Class_10E97AD4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBC90.h"
#include "Game/Class_10BFC190.h"
#include "Game/Class_10BFD210.h"
#include "Game/Class_10BFF240.h"
#include "Game/Class_10C16580.h"
#include "Game/Class_10E97AD4.h"
#include "Game/cPathPointList.h"
#include "Game/Class_10BFF600.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10DBBAE0.h"
#include "Game/FArchive.h"
#include "Game/Class_10BAA9D0.h"

// FUNCTION: 0x10BFF210 ??0Class_10E97AD4@@QAE@HH@Z
Class_10E97AD4::Class_10E97AD4(int A, int B) : Unknown04(A), Unknown08(B)
{
    Unknown10 = false;
}

// FUNCTION: 0x10BFF300 ?Virtual0@Class_10E97AD4@@UAEXAAVFArchive@@@Z
void Class_10E97AD4::Virtual0(FArchive& Ar)
{
    Unknown08.Virtual0(Ar);
    Ar.Serialize(&Unknown10, 1);
}
