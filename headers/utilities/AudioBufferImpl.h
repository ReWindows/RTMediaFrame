#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 44 member(s).
class AudioBufferImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AudioBufferImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AudioBufferImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AudioBufferImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AudioBufferImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AudioBufferImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AudioBufferImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capacity@AudioBufferImpl@@UEAAJPEAI@Z
    virtual long get_Capacity(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Length@AudioBufferImpl@@UEAAJPEAI@Z
    virtual long get_Length(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Length@AudioBufferImpl@@UEAAJI@Z
    virtual long put_Length(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUp@AudioBufferImpl@@EEAAXXZ
    virtual void CleanUp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLength@AudioBufferImpl@@EEAAXI@Z
    virtual void SetLength(unsigned int);
};
