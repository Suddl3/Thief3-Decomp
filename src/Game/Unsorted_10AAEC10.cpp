// Game/Unsorted_10AAEC10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern "C" void* memset(void* Dest, int Value, unsigned int Count);

struct GUID
{
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
};

struct DIDEVICEINSTANCEA;

struct DIDEVICEOBJECTINSTANCEA;

struct DIDEVCAPS
{
    unsigned long dwSize;
    unsigned long dwFlags;
    unsigned long dwDevType;
    unsigned long dwAxes;
    unsigned long dwButtons;
    unsigned long dwPOVs;
    unsigned long dwFFSamplePeriod;
    unsigned long dwFFMinTimeResolution;
    unsigned long dwFirmwareRevision;
    unsigned long dwHardwareRevision;
    unsigned long dwFFDriverVersion;
};

class IDirectInputDevice8A;

class IDirectInput8A
{
public:
    virtual long __stdcall Virtual0();
    virtual long __stdcall Virtual1();
    virtual long __stdcall Virtual2();
    virtual long __stdcall CreateDevice(const GUID& Guid, IDirectInputDevice8A** Device, void* Outer);
    virtual long __stdcall EnumDevices(unsigned long DevType, int (__stdcall* Callback)(const DIDEVICEINSTANCEA*, void*), void* Ref, unsigned long Flags);
};

class IDirectInputDevice8A
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
    virtual int __stdcall GetCapabilities(DIDEVCAPS* Caps);
    virtual int __stdcall EnumObjects(int (__stdcall* Callback)(const DIDEVICEOBJECTINSTANCEA*, void*), void* Ref, unsigned long Flags);
    virtual int __stdcall Virtual5();
    virtual int __stdcall Virtual6();
    virtual int __stdcall Virtual7();
    virtual int __stdcall Virtual8();
    virtual int __stdcall Virtual9();
    virtual int __stdcall Virtual10();
    virtual int __stdcall SetDataFormat(const void* Format);
    virtual int __stdcall Virtual12();
    virtual int __stdcall SetCooperativeLevel(int Window, unsigned long Flags);
};

extern const char* DAT_10f3a250;

extern IDirectInput8A* DAT_10f3a36c;

extern IDirectInputDevice8A* DAT_10f3a368;

extern int DAT_10f3a370;

extern const char DAT_10e47660[];

extern char DAT_10eb810c[];

int __stdcall FUN_10aae2a0(const DIDEVICEINSTANCEA* Instance, void* Ref);

int __stdcall FUN_10aaf1b0(const DIDEVICEOBJECTINSTANCEA* Object, void* Ref);

class Class_10AAF250
{
public:
    void FUN_10aaf250(const char** Name);

    char Unknown00[0x811];
    bool Unknown811;
    bool Unknown812;
};

// FUNCTION: 0x10AAF250 ?FUN_10aaf250@Class_10AAF250@@QAEXPAPBD@Z
void Class_10AAF250::FUN_10aaf250(const char** Name)
{
    const char* Text = *Name;
    if (!Text)
        Text = DAT_10e47660;
    DAT_10f3a250 = Text;
    DAT_10f3a36c->EnumDevices(4, FUN_10aae2a0, 0, 1);
    if (DAT_10f3a368)
    {
        if (DAT_10f3a368->SetDataFormat(DAT_10eb810c) >= 0)
        {
            if (DAT_10f3a368->SetCooperativeLevel(DAT_10f3a370, 5) >= 0)
            {
                DIDEVCAPS Caps;
                memset(&Caps, 0, sizeof(Caps));
                Caps.dwSize = sizeof(Caps);
                if (DAT_10f3a368->GetCapabilities(&Caps) >= 0)
                {
                    if (Caps.dwFlags & 2)
                        Unknown811 = true;
                    if (Caps.dwFlags & 0x100)
                    {
                        Unknown812 = true;
                        DAT_10f3a368->EnumObjects(FUN_10aaf1b0, 0, 0);
                    }
                }
            }
        }
    }
}
