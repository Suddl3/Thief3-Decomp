// Game/cConNoteEvent_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAACB0_Param.h"

extern const char DAT_10e6c100[];

class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0();

    Class_109081E0& FUN_1090a590(const char* In);

    char* Unknown00;
};

class Class_10A810F0
{
public:
    Class_10A810F0() { Unknown00.FUN_1090a590(DAT_10e6c100); }

    Class_109081E0 Unknown00;
};

class Class_10E6C104 : public Class_10A810F0
{
public:
    Class_10E6C104();

    virtual ~Class_10E6C104();
};

class cConNoteEvent : public Class_10E6C104
{
public:
    cConNoteEvent();

    virtual void Virtual1();
    virtual void ReadNote(void* Reader, int Version, int Unused);
    virtual void WriteNote(void* Writer, int Unused1, int Unused2);
    virtual int CopyFrom(Class_10AAACB0_Param* Src);

    Class_109081E0 m_Note;
};

// FUNCTION: 0x10AAAB10 ??0cConNoteEvent@@QAE@XZ
cConNoteEvent::cConNoteEvent()
{
    m_Note.FUN_1090a590(DAT_10e6c100);
}
