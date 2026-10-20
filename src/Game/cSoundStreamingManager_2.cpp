// Game/cSoundStreamingManager_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10A334E0.h"
#include "Game/Struct_10AA3520.h"
#include "Game/cSoundStreamingManager.h"

struct Struct_10A32090;

extern void* DAT_10e50610;

class Class_10E50610
{
public:
    virtual ~Class_10E50610() { *(void**)this = (void*)&DAT_10e50610; }
};

class Class_10E5D360 : public Class_10E50610
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual void Virtual1();
    virtual int IsEqual(Class_10E5D360* Other);

    int Unknown04;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* Obj, int B, void* C, void* D);
};

extern Class_10F46DA0* DAT_10f46da0;

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10A33D30 ?FUN_10a33d30@cSoundStreamingManager@@QAEXXZ
void cSoundStreamingManager::FUN_10a33d30()
{
    if (DAT_10f46da0)
    {
        DAT_10f46da0->Virtual1(this, 0x70, DAT_10f35dec->Unknown08, (void*)-1);
        DAT_10f46da0->Virtual1(this, 0x5a, (void*)-1, (void*)-1);
        Class_10E5D360 Event(0x40507);
        DAT_10f46da0->Virtual1(this, 1, (void*)-1, &Event);
        Class_10E5D360 Event2(0x40506);
        DAT_10f46da0->Virtual1(this, 1, (void*)-1, &Event2);
        Class_10E5D360 Event3(0x405bb);
        DAT_10f46da0->Virtual1(this, 1, (void*)-1, &Event3);
        Class_10E5D360 Event4(0x406fa);
        DAT_10f46da0->Virtual1(this, 1, (void*)-1, &Event4);
        Class_10E5D360 Event5(0x406fb);
        DAT_10f46da0->Virtual1(this, 1, (void*)-1, &Event5);
    }
    FUN_10a33c60();
}
