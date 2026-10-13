// Game/MovementController.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BF70E0.h"
#include "Game/Class_10BFB8C0.h"
#include "Game/Class_10BFB910.h"
#include "Game/Class_10E6D8F0.h"
#include "Game/Class_10E9799C.h"
#include "Game/Class_10E979DC_Primary.h"
#include "Game/Struct_10FF66B0.h"

class Class_10E5B578
{
public:
    virtual void FUN_10bf8c90(int Code, int A, int B, int C) = 0;
};

class MovementController : public Class_10E979DC_Primary, public Class_10E9799C, public Class_10E5B578
{
public:
    void FUN_10bf8b40(int A, int B, int C);
    virtual void FUN_10bf8c90(int Code, int A, int B, int C);
};

// FUNCTION: 0x10BF8C90 ?FUN_10bf8c90@MovementController@@UAEXHHHH@Z
void MovementController::FUN_10bf8c90(int Code, int A, int B, int C)
{
    if (Code == 4)
        FUN_10bf8b40(A, B, C);
}
