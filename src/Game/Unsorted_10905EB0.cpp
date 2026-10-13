// Game/Unsorted_10905EB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern "C" int tolower(int C);

// FUNCTION: 0x10905EB0 ?FUN_10905eb0@@YAXPADH@Z
void FUN_10905eb0(char* Name, int Length)
{
    char* Out = Name;
    char* Cursor = Name + Length;
    while (Cursor > Name)
    {
        char C = *Cursor;
        if (C == '\\' || C == '/' || C == ':')
            break;
        Cursor--;
    }
    if (Cursor != Name)
    {
        do
        {
            char* Next = Cursor + 1;
            Cursor = Cursor + 1;
            *Out = *Next;
            Out = Out + 1;
        } while (*Cursor != 0);
    }
    while (*Name != 0)
    {
        *Name = (char)tolower(*Name);
        Name = Name + 1;
    }
}
