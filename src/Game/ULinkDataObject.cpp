// Game/ULinkDataObject.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class ULinkDataObject : public UObject
{
public:
    virtual void Destroy();
    virtual void Serialize(FArchive& Ar);
    virtual ~ULinkDataObject();

    INT m_LinkFlavor;
    INT m_pAssociatedLink;
    FStringNoInit m_LinkComment;
    FStringNoInit m_name;
    FName m_GroupName;
};

// FUNCTION: 0x1099F1B0 ??1ULinkDataObject@@UAE@XZ
ULinkDataObject::~ULinkDataObject()
{
    ConditionalDestroy();
}

// FUNCTION: 0x1099F280 ??_GULinkDataObject@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x1099F1B0's definition in this unit.
