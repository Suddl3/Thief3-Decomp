// Game/cConNoteEvent_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

void WriteString(void* Writer, int* Value);

class cConNoteEvent
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void WriteNote(void* Writer, int Unused1, int Unused2);

    char Unknown04[4];
    int m_Note;
};

// FUNCTION: 0x10AAAA40 ?WriteNote@cConNoteEvent@@UAEXPAXHH@Z
void cConNoteEvent::WriteNote(void* Writer, int Unused1, int Unused2)
{
    WriteString(Writer, &m_Note);
}
