#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 28 member(s).
namespace MF {
class AsyncAction {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AsyncAction@MF@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncAction@MF@@QEAA@XZ
    AsyncAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AsyncAction@MF@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@AsyncAction@MF@@UEAAJXZ
    virtual long GetResults();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AsyncAction@MF@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AsyncAction@MF@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@AsyncAction@MF@@UEAAXXZ
    virtual void OnCancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@AsyncAction@MF@@UEAAXXZ
    virtual void OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStart@AsyncAction@MF@@UEAAJXZ
    virtual long OnStart();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AsyncAction@MF@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AsyncAction@MF@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@AsyncAction@MF@@UEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@Windows@@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@AsyncAction@MF@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@Windows@@@Z
    virtual long put_Completed(WindissectOpaque *);
};
} // namespace MF
