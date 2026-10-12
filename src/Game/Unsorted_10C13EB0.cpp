// Game/Unsorted_10C13EB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10F46DA0.h"

extern const char DAT_10e9864c[];

extern const char DAT_10e98680[];

extern const char DAT_10e986f8[];

extern const char DAT_10e98738[];

extern const char DAT_10e98798[];

extern const char DAT_10e987e8[];

extern const char DAT_10e98844[];

extern const char DAT_10e98880[];

extern const char DAT_10e988e4[];

extern const char DAT_10e98920[];

extern const char DAT_10e989d8[];

extern const char DAT_10e98a40[];

extern const char DAT_10e98aa0[];

extern const char DAT_10e98ad8[];

extern const char DAT_10e98b24[];

extern const char DAT_10e98b60[];

extern const char DAT_10e98bb8[];

extern const char DAT_10e98be8[];

class Class_10E5B578
{
public:
    virtual void Virtual0() = 0;
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E6DC88_Primary
{
public:
    virtual void Virtual0();

    char Unknown04[8];
};

class Class_10E6DC88 : public Class_10E6DC88_Primary, public Class_10E5B578
{
public:
    ~Class_10E6DC88();
};

class Class_10E8C210 : public Class_10E6DC88
{
public:
    ~Class_10E8C210();

    virtual void Virtual0();
};

// FUNCTION: 0x10C13EB0 ??1Class_10E8C210@@QAE@XZ
Class_10E8C210::~Class_10E8C210()
{
    DAT_10f46da0->Virtual2(this);
}

// FUNCTION: 0x10C14570 ?GetAITaggedVolumeLabel@@YA?AVcString@@XZ
cString GetAITaggedVolumeLabel()
{
    return cString(DAT_10e9864c);
}

// FUNCTION: 0x10C14590 ?GetAITaggedVolumeDescription@@YA?AVcString@@XZ
cString GetAITaggedVolumeDescription()
{
    return cString(DAT_10e98680);
}

// FUNCTION: 0x10C145B0 ?GetAIContextVolumeLabel@@YA?AVcString@@XZ
cString GetAIContextVolumeLabel()
{
    return cString(DAT_10e986f8);
}

// FUNCTION: 0x10C145D0 ?GetAIContextVolumeDescription@@YA?AVcString@@XZ
cString GetAIContextVolumeDescription()
{
    return cString(DAT_10e98738);
}

// FUNCTION: 0x10C147A0 ?GetAIPlayerDistanceLabel@@YA?AVcString@@XZ
cString GetAIPlayerDistanceLabel()
{
    return cString(DAT_10e98798);
}

// FUNCTION: 0x10C147C0 ?GetAIPlayerDistanceDescription@@YA?AVcString@@XZ
cString GetAIPlayerDistanceDescription()
{
    return cString(DAT_10e987e8);
}

// FUNCTION: 0x10C147E0 ?GetAIBehaviorStateLabel@@YA?AVcString@@XZ
cString GetAIBehaviorStateLabel()
{
    return cString(DAT_10e98844);
}

// FUNCTION: 0x10C14800 ?GetAIBehaviorStateDescription@@YA?AVcString@@XZ
cString GetAIBehaviorStateDescription()
{
    return cString(DAT_10e98880);
}

// FUNCTION: 0x10C14820 ?GetAIAlertLevelLabel@@YA?AVcString@@XZ
cString GetAIAlertLevelLabel()
{
    return cString(DAT_10e988e4);
}

// FUNCTION: 0x10C14840 ?GetAIAlertLevelDescription@@YA?AVcString@@XZ
cString GetAIAlertLevelDescription()
{
    return cString(DAT_10e98920);
}

// FUNCTION: 0x10C14860 ?GetAIDispositionLabel@@YA?AVcString@@XZ
cString GetAIDispositionLabel()
{
    return cString(DAT_10e989d8);
}

// FUNCTION: 0x10C14880 ?GetAIDispositionDescription@@YA?AVcString@@XZ
cString GetAIDispositionDescription()
{
    return cString(DAT_10e98a40);
}

// FUNCTION: 0x10C14A00 ?GetAIInferenceLabel@@YA?AVcString@@XZ
cString GetAIInferenceLabel()
{
    return cString(DAT_10e98aa0);
}

// FUNCTION: 0x10C14A20 ?GetAIInferenceDescription@@YA?AVcString@@XZ
cString GetAIInferenceDescription()
{
    return cString(DAT_10e98ad8);
}

// FUNCTION: 0x10C14A40 ?GetAIEvidenceLabel@@YA?AVcString@@XZ
cString GetAIEvidenceLabel()
{
    return cString(DAT_10e98b24);
}

// FUNCTION: 0x10C14A60 ?GetAIEvidenceDescription@@YA?AVcString@@XZ
cString GetAIEvidenceDescription()
{
    return cString(DAT_10e98b60);
}

// FUNCTION: 0x10C14A80 ?GetAILockpickingLabel@@YA?AVcString@@XZ
cString GetAILockpickingLabel()
{
    return cString(DAT_10e98bb8);
}

// FUNCTION: 0x10C14AA0 ?GetAILockpickingDescription@@YA?AVcString@@XZ
cString GetAILockpickingDescription()
{
    return cString(DAT_10e98be8);
}
