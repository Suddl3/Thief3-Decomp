// Game/cTaggedAnimSeq_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"
#include "Game/Class_10E65558.h"

class Class_10A1F150;

class cTaggedAnimSeq : public Class_10E65558
{
public:
    virtual ~cTaggedAnimSeq();
    virtual Class_1090A780 GetName();
    virtual int FUN_10a2fd90(cTaggedAnimSeq* Other);
    virtual void Virtual3();
    virtual bool SetName(Class_10A1F150* Item);
    virtual void Play(void* A);

    cTaggedAnimSeq();

    int* m_Name;
};

bool FUN_1090f010(const int* A, const int* B) throw();

// FUNCTION: 0x10A2FD90 ?FUN_10a2fd90@cTaggedAnimSeq@@UAEHPAV1@@Z
int cTaggedAnimSeq::FUN_10a2fd90(cTaggedAnimSeq* Other)
{
    return FUN_1090f010(
        (const int*)&static_cast<const Class_1090A780&>(Other->cTaggedAnimSeq::GetName()),
        (const int*)&static_cast<const Class_1090A780&>(cTaggedAnimSeq::GetName()));
}
