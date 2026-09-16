#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RTMediaFrame.dll by Windissect. 53 member(s).
class SoftwareBitmapImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SoftwareBitmapImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@SoftwareBitmapImpl@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFromBuffer@SoftwareBitmapImpl@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long CopyFromBuffer(::Windows::Storage::Streams::IBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@SoftwareBitmapImpl@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@@Z
    virtual long CopyTo(::Windows::Graphics::Imaging::ISoftwareBitmap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToBuffer@SoftwareBitmapImpl@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long CopyToBuffer(::Windows::Storage::Streams::IBuffer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@SoftwareBitmapImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetData(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SoftwareBitmapImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReadOnlyView@SoftwareBitmapImpl@@UEAAJPEAPEAUISoftwareBitmap@Imaging@Graphics@Windows@@@Z
    virtual long GetReadOnlyView(::Windows::Graphics::Imaging::ISoftwareBitmap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SoftwareBitmapImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@SoftwareBitmapImpl@@UEAA?AV?$ComPtr@VSoftwareBitmapState@@@WRL@Microsoft@@XZ
    virtual WindissectOpaque GetState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SoftwareBitmapImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SoftwareBitmapImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SoftwareBitmapImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockBuffer@SoftwareBitmapImpl@@UEAAJW4BitmapBufferAccessMode@Imaging@Graphics@Windows@@PEAPEAUIBitmapBuffer@345@@Z
    virtual long LockBuffer(int, ::Windows::Graphics::Imaging::IBitmapBuffer * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SoftwareBitmapImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SoftwareBitmapImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SoftwareBitmapImpl@@QEAA@PEAUIMF2DBuffer2@@AEBU_GUID@@II_NAEBUtagRECT@@@Z
    SoftwareBitmapImpl(IMF2DBuffer2*, _GUID const &, unsigned int, unsigned int, bool, tagRECT const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SoftwareBitmapImpl@@QEAA@W4BitmapPixelFormat@Imaging@Graphics@Windows@@HH@Z
    SoftwareBitmapImpl(int, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SoftwareBitmapImpl@@QEAA@W4BitmapPixelFormat@Imaging@Graphics@Windows@@HHW4BitmapAlphaMode@234@@Z
    SoftwareBitmapImpl(int, int, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SoftwareBitmapImpl@@QEAA@AEBV0@_N@Z
    SoftwareBitmapImpl(SoftwareBitmapImpl const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitmapAlphaMode@SoftwareBitmapImpl@@UEAAJPEAW4BitmapAlphaMode@Imaging@Graphics@Windows@@@Z
    virtual long get_BitmapAlphaMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitmapPixelFormat@SoftwareBitmapImpl@@UEAAJPEAW4BitmapPixelFormat@Imaging@Graphics@Windows@@@Z
    virtual long get_BitmapPixelFormat(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DpiX@SoftwareBitmapImpl@@UEAAJPEAN@Z
    virtual long get_DpiX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DpiY@SoftwareBitmapImpl@@UEAAJPEAN@Z
    virtual long get_DpiY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnly@SoftwareBitmapImpl@@UEAAJPEAE@Z
    virtual long get_IsReadOnly(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelHeight@SoftwareBitmapImpl@@UEAAJPEAH@Z
    virtual long get_PixelHeight(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelWidth@SoftwareBitmapImpl@@UEAAJPEAH@Z
    virtual long get_PixelWidth(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DpiX@SoftwareBitmapImpl@@UEAAJN@Z
    virtual long put_DpiX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DpiY@SoftwareBitmapImpl@@UEAAJN@Z
    virtual long put_DpiY(double);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowIfClosed@SoftwareBitmapImpl@@AEBAXXZ
    void ThrowIfClosed() const;
};
