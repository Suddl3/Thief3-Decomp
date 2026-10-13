// Game/cConNoteEvent_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAACB0_Param.h"
#include "Game/cString.h"
#include "Game/Class_10A810F0.h"

extern const char DAT_10e6c100[];

class cConEvent : public Class_10A810F0
{
public:
    cConEvent();

    virtual ~cConEvent();
};

class cConNoteEvent : public cConEvent
{
public:
    cConNoteEvent();

    virtual void Virtual1();
    virtual void ReadNote(void* Reader, int Version, int Unused);
    virtual void WriteNote(void* Writer, int Unused1, int Unused2);
    virtual int CopyFrom(Class_10AAACB0_Param* Src);

    cString m_Note;
};

// FUNCTION: 0x10AAAB10 ??0cConNoteEvent@@QAE@XZ
cConNoteEvent::cConNoteEvent()
{
    m_Note.FUN_1090a590(DAT_10e6c100);
}
