#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 6 member(s).
class CallStackContext {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CallStackContext@@QEAA@KK@Z
    CallStackContext(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearState@CallStackContext@@QEAAXXZ
    void ClearState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneFrom@CallStackContext@@QEAAXAEBV1@@Z
    void CloneFrom(CallStackContext const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CallStackContext@@QEAAXKK@Z
    void Init(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResult@CallStackContext@@QEAAXPEBDJJ@Z
    void SetResult(char const *, long, long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceFailure@CallStackContext@@AEAAXPEBDJJ@Z
    void TraceFailure(char const *, long, long);
};
