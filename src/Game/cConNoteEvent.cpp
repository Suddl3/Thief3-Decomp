// Game/cConNoteEvent.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

void FUN_10d3ddc0(void* Reader, int* Out);

class cConNoteEvent
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void ReadNote(void* Reader, int Version, int Unused);

    char Unknown04[4];
    int m_Note;
};

// FUNCTION: 0x10AAAA20 ?ReadNote@cConNoteEvent@@UAEXPAXHH@Z
void cConNoteEvent::ReadNote(void* Reader, int Version, int Unused)
{
    FUN_10d3ddc0(Reader, &m_Note);
}
