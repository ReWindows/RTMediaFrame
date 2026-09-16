#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 16 member(s).
class SoftwareBitmapState {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDpiX@SoftwareBitmapState@@QEBANXZ
    double GetDpiX() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDpiY@SoftwareBitmapState@@QEBANXZ
    double GetDpiY() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockBitmap@SoftwareBitmapState@@QEAAXW4BitmapBufferAccessMode@Imaging@Graphics@Windows@@PEAPEAEPEAIPEAH@Z
    void LockBitmap(int, unsigned char * *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDpiX@SoftwareBitmapState@@QEAAXN@Z
    void SetDpiX(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDpiY@SoftwareBitmapState@@QEAAXN@Z
    void SetDpiY(double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SoftwareBitmapState@@QEAA@AEBV?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@AEBUtagRECT@@@Z
    SoftwareBitmapState(WindissectOpaque const &, tagRECT const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SoftwareBitmapState@@QEAA@AEBV?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@Z
    SoftwareBitmapState(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SoftwareBitmapState@@QEAA@AEBV?$ComPtr@UIMF2DBuffer2@@@WRL@Microsoft@@AEBU_GUID@@HHAEBUtagRECT@@@Z
    SoftwareBitmapState(WindissectOpaque const &, _GUID const &, int, int, tagRECT const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SoftwareBitmapState@@QEAA@W4BitmapPixelFormat@Imaging@Graphics@Windows@@HH@Z
    SoftwareBitmapState(int, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SoftwareBitmapState@@QEAA@W4BitmapPixelFormat@Imaging@Graphics@Windows@@HHW4BitmapAlphaMode@234@@Z
    SoftwareBitmapState(int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockBitmap@SoftwareBitmapState@@QEAAXW4BitmapBufferAccessMode@Imaging@Graphics@Windows@@@Z
    void UnlockBitmap(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateBuffer@SoftwareBitmapState@@AEAAXXZ
    void AllocateBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateState@SoftwareBitmapState@@AEAAXXZ
    void ValidateState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SoftwareBitmapState@@EEAA@XZ
    virtual ~SoftwareBitmapState();
};
