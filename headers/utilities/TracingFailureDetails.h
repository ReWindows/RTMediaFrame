#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 6 member(s).
class TracingFailureDetails {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareByTimeNewestFirst@TracingFailureDetails@@SAHPEBX0@Z
    static int CompareByTimeNewestFirst(void const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateHashCodeForContext@TracingFailureDetails@@SAXAEAVCallStackContext@@AEAVTracingFailureHash@@@Z
    static void GenerateHashCodeForContext(CallStackContext &, TracingFailureHash &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HashFunctionTemplate@TracingFailureDetails@@SA_NPEBDPEAD@Z
    static bool HashFunctionTemplate(char const *, char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TracingFailureDetails@@QEAAXAEAVCallStackContext@@PEBDJ@Z
    void Initialize(CallStackContext &, char const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@TracingFailureDetails@@QEAAXXZ
    void Reset();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TracingFailureDetails@@QEAA@XZ
    TracingFailureDetails();
};
