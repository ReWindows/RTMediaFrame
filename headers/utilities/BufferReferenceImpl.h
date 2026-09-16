#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 31 member(s).
class BufferReferenceImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BufferReferenceImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BufferReferenceImpl@@QEAA@AEBV?$ComPtr@UIClosableByteAccess@@@WRL@Microsoft@@PEAEI@Z
    BufferReferenceImpl(WindissectOpaque const &, unsigned char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@BufferReferenceImpl@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuffer@BufferReferenceImpl@@UEAAJPEAPEAEPEAI@Z
    virtual long GetBuffer(unsigned char * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BufferReferenceImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BufferReferenceImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BufferReferenceImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BufferReferenceImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BufferReferenceImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Closed@BufferReferenceImpl@@UEAAJPEAU?$ITypedEventHandler@PEAUIMemoryBufferReference@Foundation@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Closed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capacity@BufferReferenceImpl@@UEAAJPEAI@Z
    virtual long get_Capacity(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Closed@BufferReferenceImpl@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Closed(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUp@BufferReferenceImpl@@IEAAXXZ
    void CleanUp();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BufferReferenceImpl@@MEAA@XZ
    virtual ~BufferReferenceImpl();
};
