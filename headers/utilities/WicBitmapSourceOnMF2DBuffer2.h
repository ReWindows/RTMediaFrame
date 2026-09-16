#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 9 member(s).
class WicBitmapSourceOnMF2DBuffer2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPalette@WicBitmapSourceOnMF2DBuffer2@@UEAAJPEAUIWICPalette@@@Z
    virtual long CopyPalette(IWICPalette *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@WicBitmapSourceOnMF2DBuffer2@@UEAAJPEBUWICRect@@IIPEAE@Z
    virtual long CopyPixels(WICRect const *, unsigned int, unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@WicBitmapSourceOnMF2DBuffer2@@UEAAJPEAU_GUID@@@Z
    virtual long GetPixelFormat(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolution@WicBitmapSourceOnMF2DBuffer2@@UEAAJPEAN0@Z
    virtual long GetResolution(double *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@WicBitmapSourceOnMF2DBuffer2@@UEAAJPEAI0@Z
    virtual long GetSize(unsigned int *, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WicBitmapSourceOnMF2DBuffer2@@QEAA@PEAUIMF2DBuffer2@@AEBU_GUID@@W4BitmapAlphaMode@Imaging@Graphics@Windows@@II@Z
    WicBitmapSourceOnMF2DBuffer2(IMF2DBuffer2*, _GUID const &, int, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WicBitmapSourceOnMF2DBuffer2@@UEAA@XZ
    virtual ~WicBitmapSourceOnMF2DBuffer2();
};
