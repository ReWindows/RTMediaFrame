#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 9 member(s).
class CallStackTracing {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateNewContext@CallStackTracing@@UEAAPEAVCallStackContext@@XZ
    virtual CallStackContext * AllocateNewContext();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CallStackTracing@@QEAA@PEAVTracingFailureCache@@@Z
    CallStackTracing(TracingFailureCache *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckVersionMatch@CallStackTracing@@UEAAHK@Z
    virtual int CheckVersionMatch(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearMark@CallStackTracing@@UEAAXK@Z
    virtual void ClearMark(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueMark@CallStackTracing@@UEAAKXZ
    virtual unsigned long GetUniqueMark();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceFailure@CallStackTracing@@UEAAXPEAVCallStackContext@@PEBDJ@Z
    virtual void TraceFailure(CallStackContext *, char const *, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CallStackTracing@@QEAA@XZ
    ~CallStackTracing();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CallStackTracing@@IEAAXXZ
    void Cleanup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadRelativeContext@CallStackTracing@@IEAAAEAVCallStackContext@@XZ
    CallStackContext & GetThreadRelativeContext();
};
