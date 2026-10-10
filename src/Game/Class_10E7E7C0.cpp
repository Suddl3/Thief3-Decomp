// Game/Class_10E7E7C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B39530.h"
#include "Game/Object_10B4BC30.h"
#include "Game/Class_10E7E7C0.h"

class Class_10B39670
{
public:
    bool FUN_10b39670(int A);
};

// FUNCTION: 0x10B4BC50 ?FUN_10b4bc50@Class_10E7E7C0@@UAEXPAVObject_10B4BC30@@@Z
void Class_10E7E7C0::FUN_10b4bc50(Object_10B4BC30* A)
{
    if (!((Class_10B39670*)FUN_10aa82d0())->FUN_10b39670(A->Unknown344))
        ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(A->Unknown344, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    Virtual4();
}
