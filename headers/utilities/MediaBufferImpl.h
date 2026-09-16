#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 12 member(s).
class MediaBufferImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@MediaBufferImpl@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateReference@MediaBufferImpl@@UEAAJPEAPEAUIMemoryBufferReference@Foundation@Windows@@@Z
    virtual long CreateReference(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@MediaBufferImpl@@UEAAJPEAPEAEPEAI@Z
    virtual long Lock(unsigned char * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@MediaBufferImpl@@UEAAJXZ
    virtual long Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capacity@MediaBufferImpl@@UEAAJPEAI@Z
    virtual long get_Capacity(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Length@MediaBufferImpl@@UEAAJPEAI@Z
    virtual long get_Length(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Length@MediaBufferImpl@@UEAAJI@Z
    virtual long put_Length(unsigned int);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLength@MediaBufferImpl@@MEAAXI@Z
    virtual void SetLength(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowIfClosed@MediaBufferImpl@@IEBAXXZ
    void ThrowIfClosed() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MediaBufferImpl@@MEAA@XZ
    virtual ~MediaBufferImpl();
};
