#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 59 member(s).
class MF {
public:
    class AsyncAction;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OriginateError@MF@@YAJJ@Z
    long OriginateError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowIfFailed@MF@@YAXJ@Z
    void ThrowIfFailed(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowIfFalse@MF@@YAX_NJ@Z
    void ThrowIfFalse(bool, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowOriginateError@MF@@YAXJ@Z
    void ThrowOriginateError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowOriginateErrorIfTrue@MF@@YAX_NJ@Z
    void ThrowOriginateErrorIfTrue(bool, long);
};
