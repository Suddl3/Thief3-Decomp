// Game/Unsorted_10B32200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B31BE0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B21350.h"

class Class_10AA82D0;

class Class_1098E330;

class Class_10B31BE0;

class Class_10B32160;

class Class_10B39530;

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();
};

// Class_1098E330 stands for the actor: the fields this function reads are the
// base's, at absolute offsets.
class Class_1098E330 : public Class_10B21350
{
};

class Class_10B32160 : public Class_10AA82D0
{
public:
    void FUN_10b32160(Class_1098E330* A);
};

class Class_10B32750 : public Class_10B32160
{
public:
    void FUN_10b32750(Class_1098E330* A);
    void FUN_10b31d30(Class_1098E330* A);

    char Unknown04[0x2C];
    bool Unknown30;
    bool Unknown31;
    char Unknown32;
    Class_10B31BE0 Unknown33;
};

// FUNCTION: 0x10B32750 ?FUN_10b32750@Class_10B32750@@QAEXPAVClass_1098E330@@@Z
void Class_10B32750::FUN_10b32750(Class_1098E330* A)
{
    Unknown30 = true;
    A->FUN_10b21350();
    FUN_10b32160(A);
    Unknown31 = true;
    Unknown33.FUN_10b31be0(A->Unknown440);
    ((Class_10B39530*)GetLinkedObject())->Play(0x6e, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    FUN_10b31d30(A);
}
