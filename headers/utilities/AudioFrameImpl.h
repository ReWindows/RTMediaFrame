#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 38 member(s).
class AudioFrameImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AudioFrameImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AudioFrameImpl@@QEAA@I@Z
    AudioFrameImpl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@AudioFrameImpl@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@AudioFrameImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetData(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AudioFrameImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AudioFrameImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AudioFrameImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AudioFrameImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AudioFrameImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockBuffer@AudioFrameImpl@@UEAAJW4AudioBufferAccessMode@Media@Windows@@PEAPEAUIAudioBuffer@34@@Z
    virtual long LockBuffer(int, ::Windows::Media::IAudioBuffer * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AudioFrameImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AudioFrameImpl@@UEAAKXZ
    virtual unsigned long Release();
};
