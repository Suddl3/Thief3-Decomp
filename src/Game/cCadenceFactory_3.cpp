// Game/cCadenceFactory_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C4B2A0.h"
#include "Game/Class_10C68070.h"
#include "Game/Class_10C662F0.h"

Class_10905A90_Member* GetAllocator();

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

Class_10C4B2A0* FUN_10c4c2d0();

class cResSound;

struct Struct_10C64E10;

Class_10C662F0* FUN_10c65090();

class Class_10E9BB4C_Arg;

// Copied whole from include/Game/cCadenceFactory.h: slot 0 is CreateSoundSchema, not Virtual0.
class cCadenceFactory
{
public:
    virtual Class_10C68070* CreateSoundSchema(int A);
    virtual void Release(Class_10E9BB4C_Arg* Param);
    virtual void Virtual2();
    virtual bool FUN_10c47e70(int A, int B, int C);

    cCadenceFactory* Initialize(bool A);

    bool m_bUseLoader;
    char Pad05[0x3];
    union
    {
        int MaxLoadedSchemas;
        int Unknown08;
    };
    int m_NumLoadedSchemas;
};

// FUNCTION: 0x10C4CBD0 ?CreateSoundSchema@cCadenceFactory@@UAEPAVClass_10C68070@@H@Z
Class_10C68070* cCadenceFactory::CreateSoundSchema(int A)
{
    if (Unknown08 != -1 && m_NumLoadedSchemas >= Unknown08)
    {
        if (!FUN_10c4c2d0()->FUN_10c48d90())
            return 0;
    }
    GetAllocator()->Virtual8(0, 0);
    Class_10C68070* Obj = new(0, 0, 0, 0, 0) Class_10C68070;
    GetAllocator()->Virtual9();
    Obj->Virtual6(A);
    if (m_bUseLoader)
    {
        if (!FUN_10c65090()->FUN_10c66230(A, Obj))
        {
            delete Obj;
            Obj = 0;
            m_NumLoadedSchemas--;
        }
    }
    m_NumLoadedSchemas++;
    return Obj;
}
