#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 3 member(s).
class TracingFailureCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceFailure@TracingFailureCache@@QEAAXPEAVCallStackContext@@PEBDJ@Z
    void TraceFailure(CallStackContext *, char const *, long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvictOldest@TracingFailureCache@@IEAAXK@Z
    void EvictOldest(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMatch@TracingFailureCache@@IEAAPEAVTracingFailureDetails@@AEAVTracingFailureHash@@AEAVCallStackContext@@PEBDJ@Z
    TracingFailureDetails * FindMatch(TracingFailureHash &, CallStackContext &, char const *, long);
};
